
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NyarVisitor.h"


/**
 * This class provides an empty implementation of NyarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NyarBaseVisitor : public NyarVisitor {
public:

  virtual antlrcpp::Any visitProgram(NyarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(NyarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatement(NyarParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_block(NyarParser::Expr_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(NyarParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEos(NyarParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEol(NyarParser::EolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(NyarParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPriorityExpression(NyarParser::PriorityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbol(NyarParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus_Like(NyarParser::Plus_LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(NyarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_Like(NyarParser::List_LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorAssign(NyarParser::OperatorAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDict(NyarParser::DictContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixExpression(NyarParser::PrefixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogic_Like(NyarParser::Logic_LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPower_Like(NyarParser::Power_LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiply_Like(NyarParser::Multiply_LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(NyarParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_Like(NyarParser::Binary_LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTuple(NyarParser::TupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignable(NyarParser::AssignableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifierAssign(NyarParser::ModifierAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignTuple(NyarParser::AssignTupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignPass(NyarParser::AssignPassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleStatement(NyarParser::ModuleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMacroStatement(NyarParser::MacroStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateStatement(NyarParser::TemplateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceStatement(NyarParser::InterfaceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassStatement(NyarParser::ClassStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(NyarParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseif(NyarParser::ElseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(NyarParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTryStatement(NyarParser::TryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchProduction(NyarParser::CatchProductionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFinalProduction(NyarParser::FinalProductionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTupleLiteral(NyarParser::TupleLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle(NyarParser::SingleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictLiteral(NyarParser::DictLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyvalue(NyarParser::KeyvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListLiteral(NyarParser::ListLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(NyarParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedInteger(NyarParser::SignedIntegerContext *ctx) override {
    return visitChildren(ctx);
  }


};

