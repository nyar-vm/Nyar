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


    # Visit a parse tree produced by NyarParser#blockStatement.
    def visitBlockStatement(self, ctx:NyarParser.BlockStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#expr_block.
    def visitExpr_block(self, ctx:NyarParser.Expr_blockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#emptyStatement.
    def visitEmptyStatement(self, ctx:NyarParser.EmptyStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#eos.
    def visitEos(self, ctx:NyarParser.EosContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#eol.
    def visitEol(self, ctx:NyarParser.EolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#expressionStatement.
    def visitExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PriorityExpression.
    def visitPriorityExpression(self, ctx:NyarParser.PriorityExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Symbol.
    def visitSymbol(self, ctx:NyarParser.SymbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Plus_Like.
    def visitPlus_Like(self, ctx:NyarParser.Plus_LikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#String.
    def visitString(self, ctx:NyarParser.StringContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#List_Like.
    def visitList_Like(self, ctx:NyarParser.List_LikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Number.
    def visitNumber(self, ctx:NyarParser.NumberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#OperatorAssign.
    def visitOperatorAssign(self, ctx:NyarParser.OperatorAssignContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Dict.
    def visitDict(self, ctx:NyarParser.DictContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PrefixExpression.
    def visitPrefixExpression(self, ctx:NyarParser.PrefixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Logic_Like.
    def visitLogic_Like(self, ctx:NyarParser.Logic_LikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Power_Like.
    def visitPower_Like(self, ctx:NyarParser.Power_LikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Multiply_Like.
    def visitMultiply_Like(self, ctx:NyarParser.Multiply_LikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#List.
    def visitList(self, ctx:NyarParser.ListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Binary_Like.
    def visitBinary_Like(self, ctx:NyarParser.Binary_LikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Tuple.
    def visitTuple(self, ctx:NyarParser.TupleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#assignable.
    def visitAssignable(self, ctx:NyarParser.AssignableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ModifierAssign.
    def visitModifierAssign(self, ctx:NyarParser.ModifierAssignContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#assignTuple.
    def visitAssignTuple(self, ctx:NyarParser.AssignTupleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#assignPass.
    def visitAssignPass(self, ctx:NyarParser.AssignPassContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#moduleStatement.
    def visitModuleStatement(self, ctx:NyarParser.ModuleStatementContext):
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


    # Visit a parse tree produced by NyarParser#ifStatement.
    def visitIfStatement(self, ctx:NyarParser.IfStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#elseif.
    def visitElseif(self, ctx:NyarParser.ElseifContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#condition.
    def visitCondition(self, ctx:NyarParser.ConditionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#tryStatement.
    def visitTryStatement(self, ctx:NyarParser.TryStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#catchProduction.
    def visitCatchProduction(self, ctx:NyarParser.CatchProductionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#finalProduction.
    def visitFinalProduction(self, ctx:NyarParser.FinalProductionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#tupleLiteral.
    def visitTupleLiteral(self, ctx:NyarParser.TupleLiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#single.
    def visitSingle(self, ctx:NyarParser.SingleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#dictLiteral.
    def visitDictLiteral(self, ctx:NyarParser.DictLiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#keyvalue.
    def visitKeyvalue(self, ctx:NyarParser.KeyvalueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#listLiteral.
    def visitListLiteral(self, ctx:NyarParser.ListLiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#element.
    def visitElement(self, ctx:NyarParser.ElementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#signedInteger.
    def visitSignedInteger(self, ctx:NyarParser.SignedIntegerContext):
        return self.visitChildren(ctx)



del NyarParser