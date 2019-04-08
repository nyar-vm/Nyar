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


    # Enter a parse tree produced by NyarParser#blockStatement.
    def enterBlockStatement(self, ctx:NyarParser.BlockStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#blockStatement.
    def exitBlockStatement(self, ctx:NyarParser.BlockStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#expr_block.
    def enterExpr_block(self, ctx:NyarParser.Expr_blockContext):
        pass

    # Exit a parse tree produced by NyarParser#expr_block.
    def exitExpr_block(self, ctx:NyarParser.Expr_blockContext):
        pass


    # Enter a parse tree produced by NyarParser#emptyStatement.
    def enterEmptyStatement(self, ctx:NyarParser.EmptyStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#emptyStatement.
    def exitEmptyStatement(self, ctx:NyarParser.EmptyStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#eos.
    def enterEos(self, ctx:NyarParser.EosContext):
        pass

    # Exit a parse tree produced by NyarParser#eos.
    def exitEos(self, ctx:NyarParser.EosContext):
        pass


    # Enter a parse tree produced by NyarParser#eol.
    def enterEol(self, ctx:NyarParser.EolContext):
        pass

    # Exit a parse tree produced by NyarParser#eol.
    def exitEol(self, ctx:NyarParser.EolContext):
        pass


    # Enter a parse tree produced by NyarParser#expressionStatement.
    def enterExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#expressionStatement.
    def exitExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#PriorityExpression.
    def enterPriorityExpression(self, ctx:NyarParser.PriorityExpressionContext):
        pass

    # Exit a parse tree produced by NyarParser#PriorityExpression.
    def exitPriorityExpression(self, ctx:NyarParser.PriorityExpressionContext):
        pass


    # Enter a parse tree produced by NyarParser#Symbol.
    def enterSymbol(self, ctx:NyarParser.SymbolContext):
        pass

    # Exit a parse tree produced by NyarParser#Symbol.
    def exitSymbol(self, ctx:NyarParser.SymbolContext):
        pass


    # Enter a parse tree produced by NyarParser#Plus_Like.
    def enterPlus_Like(self, ctx:NyarParser.Plus_LikeContext):
        pass

    # Exit a parse tree produced by NyarParser#Plus_Like.
    def exitPlus_Like(self, ctx:NyarParser.Plus_LikeContext):
        pass


    # Enter a parse tree produced by NyarParser#String.
    def enterString(self, ctx:NyarParser.StringContext):
        pass

    # Exit a parse tree produced by NyarParser#String.
    def exitString(self, ctx:NyarParser.StringContext):
        pass


    # Enter a parse tree produced by NyarParser#List_Like.
    def enterList_Like(self, ctx:NyarParser.List_LikeContext):
        pass

    # Exit a parse tree produced by NyarParser#List_Like.
    def exitList_Like(self, ctx:NyarParser.List_LikeContext):
        pass


    # Enter a parse tree produced by NyarParser#Number.
    def enterNumber(self, ctx:NyarParser.NumberContext):
        pass

    # Exit a parse tree produced by NyarParser#Number.
    def exitNumber(self, ctx:NyarParser.NumberContext):
        pass


    # Enter a parse tree produced by NyarParser#OperatorAssign.
    def enterOperatorAssign(self, ctx:NyarParser.OperatorAssignContext):
        pass

    # Exit a parse tree produced by NyarParser#OperatorAssign.
    def exitOperatorAssign(self, ctx:NyarParser.OperatorAssignContext):
        pass


    # Enter a parse tree produced by NyarParser#Dict.
    def enterDict(self, ctx:NyarParser.DictContext):
        pass

    # Exit a parse tree produced by NyarParser#Dict.
    def exitDict(self, ctx:NyarParser.DictContext):
        pass


    # Enter a parse tree produced by NyarParser#PrefixExpression.
    def enterPrefixExpression(self, ctx:NyarParser.PrefixExpressionContext):
        pass

    # Exit a parse tree produced by NyarParser#PrefixExpression.
    def exitPrefixExpression(self, ctx:NyarParser.PrefixExpressionContext):
        pass


    # Enter a parse tree produced by NyarParser#Logic_Like.
    def enterLogic_Like(self, ctx:NyarParser.Logic_LikeContext):
        pass

    # Exit a parse tree produced by NyarParser#Logic_Like.
    def exitLogic_Like(self, ctx:NyarParser.Logic_LikeContext):
        pass


    # Enter a parse tree produced by NyarParser#Power_Like.
    def enterPower_Like(self, ctx:NyarParser.Power_LikeContext):
        pass

    # Exit a parse tree produced by NyarParser#Power_Like.
    def exitPower_Like(self, ctx:NyarParser.Power_LikeContext):
        pass


    # Enter a parse tree produced by NyarParser#Multiply_Like.
    def enterMultiply_Like(self, ctx:NyarParser.Multiply_LikeContext):
        pass

    # Exit a parse tree produced by NyarParser#Multiply_Like.
    def exitMultiply_Like(self, ctx:NyarParser.Multiply_LikeContext):
        pass


    # Enter a parse tree produced by NyarParser#List.
    def enterList(self, ctx:NyarParser.ListContext):
        pass

    # Exit a parse tree produced by NyarParser#List.
    def exitList(self, ctx:NyarParser.ListContext):
        pass


    # Enter a parse tree produced by NyarParser#Binary_Like.
    def enterBinary_Like(self, ctx:NyarParser.Binary_LikeContext):
        pass

    # Exit a parse tree produced by NyarParser#Binary_Like.
    def exitBinary_Like(self, ctx:NyarParser.Binary_LikeContext):
        pass


    # Enter a parse tree produced by NyarParser#Tuple.
    def enterTuple(self, ctx:NyarParser.TupleContext):
        pass

    # Exit a parse tree produced by NyarParser#Tuple.
    def exitTuple(self, ctx:NyarParser.TupleContext):
        pass


    # Enter a parse tree produced by NyarParser#assignable.
    def enterAssignable(self, ctx:NyarParser.AssignableContext):
        pass

    # Exit a parse tree produced by NyarParser#assignable.
    def exitAssignable(self, ctx:NyarParser.AssignableContext):
        pass


    # Enter a parse tree produced by NyarParser#ModifierAssign.
    def enterModifierAssign(self, ctx:NyarParser.ModifierAssignContext):
        pass

    # Exit a parse tree produced by NyarParser#ModifierAssign.
    def exitModifierAssign(self, ctx:NyarParser.ModifierAssignContext):
        pass


    # Enter a parse tree produced by NyarParser#assignTuple.
    def enterAssignTuple(self, ctx:NyarParser.AssignTupleContext):
        pass

    # Exit a parse tree produced by NyarParser#assignTuple.
    def exitAssignTuple(self, ctx:NyarParser.AssignTupleContext):
        pass


    # Enter a parse tree produced by NyarParser#assignPass.
    def enterAssignPass(self, ctx:NyarParser.AssignPassContext):
        pass

    # Exit a parse tree produced by NyarParser#assignPass.
    def exitAssignPass(self, ctx:NyarParser.AssignPassContext):
        pass


    # Enter a parse tree produced by NyarParser#moduleStatement.
    def enterModuleStatement(self, ctx:NyarParser.ModuleStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#moduleStatement.
    def exitModuleStatement(self, ctx:NyarParser.ModuleStatementContext):
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


    # Enter a parse tree produced by NyarParser#ifStatement.
    def enterIfStatement(self, ctx:NyarParser.IfStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#ifStatement.
    def exitIfStatement(self, ctx:NyarParser.IfStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#elseif.
    def enterElseif(self, ctx:NyarParser.ElseifContext):
        pass

    # Exit a parse tree produced by NyarParser#elseif.
    def exitElseif(self, ctx:NyarParser.ElseifContext):
        pass


    # Enter a parse tree produced by NyarParser#condition.
    def enterCondition(self, ctx:NyarParser.ConditionContext):
        pass

    # Exit a parse tree produced by NyarParser#condition.
    def exitCondition(self, ctx:NyarParser.ConditionContext):
        pass


    # Enter a parse tree produced by NyarParser#tryStatement.
    def enterTryStatement(self, ctx:NyarParser.TryStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#tryStatement.
    def exitTryStatement(self, ctx:NyarParser.TryStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#catchProduction.
    def enterCatchProduction(self, ctx:NyarParser.CatchProductionContext):
        pass

    # Exit a parse tree produced by NyarParser#catchProduction.
    def exitCatchProduction(self, ctx:NyarParser.CatchProductionContext):
        pass


    # Enter a parse tree produced by NyarParser#finalProduction.
    def enterFinalProduction(self, ctx:NyarParser.FinalProductionContext):
        pass

    # Exit a parse tree produced by NyarParser#finalProduction.
    def exitFinalProduction(self, ctx:NyarParser.FinalProductionContext):
        pass


    # Enter a parse tree produced by NyarParser#tupleLiteral.
    def enterTupleLiteral(self, ctx:NyarParser.TupleLiteralContext):
        pass

    # Exit a parse tree produced by NyarParser#tupleLiteral.
    def exitTupleLiteral(self, ctx:NyarParser.TupleLiteralContext):
        pass


    # Enter a parse tree produced by NyarParser#single.
    def enterSingle(self, ctx:NyarParser.SingleContext):
        pass

    # Exit a parse tree produced by NyarParser#single.
    def exitSingle(self, ctx:NyarParser.SingleContext):
        pass


    # Enter a parse tree produced by NyarParser#dictLiteral.
    def enterDictLiteral(self, ctx:NyarParser.DictLiteralContext):
        pass

    # Exit a parse tree produced by NyarParser#dictLiteral.
    def exitDictLiteral(self, ctx:NyarParser.DictLiteralContext):
        pass


    # Enter a parse tree produced by NyarParser#keyvalue.
    def enterKeyvalue(self, ctx:NyarParser.KeyvalueContext):
        pass

    # Exit a parse tree produced by NyarParser#keyvalue.
    def exitKeyvalue(self, ctx:NyarParser.KeyvalueContext):
        pass


    # Enter a parse tree produced by NyarParser#listLiteral.
    def enterListLiteral(self, ctx:NyarParser.ListLiteralContext):
        pass

    # Exit a parse tree produced by NyarParser#listLiteral.
    def exitListLiteral(self, ctx:NyarParser.ListLiteralContext):
        pass


    # Enter a parse tree produced by NyarParser#element.
    def enterElement(self, ctx:NyarParser.ElementContext):
        pass

    # Exit a parse tree produced by NyarParser#element.
    def exitElement(self, ctx:NyarParser.ElementContext):
        pass


    # Enter a parse tree produced by NyarParser#signedInteger.
    def enterSignedInteger(self, ctx:NyarParser.SignedIntegerContext):
        pass

    # Exit a parse tree produced by NyarParser#signedInteger.
    def exitSignedInteger(self, ctx:NyarParser.SignedIntegerContext):
        pass


