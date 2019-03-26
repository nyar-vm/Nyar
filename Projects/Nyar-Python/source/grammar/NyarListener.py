# Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .NyarParser import NyarParser
else:
    from NyarParser import NyarParser

# This class defines a complete listener for a parse tree produced by NyarParser.
class NyarListener(ParseTreeListener):

    # Enter a parse tree produced by NyarParser#program.
    def enterProgram(self, ctx:NyarParser.ProgramContext):
        pass

    # Exit a parse tree produced by NyarParser#program.
    def exitProgram(self, ctx:NyarParser.ProgramContext):
        pass


    # Enter a parse tree produced by NyarParser#statement.
    def enterStatement(self, ctx:NyarParser.StatementContext):
        pass

    # Exit a parse tree produced by NyarParser#statement.
    def exitStatement(self, ctx:NyarParser.StatementContext):
        pass


    # Enter a parse tree produced by NyarParser#expressionStatement.
    def enterExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#expressionStatement.
    def exitExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#moduleStatement.
    def enterModuleStatement(self, ctx:NyarParser.ModuleStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#moduleStatement.
    def exitModuleStatement(self, ctx:NyarParser.ModuleStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#assignStatement.
    def enterAssignStatement(self, ctx:NyarParser.AssignStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#assignStatement.
    def exitAssignStatement(self, ctx:NyarParser.AssignStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#macroStatement.
    def enterMacroStatement(self, ctx:NyarParser.MacroStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#macroStatement.
    def exitMacroStatement(self, ctx:NyarParser.MacroStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#templateStatement.
    def enterTemplateStatement(self, ctx:NyarParser.TemplateStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#templateStatement.
    def exitTemplateStatement(self, ctx:NyarParser.TemplateStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#interfaceStatement.
    def enterInterfaceStatement(self, ctx:NyarParser.InterfaceStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#interfaceStatement.
    def exitInterfaceStatement(self, ctx:NyarParser.InterfaceStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#classStatement.
    def enterClassStatement(self, ctx:NyarParser.ClassStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#classStatement.
    def exitClassStatement(self, ctx:NyarParser.ClassStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#Integer.
    def enterInteger(self, ctx:NyarParser.IntegerContext):
        pass

    # Exit a parse tree produced by NyarParser#Integer.
    def exitInteger(self, ctx:NyarParser.IntegerContext):
        pass


    # Enter a parse tree produced by NyarParser#Multiply_Divide_.
    def enterMultiply_Divide_(self, ctx:NyarParser.Multiply_Divide_Context):
        pass

    # Exit a parse tree produced by NyarParser#Multiply_Divide_.
    def exitMultiply_Divide_(self, ctx:NyarParser.Multiply_Divide_Context):
        pass


    # Enter a parse tree produced by NyarParser#List_.
    def enterList_(self, ctx:NyarParser.List_Context):
        pass

    # Exit a parse tree produced by NyarParser#List_.
    def exitList_(self, ctx:NyarParser.List_Context):
        pass


    # Enter a parse tree produced by NyarParser#Symbol.
    def enterSymbol(self, ctx:NyarParser.SymbolContext):
        pass

    # Exit a parse tree produced by NyarParser#Symbol.
    def exitSymbol(self, ctx:NyarParser.SymbolContext):
        pass


    # Enter a parse tree produced by NyarParser#Real.
    def enterReal(self, ctx:NyarParser.RealContext):
        pass

    # Exit a parse tree produced by NyarParser#Real.
    def exitReal(self, ctx:NyarParser.RealContext):
        pass


    # Enter a parse tree produced by NyarParser#Binary_.
    def enterBinary_(self, ctx:NyarParser.Binary_Context):
        pass

    # Exit a parse tree produced by NyarParser#Binary_.
    def exitBinary_(self, ctx:NyarParser.Binary_Context):
        pass


    # Enter a parse tree produced by NyarParser#String.
    def enterString(self, ctx:NyarParser.StringContext):
        pass

    # Exit a parse tree produced by NyarParser#String.
    def exitString(self, ctx:NyarParser.StringContext):
        pass


    # Enter a parse tree produced by NyarParser#Logic_.
    def enterLogic_(self, ctx:NyarParser.Logic_Context):
        pass

    # Exit a parse tree produced by NyarParser#Logic_.
    def exitLogic_(self, ctx:NyarParser.Logic_Context):
        pass


    # Enter a parse tree produced by NyarParser#Power_.
    def enterPower_(self, ctx:NyarParser.Power_Context):
        pass

    # Exit a parse tree produced by NyarParser#Power_.
    def exitPower_(self, ctx:NyarParser.Power_Context):
        pass


    # Enter a parse tree produced by NyarParser#PriorityOperation.
    def enterPriorityOperation(self, ctx:NyarParser.PriorityOperationContext):
        pass

    # Exit a parse tree produced by NyarParser#PriorityOperation.
    def exitPriorityOperation(self, ctx:NyarParser.PriorityOperationContext):
        pass


    # Enter a parse tree produced by NyarParser#Add_Subtract_.
    def enterAdd_Subtract_(self, ctx:NyarParser.Add_Subtract_Context):
        pass

    # Exit a parse tree produced by NyarParser#Add_Subtract_.
    def exitAdd_Subtract_(self, ctx:NyarParser.Add_Subtract_Context):
        pass


    # Enter a parse tree produced by NyarParser#list.
    def enterList(self, ctx:NyarParser.ListContext):
        pass

    # Exit a parse tree produced by NyarParser#list.
    def exitList(self, ctx:NyarParser.ListContext):
        pass


    # Enter a parse tree produced by NyarParser#record.
    def enterRecord(self, ctx:NyarParser.RecordContext):
        pass

    # Exit a parse tree produced by NyarParser#record.
    def exitRecord(self, ctx:NyarParser.RecordContext):
        pass


    # Enter a parse tree produced by NyarParser#keyValue.
    def enterKeyValue(self, ctx:NyarParser.KeyValueContext):
        pass

    # Exit a parse tree produced by NyarParser#keyValue.
    def exitKeyValue(self, ctx:NyarParser.KeyValueContext):
        pass


    # Enter a parse tree produced by NyarParser#mathAlias.
    def enterMathAlias(self, ctx:NyarParser.MathAliasContext):
        pass

    # Exit a parse tree produced by NyarParser#mathAlias.
    def exitMathAlias(self, ctx:NyarParser.MathAliasContext):
        pass


