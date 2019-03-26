
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

  virtual void enterExpressionStatement(NyarParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(NyarParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterModuleStatement(NyarParser::ModuleStatementContext * /*ctx*/) override { }
  virtual void exitModuleStatement(NyarParser::ModuleStatementContext * /*ctx*/) override { }

  virtual void enterAssignStatement(NyarParser::AssignStatementContext * /*ctx*/) override { }
  virtual void exitAssignStatement(NyarParser::AssignStatementContext * /*ctx*/) override { }

  virtual void enterMacroStatement(NyarParser::MacroStatementContext * /*ctx*/) override { }
  virtual void exitMacroStatement(NyarParser::MacroStatementContext * /*ctx*/) override { }

  virtual void enterTemplateStatement(NyarParser::TemplateStatementContext * /*ctx*/) override { }
  virtual void exitTemplateStatement(NyarParser::TemplateStatementContext * /*ctx*/) override { }

  virtual void enterInterfaceStatement(NyarParser::InterfaceStatementContext * /*ctx*/) override { }
  virtual void exitInterfaceStatement(NyarParser::InterfaceStatementContext * /*ctx*/) override { }

  virtual void enterClassStatement(NyarParser::ClassStatementContext * /*ctx*/) override { }
  virtual void exitClassStatement(NyarParser::ClassStatementContext * /*ctx*/) override { }

  virtual void enterInteger(NyarParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(NyarParser::IntegerContext * /*ctx*/) override { }

  virtual void enterMultiply_Divide_(NyarParser::Multiply_Divide_Context * /*ctx*/) override { }
  virtual void exitMultiply_Divide_(NyarParser::Multiply_Divide_Context * /*ctx*/) override { }

  virtual void enterList_(NyarParser::List_Context * /*ctx*/) override { }
  virtual void exitList_(NyarParser::List_Context * /*ctx*/) override { }

  virtual void enterSymbol(NyarParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(NyarParser::SymbolContext * /*ctx*/) override { }

  virtual void enterReal(NyarParser::RealContext * /*ctx*/) override { }
  virtual void exitReal(NyarParser::RealContext * /*ctx*/) override { }

  virtual void enterBinary_(NyarParser::Binary_Context * /*ctx*/) override { }
  virtual void exitBinary_(NyarParser::Binary_Context * /*ctx*/) override { }

  virtual void enterString(NyarParser::StringContext * /*ctx*/) override { }
  virtual void exitString(NyarParser::StringContext * /*ctx*/) override { }

  virtual void enterLogic_(NyarParser::Logic_Context * /*ctx*/) override { }
  virtual void exitLogic_(NyarParser::Logic_Context * /*ctx*/) override { }

  virtual void enterPower_(NyarParser::Power_Context * /*ctx*/) override { }
  virtual void exitPower_(NyarParser::Power_Context * /*ctx*/) override { }

  virtual void enterPriorityOperation(NyarParser::PriorityOperationContext * /*ctx*/) override { }
  virtual void exitPriorityOperation(NyarParser::PriorityOperationContext * /*ctx*/) override { }

  virtual void enterAdd_Subtract_(NyarParser::Add_Subtract_Context * /*ctx*/) override { }
  virtual void exitAdd_Subtract_(NyarParser::Add_Subtract_Context * /*ctx*/) override { }

  virtual void enterList(NyarParser::ListContext * /*ctx*/) override { }
  virtual void exitList(NyarParser::ListContext * /*ctx*/) override { }

  virtual void enterRecord(NyarParser::RecordContext * /*ctx*/) override { }
  virtual void exitRecord(NyarParser::RecordContext * /*ctx*/) override { }

  virtual void enterKeyValue(NyarParser::KeyValueContext * /*ctx*/) override { }
  virtual void exitKeyValue(NyarParser::KeyValueContext * /*ctx*/) override { }

  virtual void enterMathAlias(NyarParser::MathAliasContext * /*ctx*/) override { }
  virtual void exitMathAlias(NyarParser::MathAliasContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

