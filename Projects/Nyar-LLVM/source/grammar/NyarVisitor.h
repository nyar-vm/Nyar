
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

    virtual antlrcpp::Any visitExpressionStatement(NyarParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitModuleStatement(NyarParser::ModuleStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignStatement(NyarParser::AssignStatementContext *context) = 0;

    virtual antlrcpp::Any visitMacroStatement(NyarParser::MacroStatementContext *context) = 0;

    virtual antlrcpp::Any visitTemplateStatement(NyarParser::TemplateStatementContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceStatement(NyarParser::InterfaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassStatement(NyarParser::ClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitInteger(NyarParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitMultiply_Divide_(NyarParser::Multiply_Divide_Context *context) = 0;

    virtual antlrcpp::Any visitList_(NyarParser::List_Context *context) = 0;

    virtual antlrcpp::Any visitSymbol(NyarParser::SymbolContext *context) = 0;

    virtual antlrcpp::Any visitReal(NyarParser::RealContext *context) = 0;

    virtual antlrcpp::Any visitBinary_(NyarParser::Binary_Context *context) = 0;

    virtual antlrcpp::Any visitString(NyarParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitLogic_(NyarParser::Logic_Context *context) = 0;

    virtual antlrcpp::Any visitPower_(NyarParser::Power_Context *context) = 0;

    virtual antlrcpp::Any visitPriorityOperation(NyarParser::PriorityOperationContext *context) = 0;

    virtual antlrcpp::Any visitAdd_Subtract_(NyarParser::Add_Subtract_Context *context) = 0;

    virtual antlrcpp::Any visitList(NyarParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitRecord(NyarParser::RecordContext *context) = 0;

    virtual antlrcpp::Any visitKeyValue(NyarParser::KeyValueContext *context) = 0;

    virtual antlrcpp::Any visitMathAlias(NyarParser::MathAliasContext *context) = 0;


};

