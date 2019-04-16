
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NyarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NyarParser.
 */
class  NyarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(NyarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(NyarParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(NyarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(NyarParser::StatementContext *ctx) = 0;

  virtual void enterBlockStatement(NyarParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(NyarParser::BlockStatementContext *ctx) = 0;

  virtual void enterExpr_or_block(NyarParser::Expr_or_blockContext *ctx) = 0;
  virtual void exitExpr_or_block(NyarParser::Expr_or_blockContext *ctx) = 0;

  virtual void enterEmptyStatement(NyarParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(NyarParser::EmptyStatementContext *ctx) = 0;

  virtual void enterEos(NyarParser::EosContext *ctx) = 0;
  virtual void exitEos(NyarParser::EosContext *ctx) = 0;

  virtual void enterSymbol(NyarParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(NyarParser::SymbolContext *ctx) = 0;

  virtual void enterGlobal(NyarParser::GlobalContext *ctx) = 0;
  virtual void exitGlobal(NyarParser::GlobalContext *ctx) = 0;

  virtual void enterExpressionStatement(NyarParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(NyarParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterTypeAssign(NyarParser::TypeAssignContext *ctx) = 0;
  virtual void exitTypeAssign(NyarParser::TypeAssignContext *ctx) = 0;

  virtual void enterFunction_apply(NyarParser::Function_applyContext *ctx) = 0;
  virtual void exitFunction_apply(NyarParser::Function_applyContext *ctx) = 0;

  virtual void enterFunction_params(NyarParser::Function_paramsContext *ctx) = 0;
  virtual void exitFunction_params(NyarParser::Function_paramsContext *ctx) = 0;

  virtual void enterPriorityExpression(NyarParser::PriorityExpressionContext *ctx) = 0;
  virtual void exitPriorityExpression(NyarParser::PriorityExpressionContext *ctx) = 0;

  virtual void enterFunctionApply(NyarParser::FunctionApplyContext *ctx) = 0;
  virtual void exitFunctionApply(NyarParser::FunctionApplyContext *ctx) = 0;

  virtual void enterIndex(NyarParser::IndexContext *ctx) = 0;
  virtual void exitIndex(NyarParser::IndexContext *ctx) = 0;

  virtual void enterString(NyarParser::StringContext *ctx) = 0;
  virtual void exitString(NyarParser::StringContext *ctx) = 0;

  virtual void enterBinaryLike(NyarParser::BinaryLikeContext *ctx) = 0;
  virtual void exitBinaryLike(NyarParser::BinaryLikeContext *ctx) = 0;

  virtual void enterLogicLike(NyarParser::LogicLikeContext *ctx) = 0;
  virtual void exitLogicLike(NyarParser::LogicLikeContext *ctx) = 0;

  virtual void enterMethodApply(NyarParser::MethodApplyContext *ctx) = 0;
  virtual void exitMethodApply(NyarParser::MethodApplyContext *ctx) = 0;

  virtual void enterCompareLike(NyarParser::CompareLikeContext *ctx) = 0;
  virtual void exitCompareLike(NyarParser::CompareLikeContext *ctx) = 0;

  virtual void enterPlusLike(NyarParser::PlusLikeContext *ctx) = 0;
  virtual void exitPlusLike(NyarParser::PlusLikeContext *ctx) = 0;

  virtual void enterLazyAssign(NyarParser::LazyAssignContext *ctx) = 0;
  virtual void exitLazyAssign(NyarParser::LazyAssignContext *ctx) = 0;

  virtual void enterPowerLike(NyarParser::PowerLikeContext *ctx) = 0;
  virtual void exitPowerLike(NyarParser::PowerLikeContext *ctx) = 0;

  virtual void enterTypeStatement(NyarParser::TypeStatementContext *ctx) = 0;
  virtual void exitTypeStatement(NyarParser::TypeStatementContext *ctx) = 0;

  virtual void enterNumber(NyarParser::NumberContext *ctx) = 0;
  virtual void exitNumber(NyarParser::NumberContext *ctx) = 0;

  virtual void enterOperatorAssign(NyarParser::OperatorAssignContext *ctx) = 0;
  virtual void exitOperatorAssign(NyarParser::OperatorAssignContext *ctx) = 0;

  virtual void enterDict(NyarParser::DictContext *ctx) = 0;
  virtual void exitDict(NyarParser::DictContext *ctx) = 0;

  virtual void enterPrefixExpression(NyarParser::PrefixExpressionContext *ctx) = 0;
  virtual void exitPrefixExpression(NyarParser::PrefixExpressionContext *ctx) = 0;

  virtual void enterSymbolExpression(NyarParser::SymbolExpressionContext *ctx) = 0;
  virtual void exitSymbolExpression(NyarParser::SymbolExpressionContext *ctx) = 0;

  virtual void enterList(NyarParser::ListContext *ctx) = 0;
  virtual void exitList(NyarParser::ListContext *ctx) = 0;

  virtual void enterPostfixExpression(NyarParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(NyarParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterMultiplyLike(NyarParser::MultiplyLikeContext *ctx) = 0;
  virtual void exitMultiplyLike(NyarParser::MultiplyLikeContext *ctx) = 0;

  virtual void enterListLike(NyarParser::ListLikeContext *ctx) = 0;
  virtual void exitListLike(NyarParser::ListLikeContext *ctx) = 0;

  virtual void enterPst_ops(NyarParser::Pst_opsContext *ctx) = 0;
  virtual void exitPst_ops(NyarParser::Pst_opsContext *ctx) = 0;

  virtual void enterAssignStatement(NyarParser::AssignStatementContext *ctx) = 0;
  virtual void exitAssignStatement(NyarParser::AssignStatementContext *ctx) = 0;

  virtual void enterAssignable(NyarParser::AssignableContext *ctx) = 0;
  virtual void exitAssignable(NyarParser::AssignableContext *ctx) = 0;

  virtual void enterAssignValue(NyarParser::AssignValueContext *ctx) = 0;
  virtual void exitAssignValue(NyarParser::AssignValueContext *ctx) = 0;

  virtual void enterAssignAttribute(NyarParser::AssignAttributeContext *ctx) = 0;
  virtual void exitAssignAttribute(NyarParser::AssignAttributeContext *ctx) = 0;

  virtual void enterAssignFunction(NyarParser::AssignFunctionContext *ctx) = 0;
  virtual void exitAssignFunction(NyarParser::AssignFunctionContext *ctx) = 0;

  virtual void enterAssignPair(NyarParser::AssignPairContext *ctx) = 0;
  virtual void exitAssignPair(NyarParser::AssignPairContext *ctx) = 0;

  virtual void enterAssignWithList(NyarParser::AssignWithListContext *ctx) = 0;
  virtual void exitAssignWithList(NyarParser::AssignWithListContext *ctx) = 0;

  virtual void enterAssign_pass(NyarParser::Assign_passContext *ctx) = 0;
  virtual void exitAssign_pass(NyarParser::Assign_passContext *ctx) = 0;

  virtual void enterModuleInclude(NyarParser::ModuleIncludeContext *ctx) = 0;
  virtual void exitModuleInclude(NyarParser::ModuleIncludeContext *ctx) = 0;

  virtual void enterModuleAlias(NyarParser::ModuleAliasContext *ctx) = 0;
  virtual void exitModuleAlias(NyarParser::ModuleAliasContext *ctx) = 0;

  virtual void enterModuleSymbol(NyarParser::ModuleSymbolContext *ctx) = 0;
  virtual void exitModuleSymbol(NyarParser::ModuleSymbolContext *ctx) = 0;

  virtual void enterModuleSymbols(NyarParser::ModuleSymbolsContext *ctx) = 0;
  virtual void exitModuleSymbols(NyarParser::ModuleSymbolsContext *ctx) = 0;

  virtual void enterModuleResolve(NyarParser::ModuleResolveContext *ctx) = 0;
  virtual void exitModuleResolve(NyarParser::ModuleResolveContext *ctx) = 0;

  virtual void enterId_tuples(NyarParser::Id_tuplesContext *ctx) = 0;
  virtual void exitId_tuples(NyarParser::Id_tuplesContext *ctx) = 0;

  virtual void enterClassBase(NyarParser::ClassBaseContext *ctx) = 0;
  virtual void exitClassBase(NyarParser::ClassBaseContext *ctx) = 0;

  virtual void enterClassWithFather(NyarParser::ClassWithFatherContext *ctx) = 0;
  virtual void exitClassWithFather(NyarParser::ClassWithFatherContext *ctx) = 0;

  virtual void enterClassFather(NyarParser::ClassFatherContext *ctx) = 0;
  virtual void exitClassFather(NyarParser::ClassFatherContext *ctx) = 0;

  virtual void enterClassFathers(NyarParser::ClassFathersContext *ctx) = 0;
  virtual void exitClassFathers(NyarParser::ClassFathersContext *ctx) = 0;

  virtual void enterClassImplement(NyarParser::ClassImplementContext *ctx) = 0;
  virtual void exitClassImplement(NyarParser::ClassImplementContext *ctx) = 0;

  virtual void enterClassDefine(NyarParser::ClassDefineContext *ctx) = 0;
  virtual void exitClassDefine(NyarParser::ClassDefineContext *ctx) = 0;

  virtual void enterInterface_Statement(NyarParser::Interface_StatementContext *ctx) = 0;
  virtual void exitInterface_Statement(NyarParser::Interface_StatementContext *ctx) = 0;

  virtual void enterTemplate_Statement(NyarParser::Template_StatementContext *ctx) = 0;
  virtual void exitTemplate_Statement(NyarParser::Template_StatementContext *ctx) = 0;

  virtual void enterMacro_Statement(NyarParser::Macro_StatementContext *ctx) = 0;
  virtual void exitMacro_Statement(NyarParser::Macro_StatementContext *ctx) = 0;

  virtual void enterIfSingle(NyarParser::IfSingleContext *ctx) = 0;
  virtual void exitIfSingle(NyarParser::IfSingleContext *ctx) = 0;

  virtual void enterIfNested(NyarParser::IfNestedContext *ctx) = 0;
  virtual void exitIfNested(NyarParser::IfNestedContext *ctx) = 0;

  virtual void enterSwitchStatement(NyarParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(NyarParser::SwitchStatementContext *ctx) = 0;

  virtual void enterMatchStatement(NyarParser::MatchStatementContext *ctx) = 0;
  virtual void exitMatchStatement(NyarParser::MatchStatementContext *ctx) = 0;

  virtual void enterConditionStatement(NyarParser::ConditionStatementContext *ctx) = 0;
  virtual void exitConditionStatement(NyarParser::ConditionStatementContext *ctx) = 0;

  virtual void enterElseStatement(NyarParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(NyarParser::ElseStatementContext *ctx) = 0;

  virtual void enterElseIfStatement(NyarParser::ElseIfStatementContext *ctx) = 0;
  virtual void exitElseIfStatement(NyarParser::ElseIfStatementContext *ctx) = 0;

  virtual void enterTry_statement(NyarParser::Try_statementContext *ctx) = 0;
  virtual void exitTry_statement(NyarParser::Try_statementContext *ctx) = 0;

  virtual void enterCatchProduction(NyarParser::CatchProductionContext *ctx) = 0;
  virtual void exitCatchProduction(NyarParser::CatchProductionContext *ctx) = 0;

  virtual void enterFinalProduction(NyarParser::FinalProductionContext *ctx) = 0;
  virtual void exitFinalProduction(NyarParser::FinalProductionContext *ctx) = 0;

  virtual void enterForLoop(NyarParser::ForLoopContext *ctx) = 0;
  virtual void exitForLoop(NyarParser::ForLoopContext *ctx) = 0;

  virtual void enterForInLoop(NyarParser::ForInLoopContext *ctx) = 0;
  virtual void exitForInLoop(NyarParser::ForInLoopContext *ctx) = 0;

  virtual void enterWhileLoop(NyarParser::WhileLoopContext *ctx) = 0;
  virtual void exitWhileLoop(NyarParser::WhileLoopContext *ctx) = 0;

  virtual void enterDoLoop(NyarParser::DoLoopContext *ctx) = 0;
  virtual void exitDoLoop(NyarParser::DoLoopContext *ctx) = 0;

  virtual void enterDictLiteral(NyarParser::DictLiteralContext *ctx) = 0;
  virtual void exitDictLiteral(NyarParser::DictLiteralContext *ctx) = 0;

  virtual void enterKeyvalue(NyarParser::KeyvalueContext *ctx) = 0;
  virtual void exitKeyvalue(NyarParser::KeyvalueContext *ctx) = 0;

  virtual void enterKey_valid(NyarParser::Key_validContext *ctx) = 0;
  virtual void exitKey_valid(NyarParser::Key_validContext *ctx) = 0;

  virtual void enterListLiteral(NyarParser::ListLiteralContext *ctx) = 0;
  virtual void exitListLiteral(NyarParser::ListLiteralContext *ctx) = 0;

  virtual void enterElement(NyarParser::ElementContext *ctx) = 0;
  virtual void exitElement(NyarParser::ElementContext *ctx) = 0;

  virtual void enterIndexLiteral(NyarParser::IndexLiteralContext *ctx) = 0;
  virtual void exitIndexLiteral(NyarParser::IndexLiteralContext *ctx) = 0;

  virtual void enterIndex_valid(NyarParser::Index_validContext *ctx) = 0;
  virtual void exitIndex_valid(NyarParser::Index_validContext *ctx) = 0;

  virtual void enterSignedInteger(NyarParser::SignedIntegerContext *ctx) = 0;
  virtual void exitSignedInteger(NyarParser::SignedIntegerContext *ctx) = 0;


};

