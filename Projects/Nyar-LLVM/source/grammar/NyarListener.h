
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

  virtual void enterExpressionStatement(NyarParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(NyarParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterModuleStatement(NyarParser::ModuleStatementContext *ctx) = 0;
  virtual void exitModuleStatement(NyarParser::ModuleStatementContext *ctx) = 0;

  virtual void enterAssignStatement(NyarParser::AssignStatementContext *ctx) = 0;
  virtual void exitAssignStatement(NyarParser::AssignStatementContext *ctx) = 0;

  virtual void enterMacroStatement(NyarParser::MacroStatementContext *ctx) = 0;
  virtual void exitMacroStatement(NyarParser::MacroStatementContext *ctx) = 0;

  virtual void enterTemplateStatement(NyarParser::TemplateStatementContext *ctx) = 0;
  virtual void exitTemplateStatement(NyarParser::TemplateStatementContext *ctx) = 0;

  virtual void enterInterfaceStatement(NyarParser::InterfaceStatementContext *ctx) = 0;
  virtual void exitInterfaceStatement(NyarParser::InterfaceStatementContext *ctx) = 0;

  virtual void enterClassStatement(NyarParser::ClassStatementContext *ctx) = 0;
  virtual void exitClassStatement(NyarParser::ClassStatementContext *ctx) = 0;

  virtual void enterInteger(NyarParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(NyarParser::IntegerContext *ctx) = 0;

  virtual void enterMultiply_Divide_(NyarParser::Multiply_Divide_Context *ctx) = 0;
  virtual void exitMultiply_Divide_(NyarParser::Multiply_Divide_Context *ctx) = 0;

  virtual void enterList_(NyarParser::List_Context *ctx) = 0;
  virtual void exitList_(NyarParser::List_Context *ctx) = 0;

  virtual void enterSymbol(NyarParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(NyarParser::SymbolContext *ctx) = 0;

  virtual void enterReal(NyarParser::RealContext *ctx) = 0;
  virtual void exitReal(NyarParser::RealContext *ctx) = 0;

  virtual void enterBinary_(NyarParser::Binary_Context *ctx) = 0;
  virtual void exitBinary_(NyarParser::Binary_Context *ctx) = 0;

  virtual void enterString(NyarParser::StringContext *ctx) = 0;
  virtual void exitString(NyarParser::StringContext *ctx) = 0;

  virtual void enterLogic_(NyarParser::Logic_Context *ctx) = 0;
  virtual void exitLogic_(NyarParser::Logic_Context *ctx) = 0;

  virtual void enterPower_(NyarParser::Power_Context *ctx) = 0;
  virtual void exitPower_(NyarParser::Power_Context *ctx) = 0;

  virtual void enterPriorityOperation(NyarParser::PriorityOperationContext *ctx) = 0;
  virtual void exitPriorityOperation(NyarParser::PriorityOperationContext *ctx) = 0;

  virtual void enterAdd_Subtract_(NyarParser::Add_Subtract_Context *ctx) = 0;
  virtual void exitAdd_Subtract_(NyarParser::Add_Subtract_Context *ctx) = 0;

  virtual void enterList(NyarParser::ListContext *ctx) = 0;
  virtual void exitList(NyarParser::ListContext *ctx) = 0;

  virtual void enterRecord(NyarParser::RecordContext *ctx) = 0;
  virtual void exitRecord(NyarParser::RecordContext *ctx) = 0;

  virtual void enterKeyValue(NyarParser::KeyValueContext *ctx) = 0;
  virtual void exitKeyValue(NyarParser::KeyValueContext *ctx) = 0;

  virtual void enterMathAlias(NyarParser::MathAliasContext *ctx) = 0;
  virtual void exitMathAlias(NyarParser::MathAliasContext *ctx) = 0;


};

