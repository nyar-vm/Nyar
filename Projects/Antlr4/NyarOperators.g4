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
LAngle : '\u27E8'; //U+027E8 ⟨
RAngle  : '\u27E9'; //U+027E9 ⟩

// Angle Brackets
Import     : '<<<' | '\u22D8'; // U+22D8 ⋘
Export     : '>>>' | '\u22D9'; // U+22D9 ⋙
LeftShift  : '<<' | '\u226A'; // U+226A ≪
RightShift : '>>' | '\u226B'; // U+226B ≫
Less       : '<';
Grater     : '>';

/*  Remark
    Comment %%% defined in Keywords
    String " defined in Keywords
*/

// Six Basic Arithmetic
Plus3        : '+++';
Increase     : '++';
Add          : '+';
//Unknow1      : '\u2295'; //U+2295 ⊕
Minus3       : '---';
Decrease     : '--';
Subtract     : '-';
//Unknow2      : '\u2296'; //U+2296 ⊖
NullSequence : '***';
Sequence     : '**';
Times        : '*';
Remainder    : '//';
Divide       : '/';
//Unknow4      : '\u2298'; //U+2298 ⊘
Quotient     : '\u00F7'; //U+00F7 ÷
Output       : '%%';
Mod          : '%';
BaseInput    : '^^';
Power        : '^';
Root         : '\u221A'; //U+221A √

//Logic Operators
Equivalent    : '===';
Equal         : '==';
Set           : '=';
NotEqual      : '!=' | '\u2260'; //U+2260 ≠
NotEquivalent : '=!=';
GraterEqual   : '>=';
LessEqual     : '<=';
Bar3          : '|||';
Bar2          : '||';
Bar           : '|';
// ∧(2227) & && ∨(2228) ∩(2229) ∪(222A)

//Lambda
SlotSequence      : '##';
Slot              : '#';
PostfixFunction   : '$$';
AnonymousFunction : '$';
Curry             : '@@@';
Apply             : '@@';
At                : '@';

// Other Repeating Operators
Type     : '::' | '\u2237'; //U+2237 ∷
Colon    : ':';
Accuracy : '``';
Quote    : '`';
Bang2    : '!!';
Bang     : '!';

// Single Operators
Dot       : '.';
Comma     : ',';
Quotation : '\'';

// Set Operators
SetConstant   : '=<';
DelayedSet    : ':=' | '\u2254'; //U+2254 ≔
SetAddTo      : '+=';
SetMinusFrom  : '-=';
SetTimesTo    : '*=';
SetDivideFrom : '/=';
SetModTo      : '%=';
SetPowerTo    : '^=';
Clean         : '=.';

Map    : '/@';
MapAll : '//@';

// Arrow Symbol
To      : '->' | '\u2192'; //U+2192 →
Infer   : '=>' | '\u27F9'; //U+27F9 ⟹
Concat  : '<>';
Unknow5 : '<->';
Unknow6 : '<=>' | '\u27FA'; //U+27FA ⟺

// Linear algebra
//LinearPlus     : '|+';
//LinearSubtract : '|-';
//LinearTimes    : '|*';
//LinearDivide   : '|/';
//LinearMod      : '|%';
//LinearPower    : '|^';
Multiply       : '\u00D7'; // U+00D7 ×
Kronecker      : '\u2297'; // U+2297 ⊗
TensorProduct  : '\u2299'; // U+2299 ⊙

// $antlr-format alignColons hanging
AssignmentOperator
    : Set
    | SetConstant
    | DelayedSet
    | SetAddTo
    | SetMinusFrom;
BinaryOperator: LeftShift | RightShift;
LogicOperator
    : Equal
    | NotEqual
    | Equivalent
    | NotEquivalent
    | Grater
    | GraterEqual
    | Less
    | LessEqual;
PowerLike: Power | Root;
MultiplyLike: Multiply | Divide | Times | Kronecker;
AddLike: Add | Subtract;
ListOperator: Concat;