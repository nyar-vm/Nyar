
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  NyarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, Assign_ops = 3, Lazy_assign = 4, Assign_mods = 5, 
    LineComment = 6, PartComment = 7, WhiteSpace = 8, NewLine = 9, Using = 10, 
    Expose = 11, With = 12, As = 13, Macro = 14, Template = 15, Interface = 16, 
    Class = 17, Extends = 18, Mixin = 19, Setter = 20, Getter = 21, Public = 22, 
    Private = 23, Protected = 24, Final = 25, Let = 26, True = 27, False = 28, 
    If = 29, Else = 30, Try = 31, Catch = 32, For = 33, In = 34, BOOL = 35, 
    NUMBER = 36, STRING = 37, SYMBOL = 38, Integer = 39, Float = 40, Add_ops = 41, 
    Bit_ops = 42, Logic_ops = 43, Pow_ops = 44, Mul_ops = 45, List_ops = 46, 
    Pre_ops = 47, LS = 48, RS = 49, LM = 50, RM = 51, LL = 52, RL = 53, 
    LCeil = 54, RCeil = 55, LFloor = 56, RFloor = 57, LAngle = 58, RAngle = 59, 
    LQuote = 60, RQuote = 61, Import = 62, LeftShift = 63, LessEqual = 64, 
    Less = 65, Export = 66, RightShift = 67, GraterEqual = 68, Grater = 69, 
    Increase = 70, PlusTo = 71, Plus = 72, Decrease = 73, MinusFrom = 74, 
    To = 75, Minus = 76, NullSequence = 77, Sequence = 78, Times = 79, Remainder = 80, 
    Divide = 81, Degree = 82, Quotient = 83, Comment = 84, Output = 85, 
    Mod = 86, BaseInput = 87, Power = 88, Surd = 89, Equivalent = 90, NotEquivalent = 91, 
    Equal = 92, Infer = 93, Assign = 94, Bar2 = 95, Bar = 96, DelayedAssign = 97, 
    Shebang = 98, PostfixFunction = 99, AnonymousFunction = 100, Curry = 101, 
    Apply = 102, LetAssign = 103, At = 104, Type = 105, Colon = 106, Semicolon = 107, 
    Quote = 108, Acute = 109, NotEqual = 110, Not = 111, Ellipsis = 112, 
    FinalAssign = 113, Dot = 114, Comma = 115, Quotation = 116, Map = 117, 
    MapAll = 118, Concat = 119, Destruct = 120, Tilde = 121, Multiply = 122, 
    Kronecker = 123, TensorProduct = 124, Section = 125, Pilcrow = 126, 
    Currency = 127
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

