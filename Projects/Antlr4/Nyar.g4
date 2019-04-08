grammar Nyar;
import NyarKeywords,NyarOperators;
// $antlr-format useTab false ;reflowComments false; 
// $antlr-format alignColons hanging;
program: statement* EOF;
statement
    : emptyStatement
    | blockStatement
    | expressionStatement
    | assignStatement
    | ifStatement
    | tryStatement;
/*====================================================================================================================*/
blockStatement: LL statement+? RL;
expr_block: blockStatement | expression;
/*====================================================================================================================*/
emptyStatement: eos;
eos: Semicolon;
/*====================================================================================================================*/
expressionStatement: expression (Comma expression)* eos?;
expression // High computing priority in the front
    : LS op = Pre_ops right = expression   RS                                 # PrefixExpression
    | left = expression op = Bit_ops right = expression                  # Binary_Like
    | left = expression op = Logic_ops right = expression                # Logic_Like
    | <assoc = right> left = expression op = Pow_ops right = expression  # Power_Like
    | left = expression op = Mul_ops right = expression                  # Multiply_Like
    | left = expression op = Add_ops right = expression                  # Plus_Like
    | left = expression op = List_ops right = expression                 # List_Like
    | <assoc = right> id = assignTuple op = Assign_ops expr = assignable # OperatorAssign
    | data = tupleLiteral                                                # Tuple
    | data = listLiteral                                                 # List
    | data = dictLiteral                                                 # Dict
    | atom = STRING                                                      # String
    | atom = NUMBER                                                      # Number
    | atom = SYMBOL                                                      # Symbol
    | LS expression RS                                                   # PriorityExpression;
/*====================================================================================================================*/
Assign_ops
    : Assign
    | PlusTo
    | MinusFrom
    | LetAssign
    | FinalAssign;
Lazy_assign: DelayedAssign;
Assign_mods: Let | Final;
assignable: (expression | blockStatement);
assignStatement
    : op = Assign_mods id = assignTuple expr = assignable eos? # ModifierAssign;
assignTuple
    : (SYMBOL | LS (assignPass (Comma assignPass)*)? Comma? RS);
assignPass: Tilde | SYMBOL;
/*====================================================================================================================*/
moduleStatement
    : Using core = SYMBOL
    | Using source = STRING As name = SYMBOL
    | Using source = STRING With name = SYMBOL
    | Expose source = STRING;
macroStatement: Macro expression ';';
templateStatement: Template expression ';';
interfaceStatement: Interface expression ';';
classStatement: Class expression ';';
/*====================================================================================================================*/
ifStatement: If condition elseif (Else expr_block)? eos?;
elseif: (Else If condition)*;
condition: LS? expression expr_block RS?;
/*====================================================================================================================*/
tryStatement //TODO: USE expr_block
    : Try blockStatement finalProduction
    | Try blockStatement (catchProduction finalProduction?);
catchProduction: Catch LS? SYMBOL RS? blockStatement;
finalProduction: Final blockStatement;
/*====================================================================================================================*/
// $antlr-format alignColons trailing;
tupleLiteral : LS (single (Comma single)*)? Comma? RS;
single       : (STRING | NUMBER | BOOL);
dictLiteral  : LL (keyvalue (Comma keyvalue)*)? Comma? RL;
keyvalue     : (NUMBER|STRING | SYMBOL ) Colon element;
listLiteral  : LM (element (Comma? element)*)? Comma? RM;
element      : (expression | dictLiteral | listLiteral);
signedInteger: (Plus|Minus)? Integer ;
//FIXME: replace NUMBER with signedInteger
/*====================================================================================================================*/
LineComment : Shebang ~[\r\n]* -> channel(HIDDEN);
PartComment : Comment .*? Comment -> channel(HIDDEN);
WhiteSpace  : [\t\r\n \u000C]+ -> skip;
NewLine     : ('\r'? '\n' | '\r')+ -> skip;
