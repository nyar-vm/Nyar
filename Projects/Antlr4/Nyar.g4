grammar Nyar;
import NyarLexers;

prog: stat+;

stat: exprStat | assignStat;

exprStat: expression SEMI;

assignStat: ID '=' expression SEMI;

expression:
	expression op = (MUL | DIV) expression		# MulDivExpr
	| expression op = (ADD | SUB) expression	# AddSubExpr
	| Integer									# IntegerExpression
	| ID										# IdExpr
	| LPAREN expression RPAREN					# ParenExpr;

MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
LPAREN: '(';
RPAREN: ')';

ID: LETTER (LETTER | DIGIT)*;

SEMI: ';';


fragment LETTER: [a-zA-Z];
fragment DIGIT: [0-9];