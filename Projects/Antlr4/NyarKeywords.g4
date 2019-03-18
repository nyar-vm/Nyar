lexer grammar NyarKeywords;
// $antlr-format useTab false; reflowComments false;
// $antlr-format alignColons trailing;
STRING  : '"' .*? '"';
INTEGER : [0-9]+;
REAL    : ('0' .. '9')+ ('.' ('0' .. '9')+)?;

WhiteSpace : [\n\t\r]+ -> channel(HIDDEN);
NewLine    : ('\r'? '\n' | '\r')+ -> channel(HIDDEN);
Comment    : '%%%' .*? '%%%' -> channel(HIDDEN);

/* Module */
Using    : 'Using';
Exposing : 'Exposing';
With     : 'With';
As       : 'As';

/* Macro */
Macro : 'Macro';

/* Template */
Template : 'Template';

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
    : [:a-zA-Z]
    | '_'
    | '$'
    | '\u2070' ..'\u218F'
    | '\u2C00' ..'\u2FEF'
    | '\u3001' ..'\uD7FF'
    | '\uF900' ..'\uFDCF'
    | '\uFDF0' ..'\uFFFD';
