
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  NyarLexer : public antlr4::Lexer {
public:
  enum {
    LineComment = 1, PartComment = 2, WhiteSpace = 3, NewLine = 4, Using = 5, 
    Expose = 6, As = 7, With = 8, Macro = 9, End = 10, Template = 11, Interface = 12, 
    Enumerate = 13, Structure = 14, Class = 15, Extend = 16, Implement = 17, 
    Setter = 18, Getter = 19, Public = 20, Private = 21, Protect = 22, Final = 23, 
    Let = 24, Type = 25, If = 26, Then = 27, Else = 28, Match = 29, Switch = 30, 
    Case = 31, For = 32, In = 33, Try = 34, Catch = 35, While = 36, Do = 37, 
    True = 38, False = 39, BOOL = 40, STRING = 41, Identifier = 42, NUMBER = 43, 
    Float = 44, Integer = 45, LS = 46, RS = 47, LM = 48, RM = 49, LL = 50, 
    RL = 51, LCeil = 52, RCeil = 53, LFloor = 54, RFloor = 55, LAngle = 56, 
    RAngle = 57, LQuote = 58, RQuote = 59, Import = 60, LeftShift = 61, 
    LessEqual = 62, Less = 63, Export = 64, RightShift = 65, GraterEqual = 66, 
    Grater = 67, Increase = 68, PlusTo = 69, Plus = 70, LogicXor = 71, Decrease = 72, 
    MinusFrom = 73, To = 74, Minus = 75, NullSequence = 76, Sequence = 77, 
    Times = 78, Multiply = 79, Kronecker = 80, TensorProduct = 81, MapAll = 82, 
    Remainder = 83, Map = 84, Divide = 85, Quotient = 86, Comment = 87, 
    Output = 88, Mod = 89, BaseInput = 90, Power = 91, Surd = 92, Equivalent = 93, 
    NotEquivalent = 94, Equal = 95, Infer = 96, Assign = 97, Concat = 98, 
    Destruct = 99, Tilde = 100, LogicOr = 101, BitOr = 102, LogicAnd = 103, 
    BitAnd = 104, DoubleBang = 105, NotEqual = 106, BitNot = 107, LogicNot = 108, 
    Shebang = 109, PostfixFunction = 110, Curry = 111, Apply = 112, LetAssign = 113, 
    At = 114, TypeAnnotation = 115, DelayedAssign = 116, Colon = 117, Semicolon = 118, 
    Quote = 119, Acute = 120, DoubleQuotation = 121, Quotation = 122, Underline = 123, 
    Ellipsis = 124, FinalAssign = 125, DOT = 126, Dot = 127, COMMA = 128, 
    Reciprocal = 129, Degree = 130, Transpose = 131, Hermitian = 132, FieldComplex = 133, 
    FieldReal = 134, FieldUnsigned = 135, FieldBool = 136, FieldInteger = 137, 
    FieldString = 138, Section = 139, Pilcrow = 140, Currency = 141, Element = 142
  };

  NyarLexer(antlr4::CharStream *input);
  ~NyarLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

