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


    # Visit a parse tree produced by NyarParser#BlockStatement.
    def visitBlockStatement(self, ctx:NyarParser.BlockStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#expr_or_block.
    def visitExpr_or_block(self, ctx:NyarParser.Expr_or_blockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#EmptyStatement.
    def visitEmptyStatement(self, ctx:NyarParser.EmptyStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#eos.
    def visitEos(self, ctx:NyarParser.EosContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#symbol.
    def visitSymbol(self, ctx:NyarParser.SymbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#global.
    def visitGlobal(self, ctx:NyarParser.GlobalContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ExpressionStatement.
    def visitExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#TypeAssign.
    def visitTypeAssign(self, ctx:NyarParser.TypeAssignContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#function_apply.
    def visitFunction_apply(self, ctx:NyarParser.Function_applyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#function_params.
    def visitFunction_params(self, ctx:NyarParser.Function_paramsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PriorityExpression.
    def visitPriorityExpression(self, ctx:NyarParser.PriorityExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#FunctionApply.
    def visitFunctionApply(self, ctx:NyarParser.FunctionApplyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#Index.
    def visitIndex(self, ctx:NyarParser.IndexContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#String.
    def visitString(self, ctx:NyarParser.StringContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#BinaryLike.
    def visitBinaryLike(self, ctx:NyarParser.BinaryLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#LogicLike.
    def visitLogicLike(self, ctx:NyarParser.LogicLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#MethodApply.
    def visitMethodApply(self, ctx:NyarParser.MethodApplyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#CompareLike.
    def visitCompareLike(self, ctx:NyarParser.CompareLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PlusLike.
    def visitPlusLike(self, ctx:NyarParser.PlusLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#LazyAssign.
    def visitLazyAssign(self, ctx:NyarParser.LazyAssignContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PowerLike.
    def visitPowerLike(self, ctx:NyarParser.PowerLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#TypeStatement.
    def visitTypeStatement(self, ctx:NyarParser.TypeStatementContext):
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


    # Visit a parse tree produced by NyarParser#SymbolExpression.
    def visitSymbolExpression(self, ctx:NyarParser.SymbolExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#List.
    def visitList(self, ctx:NyarParser.ListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#PostfixExpression.
    def visitPostfixExpression(self, ctx:NyarParser.PostfixExpressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#MultiplyLike.
    def visitMultiplyLike(self, ctx:NyarParser.MultiplyLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ListLike.
    def visitListLike(self, ctx:NyarParser.ListLikeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#pst_ops.
    def visitPst_ops(self, ctx:NyarParser.Pst_opsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#AssignStatement.
    def visitAssignStatement(self, ctx:NyarParser.AssignStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#assignable.
    def visitAssignable(self, ctx:NyarParser.AssignableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#AssignValue.
    def visitAssignValue(self, ctx:NyarParser.AssignValueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#AssignAttribute.
    def visitAssignAttribute(self, ctx:NyarParser.AssignAttributeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#AssignFunction.
    def visitAssignFunction(self, ctx:NyarParser.AssignFunctionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#AssignPair.
    def visitAssignPair(self, ctx:NyarParser.AssignPairContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#AssignWithList.
    def visitAssignWithList(self, ctx:NyarParser.AssignWithListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#assign_pass.
    def visitAssign_pass(self, ctx:NyarParser.Assign_passContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ModuleInclude.
    def visitModuleInclude(self, ctx:NyarParser.ModuleIncludeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ModuleAlias.
    def visitModuleAlias(self, ctx:NyarParser.ModuleAliasContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ModuleSymbol.
    def visitModuleSymbol(self, ctx:NyarParser.ModuleSymbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ModuleSymbols.
    def visitModuleSymbols(self, ctx:NyarParser.ModuleSymbolsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ModuleResolve.
    def visitModuleResolve(self, ctx:NyarParser.ModuleResolveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#id_tuples.
    def visitId_tuples(self, ctx:NyarParser.Id_tuplesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ClassBase.
    def visitClassBase(self, ctx:NyarParser.ClassBaseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ClassWithFather.
    def visitClassWithFather(self, ctx:NyarParser.ClassWithFatherContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ClassFather.
    def visitClassFather(self, ctx:NyarParser.ClassFatherContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ClassFathers.
    def visitClassFathers(self, ctx:NyarParser.ClassFathersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ClassImplement.
    def visitClassImplement(self, ctx:NyarParser.ClassImplementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ClassDefine.
    def visitClassDefine(self, ctx:NyarParser.ClassDefineContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#interface_Statement.
    def visitInterface_Statement(self, ctx:NyarParser.Interface_StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#template_Statement.
    def visitTemplate_Statement(self, ctx:NyarParser.Template_StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#macro_Statement.
    def visitMacro_Statement(self, ctx:NyarParser.Macro_StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#IfSingle.
    def visitIfSingle(self, ctx:NyarParser.IfSingleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#IfNested.
    def visitIfNested(self, ctx:NyarParser.IfNestedContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#SwitchStatement.
    def visitSwitchStatement(self, ctx:NyarParser.SwitchStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#MatchStatement.
    def visitMatchStatement(self, ctx:NyarParser.MatchStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ConditionStatement.
    def visitConditionStatement(self, ctx:NyarParser.ConditionStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ElseStatement.
    def visitElseStatement(self, ctx:NyarParser.ElseStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ElseIfStatement.
    def visitElseIfStatement(self, ctx:NyarParser.ElseIfStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#try_statement.
    def visitTry_statement(self, ctx:NyarParser.Try_statementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#catchProduction.
    def visitCatchProduction(self, ctx:NyarParser.CatchProductionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#finalProduction.
    def visitFinalProduction(self, ctx:NyarParser.FinalProductionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ForLoop.
    def visitForLoop(self, ctx:NyarParser.ForLoopContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#ForInLoop.
    def visitForInLoop(self, ctx:NyarParser.ForInLoopContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#WhileLoop.
    def visitWhileLoop(self, ctx:NyarParser.WhileLoopContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#DoLoop.
    def visitDoLoop(self, ctx:NyarParser.DoLoopContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#dictLiteral.
    def visitDictLiteral(self, ctx:NyarParser.DictLiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#keyvalue.
    def visitKeyvalue(self, ctx:NyarParser.KeyvalueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#key_valid.
    def visitKey_valid(self, ctx:NyarParser.Key_validContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#listLiteral.
    def visitListLiteral(self, ctx:NyarParser.ListLiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#element.
    def visitElement(self, ctx:NyarParser.ElementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#indexLiteral.
    def visitIndexLiteral(self, ctx:NyarParser.IndexLiteralContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#index_valid.
    def visitIndex_valid(self, ctx:NyarParser.Index_validContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by NyarParser#signedInteger.
    def visitSignedInteger(self, ctx:NyarParser.SignedIntegerContext):
        return self.visitChildren(ctx)



del NyarParser