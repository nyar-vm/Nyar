lexer grammar NyarOperators;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons hanging;
Add_ops: Plus | Minus;
Bit_ops: LeftShift | RightShift;
Logic_ops
    : Equal
    | NotEqual
    | Equivalent
    | NotEquivalent
    | Grater
    | GraterEqual
    | Less
    | LessEqual;
Pow_ops: Power | Surd;
Mul_ops: Divide | Times | Multiply | Kronecker | TensorProduct;
List_ops: Concat;
Pre_ops: Plus | Minus | Not;

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
LQuote : '\u2018' | '\u201C'; //U+2018 ‘ U+201C “
RQuote : '\u2019' | '\u201D'; //U+2019 ’ U+201D ”

// Angle Brackets
Import            : '<<<' | '\u22D8'; //U+22D8 
LeftShift         : '<<' | '\u226A'; //U+226A ≪
LessEqual         : '<=';
Less              : '<';
Export            : '>>>' | '\u22D9'; //U+22D9 ⋙
RightShift        : '>>' | '\u226B'; //U+226B ≫
GraterEqual       : '>=';
Grater            : '>';
Increase          : '++';
PlusTo            : '+=';
Plus              : '+';
Decrease          : '--';
MinusFrom         : '-=';
To                : '->' | '\u2192'; //U+2192 →
Minus             : '-';
NullSequence      : '***';
Sequence          : '**';
Times             : '*';
Remainder         : '//';
Divide            : '/';
Degree            : '\u00B0'; //U+00B0 °
Quotient          : '\u00F7'; //U+00F7 ÷
Comment           : '%%%';
Output            : '%%';
Mod               : '%';
BaseInput         : '^^';
Power             : '^';
Surd              : '\u221A'; //U+221A √
Equivalent        : '===';
NotEquivalent     : '=!=';
Equal             : '==';
Infer             : '=>' | '\u27F9'; //U+27F9 ⟹
Assign            : '=';
Bar2              : '||' | '\u2016'; //U+2016 ‖
Bar               : '|'; // ∧(2227) & && ∨(2228) ∩(2229) ∪(222A)
DelayedAssign     : ':=' | '\u2254'; //U+2254 ≔
Shebang           : '#!';
PostfixFunction   : '$$';
AnonymousFunction : '$';
Curry             : '@@@';
Apply             : '@@';
LetAssign         : '@=';
At                : '@';
Type              : '::' | '\u2237'; //U+2237 ∷
Colon             : ':';
Semicolon         : ';';
Quote             : '`';
Acute             : '\u00B4'; // U+00B4 ´
NotEqual          : '!=' | '\u2260'; //U+2260 ≠
Not               : '!' | '\u00AC'; //U+00AC ¬
Ellipsis          : '...';
FinalAssign       : '.=';
Dot               : '.';
Comma             : ',';
Quotation         : '\'';
Map               : '/@';
MapAll            : '//@';
Concat            : '~~';
Destruct          : '~=';
Tilde             : '~';
Multiply          : '\u00D7'; //U+00D7 ×
Kronecker         : '\u2297'; //U+2297 ⊗
TensorProduct     : '\u2299'; //U+2299 ⊙
Section           : '\u00A7'; //U+00A7 §
Pilcrow           : '\u00B6'; //U+00B6 ¶
Currency          : '\u00A4'; //U+00A4 ¤
