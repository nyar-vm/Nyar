
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NyarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NyarParser.
 */
class  NyarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NyarParser.
   */
    virtual antlrcpp::Any visitProgram(NyarParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(NyarParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(NyarParser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpr_or_block(NyarParser::Expr_or_blockContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(NyarParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitEos(NyarParser::EosContext *context) = 0;

    virtual antlrcpp::Any visitSymbol(NyarParser::SymbolContext *context) = 0;

    virtual antlrcpp::Any visitGlobal(NyarParser::GlobalContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(NyarParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitTypeAssign(NyarParser::TypeAssignContext *context) = 0;

    virtual antlrcpp::Any visitFunction_apply(NyarParser::Function_applyContext *context) = 0;

    virtual antlrcpp::Any visitFunction_params(NyarParser::Function_paramsContext *context) = 0;

    virtual antlrcpp::Any visitPriorityExpression(NyarParser::PriorityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionApply(NyarParser::FunctionApplyContext *context) = 0;

    virtual antlrcpp::Any visitIndex(NyarParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitString(NyarParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitBinaryLike(NyarParser::BinaryLikeContext *context) = 0;

    virtual antlrcpp::Any visitLogicLike(NyarParser::LogicLikeContext *context) = 0;

    virtual antlrcpp::Any visitMethodApply(NyarParser::MethodApplyContext *context) = 0;

    virtual antlrcpp::Any visitCompareLike(NyarParser::CompareLikeContext *context) = 0;

    virtual antlrcpp::Any visitPlusLike(NyarParser::PlusLikeContext *context) = 0;

    virtual antlrcpp::Any visitLazyAssign(NyarParser::LazyAssignContext *context) = 0;

    virtual antlrcpp::Any visitPowerLike(NyarParser::PowerLikeContext *context) = 0;

    virtual antlrcpp::Any visitTypeStatement(NyarParser::TypeStatementContext *context) = 0;

    virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitOperatorAssign(NyarParser::OperatorAssignContext *context) = 0;

    virtual antlrcpp::Any visitDict(NyarParser::DictContext *context) = 0;

    virtual antlrcpp::Any visitPrefixExpression(NyarParser::PrefixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSymbolExpression(NyarParser::SymbolExpressionContext *context) = 0;

    virtual antlrcpp::Any visitList(NyarParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(NyarParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyLike(NyarParser::MultiplyLikeContext *context) = 0;

    virtual antlrcpp::Any visitListLike(NyarParser::ListLikeContext *context) = 0;

    virtual antlrcpp::Any visitPst_ops(NyarParser::Pst_opsContext *context) = 0;

    virtual antlrcpp::Any visitAssignStatement(NyarParser::AssignStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignable(NyarParser::AssignableContext *context) = 0;

    virtual antlrcpp::Any visitAssignValue(NyarParser::AssignValueContext *context) = 0;

    virtual antlrcpp::Any visitAssignAttribute(NyarParser::AssignAttributeContext *context) = 0;

    virtual antlrcpp::Any visitAssignFunction(NyarParser::AssignFunctionContext *context) = 0;

    virtual antlrcpp::Any visitAssignPair(NyarParser::AssignPairContext *context) = 0;

    virtual antlrcpp::Any visitAssignWithList(NyarParser::AssignWithListContext *context) = 0;

    virtual antlrcpp::Any visitAssign_pass(NyarParser::Assign_passContext *context) = 0;

    virtual antlrcpp::Any visitModuleInclude(NyarParser::ModuleIncludeContext *context) = 0;

    virtual antlrcpp::Any visitModuleAlias(NyarParser::ModuleAliasContext *context) = 0;

    virtual antlrcpp::Any visitModuleSymbol(NyarParser::ModuleSymbolContext *context) = 0;

    virtual antlrcpp::Any visitModuleSymbols(NyarParser::ModuleSymbolsContext *context) = 0;

    virtual antlrcpp::Any visitModuleResolve(NyarParser::ModuleResolveContext *context) = 0;

    virtual antlrcpp::Any visitId_tuples(NyarParser::Id_tuplesContext *context) = 0;

    virtual antlrcpp::Any visitClassBase(NyarParser::ClassBaseContext *context) = 0;

    virtual antlrcpp::Any visitClassWithFather(NyarParser::ClassWithFatherContext *context) = 0;

    virtual antlrcpp::Any visitClassFather(NyarParser::ClassFatherContext *context) = 0;

    virtual antlrcpp::Any visitClassFathers(NyarParser::ClassFathersContext *context) = 0;

    virtual antlrcpp::Any visitClassImplement(NyarParser::ClassImplementContext *context) = 0;

    virtual antlrcpp::Any visitClassDefine(NyarParser::ClassDefineContext *context) = 0;

    virtual antlrcpp::Any visitInterface_Statement(NyarParser::Interface_StatementContext *context) = 0;

    virtual antlrcpp::Any visitTemplate_Statement(NyarParser::Template_StatementContext *context) = 0;

    virtual antlrcpp::Any visitMacro_Statement(NyarParser::Macro_StatementContext *context) = 0;

    virtual antlrcpp::Any visitIfSingle(NyarParser::IfSingleContext *context) = 0;

    virtual antlrcpp::Any visitIfNested(NyarParser::IfNestedContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(NyarParser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitMatchStatement(NyarParser::MatchStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionStatement(NyarParser::ConditionStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(NyarParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseIfStatement(NyarParser::ElseIfStatementContext *context) = 0;

    virtual antlrcpp::Any visitTry_statement(NyarParser::Try_statementContext *context) = 0;

    virtual antlrcpp::Any visitCatchProduction(NyarParser::CatchProductionContext *context) = 0;

    virtual antlrcpp::Any visitFinalProduction(NyarParser::FinalProductionContext *context) = 0;

    virtual antlrcpp::Any visitForLoop(NyarParser::ForLoopContext *context) = 0;

    virtual antlrcpp::Any visitForInLoop(NyarParser::ForInLoopContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(NyarParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitDoLoop(NyarParser::DoLoopContext *context) = 0;

    virtual antlrcpp::Any visitDictLiteral(NyarParser::DictLiteralContext *context) = 0;

    virtual antlrcpp::Any visitKeyvalue(NyarParser::KeyvalueContext *context) = 0;

    virtual antlrcpp::Any visitKey_valid(NyarParser::Key_validContext *context) = 0;

    virtual antlrcpp::Any visitListLiteral(NyarParser::ListLiteralContext *context) = 0;

    virtual antlrcpp::Any visitElement(NyarParser::ElementContext *context) = 0;

    virtual antlrcpp::Any visitIndexLiteral(NyarParser::IndexLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIndex_valid(NyarParser::Index_validContext *context) = 0;

    virtual antlrcpp::Any visitSignedInteger(NyarParser::SignedIntegerContext *context) = 0;


};

