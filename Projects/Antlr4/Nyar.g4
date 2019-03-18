grammar Nyar;
import NyarLexers;

program: statement? EOF;

statement:
	expressionStatement
	| assignStatement
	| macroStatement
	| templateStatement
	| interfaceStatement
	| classStatement;

expressionStatement: expression ';';
assignStatement: Symbol AssignmentOperator expression ';';
macroStatement: Macro expression ';';
templateStatement: Template expression ';';
interfaceStatement: Interface expression ';';
classStatement: Class expression ';';

