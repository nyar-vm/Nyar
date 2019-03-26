
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  NyarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, STRING = 2, INTEGER = 3, REAL = 4, WhiteSpace = 5, NewLine = 6, 
    Comment = 7, Using = 8, Exposing = 9, With = 10, As = 11, Macro = 12, 
    MacroApply = 13, Template = 14, TemplayeApply = 15, Interface = 16, 
    Class = 17, Extends = 18, Mixin = 19, Setter = 20, Getter = 21, Public = 22, 
    Private = 23, Protected = 24, Final = 25, Try = 26, Catch = 27, For = 28, 
    In = 29, Pi = 30, E = 31, I = 32, EulerGamma = 33, Plank = 34, Reciprocal = 35, 
    Derivative = 36, IntegerField = 37, RealField = 38, ComplexField = 39, 
    SYMBOL = 40, Math = 41, LS = 42, RS = 43, LM = 44, RM = 45, LL = 46, 
    RL = 47, LCeil = 48, RCeil = 49, LFloor = 50, RFloor = 51, LAngle = 52, 
    RAngle = 53, Import = 54, Export = 55, LeftShift = 56, RightShift = 57, 
    Less = 58, Grater = 59, Plus3 = 60, Increase = 61, Add = 62, Minus3 = 63, 
    Decrease = 64, Subtract = 65, NullSequence = 66, Sequence = 67, Times = 68, 
    Remainder = 69, Divide = 70, Quotient = 71, Output = 72, Mod = 73, BaseInput = 74, 
    Power = 75, Root = 76, Equivalent = 77, Equal = 78, Set = 79, NotEqual = 80, 
    NotEquivalent = 81, GraterEqual = 82, LessEqual = 83, Bar3 = 84, Bar2 = 85, 
    Bar = 86, SlotSequence = 87, Slot = 88, PostfixFunction = 89, AnonymousFunction = 90, 
    Curry = 91, Apply = 92, At = 93, Type = 94, Colon = 95, Quote = 96, 
    Bang = 97, Dot = 98, Comma = 99, Quotation = 100, SetConstant = 101, 
    DelayedSet = 102, SetAddTo = 103, SetMinusFrom = 104, SetTimesTo = 105, 
    SetDivideFrom = 106, SetModTo = 107, SetPowerTo = 108, Clean = 109, 
    Map = 110, MapAll = 111, To = 112, Infer = 113, Concat = 114, Unknow5 = 115, 
    Unknow6 = 116, Multiply = 117, Kronecker = 118, TensorProduct = 119, 
    AssignmentOperator = 120, BinaryOperator = 121, LogicOperator = 122, 
    PowerLike = 123, MultiplyLike = 124, AddLike = 125, ListOperator = 126
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

