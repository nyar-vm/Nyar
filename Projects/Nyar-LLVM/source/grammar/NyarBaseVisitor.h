
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

  virtual antlrcpp::Any visitExpressionStatement(NyarParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleStatement(NyarParser::ModuleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignStatement(NyarParser::AssignStatementContext *ctx) override {
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

  virtual antlrcpp::Any visitInteger(NyarParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiply_Divide_(NyarParser::Multiply_Divide_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_(NyarParser::List_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbol(NyarParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal(NyarParser::RealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_(NyarParser::Binary_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(NyarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogic_(NyarParser::Logic_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPower_(NyarParser::Power_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPriorityOperation(NyarParser::PriorityOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_Subtract_(NyarParser::Add_Subtract_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(NyarParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecord(NyarParser::RecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyValue(NyarParser::KeyValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathAlias(NyarParser::MathAliasContext *ctx) override {
    return visitChildren(ctx);
  }


};

