lexer grammar NyarOperators;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons trailing;
// Brackets Pair
LS     : '(';
RS     : ')';
LM     : '[';
RM     : ']';
LL     : '{';
RL     : '}';
LCeil  : '\u2308'; //U+02308 ⌈
RCeil  : '\u2309'; //U+02309 ⌉
LFloor : '\u230A'; //U+0230A ⌊
RFloor : '\u230B'; //U+0230B ⌋
LAngle : '<|' | '\u27E8'; //U+027E8 ⟨
RAngle : '|>' | '\u27E9'; //U+027E9 ⟩
LQuote : '\u201C'; //U+2018 ‘ U+201C “
RQuote : '\u201D'; //U+2019 ’ U+201D ”

/* <> */
Import      : '<<<' | '\u22D8'; //U+22D8 ⋘
LeftShift   : '<<' | '\u226A'; //U+226A ≪
LessEqual   : '<=';
Less        : '<';
Export      : '>>>' | '\u22D9'; //U+22D9 ⋙
RightShift  : '>>' | '\u226B'; //U+226B ≫
GraterEqual : '>=';
Grater      : '>';

/* +-÷ */
Increase      : '++';
PlusTo        : '+=';
Plus          : '+';
LogicXor      : '\u2295'; //U+2295 ⊕
Decrease      : '--';
MinusFrom     : '-=';
To            : '->' | '\u2192'; //U+2192 →
Minus         : '-';
NullSequence  : '***';
Sequence      : '**';
Times         : '*';
Multiply      : '\u00D7'; //U+00D7 ×
Kronecker     : '\u2297'; //U+2297 ⊗
TensorProduct : '\u2299'; //U+2299 ⊙
MapAll        : '//@';
Remainder     : '//';
Map           : '/@';
Divide        : '/';
Quotient      : '\u00F7'; //U+00F7 ÷
Comment       : '%%%';
Output        : '%%';
Mod           : '%';

/* ^√ */
BaseInput : '^^';
Power     : '^';
Surd      : '\u221A'; //U+221A √

/* =~ */
Equivalent    : '===';
NotEquivalent : '=!=';
Equal         : '=='; //≡
Infer         : '=>' | '\u27F9'; //U+27F9 ⟹
Assign        : '=';
Concat        : '~~';
Destruct      : '~=';
Tilde         : '~';

/* |&! */
LogicOr    : '||' | '\u2227'; //U+2227 ∧
BitOr      : '|';
LogicAnd   : '&&' | '\u2228'; //U+2228 ∨
BitAnd     : '&';
DoubleBang : '!!';
NotEqual   : '!=' | '\u2260'; //U+2260 ≠
BitNot     : '!' | '\uFF01'; //U+FF01 ！
LogicNot   : DoubleBang | '\u00AC'; //U+00AC ¬
Shebang    : '#!';

/* $ @ */
PostfixFunction : '$';
Curry           : '@@@';
Apply           : '@@';
LetAssign       : '@=';
At              : '@';

/* :; */
TypeAnnotation : '::' | '\u2237'; //U+2237 ∷
DelayedAssign  : ':=' | '\u2254'; //U+2254 ≔
Colon          : ':' | '\uFF1A'; //U+FF1A ：
Semicolon      : ';' | '\uFF1B'; //U+FF1B ；

/* upper */
Quote           : '`';
Acute           : '\u00B4'; // U+00B4 ´
DoubleQuotation : '"';
Quotation       : '\'';

/* lower */
Underline   : '_';
Ellipsis    : '...'; //…
FinalAssign : '.=' | '\u2250'; //U+2250 ≐
DOT         : '.' | '\u3002'; //U+3002 。
Dot         : '\u22C5'; //U+22C5 ⋅
COMMA       : ',' | '\uFF0C'; //U+FF0C ，

/* Prefix */
Reciprocal : '\u215F'; //U+215F ⅟

/* Postfix */
Degree    : '\u00B0'; //U+00B0 °
Transpose : '\u1D40'; //U+1D40 ᵀ
Hermitian : '\u1D34'; //U+1D34 ᴴ

/* TypeLiteral */
FieldComplex  : '\u2102'; //U+2102 ℂ
FieldReal     : '\u211D'; //U+211D ℝ
FieldUnsigned : '\u2124'; //U+2124 ℤ
FieldBool     : '\u{1D539}'; // U+1D539 𝔹
FieldInteger  : '\u{1D540}'; // U+1D540 𝕀
FieldString   : '\u{1D54A}'; // U+1D54A 𝕊

/* Other */
Section  : '\u00A7'; //U+00A7 §
Pilcrow  : '\u00B6'; //U+00B6 ¶
Currency : '\u00A4'; //U+00A4 ¤
Element  : '\u2208'; //U+2208 ∈
