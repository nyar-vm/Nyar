
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  NyarParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleBlockStatement = 2, RuleExpr_block = 3, 
    RuleEmptyStatement = 4, RuleEos = 5, RuleEol = 6, RuleExpressionStatement = 7, 
    RuleExpression = 8, RuleAssignable = 9, RuleAssignStatement = 10, RuleAssignTuple = 11, 
    RuleAssignPass = 12, RuleModuleStatement = 13, RuleMacroStatement = 14, 
    RuleTemplateStatement = 15, RuleInterfaceStatement = 16, RuleClassStatement = 17, 
    RuleIfStatement = 18, RuleElseif = 19, RuleCondition = 20, RuleTryStatement = 21, 
    RuleCatchProduction = 22, RuleFinalProduction = 23, RuleTupleLiteral = 24, 
    RuleSingle = 25, RuleDictLiteral = 26, RuleKeyvalue = 27, RuleListLiteral = 28, 
    RuleElement = 29, RuleSignedInteger = 30
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
  class BlockStatementContext;
  class Expr_blockContext;
  class EmptyStatementContext;
  class EosContext;
  class EolContext;
  class ExpressionStatementContext;
  class ExpressionContext;
  class AssignableContext;
  class AssignStatementContext;
  class AssignTupleContext;
  class AssignPassContext;
  class ModuleStatementContext;
  class MacroStatementContext;
  class TemplateStatementContext;
  class InterfaceStatementContext;
  class ClassStatementContext;
  class IfStatementContext;
  class ElseifContext;
  class ConditionContext;
  class TryStatementContext;
  class CatchProductionContext;
  class FinalProductionContext;
  class TupleLiteralContext;
  class SingleContext;
  class DictLiteralContext;
  class KeyvalueContext;
  class ListLiteralContext;
  class ElementContext;
  class SignedIntegerContext; 

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
    EmptyStatementContext *emptyStatement();
    BlockStatementContext *blockStatement();
    ExpressionStatementContext *expressionStatement();
    AssignStatementContext *assignStatement();
    IfStatementContext *ifStatement();
    TryStatementContext *tryStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *RL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  Expr_blockContext : public antlr4::ParserRuleContext {
  public:
    Expr_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_blockContext* expr_block();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EosContext* eos();

  class  EolContext : public antlr4::ParserRuleContext {
  public:
    EolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EolContext* eol();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PriorityExpressionContext : public ExpressionContext {
  public:
    PriorityExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *LS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RS();
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

  class  Plus_LikeContext : public ExpressionContext {
  public:
    Plus_LikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Add_ops();
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

  class  List_LikeContext : public ExpressionContext {
  public:
    List_LikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *List_ops();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberContext : public ExpressionContext {
  public:
    NumberContext(ExpressionContext *ctx);

    antlr4::Token *atom = nullptr;
    antlr4::tree::TerminalNode *NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperatorAssignContext : public ExpressionContext {
  public:
    OperatorAssignContext(ExpressionContext *ctx);

    NyarParser::AssignTupleContext *id = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::AssignableContext *expr = nullptr;
    AssignTupleContext *assignTuple();
    antlr4::tree::TerminalNode *Assign_ops();
    AssignableContext *assignable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DictContext : public ExpressionContext {
  public:
    DictContext(ExpressionContext *ctx);

    NyarParser::DictLiteralContext *data = nullptr;
    DictLiteralContext *dictLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrefixExpressionContext : public ExpressionContext {
  public:
    PrefixExpressionContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *Pre_ops();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logic_LikeContext : public ExpressionContext {
  public:
    Logic_LikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Logic_ops();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Power_LikeContext : public ExpressionContext {
  public:
    Power_LikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Pow_ops();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Multiply_LikeContext : public ExpressionContext {
  public:
    Multiply_LikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Mul_ops();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ListContext : public ExpressionContext {
  public:
    ListContext(ExpressionContext *ctx);

    NyarParser::ListLiteralContext *data = nullptr;
    ListLiteralContext *listLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Binary_LikeContext : public ExpressionContext {
  public:
    Binary_LikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Bit_ops();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TupleContext : public ExpressionContext {
  public:
    TupleContext(ExpressionContext *ctx);

    NyarParser::TupleLiteralContext *data = nullptr;
    TupleLiteralContext *tupleLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  AssignableContext : public antlr4::ParserRuleContext {
  public:
    AssignableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlockStatementContext *blockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignableContext* assignable();

  class  AssignStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignStatementContext() = default;
    void copyFrom(AssignStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ModifierAssignContext : public AssignStatementContext {
  public:
    ModifierAssignContext(AssignStatementContext *ctx);

    antlr4::Token *op = nullptr;
    NyarParser::AssignTupleContext *id = nullptr;
    NyarParser::AssignableContext *expr = nullptr;
    antlr4::tree::TerminalNode *Assign_mods();
    AssignTupleContext *assignTuple();
    AssignableContext *assignable();
    EosContext *eos();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignStatementContext* assignStatement();

  class  AssignTupleContext : public antlr4::ParserRuleContext {
  public:
    AssignTupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYMBOL();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    std::vector<AssignPassContext *> assignPass();
    AssignPassContext* assignPass(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignTupleContext* assignTuple();

  class  AssignPassContext : public antlr4::ParserRuleContext {
  public:
    AssignPassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignPassContext* assignPass();

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
    antlr4::tree::TerminalNode *Expose();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleStatementContext* moduleStatement();

  class  MacroStatementContext : public antlr4::ParserRuleContext {
  public:
    MacroStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Macro();
    ExpressionContext *expression();
    EosContext *eos();

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
    EolContext *eol();

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
    EolContext *eol();

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
    EolContext *eol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassStatementContext* classStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();
    ElseifContext *elseif();
    antlr4::tree::TerminalNode *Else();
    Expr_blockContext *expr_block();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseifContext : public antlr4::ParserRuleContext {
  public:
    ElseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Else();
    antlr4::tree::TerminalNode* Else(size_t i);
    std::vector<antlr4::tree::TerminalNode *> If();
    antlr4::tree::TerminalNode* If(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseifContext* elseif();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Expr_blockContext *expr_block();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    BlockStatementContext *blockStatement();
    FinalProductionContext *finalProduction();
    CatchProductionContext *catchProduction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryStatementContext* tryStatement();

  class  CatchProductionContext : public antlr4::ParserRuleContext {
  public:
    CatchProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *SYMBOL();
    BlockStatementContext *blockStatement();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatchProductionContext* catchProduction();

  class  FinalProductionContext : public antlr4::ParserRuleContext {
  public:
    FinalProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();
    BlockStatementContext *blockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinalProductionContext* finalProduction();

  class  TupleLiteralContext : public antlr4::ParserRuleContext {
  public:
    TupleLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    std::vector<SingleContext *> single();
    SingleContext* single(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleLiteralContext* tupleLiteral();

  class  SingleContext : public antlr4::ParserRuleContext {
  public:
    SingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *BOOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleContext* single();

  class  DictLiteralContext : public antlr4::ParserRuleContext {
  public:
    DictLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *RL();
    std::vector<KeyvalueContext *> keyvalue();
    KeyvalueContext* keyvalue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DictLiteralContext* dictLiteral();

  class  KeyvalueContext : public antlr4::ParserRuleContext {
  public:
    KeyvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    ElementContext *element();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyvalueContext* keyvalue();

  class  ListLiteralContext : public antlr4::ParserRuleContext {
  public:
    ListLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LM();
    antlr4::tree::TerminalNode *RM();
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListLiteralContext* listLiteral();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DictLiteralContext *dictLiteral();
    ListLiteralContext *listLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementContext* element();

  class  SignedIntegerContext : public antlr4::ParserRuleContext {
  public:
    SignedIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedIntegerContext* signedInteger();


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

