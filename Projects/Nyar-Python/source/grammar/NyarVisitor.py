# Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .NyarParser import NyarParser
else:
    from NyarParser import NyarParser

# This class defines a complete generic visitor for a parse tree produced by NyarParser.

class NyarVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by NyarParser#program.
    def visitProgram(self, ctx:NyarParser.ProgramContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#statement.
    def visitStatement(self, ctx:NyarParser.StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#expressionStatement.
    def visitExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#moduleStatement.
    def visitModuleStatement(self, ctx:NyarParser.ModuleStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#assignStatement.
    def visitAssignStatement(self, ctx:NyarParser.AssignStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#macroStatement.
    def visitMacroStatement(self, ctx:NyarParser.MacroStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#templateStatement.
    def visitTemplateStatement(self, ctx:NyarParser.TemplateStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#interfaceStatement.
    def visitInterfaceStatement(self, ctx:NyarParser.InterfaceStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#classStatement.
    def visitClassStatement(self, ctx:NyarParser.ClassStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Integer.
    def visitInteger(self, ctx:NyarParser.IntegerContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Multiply_Divide_.
    def visitMultiply_Divide_(self, ctx:NyarParser.Multiply_Divide_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#List_.
    def visitList_(self, ctx:NyarParser.List_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Symbol.
    def visitSymbol(self, ctx:NyarParser.SymbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Real.
    def visitReal(self, ctx:NyarParser.RealContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Binary_.
    def visitBinary_(self, ctx:NyarParser.Binary_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#String.
    def visitString(self, ctx:NyarParser.StringContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Logic_.
    def visitLogic_(self, ctx:NyarParser.Logic_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Power_.
    def visitPower_(self, ctx:NyarParser.Power_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PriorityOperation.
    def visitPriorityOperation(self, ctx:NyarParser.PriorityOperationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Add_Subtract_.
    def visitAdd_Subtract_(self, ctx:NyarParser.Add_Subtract_Context):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#list.
    def visitList(self, ctx:NyarParser.ListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#record.
    def visitRecord(self, ctx:NyarParser.RecordContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#keyValue.
    def visitKeyValue(self, ctx:NyarParser.KeyValueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#mathAlias.
    def visitMathAlias(self, ctx:NyarParser.MathAliasContext):
        return self.visitChildren(ctx)



del NyarParser