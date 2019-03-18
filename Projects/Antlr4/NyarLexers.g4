grammar NyarLexers;
import NyarKeywords, NyarOperators;
// $antlr-format useTab false;
// $antlr-format alignColons hanging
expression // High computing priority in the front
    : left = expression op = LogicOperator right = expression             # Logic_
    | <assoc = right> left = expression op = PowerLike right = expression # Power_
    | left = expression op = MultiplyLike right = expression              # Multiply_Divide_
    | left = expression op = AddLike right = expression                   # Add_Subtract_
    | left = expression op = BinaryOperator right = expression            # Binary_
    | atom = STRING                                                       # String
    | atom = REAL                                                         # Real
    | atom = INTEGER                                                      # Integer
    | atom = SYMBOL                                                       # Symbol
    | LS expression RS                                                    # PriorityOperation;

// $antlr-format alignColons trailing;
list     : LM (expression Comma?)* RM;
record   : LL (keyValue Comma?)* RL;
keyValue : key = SYMBOL Colon value = expression;
