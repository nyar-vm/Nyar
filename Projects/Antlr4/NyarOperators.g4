lexer grammar NyarOperators;
// $antlr-format useTab false ;reflowComments false;
// $antlr-format alignColons trailing;

// Brackets Pair
LS : '(';
RS : ')';
LM : '[';
RM : ']';
LL : '{';
RL : '}';

/*
 LANGLE: '\u2329'
 {self.BracketLevel(1);}; // 〈
 RANGLE: '\u232A'
 {self.BracketLevel(-1);}; // 〉
 LFLOOR: '\u230A'
 {self.BracketLevel(1);}; // ⌊
 RFLOOR: '\u230B'
 {self.BracketLevel(-1);}; // ⌋ 
 LCEILING:
 '\u2308'
 {self.BracketLevel(1);}; // ⌈
 RCEILING:
 '\u2309' {self.BracketLevel(-1);};
 // ⌉
 //《 》
 */

// Angle Brackets
Export     : '>>>';
RightShift : '>>';
Grater     : '>';
Import     : '<<<';
LeftShift  : '<<';
Less       : '<';

/* Remark
 Comment %%% defined in Keywords
 String " defined in Keywords
 */

// Six Basic Arithmetic
Plus3        : '+++';
Increase     : '++';
Add          : '+';
Unknow1      : '\u2295'; // U+2295=⊕
Minus3       : '---';
Decrease     : '--';
Subtract     : '-';
Unknow2      : '\u2296'; // U+2296=⊖
NullSequence : '***';
Sequence     : '**';
Times        : '*';
Multiply     : '\u00D7'; // U+00D7=×
Kronecker    : '\u2297'; // U+2297=⊗
Unknow3      : '\u2299'; // U+2299=⊙
Remainder    : '//';
Divide       : '/';
Unknow4      : '\u2298'; // U+2298=⊘
Quotient     : '\u00F7'; // U+00F7=÷
Output       : '%%';
Mod          : '%';
BaseInput    : '^^';
Power        : '^';
Root         : '\u221A'; // U+221A=√

//Logic Operators
Equivalent    : '===';
Equal         : '==';
Set           : '=';
NotEqual      : '!=' | '\u2260'; // U+2260=≠
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
Type     : '::';
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
SetConstant  : '=<';
DelayedSet   : ':=';
UpSet        : '^=';
SetAddTo     : '+=';
SetMinusFrom : '-=';

Map    : '/@';
MapAll : '//@';

// Arrow Symbol
To      : '->' | '\u2192'; // U+2192=→
Infer   : '=>' | '\u27F9'; // U+27F9=⟹
Concat  : '<>';
Unknow5 : '<->';
Unknow6 : '<=>' | '\u27FA'; // U+27FA=⟺

// Linear algebra

// $antlr-format alignColons hanging
AssignmentOperator
    : Set
    | SetConstant
    | DelayedSet
    | UpSet
    | SetAddTo
    | SetMinusFrom;
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
BinaryOperator: LeftShift | RightShift;