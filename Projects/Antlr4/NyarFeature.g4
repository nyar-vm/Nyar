lexer grammar NyarFeature;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons hanging;
MathConstant
    : Pi
    | E
    | I
    | EulerGamma
    | Plank
    | Reciprocal
    | IntegerField
    | RealField
    | ComplexField;
// $antlr-format alignColons trailing;

Unknow1      : '\u2295'; //U+2295 ⊕
Unknow2      : '\u2296'; //U+2296 ⊖
Unknow3      : '\u2298'; //U+2298 ⊘
Unknow4      : '<->';
Unknow5      : '<=>' | '\u27FA'; //U+27FA ⟺
SlotSequence : '##';
Slot         : '#';

/* Math Constant */
Pi           : '\u213C'; //U+213C ℼ
E            : '\u2147'; //U+2147 ⅇ
I            : '\u2148'; //U+2148 ⅈ
EulerGamma   : '\u213D'; //U+213D ℽ
Plank        : '\u210E'; //U+210E ℎ
Reciprocal   : '\u215F'; //U+215F ⅟
Derivative   : '\u2146'; //U+2146 ⅆ
IntegerField : '\u2124'; //U+2124 ℤ
RealField    : '\u211D'; //U+211D ℝ
ComplexField : '\u2102'; //U+2102 ℂ
