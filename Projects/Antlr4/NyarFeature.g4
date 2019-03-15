lexer grammar NyarFeature;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons hanging;
MathConstant: Pi | E | I | EulerGamma | Plank;
// $antlr-format alignColons trailing;

//∩(2229) ∪(222A) U+2016 ‖
Unknow2      : '\u2296'; //U+2296 ⊖
Unknow3      : '\u2298'; //U+2298 ⊘
Unknow4      : '<->'; //↔
Unknow5      : '<=>' | '\u27FA'; //U+27FA ⟺ ⇔
SlotSequence : '##';
Slot         : '#';

/* Math Constant */
Pi         : '\u213C'; //U+213C ℼ
E          : '\u2147'; //U+2147 ⅇ
I          : '\u2148'; //U+2148 ⅈ
EulerGamma : '\u213D'; //U+213D ℽ
Plank      : '\u210E'; //U+210E ℎ
Derivative : '\u2146'; //U+2146 ⅆ

Hermitian : '\u22B9'; //U+22B9 ⊹
//U+02030 ‰ \perthousand Per Mille Sign U+02031 ‱ \pertenthousand Per Ten Thousand Sign
/*
 U+000AF ¯ \highminus
 U+02135 ℵ \aleph
 U+02116 № \numero Numero Sign /
 Numero
 U+02261 ≡ \equiv Identical To
 U+02262 ≢ \nequiv Not Identical To
 U+02263 ≣ \Equiv
 Strictly Equivalent To
 U+02264 ≤ \le Less-Than Or Equal To / Less Than Or Equal To
 U+02265 ≥ \ge
 Greater-Than Or Equal To / Greater Than Or Equal To
 U+02266 ≦ \leqq Less-Than Over Equal To /
 Less
 Than Over Equal To
 U+02267 ≧ \geqq Greater-Than Over Equal To / Greater Than Over Equal To
 */



