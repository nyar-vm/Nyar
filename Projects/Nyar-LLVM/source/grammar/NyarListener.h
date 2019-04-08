
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

  virtual void enterExpr_block(NyarParser::Expr_blockContext *ctx) = 0;
  virtual void exitExpr_block(NyarParser::Expr_blockContext *ctx) = 0;

  virtual void enterEmptyStatement(NyarParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(NyarParser::EmptyStatementContext *ctx) = 0;

  virtual void enterEos(NyarParser::EosContext *ctx) = 0;
  virtual void exitEos(NyarParser::EosContext *ctx) = 0;

  virtual void enterEol(NyarParser::EolContext *ctx) = 0;
  virtual void exitEol(NyarParser::EolContext *ctx) = 0;

  virtual void enterExpressionStatement(NyarParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(NyarParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterPriorityExpression(NyarParser::PriorityExpressionContext *ctx) = 0;
  virtual void exitPriorityExpression(NyarParser::PriorityExpressionContext *ctx) = 0;

  virtual void enterSymbol(NyarParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(NyarParser::SymbolContext *ctx) = 0;

  virtual void enterPlus_Like(NyarParser::Plus_LikeContext *ctx) = 0;
  virtual void exitPlus_Like(NyarParser::Plus_LikeContext *ctx) = 0;

  virtual void enterString(NyarParser::StringContext *ctx) = 0;
  virtual void exitString(NyarParser::StringContext *ctx) = 0;

  virtual void enterList_Like(NyarParser::List_LikeContext *ctx) = 0;
  virtual void exitList_Like(NyarParser::List_LikeContext *ctx) = 0;

  virtual void enterNumber(NyarParser::NumberContext *ctx) = 0;
  virtual void exitNumber(NyarParser::NumberContext *ctx) = 0;

  virtual void enterOperatorAssign(NyarParser::OperatorAssignContext *ctx) = 0;
  virtual void exitOperatorAssign(NyarParser::OperatorAssignContext *ctx) = 0;

  virtual void enterDict(NyarParser::DictContext *ctx) = 0;
  virtual void exitDict(NyarParser::DictContext *ctx) = 0;

  virtual void enterPrefixExpression(NyarParser::PrefixExpressionContext *ctx) = 0;
  virtual void exitPrefixExpression(NyarParser::PrefixExpressionContext *ctx) = 0;

  virtual void enterLogic_Like(NyarParser::Logic_LikeContext *ctx) = 0;
  virtual void exitLogic_Like(NyarParser::Logic_LikeContext *ctx) = 0;

  virtual void enterPower_Like(NyarParser::Power_LikeContext *ctx) = 0;
  virtual void exitPower_Like(NyarParser::Power_LikeContext *ctx) = 0;

  virtual void enterMultiply_Like(NyarParser::Multiply_LikeContext *ctx) = 0;
  virtual void exitMultiply_Like(NyarParser::Multiply_LikeContext *ctx) = 0;

  virtual void enterList(NyarParser::ListContext *ctx) = 0;
  virtual void exitList(NyarParser::ListContext *ctx) = 0;

  virtual void enterBinary_Like(NyarParser::Binary_LikeContext *ctx) = 0;
  virtual void exitBinary_Like(NyarParser::Binary_LikeContext *ctx) = 0;

  virtual void enterTuple(NyarParser::TupleContext *ctx) = 0;
  virtual void exitTuple(NyarParser::TupleContext *ctx) = 0;

  virtual void enterAssignable(NyarParser::AssignableContext *ctx) = 0;
  virtual void exitAssignable(NyarParser::AssignableContext *ctx) = 0;

  virtual void enterModifierAssign(NyarParser::ModifierAssignContext *ctx) = 0;
  virtual void exitModifierAssign(NyarParser::ModifierAssignContext *ctx) = 0;

  virtual void enterAssignTuple(NyarParser::AssignTupleContext *ctx) = 0;
  virtual void exitAssignTuple(NyarParser::AssignTupleContext *ctx) = 0;

  virtual void enterAssignPass(NyarParser::AssignPassContext *ctx) = 0;
  virtual void exitAssignPass(NyarParser::AssignPassContext *ctx) = 0;

  virtual void enterModuleStatement(NyarParser::ModuleStatementContext *ctx) = 0;
  virtual void exitModuleStatement(NyarParser::ModuleStatementContext *ctx) = 0;

  virtual void enterMacroStatement(NyarParser::MacroStatementContext *ctx) = 0;
  virtual void exitMacroStatement(NyarParser::MacroStatementContext *ctx) = 0;

  virtual void enterTemplateStatement(NyarParser::TemplateStatementContext *ctx) = 0;
  virtual void exitTemplateStatement(NyarParser::TemplateStatementContext *ctx) = 0;

  virtual void enterInterfaceStatement(NyarParser::InterfaceStatementContext *ctx) = 0;
  virtual void exitInterfaceStatement(NyarParser::InterfaceStatementContext *ctx) = 0;

  virtual void enterClassStatement(NyarParser::ClassStatementContext *ctx) = 0;
  virtual void exitClassStatement(NyarParser::ClassStatementContext *ctx) = 0;

  virtual void enterIfStatement(NyarParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(NyarParser::IfStatementContext *ctx) = 0;

  virtual void enterElseif(NyarParser::ElseifContext *ctx) = 0;
  virtual void exitElseif(NyarParser::ElseifContext *ctx) = 0;

  virtual void enterCondition(NyarParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(NyarParser::ConditionContext *ctx) = 0;

  virtual void enterTryStatement(NyarParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(NyarParser::TryStatementContext *ctx) = 0;

  virtual void enterCatchProduction(NyarParser::CatchProductionContext *ctx) = 0;
  virtual void exitCatchProduction(NyarParser::CatchProductionContext *ctx) = 0;

  virtual void enterFinalProduction(NyarParser::FinalProductionContext *ctx) = 0;
  virtual void exitFinalProduction(NyarParser::FinalProductionContext *ctx) = 0;

  virtual void enterTupleLiteral(NyarParser::TupleLiteralContext *ctx) = 0;
  virtual void exitTupleLiteral(NyarParser::TupleLiteralContext *ctx) = 0;

  virtual void enterSingle(NyarParser::SingleContext *ctx) = 0;
  virtual void exitSingle(NyarParser::SingleContext *ctx) = 0;

  virtual void enterDictLiteral(NyarParser::DictLiteralContext *ctx) = 0;
  virtual void exitDictLiteral(NyarParser::DictLiteralContext *ctx) = 0;

  virtual void enterKeyvalue(NyarParser::KeyvalueContext *ctx) = 0;
  virtual void exitKeyvalue(NyarParser::KeyvalueContext *ctx) = 0;

  virtual void enterListLiteral(NyarParser::ListLiteralContext *ctx) = 0;
  virtual void exitListLiteral(NyarParser::ListLiteralContext *ctx) = 0;

  virtual void enterElement(NyarParser::ElementContext *ctx) = 0;
  virtual void exitElement(NyarParser::ElementContext *ctx) = 0;

  virtual void enterSignedInteger(NyarParser::SignedIntegerContext *ctx) = 0;
  virtual void exitSignedInteger(NyarParser::SignedIntegerContext *ctx) = 0;


};

