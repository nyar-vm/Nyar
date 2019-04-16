lexer grammar NyarKeywords;
import NyarOperators;
// $antlr-format useTab false; reflowComments false;
// $antlr-format alignColons trailing;
/* 
 UCP: Unicode Character Property 
 See :http://www.unicode.org/Public/UNIDATA/Scripts.txt
 */
fragment Digit             : [0-9];
fragment OctalDigit        : [0-7];
fragment HexDigit          : [0-9a-fA-F];
fragment Letter            : [a-zA-Z];
fragment UnicodeWhiteSpace : [\p{White_Space}];
fragment SimpleString      : DoubleQuotation .*? DoubleQuotation;
fragment EmojiCharacter    : [\p{Emoji}];
fragment NameStartCharacter: (
        Underline
        | [\p{Latin}]
        | [\p{Han}]
        | [\p{Hiragana}]
        | [\p{Katakana}]
        | [\p{Greek}]
    );
fragment NameCharacter : NameStartCharacter | Digit;

/* Module */
Using  : 'using';
Expose : 'expose';
As     : 'as';

/* Scope */
With : 'with';

/* Macro */
Macro : 'macro';
End: 'end';

/* Template */
Template : 'template';

/* Class */
Interface : 'interface';
Enumerate : 'enumerate';
Structure : 'structure';
Class     : 'class';
Extend    : 'extend';
Implement : 'implement';

/* Access Control */
Setter  : 'setter';
Getter  : 'getter';
Public  : 'public';
Private : 'private';
Protect : 'protect';
Final   : 'final';

/* Function */
Let  : 'let';
Type : 'type';

/* Condition */
If     : 'if';
Then   : 'then';
Else   : 'else';
Match  : 'match';
Switch : 'switch';
Case   : 'case';

/* Loop */
For   : 'for';
In    : 'in';
Try   : 'try';
Catch : 'catch';
While : 'while';
Do    : 'do';

/* Constant */
True  : 'true';
False : 'false';

BOOL       : True | False;
STRING     : SimpleString;
Identifier : NameStartCharacter NameCharacter*;
NUMBER     : Integer | Float;
Float      : Digit+ Dot Digit* | Dot Digit+;
Integer    : Digit+;
//UNICODE_ID : [\p{General_Category=Other_Letter}]*; May Allow # $ % with special meaning English +
// Chinese + Japanese + Greeks