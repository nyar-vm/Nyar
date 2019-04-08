
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

    virtual antlrcpp::Any visitExpr_block(NyarParser::Expr_blockContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(NyarParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitEos(NyarParser::EosContext *context) = 0;

    virtual antlrcpp::Any visitEol(NyarParser::EolContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(NyarParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitPriorityExpression(NyarParser::PriorityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSymbol(NyarParser::SymbolContext *context) = 0;

    virtual antlrcpp::Any visitPlus_Like(NyarParser::Plus_LikeContext *context) = 0;

    virtual antlrcpp::Any visitString(NyarParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitList_Like(NyarParser::List_LikeContext *context) = 0;

    virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitOperatorAssign(NyarParser::OperatorAssignContext *context) = 0;

    virtual antlrcpp::Any visitDict(NyarParser::DictContext *context) = 0;

    virtual antlrcpp::Any visitPrefixExpression(NyarParser::PrefixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogic_Like(NyarParser::Logic_LikeContext *context) = 0;

    virtual antlrcpp::Any visitPower_Like(NyarParser::Power_LikeContext *context) = 0;

    virtual antlrcpp::Any visitMultiply_Like(NyarParser::Multiply_LikeContext *context) = 0;

    virtual antlrcpp::Any visitList(NyarParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitBinary_Like(NyarParser::Binary_LikeContext *context) = 0;

    virtual antlrcpp::Any visitTuple(NyarParser::TupleContext *context) = 0;

    virtual antlrcpp::Any visitAssignable(NyarParser::AssignableContext *context) = 0;

    virtual antlrcpp::Any visitModifierAssign(NyarParser::ModifierAssignContext *context) = 0;

    virtual antlrcpp::Any visitAssignTuple(NyarParser::AssignTupleContext *context) = 0;

    virtual antlrcpp::Any visitAssignPass(NyarParser::AssignPassContext *context) = 0;

    virtual antlrcpp::Any visitModuleStatement(NyarParser::ModuleStatementContext *context) = 0;

    virtual antlrcpp::Any visitMacroStatement(NyarParser::MacroStatementContext *context) = 0;

    virtual antlrcpp::Any visitTemplateStatement(NyarParser::TemplateStatementContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceStatement(NyarParser::InterfaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassStatement(NyarParser::ClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(NyarParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseif(NyarParser::ElseifContext *context) = 0;

    virtual antlrcpp::Any visitCondition(NyarParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitTryStatement(NyarParser::TryStatementContext *context) = 0;

    virtual antlrcpp::Any visitCatchProduction(NyarParser::CatchProductionContext *context) = 0;

    virtual antlrcpp::Any visitFinalProduction(NyarParser::FinalProductionContext *context) = 0;

    virtual antlrcpp::Any visitTupleLiteral(NyarParser::TupleLiteralContext *context) = 0;

    virtual antlrcpp::Any visitSingle(NyarParser::SingleContext *context) = 0;

    virtual antlrcpp::Any visitDictLiteral(NyarParser::DictLiteralContext *context) = 0;

    virtual antlrcpp::Any visitKeyvalue(NyarParser::KeyvalueContext *context) = 0;

    virtual antlrcpp::Any visitListLiteral(NyarParser::ListLiteralContext *context) = 0;

    virtual antlrcpp::Any visitElement(NyarParser::ElementContext *context) = 0;

    virtual antlrcpp::Any visitSignedInteger(NyarParser::SignedIntegerContext *context) = 0;


};

