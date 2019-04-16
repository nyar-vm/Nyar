
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

  virtual antlrcpp::Any visitExpr_or_block(NyarParser::Expr_or_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(NyarParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEos(NyarParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbol(NyarParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobal(NyarParser::GlobalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(NyarParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeAssign(NyarParser::TypeAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_apply(NyarParser::Function_applyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_params(NyarParser::Function_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPriorityExpression(NyarParser::PriorityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionApply(NyarParser::FunctionApplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(NyarParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(NyarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryLike(NyarParser::BinaryLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicLike(NyarParser::LogicLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodApply(NyarParser::MethodApplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareLike(NyarParser::CompareLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusLike(NyarParser::PlusLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLazyAssign(NyarParser::LazyAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowerLike(NyarParser::PowerLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeStatement(NyarParser::TypeStatementContext *ctx) override {
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

  virtual antlrcpp::Any visitSymbolExpression(NyarParser::SymbolExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(NyarParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(NyarParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplyLike(NyarParser::MultiplyLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListLike(NyarParser::ListLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPst_ops(NyarParser::Pst_opsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignStatement(NyarParser::AssignStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignable(NyarParser::AssignableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignValue(NyarParser::AssignValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignAttribute(NyarParser::AssignAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignFunction(NyarParser::AssignFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignPair(NyarParser::AssignPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignWithList(NyarParser::AssignWithListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_pass(NyarParser::Assign_passContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleInclude(NyarParser::ModuleIncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleAlias(NyarParser::ModuleAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleSymbol(NyarParser::ModuleSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleSymbols(NyarParser::ModuleSymbolsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleResolve(NyarParser::ModuleResolveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_tuples(NyarParser::Id_tuplesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBase(NyarParser::ClassBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassWithFather(NyarParser::ClassWithFatherContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassFather(NyarParser::ClassFatherContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassFathers(NyarParser::ClassFathersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassImplement(NyarParser::ClassImplementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassDefine(NyarParser::ClassDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_Statement(NyarParser::Interface_StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplate_Statement(NyarParser::Template_StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMacro_Statement(NyarParser::Macro_StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfSingle(NyarParser::IfSingleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfNested(NyarParser::IfNestedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatement(NyarParser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchStatement(NyarParser::MatchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionStatement(NyarParser::ConditionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(NyarParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseIfStatement(NyarParser::ElseIfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTry_statement(NyarParser::Try_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCatchProduction(NyarParser::CatchProductionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFinalProduction(NyarParser::FinalProductionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForLoop(NyarParser::ForLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInLoop(NyarParser::ForInLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileLoop(NyarParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoLoop(NyarParser::DoLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictLiteral(NyarParser::DictLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyvalue(NyarParser::KeyvalueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey_valid(NyarParser::Key_validContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListLiteral(NyarParser::ListLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(NyarParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexLiteral(NyarParser::IndexLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_valid(NyarParser::Index_validContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedInteger(NyarParser::SignedIntegerContext *ctx) override {
    return visitChildren(ctx);
  }


};

