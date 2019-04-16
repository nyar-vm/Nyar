
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  NyarParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleBlock_statement = 2, RuleExpr_or_block = 3, 
    RuleEmpty_statement = 4, RuleEos = 5, RuleSymbol = 6, RuleGlobal = 7, 
    RuleExpression_statement = 8, RuleType_statement = 9, RuleFunction_apply = 10, 
    RuleFunction_params = 11, RuleExpression = 12, RulePst_ops = 13, RuleAssign_statement = 14, 
    RuleAssignable = 15, RuleAssign_lhs = 16, RuleAssign_pass = 17, RuleModule_statement = 18, 
    RuleId_tuples = 19, RuleClass_statement = 20, RuleClass_fathers = 21, 
    RuleClass_implement = 22, RuleClass_define = 23, RuleInterface_Statement = 24, 
    RuleTemplate_Statement = 25, RuleMacro_Statement = 26, RuleBranch_statement = 27, 
    RuleCondition_statement = 28, RuleIf_else = 29, RuleIf_elseif = 30, 
    RuleTry_statement = 31, RuleCatchProduction = 32, RuleFinalProduction = 33, 
    RuleLoop_statement = 34, RuleDictLiteral = 35, RuleKeyvalue = 36, RuleKey_valid = 37, 
    RuleListLiteral = 38, RuleElement = 39, RuleIndexLiteral = 40, RuleIndex_valid = 41, 
    RuleSignedInteger = 42
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
  class Block_statementContext;
  class Expr_or_blockContext;
  class Empty_statementContext;
  class EosContext;
  class SymbolContext;
  class GlobalContext;
  class Expression_statementContext;
  class Type_statementContext;
  class Function_applyContext;
  class Function_paramsContext;
  class ExpressionContext;
  class Pst_opsContext;
  class Assign_statementContext;
  class AssignableContext;
  class Assign_lhsContext;
  class Assign_passContext;
  class Module_statementContext;
  class Id_tuplesContext;
  class Class_statementContext;
  class Class_fathersContext;
  class Class_implementContext;
  class Class_defineContext;
  class Interface_StatementContext;
  class Template_StatementContext;
  class Macro_StatementContext;
  class Branch_statementContext;
  class Condition_statementContext;
  class If_elseContext;
  class If_elseifContext;
  class Try_statementContext;
  class CatchProductionContext;
  class FinalProductionContext;
  class Loop_statementContext;
  class DictLiteralContext;
  class KeyvalueContext;
  class Key_validContext;
  class ListLiteralContext;
  class ElementContext;
  class IndexLiteralContext;
  class Index_validContext;
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
    Empty_statementContext *empty_statement();
    Block_statementContext *block_statement();
    EosContext *eos();
    Expression_statementContext *expression_statement();
    Assign_statementContext *assign_statement();
    Branch_statementContext *branch_statement();
    Try_statementContext *try_statement();
    Module_statementContext *module_statement();
    Class_statementContext *class_statement();
    Loop_statementContext *loop_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Block_statementContext : public antlr4::ParserRuleContext {
  public:
    Block_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Block_statementContext() = default;
    void copyFrom(Block_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlockStatementContext : public Block_statementContext {
  public:
    BlockStatementContext(Block_statementContext *ctx);

    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *RL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *End();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Block_statementContext* block_statement();

  class  Expr_or_blockContext : public antlr4::ParserRuleContext {
  public:
    Expr_or_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_statementContext *block_statement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_or_blockContext* expr_or_block();

  class  Empty_statementContext : public antlr4::ParserRuleContext {
  public:
    Empty_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Empty_statementContext() = default;
    void copyFrom(Empty_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EmptyStatementContext : public Empty_statementContext {
  public:
    EmptyStatementContext(Empty_statementContext *ctx);

    EosContext *eos();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Empty_statementContext* empty_statement();

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

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolContext* symbol();

  class  GlobalContext : public antlr4::ParserRuleContext {
  public:
    GlobalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Section();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalContext* global();

  class  Expression_statementContext : public antlr4::ParserRuleContext {
  public:
    Expression_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Expression_statementContext() = default;
    void copyFrom(Expression_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpressionStatementContext : public Expression_statementContext {
  public:
    ExpressionStatementContext(Expression_statementContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Expression_statementContext* expression_statement();

  class  Type_statementContext : public antlr4::ParserRuleContext {
  public:
    Type_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Type_statementContext() = default;
    void copyFrom(Type_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeAssignContext : public Type_statementContext {
  public:
    TypeAssignContext(Type_statementContext *ctx);

    antlr4::Token *left = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *TypeAnnotation();
    antlr4::tree::TerminalNode *Identifier();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Type();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Type_statementContext* type_statement();

  class  Function_applyContext : public antlr4::ParserRuleContext {
  public:
    Function_applyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    Function_paramsContext *function_params();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_applyContext* function_apply();

  class  Function_paramsContext : public antlr4::ParserRuleContext {
  public:
    Function_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_paramsContext* function_params();

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

  class  FunctionApplyContext : public ExpressionContext {
  public:
    FunctionApplyContext(ExpressionContext *ctx);

    Function_applyContext *function_apply();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndexContext : public ExpressionContext {
  public:
    IndexContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    NyarParser::IndexLiteralContext *data = nullptr;
    ExpressionContext *expression();
    IndexLiteralContext *indexLiteral();
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

  class  BinaryLikeContext : public ExpressionContext {
  public:
    BinaryLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicLikeContext : public ExpressionContext {
  public:
    LogicLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *Equivalent();
    antlr4::tree::TerminalNode *NotEquivalent();
    antlr4::tree::TerminalNode *Grater();
    antlr4::tree::TerminalNode *GraterEqual();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *LogicAnd();
    antlr4::tree::TerminalNode *LogicOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MethodApplyContext : public ExpressionContext {
  public:
    MethodApplyContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareLikeContext : public ExpressionContext {
  public:
    CompareLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *Equivalent();
    antlr4::tree::TerminalNode *NotEquivalent();
    antlr4::tree::TerminalNode *Grater();
    antlr4::tree::TerminalNode *GraterEqual();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *LogicAnd();
    antlr4::tree::TerminalNode *LogicOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusLikeContext : public ExpressionContext {
  public:
    PlusLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LazyAssignContext : public ExpressionContext {
  public:
    LazyAssignContext(ExpressionContext *ctx);

    NyarParser::Function_applyContext *id = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::AssignableContext *expr = nullptr;
    Function_applyContext *function_apply();
    antlr4::tree::TerminalNode *DelayedAssign();
    AssignableContext *assignable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowerLikeContext : public ExpressionContext {
  public:
    PowerLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Power();
    antlr4::tree::TerminalNode *Surd();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeStatementContext : public ExpressionContext {
  public:
    TypeStatementContext(ExpressionContext *ctx);

    Type_statementContext *type_statement();
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

    NyarParser::Assign_lhsContext *id = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::AssignableContext *expr = nullptr;
    Assign_lhsContext *assign_lhs();
    AssignableContext *assignable();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *PlusTo();
    antlr4::tree::TerminalNode *MinusFrom();
    antlr4::tree::TerminalNode *LetAssign();
    antlr4::tree::TerminalNode *FinalAssign();
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
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *BitNot();
    antlr4::tree::TerminalNode *LogicNot();
    antlr4::tree::TerminalNode *Reciprocal();
    antlr4::tree::TerminalNode *Increase();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SymbolExpressionContext : public ExpressionContext {
  public:
    SymbolExpressionContext(ExpressionContext *ctx);

    NyarParser::SymbolContext *atom = nullptr;
    SymbolContext *symbol();
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

  class  PostfixExpressionContext : public ExpressionContext {
  public:
    PostfixExpressionContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    NyarParser::Pst_opsContext *op = nullptr;
    ExpressionContext *expression();
    Pst_opsContext *pst_ops();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplyLikeContext : public ExpressionContext {
  public:
    MultiplyLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Times();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Kronecker();
    antlr4::tree::TerminalNode *TensorProduct();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ListLikeContext : public ExpressionContext {
  public:
    ListLikeContext(ExpressionContext *ctx);

    NyarParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    NyarParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Concat();
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Pst_opsContext : public antlr4::ParserRuleContext {
  public:
    Pst_opsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Increase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pst_opsContext* pst_ops();

  class  Assign_statementContext : public antlr4::ParserRuleContext {
  public:
    Assign_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Assign_statementContext() = default;
    void copyFrom(Assign_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignStatementContext : public Assign_statementContext {
  public:
    AssignStatementContext(Assign_statementContext *ctx);

    antlr4::Token *op = nullptr;
    NyarParser::Assign_lhsContext *id = nullptr;
    NyarParser::AssignableContext *expr = nullptr;
    Assign_lhsContext *assign_lhs();
    AssignableContext *assignable();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Final();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Assign_statementContext* assign_statement();

  class  AssignableContext : public antlr4::ParserRuleContext {
  public:
    AssignableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *RL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignableContext* assignable();

  class  Assign_lhsContext : public antlr4::ParserRuleContext {
  public:
    Assign_lhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Assign_lhsContext() = default;
    void copyFrom(Assign_lhsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignAttributeContext : public Assign_lhsContext {
  public:
    AssignAttributeContext(Assign_lhsContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignFunctionContext : public Assign_lhsContext {
  public:
    AssignFunctionContext(Assign_lhsContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignPairContext : public Assign_lhsContext {
  public:
    AssignPairContext(Assign_lhsContext *ctx);

    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    std::vector<Assign_passContext *> assign_pass();
    Assign_passContext* assign_pass(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignValueContext : public Assign_lhsContext {
  public:
    AssignValueContext(Assign_lhsContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignWithListContext : public Assign_lhsContext {
  public:
    AssignWithListContext(Assign_lhsContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LM();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *RM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Assign_lhsContext* assign_lhs();

  class  Assign_passContext : public antlr4::ParserRuleContext {
  public:
    Assign_passContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    SymbolContext *symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_passContext* assign_pass();

  class  Module_statementContext : public antlr4::ParserRuleContext {
  public:
    Module_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Module_statementContext() = default;
    void copyFrom(Module_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ModuleIncludeContext : public Module_statementContext {
  public:
    ModuleIncludeContext(Module_statementContext *ctx);

    NyarParser::SymbolContext *module = nullptr;
    antlr4::tree::TerminalNode *Using();
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *Times();
    antlr4::tree::TerminalNode *Power();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModuleAliasContext : public Module_statementContext {
  public:
    ModuleAliasContext(Module_statementContext *ctx);

    NyarParser::SymbolContext *module = nullptr;
    antlr4::Token *alias = nullptr;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *As();
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModuleSymbolContext : public Module_statementContext {
  public:
    ModuleSymbolContext(Module_statementContext *ctx);

    NyarParser::SymbolContext *source = nullptr;
    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *Using();
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *With();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModuleSymbolsContext : public Module_statementContext {
  public:
    ModuleSymbolsContext(Module_statementContext *ctx);

    NyarParser::SymbolContext *source = nullptr;
    antlr4::tree::TerminalNode *Using();
    Id_tuplesContext *id_tuples();
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *With();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModuleResolveContext : public Module_statementContext {
  public:
    ModuleResolveContext(Module_statementContext *ctx);

    antlr4::tree::TerminalNode *Using();
    DictLiteralContext *dictLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Module_statementContext* module_statement();

  class  Id_tuplesContext : public antlr4::ParserRuleContext {
  public:
    Id_tuplesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LL();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *RL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_tuplesContext* id_tuples();

  class  Class_statementContext : public antlr4::ParserRuleContext {
  public:
    Class_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Class_statementContext() = default;
    void copyFrom(Class_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ClassBaseContext : public Class_statementContext {
  public:
    ClassBaseContext(Class_statementContext *ctx);

    antlr4::Token *id = nullptr;
    antlr4::tree::TerminalNode *Class();
    Class_defineContext *class_define();
    antlr4::tree::TerminalNode *Identifier();
    Class_implementContext *class_implement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClassWithFatherContext : public Class_statementContext {
  public:
    ClassWithFatherContext(Class_statementContext *ctx);

    antlr4::Token *id = nullptr;
    antlr4::tree::TerminalNode *Class();
    Class_fathersContext *class_fathers();
    Class_defineContext *class_define();
    antlr4::tree::TerminalNode *Identifier();
    Class_implementContext *class_implement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Class_statementContext* class_statement();

  class  Class_fathersContext : public antlr4::ParserRuleContext {
  public:
    Class_fathersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Class_fathersContext() = default;
    void copyFrom(Class_fathersContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ClassFatherContext : public Class_fathersContext {
  public:
    ClassFatherContext(Class_fathersContext *ctx);

    NyarParser::SymbolContext *father = nullptr;
    antlr4::tree::TerminalNode *Extend();
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClassFathersContext : public Class_fathersContext {
  public:
    ClassFathersContext(Class_fathersContext *ctx);

    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    std::vector<SymbolContext *> symbol();
    SymbolContext* symbol(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Class_fathersContext* class_fathers();

  class  Class_implementContext : public antlr4::ParserRuleContext {
  public:
    Class_implementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Class_implementContext() = default;
    void copyFrom(Class_implementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ClassImplementContext : public Class_implementContext {
  public:
    ClassImplementContext(Class_implementContext *ctx);

    SymbolContext *symbol();
    antlr4::tree::TerminalNode *Implement();
    antlr4::tree::TerminalNode *Colon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Class_implementContext* class_implement();

  class  Class_defineContext : public antlr4::ParserRuleContext {
  public:
    Class_defineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Class_defineContext() = default;
    void copyFrom(Class_defineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ClassDefineContext : public Class_defineContext {
  public:
    ClassDefineContext(Class_defineContext *ctx);

    antlr4::tree::TerminalNode *LL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Class_defineContext* class_define();

  class  Interface_StatementContext : public antlr4::ParserRuleContext {
  public:
    Interface_StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    ExpressionContext *expression();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_StatementContext* interface_Statement();

  class  Template_StatementContext : public antlr4::ParserRuleContext {
  public:
    Template_StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    ExpressionContext *expression();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Template_StatementContext* template_Statement();

  class  Macro_StatementContext : public antlr4::ParserRuleContext {
  public:
    Macro_StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Macro();
    ExpressionContext *expression();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Macro_StatementContext* macro_Statement();

  class  Branch_statementContext : public antlr4::ParserRuleContext {
  public:
    Branch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Branch_statementContext() = default;
    void copyFrom(Branch_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MatchStatementContext : public Branch_statementContext {
  public:
    MatchStatementContext(Branch_statementContext *ctx);

    antlr4::tree::TerminalNode *Match();
    Condition_statementContext *condition_statement();
    Expr_or_blockContext *expr_or_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SwitchStatementContext : public Branch_statementContext {
  public:
    SwitchStatementContext(Branch_statementContext *ctx);

    antlr4::tree::TerminalNode *Switch();
    Condition_statementContext *condition_statement();
    Expr_or_blockContext *expr_or_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfNestedContext : public Branch_statementContext {
  public:
    IfNestedContext(Branch_statementContext *ctx);

    antlr4::tree::TerminalNode *If();
    Condition_statementContext *condition_statement();
    Expr_or_blockContext *expr_or_block();
    std::vector<If_elseifContext *> if_elseif();
    If_elseifContext* if_elseif(size_t i);
    If_elseContext *if_else();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfSingleContext : public Branch_statementContext {
  public:
    IfSingleContext(Branch_statementContext *ctx);

    antlr4::tree::TerminalNode *If();
    Condition_statementContext *condition_statement();
    Expr_or_blockContext *expr_or_block();
    If_elseContext *if_else();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Branch_statementContext* branch_statement();

  class  Condition_statementContext : public antlr4::ParserRuleContext {
  public:
    Condition_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Condition_statementContext() = default;
    void copyFrom(Condition_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionStatementContext : public Condition_statementContext {
  public:
    ConditionStatementContext(Condition_statementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Condition_statementContext* condition_statement();

  class  If_elseContext : public antlr4::ParserRuleContext {
  public:
    If_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    If_elseContext() = default;
    void copyFrom(If_elseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ElseStatementContext : public If_elseContext {
  public:
    ElseStatementContext(If_elseContext *ctx);

    antlr4::tree::TerminalNode *Else();
    Expr_or_blockContext *expr_or_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  If_elseContext* if_else();

  class  If_elseifContext : public antlr4::ParserRuleContext {
  public:
    If_elseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    If_elseifContext() = default;
    void copyFrom(If_elseifContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ElseIfStatementContext : public If_elseifContext {
  public:
    ElseIfStatementContext(If_elseifContext *ctx);

    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *If();
    Condition_statementContext *condition_statement();
    Expr_or_blockContext *expr_or_block();
    antlr4::tree::TerminalNode *Then();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  If_elseifContext* if_elseif();

  class  Try_statementContext : public antlr4::ParserRuleContext {
  public:
    Try_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    Block_statementContext *block_statement();
    FinalProductionContext *finalProduction();
    CatchProductionContext *catchProduction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Try_statementContext* try_statement();

  class  CatchProductionContext : public antlr4::ParserRuleContext {
  public:
    CatchProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    SymbolContext *symbol();
    Block_statementContext *block_statement();
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
    Block_statementContext *block_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinalProductionContext* finalProduction();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Loop_statementContext() = default;
    void copyFrom(Loop_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ForInLoopContext : public Loop_statementContext {
  public:
    ForInLoopContext(Loop_statementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *In();
    ExpressionContext *expression();
    Expr_or_blockContext *expr_or_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForLoopContext : public Loop_statementContext {
  public:
    ForLoopContext(Loop_statementContext *ctx);

    NyarParser::ExpressionContext *initial = nullptr;
    NyarParser::ExpressionContext *condition = nullptr;
    NyarParser::ExpressionContext *increment = nullptr;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    Expr_or_blockContext *expr_or_block();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoLoopContext : public Loop_statementContext {
  public:
    DoLoopContext(Loop_statementContext *ctx);

    antlr4::tree::TerminalNode *Do();
    Expr_or_blockContext *expr_or_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileLoopContext : public Loop_statementContext {
  public:
    WhileLoopContext(Loop_statementContext *ctx);

    antlr4::tree::TerminalNode *While();
    Condition_statementContext *condition_statement();
    Expr_or_blockContext *expr_or_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Loop_statementContext* loop_statement();

  class  DictLiteralContext : public antlr4::ParserRuleContext {
  public:
    DictLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *RL();
    std::vector<KeyvalueContext *> keyvalue();
    KeyvalueContext* keyvalue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DictLiteralContext* dictLiteral();

  class  KeyvalueContext : public antlr4::ParserRuleContext {
  public:
    NyarParser::Key_validContext *key = nullptr;;
    NyarParser::ElementContext *value = nullptr;;
    KeyvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    Key_validContext *key_valid();
    ElementContext *element();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyvalueContext* keyvalue();

  class  Key_validContext : public antlr4::ParserRuleContext {
  public:
    Key_validContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();
    SymbolContext *symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_validContext* key_valid();

  class  ListLiteralContext : public antlr4::ParserRuleContext {
  public:
    ListLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LM();
    antlr4::tree::TerminalNode *RM();
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

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

  class  IndexLiteralContext : public antlr4::ParserRuleContext {
  public:
    IndexLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LM();
    std::vector<Index_validContext *> index_valid();
    Index_validContext* index_valid(size_t i);
    antlr4::tree::TerminalNode *RM();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexLiteralContext* indexLiteral();

  class  Index_validContext : public antlr4::ParserRuleContext {
  public:
    Index_validContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolContext *symbol();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_validContext* index_valid();

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

