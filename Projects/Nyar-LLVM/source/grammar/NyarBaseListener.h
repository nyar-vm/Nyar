
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NyarListener.h"


/**
 * This class provides an empty implementation of NyarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NyarBaseListener : public NyarListener {
public:

  virtual void enterProgram(NyarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(NyarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(NyarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(NyarParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlockStatement(NyarParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(NyarParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterExpr_or_block(NyarParser::Expr_or_blockContext * /*ctx*/) override { }
  virtual void exitExpr_or_block(NyarParser::Expr_or_blockContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(NyarParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(NyarParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterEos(NyarParser::EosContext * /*ctx*/) override { }
  virtual void exitEos(NyarParser::EosContext * /*ctx*/) override { }

  virtual void enterSymbol(NyarParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(NyarParser::SymbolContext * /*ctx*/) override { }

  virtual void enterGlobal(NyarParser::GlobalContext * /*ctx*/) override { }
  virtual void exitGlobal(NyarParser::GlobalContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(NyarParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(NyarParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterTypeAssign(NyarParser::TypeAssignContext * /*ctx*/) override { }
  virtual void exitTypeAssign(NyarParser::TypeAssignContext * /*ctx*/) override { }

  virtual void enterFunction_apply(NyarParser::Function_applyContext * /*ctx*/) override { }
  virtual void exitFunction_apply(NyarParser::Function_applyContext * /*ctx*/) override { }

  virtual void enterFunction_params(NyarParser::Function_paramsContext * /*ctx*/) override { }
  virtual void exitFunction_params(NyarParser::Function_paramsContext * /*ctx*/) override { }

  virtual void enterPriorityExpression(NyarParser::PriorityExpressionContext * /*ctx*/) override { }
  virtual void exitPriorityExpression(NyarParser::PriorityExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionApply(NyarParser::FunctionApplyContext * /*ctx*/) override { }
  virtual void exitFunctionApply(NyarParser::FunctionApplyContext * /*ctx*/) override { }

  virtual void enterIndex(NyarParser::IndexContext * /*ctx*/) override { }
  virtual void exitIndex(NyarParser::IndexContext * /*ctx*/) override { }

  virtual void enterString(NyarParser::StringContext * /*ctx*/) override { }
  virtual void exitString(NyarParser::StringContext * /*ctx*/) override { }

  virtual void enterBinaryLike(NyarParser::BinaryLikeContext * /*ctx*/) override { }
  virtual void exitBinaryLike(NyarParser::BinaryLikeContext * /*ctx*/) override { }

  virtual void enterLogicLike(NyarParser::LogicLikeContext * /*ctx*/) override { }
  virtual void exitLogicLike(NyarParser::LogicLikeContext * /*ctx*/) override { }

  virtual void enterMethodApply(NyarParser::MethodApplyContext * /*ctx*/) override { }
  virtual void exitMethodApply(NyarParser::MethodApplyContext * /*ctx*/) override { }

  virtual void enterCompareLike(NyarParser::CompareLikeContext * /*ctx*/) override { }
  virtual void exitCompareLike(NyarParser::CompareLikeContext * /*ctx*/) override { }

  virtual void enterPlusLike(NyarParser::PlusLikeContext * /*ctx*/) override { }
  virtual void exitPlusLike(NyarParser::PlusLikeContext * /*ctx*/) override { }

  virtual void enterLazyAssign(NyarParser::LazyAssignContext * /*ctx*/) override { }
  virtual void exitLazyAssign(NyarParser::LazyAssignContext * /*ctx*/) override { }

  virtual void enterPowerLike(NyarParser::PowerLikeContext * /*ctx*/) override { }
  virtual void exitPowerLike(NyarParser::PowerLikeContext * /*ctx*/) override { }

  virtual void enterTypeStatement(NyarParser::TypeStatementContext * /*ctx*/) override { }
  virtual void exitTypeStatement(NyarParser::TypeStatementContext * /*ctx*/) override { }

  virtual void enterNumber(NyarParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(NyarParser::NumberContext * /*ctx*/) override { }

  virtual void enterOperatorAssign(NyarParser::OperatorAssignContext * /*ctx*/) override { }
  virtual void exitOperatorAssign(NyarParser::OperatorAssignContext * /*ctx*/) override { }

  virtual void enterDict(NyarParser::DictContext * /*ctx*/) override { }
  virtual void exitDict(NyarParser::DictContext * /*ctx*/) override { }

  virtual void enterPrefixExpression(NyarParser::PrefixExpressionContext * /*ctx*/) override { }
  virtual void exitPrefixExpression(NyarParser::PrefixExpressionContext * /*ctx*/) override { }

  virtual void enterSymbolExpression(NyarParser::SymbolExpressionContext * /*ctx*/) override { }
  virtual void exitSymbolExpression(NyarParser::SymbolExpressionContext * /*ctx*/) override { }

  virtual void enterList(NyarParser::ListContext * /*ctx*/) override { }
  virtual void exitList(NyarParser::ListContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(NyarParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(NyarParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplyLike(NyarParser::MultiplyLikeContext * /*ctx*/) override { }
  virtual void exitMultiplyLike(NyarParser::MultiplyLikeContext * /*ctx*/) override { }

  virtual void enterListLike(NyarParser::ListLikeContext * /*ctx*/) override { }
  virtual void exitListLike(NyarParser::ListLikeContext * /*ctx*/) override { }

  virtual void enterPst_ops(NyarParser::Pst_opsContext * /*ctx*/) override { }
  virtual void exitPst_ops(NyarParser::Pst_opsContext * /*ctx*/) override { }

  virtual void enterAssignStatement(NyarParser::AssignStatementContext * /*ctx*/) override { }
  virtual void exitAssignStatement(NyarParser::AssignStatementContext * /*ctx*/) override { }

  virtual void enterAssignable(NyarParser::AssignableContext * /*ctx*/) override { }
  virtual void exitAssignable(NyarParser::AssignableContext * /*ctx*/) override { }

  virtual void enterAssignValue(NyarParser::AssignValueContext * /*ctx*/) override { }
  virtual void exitAssignValue(NyarParser::AssignValueContext * /*ctx*/) override { }

  virtual void enterAssignAttribute(NyarParser::AssignAttributeContext * /*ctx*/) override { }
  virtual void exitAssignAttribute(NyarParser::AssignAttributeContext * /*ctx*/) override { }

  virtual void enterAssignFunction(NyarParser::AssignFunctionContext * /*ctx*/) override { }
  virtual void exitAssignFunction(NyarParser::AssignFunctionContext * /*ctx*/) override { }

  virtual void enterAssignPair(NyarParser::AssignPairContext * /*ctx*/) override { }
  virtual void exitAssignPair(NyarParser::AssignPairContext * /*ctx*/) override { }

  virtual void enterAssignWithList(NyarParser::AssignWithListContext * /*ctx*/) override { }
  virtual void exitAssignWithList(NyarParser::AssignWithListContext * /*ctx*/) override { }

  virtual void enterAssign_pass(NyarParser::Assign_passContext * /*ctx*/) override { }
  virtual void exitAssign_pass(NyarParser::Assign_passContext * /*ctx*/) override { }

  virtual void enterModuleInclude(NyarParser::ModuleIncludeContext * /*ctx*/) override { }
  virtual void exitModuleInclude(NyarParser::ModuleIncludeContext * /*ctx*/) override { }

  virtual void enterModuleAlias(NyarParser::ModuleAliasContext * /*ctx*/) override { }
  virtual void exitModuleAlias(NyarParser::ModuleAliasContext * /*ctx*/) override { }

  virtual void enterModuleSymbol(NyarParser::ModuleSymbolContext * /*ctx*/) override { }
  virtual void exitModuleSymbol(NyarParser::ModuleSymbolContext * /*ctx*/) override { }

  virtual void enterModuleSymbols(NyarParser::ModuleSymbolsContext * /*ctx*/) override { }
  virtual void exitModuleSymbols(NyarParser::ModuleSymbolsContext * /*ctx*/) override { }

  virtual void enterModuleResolve(NyarParser::ModuleResolveContext * /*ctx*/) override { }
  virtual void exitModuleResolve(NyarParser::ModuleResolveContext * /*ctx*/) override { }

  virtual void enterId_tuples(NyarParser::Id_tuplesContext * /*ctx*/) override { }
  virtual void exitId_tuples(NyarParser::Id_tuplesContext * /*ctx*/) override { }

  virtual void enterClassBase(NyarParser::ClassBaseContext * /*ctx*/) override { }
  virtual void exitClassBase(NyarParser::ClassBaseContext * /*ctx*/) override { }

  virtual void enterClassWithFather(NyarParser::ClassWithFatherContext * /*ctx*/) override { }
  virtual void exitClassWithFather(NyarParser::ClassWithFatherContext * /*ctx*/) override { }

  virtual void enterClassFather(NyarParser::ClassFatherContext * /*ctx*/) override { }
  virtual void exitClassFather(NyarParser::ClassFatherContext * /*ctx*/) override { }

  virtual void enterClassFathers(NyarParser::ClassFathersContext * /*ctx*/) override { }
  virtual void exitClassFathers(NyarParser::ClassFathersContext * /*ctx*/) override { }

  virtual void enterClassImplement(NyarParser::ClassImplementContext * /*ctx*/) override { }
  virtual void exitClassImplement(NyarParser::ClassImplementContext * /*ctx*/) override { }

  virtual void enterClassDefine(NyarParser::ClassDefineContext * /*ctx*/) override { }
  virtual void exitClassDefine(NyarParser::ClassDefineContext * /*ctx*/) override { }

  virtual void enterInterface_Statement(NyarParser::Interface_StatementContext * /*ctx*/) override { }
  virtual void exitInterface_Statement(NyarParser::Interface_StatementContext * /*ctx*/) override { }

  virtual void enterTemplate_Statement(NyarParser::Template_StatementContext * /*ctx*/) override { }
  virtual void exitTemplate_Statement(NyarParser::Template_StatementContext * /*ctx*/) override { }

  virtual void enterMacro_Statement(NyarParser::Macro_StatementContext * /*ctx*/) override { }
  virtual void exitMacro_Statement(NyarParser::Macro_StatementContext * /*ctx*/) override { }

  virtual void enterIfSingle(NyarParser::IfSingleContext * /*ctx*/) override { }
  virtual void exitIfSingle(NyarParser::IfSingleContext * /*ctx*/) override { }

  virtual void enterIfNested(NyarParser::IfNestedContext * /*ctx*/) override { }
  virtual void exitIfNested(NyarParser::IfNestedContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(NyarParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(NyarParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterMatchStatement(NyarParser::MatchStatementContext * /*ctx*/) override { }
  virtual void exitMatchStatement(NyarParser::MatchStatementContext * /*ctx*/) override { }

  virtual void enterConditionStatement(NyarParser::ConditionStatementContext * /*ctx*/) override { }
  virtual void exitConditionStatement(NyarParser::ConditionStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(NyarParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(NyarParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterElseIfStatement(NyarParser::ElseIfStatementContext * /*ctx*/) override { }
  virtual void exitElseIfStatement(NyarParser::ElseIfStatementContext * /*ctx*/) override { }

  virtual void enterTry_statement(NyarParser::Try_statementContext * /*ctx*/) override { }
  virtual void exitTry_statement(NyarParser::Try_statementContext * /*ctx*/) override { }

  virtual void enterCatchProduction(NyarParser::CatchProductionContext * /*ctx*/) override { }
  virtual void exitCatchProduction(NyarParser::CatchProductionContext * /*ctx*/) override { }

  virtual void enterFinalProduction(NyarParser::FinalProductionContext * /*ctx*/) override { }
  virtual void exitFinalProduction(NyarParser::FinalProductionContext * /*ctx*/) override { }

  virtual void enterForLoop(NyarParser::ForLoopContext * /*ctx*/) override { }
  virtual void exitForLoop(NyarParser::ForLoopContext * /*ctx*/) override { }

  virtual void enterForInLoop(NyarParser::ForInLoopContext * /*ctx*/) override { }
  virtual void exitForInLoop(NyarParser::ForInLoopContext * /*ctx*/) override { }

  virtual void enterWhileLoop(NyarParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(NyarParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterDoLoop(NyarParser::DoLoopContext * /*ctx*/) override { }
  virtual void exitDoLoop(NyarParser::DoLoopContext * /*ctx*/) override { }

  virtual void enterDictLiteral(NyarParser::DictLiteralContext * /*ctx*/) override { }
  virtual void exitDictLiteral(NyarParser::DictLiteralContext * /*ctx*/) override { }

  virtual void enterKeyvalue(NyarParser::KeyvalueContext * /*ctx*/) override { }
  virtual void exitKeyvalue(NyarParser::KeyvalueContext * /*ctx*/) override { }

  virtual void enterKey_valid(NyarParser::Key_validContext * /*ctx*/) override { }
  virtual void exitKey_valid(NyarParser::Key_validContext * /*ctx*/) override { }

  virtual void enterListLiteral(NyarParser::ListLiteralContext * /*ctx*/) override { }
  virtual void exitListLiteral(NyarParser::ListLiteralContext * /*ctx*/) override { }

  virtual void enterElement(NyarParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(NyarParser::ElementContext * /*ctx*/) override { }

  virtual void enterIndexLiteral(NyarParser::IndexLiteralContext * /*ctx*/) override { }
  virtual void exitIndexLiteral(NyarParser::IndexLiteralContext * /*ctx*/) override { }

  virtual void enterIndex_valid(NyarParser::Index_validContext * /*ctx*/) override { }
  virtual void exitIndex_valid(NyarParser::Index_validContext * /*ctx*/) override { }

  virtual void enterSignedInteger(NyarParser::SignedIntegerContext * /*ctx*/) override { }
  virtual void exitSignedInteger(NyarParser::SignedIntegerContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

