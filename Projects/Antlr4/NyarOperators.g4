lexer grammar NyarOperators;

/*
 // Brackets Pair
 LPAREN: '(' {self.BracketLevel(1);};
 RPAREN: ')' {self.BracketLevel(-1);};
 LBRACE: '{' {self.BracketLevel(1);};
 RBRACE: '}' {self.BracketLevel(-1);};
 LBRACKET: '['
 {self.BracketLevel(1);};
 RBRACKET: ']' {self.BracketLevel(-1);};
 LANGLE: '\u2329'
 {self.BracketLevel(1);}; // 〈
 RANGLE: '\u232A' {self.BracketLevel(-1);}; // 〉
 LFLOOR: '\u230A'
 {self.BracketLevel(1);}; // ⌊
 RFLOOR: '\u230B' {self.BracketLevel(-1);}; // ⌋ 
 LCEILING:
 '\u2308'
 {self.BracketLevel(1);}; // ⌈
 RCEILING: '\u2309' {self.BracketLevel(-1);}; // ⌉
 //《 》
 */

// Angle Brackets
Output: '>>>';
RightShift: '>>';
Grater: '>';
Import: '<<<';
LeftShift: '<<';
Less: '<';

/* Remark
 Comment %%% defined in Keywords
 String " defined in Keywords
*/

Plus3: '+++';
Plus2: '++';
Add: '+';
Minus3: '---';
Minus2: '--';
Subtract: '-';
BlankNullSequence: '***';
BlankSequence: '**';
Times: '*'; //Times
Multiply: '\u00d7';
Div: '//';
Divide: '\u00f7'; //Division symbol (obelus)
NumberedOutput: '%%';
Mod: '%';
Caret3: '^^^';
BaseInput: '^^';
Power: '^';


//Lambda
SlotSequence: '##';
Slot: '#';

//Equal Sign
Equivalent: '===';
Equal: '==';
Set: '=';

// Repeating Operators
Bar3: '|||';
Bar2: '||';
Bar: '|';
Colon3: ':::';
Colon2: '::';
Colon: ':';
Quote3: '```';
Quote2: '``';
Quote: '`';


At3: '@@@';
At2: '@@';
At: '@';
Bang3: '!!!';
Bang2: '!!';
Bang: '!';

/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */

// Single Operators
Dot: '.';
Comma: ',';
Quotation: '\'';

// Set Operators
SetConstant: '=<';
DelayedSet: ':=';
UpSet: '^=';
SetAddTo: '+=';
SetMinusFrom: '-=';
AssignmentOperator:
	Set
	| SetConstant
	| DelayedSet
	| UpSet
	| SetAddTo
	| SetMinusFrom;

//Logic Operators
NotEqual: '!=' | '\u2260'; //Unicode ≠
NotEquivalent: '=!=';

// Apply
Map: '/@';

To: '->' | '→'; //→
Infer: '=>';

Link: '<>';
Linka: '<->';
Linki: '<=>';