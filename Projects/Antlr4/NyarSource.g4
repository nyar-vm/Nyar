grammar NyarSource;
import NyarKeywords, NyarOperators;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons hanging;
program: statement* EOF;
statement
    : empty_statement
    | block_statement eos?
    | expression_statement eos?
    | assign_statement eos?
    | branch_statement eos?
    | try_statement eos?
    | module_statement eos?
    | class_statement eos?
    | loop_statement eos?;
/*====================================================================================================================*/
block_statement
    : LL statement+ RL     # BlockStatement
    | Colon statement+ End # BlockStatement;
expr_or_block: (block_statement | expression);
/*====================================================================================================================*/
empty_statement: eos # EmptyStatement;
eos: Semicolon;
symbol: Identifier (DOT Identifier)*;
global: Section Identifier (DOT Identifier)*;
/*====================================================================================================================*/
expression_statement
    : expression (COMMA expression)* # ExpressionStatement;
type_statement
    : left = Identifier TypeAnnotation right = expression # TypeAssign
    | Type left = Identifier right = expression           # TypeAssign;
function_apply: symbol LS function_params? RS;
function_params: expression (COMMA expression)*;
// High computing priority in the front
expression
    : type_statement                                                    # TypeStatement
    | function_apply                                                    # FunctionApply
    | op = pre_ops right = expression                                   # PrefixExpression
    | left = expression op = pst_ops                                    # PostfixExpression
    | left = expression op = DOT right = expression                     # MethodApply
    | left = expression op = bit_ops right = expression                 # BinaryLike
    | left = expression op = cpr_ops right = expression                 # LogicLike
    | left = expression op = cpr_ops right = expression                 # CompareLike
    | <assoc = right> left = expression op = pow_ops right = expression # PowerLike
    | left = expression op = mul_ops right = expression                 # MultiplyLike
    | left = expression op = add_ops right = expression                 # PlusLike
    | left = expression op = list_ops right = expression                # ListLike
    | id = function_apply op = DelayedAssign expr = assignable          # LazyAssign
    | <assoc = right> id = assign_lhs op = assign_ops expr = assignable # OperatorAssign
    | data = listLiteral                                                # List
    | left = expression data = indexLiteral                             # Index
    | data = dictLiteral                                                # Dict
    | atom = STRING                                                     # String
    | atom = NUMBER                                                     # Number
    | atom = symbol                                                     # SymbolExpression
    | LS expression RS                                                  # PriorityExpression;
add_ops: Plus | Minus; //@Inline
pre_ops
    : Plus
    | Minus
    | BitNot
    | LogicNot
    | Reciprocal
    | Increase; //@Inline
pst_ops: Increase;
bit_ops: LeftShift | RightShift; //@Inline
lgk_ops: LogicAnd | LogicNot | LogicOr | LogicXor; //@Inline
cpr_ops
    : Equal
    | NotEqual
    | Equivalent
    | NotEquivalent
    | Grater
    | GraterEqual
    | Less
    | LessEqual
    | LogicAnd
    | LogicOr; //@Inline
pow_ops: Power | Surd; //@Inline
mul_ops
    : Divide
    | Times
    | Multiply
    | Kronecker
    | TensorProduct; //@Inline
list_ops: Concat | LeftShift | RightShift; //@Inline
/*====================================================================================================================*/
assign_statement
    : op = assign_modifier id = assign_lhs expr = assignable # AssignStatement;
assignable: (expression | LL statement+ RL);
assign_lhs
    : Identifier                                       # AssignValue
    | Identifier (DOT Identifier)+                     # AssignAttribute
    | Identifier LS Identifier RS                      # AssignFunction
    | LS (assign_pass (COMMA assign_pass)*)? COMMA? RS # AssignPair
    | Identifier LM Integer RM                         # AssignWithList;
assign_pass: Tilde | symbol;
assign_ops
    : Assign
    | PlusTo
    | MinusFrom
    | LetAssign
    | FinalAssign; //@Inline
assign_modifier: Let | Final; //@Inline
/*====================================================================================================================*/
module_statement
    : Using module = symbol module_controller?      # ModuleInclude
    | Using module = symbol As alias = Identifier   # ModuleAlias
    | Using source = symbol With? name = Identifier # ModuleSymbol
    | Using source = symbol With? id_tuples         # ModuleSymbols
    | Using dictLiteral                             # ModuleResolve;
id_tuples: LL Identifier (COMMA Identifier)* RL;
module_controller: Times | Power; //@Inline
//TODO: Support Nested Using Statement
/*====================================================================================================================*/
class_statement
    : Class id = Identifier class_implement? class_define               # ClassBase
    | Class id = Identifier class_fathers class_implement? class_define # ClassWithFather;
class_fathers
    : Extend father = symbol          # ClassFather
    | LS father = symbol RS           # ClassFather
    | LS (symbol (COMMA symbol)+)? RS # ClassFathers;
class_implement: (Implement | Colon) symbol # ClassImplement;
class_define: LL expression RL # ClassDefine;
/*====================================================================================================================*/
interface_Statement: Interface expression eos;
/*====================================================================================================================*/
template_Statement: Template expression eos;
/*====================================================================================================================*/
macro_Statement: Macro expression eos;
/*====================================================================================================================*/

/*====================================================================================================================*/
branch_statement
    : If condition_statement expr_or_block if_else?            # IfSingle
    | If condition_statement expr_or_block if_elseif* if_else? # IfNested
    | Switch condition_statement expr_or_block                 # SwitchStatement
    | Match condition_statement expr_or_block                  # MatchStatement;
condition_statement: LS? expression RS? # ConditionStatement;
if_else: Else expr_or_block # ElseStatement;
if_elseif
    : Else If condition_statement Then? expr_or_block # ElseIfStatement;
/*====================================================================================================================*/
try_statement
    : Try block_statement finalProduction
    | Try block_statement (catchProduction finalProduction?);
catchProduction: Catch LS? symbol RS? block_statement;
finalProduction: Final block_statement;
//TODO: USE expr_block
/*====================================================================================================================*/
loop_statement
    : For LS for_inline1 RS expr_or_block        # ForLoop
    | For Identifier In expression expr_or_block # ForInLoop
    | While condition_statement expr_or_block    # WhileLoop
    | Do expr_or_block                           # DoLoop;
for_inline1
    : initial = expression COMMA condition = expression COMMA increment = expression; //@Inline
/*====================================================================================================================*/
// $antlr-format alignColons trailing;
dictLiteral   : LL (keyvalue (COMMA keyvalue)*)? COMMA? RL;
keyvalue      : key = key_valid Colon value = element;
key_valid     : (NUMBER | STRING | symbol);
listLiteral   : LM (element (COMMA? element)*)? COMMA? RM;
element       : (expression | dictLiteral | listLiteral);
indexLiteral  : LM index_valid (COMMA? index_valid)+? RM;
index_valid   : (symbol | Integer) Colon?;
signedInteger : (Plus | Minus)? Integer;
//FIXME: replace NUMBER with signedInteger
/*====================================================================================================================*/
LineComment : Shebang ~[\r\n]* -> channel(HIDDEN);
PartComment : Comment .*? Comment -> channel(HIDDEN);
WhiteSpace  : UnicodeWhiteSpace+ -> skip;
NewLine     : ('\r'? '\n' | '\r')+ -> skip;
