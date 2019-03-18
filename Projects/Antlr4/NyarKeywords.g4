lexer grammar NyarKeywords;

String: '"' .*? '"';
WhiteSpace: [\t]+ -> channel(HIDDEN);
NewLine: ('\r' '\n'? | '\n') -> channel(HIDDEN);
Comment: '%%%' .*? '%%%' -> channel(HIDDEN);

Integer: [0-9]+;

/* Module */
Using: 'Using';
Exposing: 'Exposing';
With: 'With';
As: 'As';

/* Macro */
Macro: 'Macro';

/* Template */
Template: 'Template';

/* Class */
Interface: 'Interface';
Class: 'Class';
Extends: 'Extends';
Mixin: 'Mixin';
Setter: 'Setter';
Getter: 'Getter';
Public: 'Public';
Private: 'Private';
Protected: 'Protected';
Final: 'Final';

/* Loop */
Try: 'Try';
Catch: 'Catch';
For: 'For';
In: 'In';

Symbol: NameStartCharacter NameCharacter*;
fragment DIGIT: [0-9];
fragment LETTER: [a-zA-Z];
fragment NameCharacter:
	NameStartCharacter
	| '_'
	| DIGIT
	| '\u00B7'
	| '\u0300' ..'\u036F'
	| '\u203F' ..'\u2040';
fragment NameStartCharacter:
	[:a-zA-Z]
	| '_'
	| '$'
	| '\u2070' ..'\u218F'
	| '\u2C00' ..'\u2FEF'
	| '\u3001' ..'\uD7FF'
	| '\uF900' ..'\uFDCF'
	| '\uFDF0' ..'\uFFFD';