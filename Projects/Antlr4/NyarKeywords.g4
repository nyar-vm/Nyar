lexer grammar NyarKeywords;
// $antlr-format useTab false; reflowComments false;
// $antlr-format alignColons trailing;
STRING  : '"' .*? '"';
INTEGER : DIGIT+;
REAL    : DIGIT+ ('.' DIGIT+)?;

WhiteSpace : [\n\t\r]+ -> channel(HIDDEN);
NewLine    : ('\r'? '\n' | '\r')+ -> channel(HIDDEN);
Comment    : '%%%' .*? '%%%' -> channel(HIDDEN);

/* Module */
Using    : 'Using';
Exposing : 'Exposing';
With     : 'With';
As       : 'As';

/* Macro */
Macro      : 'Macro';
MacroApply : '\u00A7'; // U+00A7 §

/* Template */
Template      : 'Template';
TemplayeApply : '\u00B6'; // U+00B6 ¶

/* Class */
Interface : 'Interface';
Class     : 'Class';
Extends   : 'Extends';
Mixin     : 'Mixin';
Setter    : 'Setter';
Getter    : 'Getter';
Public    : 'Public';
Private   : 'Private';
Protected : 'Protected';
Final     : 'Final';

/* Loop */
Try   : 'Try';
Catch : 'Catch';
For   : 'For';
In    : 'In';

// $antlr-format alignColons hanging;
SYMBOL: NameStartCharacter NameCharacter*;
fragment DIGIT: [0-9];
fragment LETTER: [a-zA-Z];
fragment NameCharacter
    : NameStartCharacter
    | DIGIT
    | '\u00B7'
    | '\u0300' ..'\u036F'
    | '\u203F' ..'\u2040';
fragment NameStartCharacter
    : [:a-zA-Z] // Letter
    | '_'
    | '\u2070' ..'\u218F'
    | '\u2C00' ..'\u2FEF'
    | '\u3001' ..'\uD7FF'
    | '\uF900' ..'\uFDCF'
    | '\uFDF0' ..'\uFFFD';
// May Allow # $ % with special meaning English + Chinese + Japanese + Greeks