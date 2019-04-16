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


    # Enter a parse tree produced by NyarParser#BlockStatement.
    def enterBlockStatement(self, ctx:NyarParser.BlockStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#BlockStatement.
    def exitBlockStatement(self, ctx:NyarParser.BlockStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#expr_or_block.
    def enterExpr_or_block(self, ctx:NyarParser.Expr_or_blockContext):
        pass

    # Exit a parse tree produced by NyarParser#expr_or_block.
    def exitExpr_or_block(self, ctx:NyarParser.Expr_or_blockContext):
        pass


    # Enter a parse tree produced by NyarParser#EmptyStatement.
    def enterEmptyStatement(self, ctx:NyarParser.EmptyStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#EmptyStatement.
    def exitEmptyStatement(self, ctx:NyarParser.EmptyStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#eos.
    def enterEos(self, ctx:NyarParser.EosContext):
        pass

    # Exit a parse tree produced by NyarParser#eos.
    def exitEos(self, ctx:NyarParser.EosContext):
        pass


    # Enter a parse tree produced by NyarParser#symbol.
    def enterSymbol(self, ctx:NyarParser.SymbolContext):
        pass

    # Exit a parse tree produced by NyarParser#symbol.
    def exitSymbol(self, ctx:NyarParser.SymbolContext):
        pass


    # Enter a parse tree produced by NyarParser#global.
    def enterGlobal(self, ctx:NyarParser.GlobalContext):
        pass

    # Exit a parse tree produced by NyarParser#global.
    def exitGlobal(self, ctx:NyarParser.GlobalContext):
        pass


    # Enter a parse tree produced by NyarParser#ExpressionStatement.
    def enterExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#ExpressionStatement.
    def exitExpressionStatement(self, ctx:NyarParser.ExpressionStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#TypeAssign.
    def enterTypeAssign(self, ctx:NyarParser.TypeAssignContext):
        pass

    # Exit a parse tree produced by NyarParser#TypeAssign.
    def exitTypeAssign(self, ctx:NyarParser.TypeAssignContext):
        pass


    # Enter a parse tree produced by NyarParser#function_apply.
    def enterFunction_apply(self, ctx:NyarParser.Function_applyContext):
        pass

    # Exit a parse tree produced by NyarParser#function_apply.
    def exitFunction_apply(self, ctx:NyarParser.Function_applyContext):
        pass


    # Enter a parse tree produced by NyarParser#function_params.
    def enterFunction_params(self, ctx:NyarParser.Function_paramsContext):
        pass

    # Exit a parse tree produced by NyarParser#function_params.
    def exitFunction_params(self, ctx:NyarParser.Function_paramsContext):
        pass


    # Enter a parse tree produced by NyarParser#PriorityExpression.
    def enterPriorityExpression(self, ctx:NyarParser.PriorityExpressionContext):
        pass

    # Exit a parse tree produced by NyarParser#PriorityExpression.
    def exitPriorityExpression(self, ctx:NyarParser.PriorityExpressionContext):
        pass


    # Enter a parse tree produced by NyarParser#FunctionApply.
    def enterFunctionApply(self, ctx:NyarParser.FunctionApplyContext):
        pass

    # Exit a parse tree produced by NyarParser#FunctionApply.
    def exitFunctionApply(self, ctx:NyarParser.FunctionApplyContext):
        pass


    # Enter a parse tree produced by NyarParser#Index.
    def enterIndex(self, ctx:NyarParser.IndexContext):
        pass

    # Exit a parse tree produced by NyarParser#Index.
    def exitIndex(self, ctx:NyarParser.IndexContext):
        pass


    # Enter a parse tree produced by NyarParser#String.
    def enterString(self, ctx:NyarParser.StringContext):
        pass

    # Exit a parse tree produced by NyarParser#String.
    def exitString(self, ctx:NyarParser.StringContext):
        pass


    # Enter a parse tree produced by NyarParser#BinaryLike.
    def enterBinaryLike(self, ctx:NyarParser.BinaryLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#BinaryLike.
    def exitBinaryLike(self, ctx:NyarParser.BinaryLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#LogicLike.
    def enterLogicLike(self, ctx:NyarParser.LogicLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#LogicLike.
    def exitLogicLike(self, ctx:NyarParser.LogicLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#MethodApply.
    def enterMethodApply(self, ctx:NyarParser.MethodApplyContext):
        pass

    # Exit a parse tree produced by NyarParser#MethodApply.
    def exitMethodApply(self, ctx:NyarParser.MethodApplyContext):
        pass


    # Enter a parse tree produced by NyarParser#CompareLike.
    def enterCompareLike(self, ctx:NyarParser.CompareLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#CompareLike.
    def exitCompareLike(self, ctx:NyarParser.CompareLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#PlusLike.
    def enterPlusLike(self, ctx:NyarParser.PlusLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#PlusLike.
    def exitPlusLike(self, ctx:NyarParser.PlusLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#LazyAssign.
    def enterLazyAssign(self, ctx:NyarParser.LazyAssignContext):
        pass

    # Exit a parse tree produced by NyarParser#LazyAssign.
    def exitLazyAssign(self, ctx:NyarParser.LazyAssignContext):
        pass


    # Enter a parse tree produced by NyarParser#PowerLike.
    def enterPowerLike(self, ctx:NyarParser.PowerLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#PowerLike.
    def exitPowerLike(self, ctx:NyarParser.PowerLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#TypeStatement.
    def enterTypeStatement(self, ctx:NyarParser.TypeStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#TypeStatement.
    def exitTypeStatement(self, ctx:NyarParser.TypeStatementContext):
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


    # Enter a parse tree produced by NyarParser#SymbolExpression.
    def enterSymbolExpression(self, ctx:NyarParser.SymbolExpressionContext):
        pass

    # Exit a parse tree produced by NyarParser#SymbolExpression.
    def exitSymbolExpression(self, ctx:NyarParser.SymbolExpressionContext):
        pass


    # Enter a parse tree produced by NyarParser#List.
    def enterList(self, ctx:NyarParser.ListContext):
        pass

    # Exit a parse tree produced by NyarParser#List.
    def exitList(self, ctx:NyarParser.ListContext):
        pass


    # Enter a parse tree produced by NyarParser#PostfixExpression.
    def enterPostfixExpression(self, ctx:NyarParser.PostfixExpressionContext):
        pass

    # Exit a parse tree produced by NyarParser#PostfixExpression.
    def exitPostfixExpression(self, ctx:NyarParser.PostfixExpressionContext):
        pass


    # Enter a parse tree produced by NyarParser#MultiplyLike.
    def enterMultiplyLike(self, ctx:NyarParser.MultiplyLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#MultiplyLike.
    def exitMultiplyLike(self, ctx:NyarParser.MultiplyLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#ListLike.
    def enterListLike(self, ctx:NyarParser.ListLikeContext):
        pass

    # Exit a parse tree produced by NyarParser#ListLike.
    def exitListLike(self, ctx:NyarParser.ListLikeContext):
        pass


    # Enter a parse tree produced by NyarParser#pst_ops.
    def enterPst_ops(self, ctx:NyarParser.Pst_opsContext):
        pass

    # Exit a parse tree produced by NyarParser#pst_ops.
    def exitPst_ops(self, ctx:NyarParser.Pst_opsContext):
        pass


    # Enter a parse tree produced by NyarParser#AssignStatement.
    def enterAssignStatement(self, ctx:NyarParser.AssignStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#AssignStatement.
    def exitAssignStatement(self, ctx:NyarParser.AssignStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#assignable.
    def enterAssignable(self, ctx:NyarParser.AssignableContext):
        pass

    # Exit a parse tree produced by NyarParser#assignable.
    def exitAssignable(self, ctx:NyarParser.AssignableContext):
        pass


    # Enter a parse tree produced by NyarParser#AssignValue.
    def enterAssignValue(self, ctx:NyarParser.AssignValueContext):
        pass

    # Exit a parse tree produced by NyarParser#AssignValue.
    def exitAssignValue(self, ctx:NyarParser.AssignValueContext):
        pass


    # Enter a parse tree produced by NyarParser#AssignAttribute.
    def enterAssignAttribute(self, ctx:NyarParser.AssignAttributeContext):
        pass

    # Exit a parse tree produced by NyarParser#AssignAttribute.
    def exitAssignAttribute(self, ctx:NyarParser.AssignAttributeContext):
        pass


    # Enter a parse tree produced by NyarParser#AssignFunction.
    def enterAssignFunction(self, ctx:NyarParser.AssignFunctionContext):
        pass

    # Exit a parse tree produced by NyarParser#AssignFunction.
    def exitAssignFunction(self, ctx:NyarParser.AssignFunctionContext):
        pass


    # Enter a parse tree produced by NyarParser#AssignPair.
    def enterAssignPair(self, ctx:NyarParser.AssignPairContext):
        pass

    # Exit a parse tree produced by NyarParser#AssignPair.
    def exitAssignPair(self, ctx:NyarParser.AssignPairContext):
        pass


    # Enter a parse tree produced by NyarParser#AssignWithList.
    def enterAssignWithList(self, ctx:NyarParser.AssignWithListContext):
        pass

    # Exit a parse tree produced by NyarParser#AssignWithList.
    def exitAssignWithList(self, ctx:NyarParser.AssignWithListContext):
        pass


    # Enter a parse tree produced by NyarParser#assign_pass.
    def enterAssign_pass(self, ctx:NyarParser.Assign_passContext):
        pass

    # Exit a parse tree produced by NyarParser#assign_pass.
    def exitAssign_pass(self, ctx:NyarParser.Assign_passContext):
        pass


    # Enter a parse tree produced by NyarParser#ModuleInclude.
    def enterModuleInclude(self, ctx:NyarParser.ModuleIncludeContext):
        pass

    # Exit a parse tree produced by NyarParser#ModuleInclude.
    def exitModuleInclude(self, ctx:NyarParser.ModuleIncludeContext):
        pass


    # Enter a parse tree produced by NyarParser#ModuleAlias.
    def enterModuleAlias(self, ctx:NyarParser.ModuleAliasContext):
        pass

    # Exit a parse tree produced by NyarParser#ModuleAlias.
    def exitModuleAlias(self, ctx:NyarParser.ModuleAliasContext):
        pass


    # Enter a parse tree produced by NyarParser#ModuleSymbol.
    def enterModuleSymbol(self, ctx:NyarParser.ModuleSymbolContext):
        pass

    # Exit a parse tree produced by NyarParser#ModuleSymbol.
    def exitModuleSymbol(self, ctx:NyarParser.ModuleSymbolContext):
        pass


    # Enter a parse tree produced by NyarParser#ModuleSymbols.
    def enterModuleSymbols(self, ctx:NyarParser.ModuleSymbolsContext):
        pass

    # Exit a parse tree produced by NyarParser#ModuleSymbols.
    def exitModuleSymbols(self, ctx:NyarParser.ModuleSymbolsContext):
        pass


    # Enter a parse tree produced by NyarParser#ModuleResolve.
    def enterModuleResolve(self, ctx:NyarParser.ModuleResolveContext):
        pass

    # Exit a parse tree produced by NyarParser#ModuleResolve.
    def exitModuleResolve(self, ctx:NyarParser.ModuleResolveContext):
        pass


    # Enter a parse tree produced by NyarParser#id_tuples.
    def enterId_tuples(self, ctx:NyarParser.Id_tuplesContext):
        pass

    # Exit a parse tree produced by NyarParser#id_tuples.
    def exitId_tuples(self, ctx:NyarParser.Id_tuplesContext):
        pass


    # Enter a parse tree produced by NyarParser#ClassBase.
    def enterClassBase(self, ctx:NyarParser.ClassBaseContext):
        pass

    # Exit a parse tree produced by NyarParser#ClassBase.
    def exitClassBase(self, ctx:NyarParser.ClassBaseContext):
        pass


    # Enter a parse tree produced by NyarParser#ClassWithFather.
    def enterClassWithFather(self, ctx:NyarParser.ClassWithFatherContext):
        pass

    # Exit a parse tree produced by NyarParser#ClassWithFather.
    def exitClassWithFather(self, ctx:NyarParser.ClassWithFatherContext):
        pass


    # Enter a parse tree produced by NyarParser#ClassFather.
    def enterClassFather(self, ctx:NyarParser.ClassFatherContext):
        pass

    # Exit a parse tree produced by NyarParser#ClassFather.
    def exitClassFather(self, ctx:NyarParser.ClassFatherContext):
        pass


    # Enter a parse tree produced by NyarParser#ClassFathers.
    def enterClassFathers(self, ctx:NyarParser.ClassFathersContext):
        pass

    # Exit a parse tree produced by NyarParser#ClassFathers.
    def exitClassFathers(self, ctx:NyarParser.ClassFathersContext):
        pass


    # Enter a parse tree produced by NyarParser#ClassImplement.
    def enterClassImplement(self, ctx:NyarParser.ClassImplementContext):
        pass

    # Exit a parse tree produced by NyarParser#ClassImplement.
    def exitClassImplement(self, ctx:NyarParser.ClassImplementContext):
        pass


    # Enter a parse tree produced by NyarParser#ClassDefine.
    def enterClassDefine(self, ctx:NyarParser.ClassDefineContext):
        pass

    # Exit a parse tree produced by NyarParser#ClassDefine.
    def exitClassDefine(self, ctx:NyarParser.ClassDefineContext):
        pass


    # Enter a parse tree produced by NyarParser#interface_Statement.
    def enterInterface_Statement(self, ctx:NyarParser.Interface_StatementContext):
        pass

    # Exit a parse tree produced by NyarParser#interface_Statement.
    def exitInterface_Statement(self, ctx:NyarParser.Interface_StatementContext):
        pass


    # Enter a parse tree produced by NyarParser#template_Statement.
    def enterTemplate_Statement(self, ctx:NyarParser.Template_StatementContext):
        pass

    # Exit a parse tree produced by NyarParser#template_Statement.
    def exitTemplate_Statement(self, ctx:NyarParser.Template_StatementContext):
        pass


    # Enter a parse tree produced by NyarParser#macro_Statement.
    def enterMacro_Statement(self, ctx:NyarParser.Macro_StatementContext):
        pass

    # Exit a parse tree produced by NyarParser#macro_Statement.
    def exitMacro_Statement(self, ctx:NyarParser.Macro_StatementContext):
        pass


    # Enter a parse tree produced by NyarParser#IfSingle.
    def enterIfSingle(self, ctx:NyarParser.IfSingleContext):
        pass

    # Exit a parse tree produced by NyarParser#IfSingle.
    def exitIfSingle(self, ctx:NyarParser.IfSingleContext):
        pass


    # Enter a parse tree produced by NyarParser#IfNested.
    def enterIfNested(self, ctx:NyarParser.IfNestedContext):
        pass

    # Exit a parse tree produced by NyarParser#IfNested.
    def exitIfNested(self, ctx:NyarParser.IfNestedContext):
        pass


    # Enter a parse tree produced by NyarParser#SwitchStatement.
    def enterSwitchStatement(self, ctx:NyarParser.SwitchStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#SwitchStatement.
    def exitSwitchStatement(self, ctx:NyarParser.SwitchStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#MatchStatement.
    def enterMatchStatement(self, ctx:NyarParser.MatchStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#MatchStatement.
    def exitMatchStatement(self, ctx:NyarParser.MatchStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#ConditionStatement.
    def enterConditionStatement(self, ctx:NyarParser.ConditionStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#ConditionStatement.
    def exitConditionStatement(self, ctx:NyarParser.ConditionStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#ElseStatement.
    def enterElseStatement(self, ctx:NyarParser.ElseStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#ElseStatement.
    def exitElseStatement(self, ctx:NyarParser.ElseStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#ElseIfStatement.
    def enterElseIfStatement(self, ctx:NyarParser.ElseIfStatementContext):
        pass

    # Exit a parse tree produced by NyarParser#ElseIfStatement.
    def exitElseIfStatement(self, ctx:NyarParser.ElseIfStatementContext):
        pass


    # Enter a parse tree produced by NyarParser#try_statement.
    def enterTry_statement(self, ctx:NyarParser.Try_statementContext):
        pass

    # Exit a parse tree produced by NyarParser#try_statement.
    def exitTry_statement(self, ctx:NyarParser.Try_statementContext):
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


    # Enter a parse tree produced by NyarParser#ForLoop.
    def enterForLoop(self, ctx:NyarParser.ForLoopContext):
        pass

    # Exit a parse tree produced by NyarParser#ForLoop.
    def exitForLoop(self, ctx:NyarParser.ForLoopContext):
        pass


    # Enter a parse tree produced by NyarParser#ForInLoop.
    def enterForInLoop(self, ctx:NyarParser.ForInLoopContext):
        pass

    # Exit a parse tree produced by NyarParser#ForInLoop.
    def exitForInLoop(self, ctx:NyarParser.ForInLoopContext):
        pass


    # Enter a parse tree produced by NyarParser#WhileLoop.
    def enterWhileLoop(self, ctx:NyarParser.WhileLoopContext):
        pass

    # Exit a parse tree produced by NyarParser#WhileLoop.
    def exitWhileLoop(self, ctx:NyarParser.WhileLoopContext):
        pass


    # Enter a parse tree produced by NyarParser#DoLoop.
    def enterDoLoop(self, ctx:NyarParser.DoLoopContext):
        pass

    # Exit a parse tree produced by NyarParser#DoLoop.
    def exitDoLoop(self, ctx:NyarParser.DoLoopContext):
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


    # Enter a parse tree produced by NyarParser#key_valid.
    def enterKey_valid(self, ctx:NyarParser.Key_validContext):
        pass

    # Exit a parse tree produced by NyarParser#key_valid.
    def exitKey_valid(self, ctx:NyarParser.Key_validContext):
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


    # Enter a parse tree produced by NyarParser#indexLiteral.
    def enterIndexLiteral(self, ctx:NyarParser.IndexLiteralContext):
        pass

    # Exit a parse tree produced by NyarParser#indexLiteral.
    def exitIndexLiteral(self, ctx:NyarParser.IndexLiteralContext):
        pass


    # Enter a parse tree produced by NyarParser#index_valid.
    def enterIndex_valid(self, ctx:NyarParser.Index_validContext):
        pass

    # Exit a parse tree produced by NyarParser#index_valid.
    def exitIndex_valid(self, ctx:NyarParser.Index_validContext):
        pass


    # Enter a parse tree produced by NyarParser#signedInteger.
    def enterSignedInteger(self, ctx:NyarParser.SignedIntegerContext):
        pass

    # Exit a parse tree produced by NyarParser#signedInteger.
    def exitSignedInteger(self, ctx:NyarParser.SignedIntegerContext):
        pass


