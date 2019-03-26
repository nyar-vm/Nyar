
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  NyarParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleExpressionStatement = 2, RuleModuleStatement = 3, 
    RuleAssignStatement = 4, RuleMacroStatement = 5, RuleTemplateStatement = 6, 
    RuleInterfaceStatement = 7, RuleClassStatement = 8, RuleExpression = 9, 
    RuleList = 10, RuleRecord = 11, RuleKeyValue = 12, RuleMathAlias = 13
  };

  NyarParser(antlr4::TokenStream *input);
  ~NyarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class ExpressionStatementContext;
  class ModuleStatementContext;
  class AssignStatementContext;
  class MacroStatementContext;
  class TemplateStatementContext;
  class InterfaceStatementContext;
  class ClassStatementContext;
  class ExpressionContext;
  class ListContext;
  class RecordContext;
  class KeyValueContext;
  class MathAliasContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    ModuleStatementContext *moduleStatement();
    AssignStatementContext *assignStatement();
    MacroStatementContext *macroStatement();
    TemplateStatementContext *templateStatement();
    InterfaceStatementContext *interfaceStatement();
    ClassStatementContext *classStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  ModuleStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *core = nullptr;;
    antlr4::Token *source = nullptr;;
    antlr4::Token *name = nullptr;;
    ModuleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *SYMBOL();
    antlr4::tree::TerminalNode *As();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Exposing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleStatementContext* moduleStatement();

  class  AssignStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYMBOL();
    antlr4::tree::TerminalNode *AssignmentOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStatementContext* assignStatement();

  class  MacroStatementContext : public antlr4::ParserRuleContext {
  public:
    MacroStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Macro();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MacroStatementContext* macroStatement();

  class  TemplateStatementContext : public antlr4::ParserRuleContext {
  public:
    TemplateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateStatementContext* templateStatement();

  class  InterfaceStatementContext : public antlr4::ParserRuleContext {
  public:
    InterfaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceStatementContext* interfaceStatement();

  class  ClassStatementContext : public antlr4::ParserRuleContext {
  public:
    ClassStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassStatementContext* classStatement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntegerContext : public ExpressionContext {
  public:
    IntegerContext(ExpressionContext *ctx);

    antlr4::Token *atom = nullptr;
    antlr4::tree::TerminalNode *INTEGER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Multiply_Divide_Context : public ExpressionContext {
  public:
    Multiply_Divide_Context(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MultiplyLike();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  List_Context : public ExpressionContext {
  public:
    List_Context(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ListOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SymbolContext : public ExpressionContext {
  public:
    SymbolContext(ExpressionContext *ctx);

    antlr4::Token *atom = nullptr;
    antlr4::tree::TerminalNode *SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RealContext : public ExpressionContext {
  public:
    RealContext(ExpressionContext *ctx);

    antlr4::Token *atom = nullptr;
    antlr4::tree::TerminalNode *REAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Binary_Context : public ExpressionContext {
  public:
    Binary_Context(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BinaryOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringContext : public ExpressionContext {
  public:
    StringContext(ExpressionContext *ctx);

    antlr4::Token *atom = nullptr;
    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logic_Context : public ExpressionContext {
  public:
    Logic_Context(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LogicOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Power_Context : public ExpressionContext {
  public:
    Power_Context(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PowerLike();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PriorityOperationContext : public ExpressionContext {
  public:
    PriorityOperationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Add_Subtract_Context : public ExpressionContext {
  public:
    Add_Subtract_Context(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AddLike();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LM();
    antlr4::tree::TerminalNode *RM();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListContext* list();

  class  RecordContext : public antlr4::ParserRuleContext {
  public:
    RecordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *RL();
    std::vector<KeyValueContext *> keyValue();
    KeyValueContext* keyValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordContext* record();

  class  KeyValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *key = nullptr;;
    NyarParser::ExpressionContext *value = nullptr;;
    KeyValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *SYMBOL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyValueContext* keyValue();

  class  MathAliasContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *alias = nullptr;;
    MathAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Math();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathAliasContext* mathAlias();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

