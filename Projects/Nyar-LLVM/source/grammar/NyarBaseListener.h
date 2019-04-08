
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

  virtual void enterExpr_block(NyarParser::Expr_blockContext * /*ctx*/) override { }
  virtual void exitExpr_block(NyarParser::Expr_blockContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(NyarParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(NyarParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterEos(NyarParser::EosContext * /*ctx*/) override { }
  virtual void exitEos(NyarParser::EosContext * /*ctx*/) override { }

  virtual void enterEol(NyarParser::EolContext * /*ctx*/) override { }
  virtual void exitEol(NyarParser::EolContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(NyarParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(NyarParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterPriorityExpression(NyarParser::PriorityExpressionContext * /*ctx*/) override { }
  virtual void exitPriorityExpression(NyarParser::PriorityExpressionContext * /*ctx*/) override { }

  virtual void enterSymbol(NyarParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(NyarParser::SymbolContext * /*ctx*/) override { }

  virtual void enterPlus_Like(NyarParser::Plus_LikeContext * /*ctx*/) override { }
  virtual void exitPlus_Like(NyarParser::Plus_LikeContext * /*ctx*/) override { }

  virtual void enterString(NyarParser::StringContext * /*ctx*/) override { }
  virtual void exitString(NyarParser::StringContext * /*ctx*/) override { }

  virtual void enterList_Like(NyarParser::List_LikeContext * /*ctx*/) override { }
  virtual void exitList_Like(NyarParser::List_LikeContext * /*ctx*/) override { }

  virtual void enterNumber(NyarParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(NyarParser::NumberContext * /*ctx*/) override { }

  virtual void enterOperatorAssign(NyarParser::OperatorAssignContext * /*ctx*/) override { }
  virtual void exitOperatorAssign(NyarParser::OperatorAssignContext * /*ctx*/) override { }

  virtual void enterDict(NyarParser::DictContext * /*ctx*/) override { }
  virtual void exitDict(NyarParser::DictContext * /*ctx*/) override { }

  virtual void enterPrefixExpression(NyarParser::PrefixExpressionContext * /*ctx*/) override { }
  virtual void exitPrefixExpression(NyarParser::PrefixExpressionContext * /*ctx*/) override { }

  virtual void enterLogic_Like(NyarParser::Logic_LikeContext * /*ctx*/) override { }
  virtual void exitLogic_Like(NyarParser::Logic_LikeContext * /*ctx*/) override { }

  virtual void enterPower_Like(NyarParser::Power_LikeContext * /*ctx*/) override { }
  virtual void exitPower_Like(NyarParser::Power_LikeContext * /*ctx*/) override { }

  virtual void enterMultiply_Like(NyarParser::Multiply_LikeContext * /*ctx*/) override { }
  virtual void exitMultiply_Like(NyarParser::Multiply_LikeContext * /*ctx*/) override { }

  virtual void enterList(NyarParser::ListContext * /*ctx*/) override { }
  virtual void exitList(NyarParser::ListContext * /*ctx*/) override { }

  virtual void enterBinary_Like(NyarParser::Binary_LikeContext * /*ctx*/) override { }
  virtual void exitBinary_Like(NyarParser::Binary_LikeContext * /*ctx*/) override { }

  virtual void enterTuple(NyarParser::TupleContext * /*ctx*/) override { }
  virtual void exitTuple(NyarParser::TupleContext * /*ctx*/) override { }

  virtual void enterAssignable(NyarParser::AssignableContext * /*ctx*/) override { }
  virtual void exitAssignable(NyarParser::AssignableContext * /*ctx*/) override { }

  virtual void enterModifierAssign(NyarParser::ModifierAssignContext * /*ctx*/) override { }
  virtual void exitModifierAssign(NyarParser::ModifierAssignContext * /*ctx*/) override { }

  virtual void enterAssignTuple(NyarParser::AssignTupleContext * /*ctx*/) override { }
  virtual void exitAssignTuple(NyarParser::AssignTupleContext * /*ctx*/) override { }

  virtual void enterAssignPass(NyarParser::AssignPassContext * /*ctx*/) override { }
  virtual void exitAssignPass(NyarParser::AssignPassContext * /*ctx*/) override { }

  virtual void enterModuleStatement(NyarParser::ModuleStatementContext * /*ctx*/) override { }
  virtual void exitModuleStatement(NyarParser::ModuleStatementContext * /*ctx*/) override { }

  virtual void enterMacroStatement(NyarParser::MacroStatementContext * /*ctx*/) override { }
  virtual void exitMacroStatement(NyarParser::MacroStatementContext * /*ctx*/) override { }

  virtual void enterTemplateStatement(NyarParser::TemplateStatementContext * /*ctx*/) override { }
  virtual void exitTemplateStatement(NyarParser::TemplateStatementContext * /*ctx*/) override { }

  virtual void enterInterfaceStatement(NyarParser::InterfaceStatementContext * /*ctx*/) override { }
  virtual void exitInterfaceStatement(NyarParser::InterfaceStatementContext * /*ctx*/) override { }

  virtual void enterClassStatement(NyarParser::ClassStatementContext * /*ctx*/) override { }
  virtual void exitClassStatement(NyarParser::ClassStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(NyarParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(NyarParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseif(NyarParser::ElseifContext * /*ctx*/) override { }
  virtual void exitElseif(NyarParser::ElseifContext * /*ctx*/) override { }

  virtual void enterCondition(NyarParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(NyarParser::ConditionContext * /*ctx*/) override { }

  virtual void enterTryStatement(NyarParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(NyarParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCatchProduction(NyarParser::CatchProductionContext * /*ctx*/) override { }
  virtual void exitCatchProduction(NyarParser::CatchProductionContext * /*ctx*/) override { }

  virtual void enterFinalProduction(NyarParser::FinalProductionContext * /*ctx*/) override { }
  virtual void exitFinalProduction(NyarParser::FinalProductionContext * /*ctx*/) override { }

  virtual void enterTupleLiteral(NyarParser::TupleLiteralContext * /*ctx*/) override { }
  virtual void exitTupleLiteral(NyarParser::TupleLiteralContext * /*ctx*/) override { }

  virtual void enterSingle(NyarParser::SingleContext * /*ctx*/) override { }
  virtual void exitSingle(NyarParser::SingleContext * /*ctx*/) override { }

  virtual void enterDictLiteral(NyarParser::DictLiteralContext * /*ctx*/) override { }
  virtual void exitDictLiteral(NyarParser::DictLiteralContext * /*ctx*/) override { }

  virtual void enterKeyvalue(NyarParser::KeyvalueContext * /*ctx*/) override { }
  virtual void exitKeyvalue(NyarParser::KeyvalueContext * /*ctx*/) override { }

  virtual void enterListLiteral(NyarParser::ListLiteralContext * /*ctx*/) override { }
  virtual void exitListLiteral(NyarParser::ListLiteralContext * /*ctx*/) override { }

  virtual void enterElement(NyarParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(NyarParser::ElementContext * /*ctx*/) override { }

  virtual void enterSignedInteger(NyarParser::SignedIntegerContext * /*ctx*/) override { }
  virtual void exitSignedInteger(NyarParser::SignedIntegerContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

