// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link NyarParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface NyarVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link NyarParser#program}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProgram(NyarParser.ProgramContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(NyarParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code BlockStatement}
	 * labeled alternative in {@link NyarParser#block_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlockStatement(NyarParser.BlockStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#expr_or_block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_or_block(NyarParser.Expr_or_blockContext ctx);
	/**
	 * Visit a parse tree produced by the {@code EmptyStatement}
	 * labeled alternative in {@link NyarParser#empty_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEmptyStatement(NyarParser.EmptyStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#eos}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEos(NyarParser.EosContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#symbol}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#global}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGlobal(NyarParser.GlobalContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ExpressionStatement}
	 * labeled alternative in {@link NyarParser#expression_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code TypeAssign}
	 * labeled alternative in {@link NyarParser#type_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeAssign(NyarParser.TypeAssignContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#function_apply}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunction_apply(NyarParser.Function_applyContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#function_params}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunction_params(NyarParser.Function_paramsContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PriorityExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPriorityExpression(NyarParser.PriorityExpressionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code FunctionApply}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionApply(NyarParser.FunctionApplyContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Index}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIndex(NyarParser.IndexContext ctx);
	/**
	 * Visit a parse tree produced by the {@code String}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString(NyarParser.StringContext ctx);
	/**
	 * Visit a parse tree produced by the {@code BinaryLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBinaryLike(NyarParser.BinaryLikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code LogicLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicLike(NyarParser.LogicLikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code MethodApply}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMethodApply(NyarParser.MethodApplyContext ctx);
	/**
	 * Visit a parse tree produced by the {@code CompareLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCompareLike(NyarParser.CompareLikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PlusLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPlusLike(NyarParser.PlusLikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code LazyAssign}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLazyAssign(NyarParser.LazyAssignContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PowerLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPowerLike(NyarParser.PowerLikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code TypeStatement}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeStatement(NyarParser.TypeStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumber(NyarParser.NumberContext ctx);
	/**
	 * Visit a parse tree produced by the {@code OperatorAssign}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOperatorAssign(NyarParser.OperatorAssignContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Dict}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDict(NyarParser.DictContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PrefixExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrefixExpression(NyarParser.PrefixExpressionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code SymbolExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSymbolExpression(NyarParser.SymbolExpressionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code List}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList(NyarParser.ListContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PostfixExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression(NyarParser.PostfixExpressionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code MultiplyLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiplyLike(NyarParser.MultiplyLikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ListLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitListLike(NyarParser.ListLikeContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#pst_ops}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPst_ops(NyarParser.Pst_opsContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AssignStatement}
	 * labeled alternative in {@link NyarParser#assign_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignStatement(NyarParser.AssignStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#assignable}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignable(NyarParser.AssignableContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AssignValue}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignValue(NyarParser.AssignValueContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AssignAttribute}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignAttribute(NyarParser.AssignAttributeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AssignFunction}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignFunction(NyarParser.AssignFunctionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AssignPair}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignPair(NyarParser.AssignPairContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AssignWithList}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignWithList(NyarParser.AssignWithListContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#assign_pass}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssign_pass(NyarParser.Assign_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ModuleInclude}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleInclude(NyarParser.ModuleIncludeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ModuleAlias}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleAlias(NyarParser.ModuleAliasContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ModuleSymbol}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleSymbol(NyarParser.ModuleSymbolContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ModuleSymbols}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleSymbols(NyarParser.ModuleSymbolsContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ModuleResolve}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleResolve(NyarParser.ModuleResolveContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#id_tuples}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitId_tuples(NyarParser.Id_tuplesContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ClassBase}
	 * labeled alternative in {@link NyarParser#class_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassBase(NyarParser.ClassBaseContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ClassWithFather}
	 * labeled alternative in {@link NyarParser#class_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassWithFather(NyarParser.ClassWithFatherContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ClassFather}
	 * labeled alternative in {@link NyarParser#class_fathers}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassFather(NyarParser.ClassFatherContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ClassFathers}
	 * labeled alternative in {@link NyarParser#class_fathers}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassFathers(NyarParser.ClassFathersContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ClassImplement}
	 * labeled alternative in {@link NyarParser#class_implement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassImplement(NyarParser.ClassImplementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ClassDefine}
	 * labeled alternative in {@link NyarParser#class_define}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassDefine(NyarParser.ClassDefineContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#interface_Statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInterface_Statement(NyarParser.Interface_StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#template_Statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTemplate_Statement(NyarParser.Template_StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#macro_Statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMacro_Statement(NyarParser.Macro_StatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code IfSingle}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfSingle(NyarParser.IfSingleContext ctx);
	/**
	 * Visit a parse tree produced by the {@code IfNested}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfNested(NyarParser.IfNestedContext ctx);
	/**
	 * Visit a parse tree produced by the {@code SwitchStatement}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSwitchStatement(NyarParser.SwitchStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code MatchStatement}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMatchStatement(NyarParser.MatchStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ConditionStatement}
	 * labeled alternative in {@link NyarParser#condition_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConditionStatement(NyarParser.ConditionStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ElseStatement}
	 * labeled alternative in {@link NyarParser#if_else}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitElseStatement(NyarParser.ElseStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ElseIfStatement}
	 * labeled alternative in {@link NyarParser#if_elseif}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitElseIfStatement(NyarParser.ElseIfStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#try_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTry_statement(NyarParser.Try_statementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#catchProduction}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCatchProduction(NyarParser.CatchProductionContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#finalProduction}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFinalProduction(NyarParser.FinalProductionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ForLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitForLoop(NyarParser.ForLoopContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ForInLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitForInLoop(NyarParser.ForInLoopContext ctx);
	/**
	 * Visit a parse tree produced by the {@code WhileLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhileLoop(NyarParser.WhileLoopContext ctx);
	/**
	 * Visit a parse tree produced by the {@code DoLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDoLoop(NyarParser.DoLoopContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#dictLiteral}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDictLiteral(NyarParser.DictLiteralContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#keyvalue}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitKeyvalue(NyarParser.KeyvalueContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#key_valid}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitKey_valid(NyarParser.Key_validContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#listLiteral}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitListLiteral(NyarParser.ListLiteralContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#element}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitElement(NyarParser.ElementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#indexLiteral}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIndexLiteral(NyarParser.IndexLiteralContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#index_valid}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIndex_valid(NyarParser.Index_validContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#signedInteger}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSignedInteger(NyarParser.SignedIntegerContext ctx);
}