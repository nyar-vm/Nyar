grammar Nyar;
import NyarLexers;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons hanging;
program: statement* EOF;

statement
    : expressionStatement
    | moduleStatement
    | assignStatement
    | macroStatement
    | templateStatement
    | interfaceStatement
    | classStatement;

expressionStatement: expression ';';

moduleStatement
    : Using core = SYMBOL
    | Using source = STRING As name = SYMBOL
    | Using source = STRING With name = SYMBOL
    | Exposing source = STRING;

assignStatement: SYMBOL AssignmentOperator expression ';';

macroStatement: Macro expression ';';

templateStatement: Template expression ';';

interfaceStatement: Interface expression ';';

classStatement: Class expression ';';
