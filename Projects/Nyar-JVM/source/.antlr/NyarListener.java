// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link NyarParser}.
 */
public interface NyarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link NyarParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(NyarParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(NyarParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(NyarParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(NyarParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code BlockStatement}
	 * labeled alternative in {@link NyarParser#block_statement}.
	 * @param ctx the parse tree
	 */
	void enterBlockStatement(NyarParser.BlockStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code BlockStatement}
	 * labeled alternative in {@link NyarParser#block_statement}.
	 * @param ctx the parse tree
	 */
	void exitBlockStatement(NyarParser.BlockStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#expr_or_block}.
	 * @param ctx the parse tree
	 */
	void enterExpr_or_block(NyarParser.Expr_or_blockContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#expr_or_block}.
	 * @param ctx the parse tree
	 */
	void exitExpr_or_block(NyarParser.Expr_or_blockContext ctx);
	/**
	 * Enter a parse tree produced by the {@code EmptyStatement}
	 * labeled alternative in {@link NyarParser#empty_statement}.
	 * @param ctx the parse tree
	 */
	void enterEmptyStatement(NyarParser.EmptyStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code EmptyStatement}
	 * labeled alternative in {@link NyarParser#empty_statement}.
	 * @param ctx the parse tree
	 */
	void exitEmptyStatement(NyarParser.EmptyStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#eos}.
	 * @param ctx the parse tree
	 */
	void enterEos(NyarParser.EosContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#eos}.
	 * @param ctx the parse tree
	 */
	void exitEos(NyarParser.EosContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#symbol}.
	 * @param ctx the parse tree
	 */
	void enterSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#symbol}.
	 * @param ctx the parse tree
	 */
	void exitSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#global}.
	 * @param ctx the parse tree
	 */
	void enterGlobal(NyarParser.GlobalContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#global}.
	 * @param ctx the parse tree
	 */
	void exitGlobal(NyarParser.GlobalContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ExpressionStatement}
	 * labeled alternative in {@link NyarParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ExpressionStatement}
	 * labeled alternative in {@link NyarParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code TypeAssign}
	 * labeled alternative in {@link NyarParser#type_statement}.
	 * @param ctx the parse tree
	 */
	void enterTypeAssign(NyarParser.TypeAssignContext ctx);
	/**
	 * Exit a parse tree produced by the {@code TypeAssign}
	 * labeled alternative in {@link NyarParser#type_statement}.
	 * @param ctx the parse tree
	 */
	void exitTypeAssign(NyarParser.TypeAssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#function_apply}.
	 * @param ctx the parse tree
	 */
	void enterFunction_apply(NyarParser.Function_applyContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#function_apply}.
	 * @param ctx the parse tree
	 */
	void exitFunction_apply(NyarParser.Function_applyContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#function_params}.
	 * @param ctx the parse tree
	 */
	void enterFunction_params(NyarParser.Function_paramsContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#function_params}.
	 * @param ctx the parse tree
	 */
	void exitFunction_params(NyarParser.Function_paramsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PriorityExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPriorityExpression(NyarParser.PriorityExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PriorityExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPriorityExpression(NyarParser.PriorityExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code FunctionApply}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterFunctionApply(NyarParser.FunctionApplyContext ctx);
	/**
	 * Exit a parse tree produced by the {@code FunctionApply}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitFunctionApply(NyarParser.FunctionApplyContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Index}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterIndex(NyarParser.IndexContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Index}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitIndex(NyarParser.IndexContext ctx);
	/**
	 * Enter a parse tree produced by the {@code String}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterString(NyarParser.StringContext ctx);
	/**
	 * Exit a parse tree produced by the {@code String}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitString(NyarParser.StringContext ctx);
	/**
	 * Enter a parse tree produced by the {@code BinaryLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBinaryLike(NyarParser.BinaryLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code BinaryLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBinaryLike(NyarParser.BinaryLikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code LogicLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterLogicLike(NyarParser.LogicLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code LogicLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitLogicLike(NyarParser.LogicLikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MethodApply}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMethodApply(NyarParser.MethodApplyContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MethodApply}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMethodApply(NyarParser.MethodApplyContext ctx);
	/**
	 * Enter a parse tree produced by the {@code CompareLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterCompareLike(NyarParser.CompareLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code CompareLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitCompareLike(NyarParser.CompareLikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PlusLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPlusLike(NyarParser.PlusLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PlusLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPlusLike(NyarParser.PlusLikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code LazyAssign}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterLazyAssign(NyarParser.LazyAssignContext ctx);
	/**
	 * Exit a parse tree produced by the {@code LazyAssign}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitLazyAssign(NyarParser.LazyAssignContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PowerLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPowerLike(NyarParser.PowerLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PowerLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPowerLike(NyarParser.PowerLikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code TypeStatement}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterTypeStatement(NyarParser.TypeStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code TypeStatement}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitTypeStatement(NyarParser.TypeStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Number}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterNumber(NyarParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitNumber(NyarParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code OperatorAssign}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterOperatorAssign(NyarParser.OperatorAssignContext ctx);
	/**
	 * Exit a parse tree produced by the {@code OperatorAssign}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitOperatorAssign(NyarParser.OperatorAssignContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Dict}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterDict(NyarParser.DictContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Dict}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitDict(NyarParser.DictContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PrefixExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPrefixExpression(NyarParser.PrefixExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PrefixExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPrefixExpression(NyarParser.PrefixExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code SymbolExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterSymbolExpression(NyarParser.SymbolExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code SymbolExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitSymbolExpression(NyarParser.SymbolExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code List}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterList(NyarParser.ListContext ctx);
	/**
	 * Exit a parse tree produced by the {@code List}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitList(NyarParser.ListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PostfixExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression(NyarParser.PostfixExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PostfixExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression(NyarParser.PostfixExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MultiplyLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMultiplyLike(NyarParser.MultiplyLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MultiplyLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMultiplyLike(NyarParser.MultiplyLikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ListLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterListLike(NyarParser.ListLikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ListLike}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitListLike(NyarParser.ListLikeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#pst_ops}.
	 * @param ctx the parse tree
	 */
	void enterPst_ops(NyarParser.Pst_opsContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#pst_ops}.
	 * @param ctx the parse tree
	 */
	void exitPst_ops(NyarParser.Pst_opsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AssignStatement}
	 * labeled alternative in {@link NyarParser#assign_statement}.
	 * @param ctx the parse tree
	 */
	void enterAssignStatement(NyarParser.AssignStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AssignStatement}
	 * labeled alternative in {@link NyarParser#assign_statement}.
	 * @param ctx the parse tree
	 */
	void exitAssignStatement(NyarParser.AssignStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#assignable}.
	 * @param ctx the parse tree
	 */
	void enterAssignable(NyarParser.AssignableContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#assignable}.
	 * @param ctx the parse tree
	 */
	void exitAssignable(NyarParser.AssignableContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AssignValue}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void enterAssignValue(NyarParser.AssignValueContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AssignValue}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void exitAssignValue(NyarParser.AssignValueContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AssignAttribute}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void enterAssignAttribute(NyarParser.AssignAttributeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AssignAttribute}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void exitAssignAttribute(NyarParser.AssignAttributeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AssignFunction}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void enterAssignFunction(NyarParser.AssignFunctionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AssignFunction}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void exitAssignFunction(NyarParser.AssignFunctionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AssignPair}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void enterAssignPair(NyarParser.AssignPairContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AssignPair}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void exitAssignPair(NyarParser.AssignPairContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AssignWithList}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void enterAssignWithList(NyarParser.AssignWithListContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AssignWithList}
	 * labeled alternative in {@link NyarParser#assign_lhs}.
	 * @param ctx the parse tree
	 */
	void exitAssignWithList(NyarParser.AssignWithListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#assign_pass}.
	 * @param ctx the parse tree
	 */
	void enterAssign_pass(NyarParser.Assign_passContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#assign_pass}.
	 * @param ctx the parse tree
	 */
	void exitAssign_pass(NyarParser.Assign_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ModuleInclude}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void enterModuleInclude(NyarParser.ModuleIncludeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModuleInclude}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void exitModuleInclude(NyarParser.ModuleIncludeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ModuleAlias}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void enterModuleAlias(NyarParser.ModuleAliasContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModuleAlias}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void exitModuleAlias(NyarParser.ModuleAliasContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ModuleSymbol}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void enterModuleSymbol(NyarParser.ModuleSymbolContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModuleSymbol}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void exitModuleSymbol(NyarParser.ModuleSymbolContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ModuleSymbols}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void enterModuleSymbols(NyarParser.ModuleSymbolsContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModuleSymbols}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void exitModuleSymbols(NyarParser.ModuleSymbolsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ModuleResolve}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void enterModuleResolve(NyarParser.ModuleResolveContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModuleResolve}
	 * labeled alternative in {@link NyarParser#module_statement}.
	 * @param ctx the parse tree
	 */
	void exitModuleResolve(NyarParser.ModuleResolveContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#id_tuples}.
	 * @param ctx the parse tree
	 */
	void enterId_tuples(NyarParser.Id_tuplesContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#id_tuples}.
	 * @param ctx the parse tree
	 */
	void exitId_tuples(NyarParser.Id_tuplesContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ClassBase}
	 * labeled alternative in {@link NyarParser#class_statement}.
	 * @param ctx the parse tree
	 */
	void enterClassBase(NyarParser.ClassBaseContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ClassBase}
	 * labeled alternative in {@link NyarParser#class_statement}.
	 * @param ctx the parse tree
	 */
	void exitClassBase(NyarParser.ClassBaseContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ClassWithFather}
	 * labeled alternative in {@link NyarParser#class_statement}.
	 * @param ctx the parse tree
	 */
	void enterClassWithFather(NyarParser.ClassWithFatherContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ClassWithFather}
	 * labeled alternative in {@link NyarParser#class_statement}.
	 * @param ctx the parse tree
	 */
	void exitClassWithFather(NyarParser.ClassWithFatherContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ClassFather}
	 * labeled alternative in {@link NyarParser#class_fathers}.
	 * @param ctx the parse tree
	 */
	void enterClassFather(NyarParser.ClassFatherContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ClassFather}
	 * labeled alternative in {@link NyarParser#class_fathers}.
	 * @param ctx the parse tree
	 */
	void exitClassFather(NyarParser.ClassFatherContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ClassFathers}
	 * labeled alternative in {@link NyarParser#class_fathers}.
	 * @param ctx the parse tree
	 */
	void enterClassFathers(NyarParser.ClassFathersContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ClassFathers}
	 * labeled alternative in {@link NyarParser#class_fathers}.
	 * @param ctx the parse tree
	 */
	void exitClassFathers(NyarParser.ClassFathersContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ClassImplement}
	 * labeled alternative in {@link NyarParser#class_implement}.
	 * @param ctx the parse tree
	 */
	void enterClassImplement(NyarParser.ClassImplementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ClassImplement}
	 * labeled alternative in {@link NyarParser#class_implement}.
	 * @param ctx the parse tree
	 */
	void exitClassImplement(NyarParser.ClassImplementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ClassDefine}
	 * labeled alternative in {@link NyarParser#class_define}.
	 * @param ctx the parse tree
	 */
	void enterClassDefine(NyarParser.ClassDefineContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ClassDefine}
	 * labeled alternative in {@link NyarParser#class_define}.
	 * @param ctx the parse tree
	 */
	void exitClassDefine(NyarParser.ClassDefineContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#interface_Statement}.
	 * @param ctx the parse tree
	 */
	void enterInterface_Statement(NyarParser.Interface_StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#interface_Statement}.
	 * @param ctx the parse tree
	 */
	void exitInterface_Statement(NyarParser.Interface_StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#template_Statement}.
	 * @param ctx the parse tree
	 */
	void enterTemplate_Statement(NyarParser.Template_StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#template_Statement}.
	 * @param ctx the parse tree
	 */
	void exitTemplate_Statement(NyarParser.Template_StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#macro_Statement}.
	 * @param ctx the parse tree
	 */
	void enterMacro_Statement(NyarParser.Macro_StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#macro_Statement}.
	 * @param ctx the parse tree
	 */
	void exitMacro_Statement(NyarParser.Macro_StatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IfSingle}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void enterIfSingle(NyarParser.IfSingleContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IfSingle}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void exitIfSingle(NyarParser.IfSingleContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IfNested}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void enterIfNested(NyarParser.IfNestedContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IfNested}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void exitIfNested(NyarParser.IfNestedContext ctx);
	/**
	 * Enter a parse tree produced by the {@code SwitchStatement}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void enterSwitchStatement(NyarParser.SwitchStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code SwitchStatement}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void exitSwitchStatement(NyarParser.SwitchStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MatchStatement}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void enterMatchStatement(NyarParser.MatchStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MatchStatement}
	 * labeled alternative in {@link NyarParser#branch_statement}.
	 * @param ctx the parse tree
	 */
	void exitMatchStatement(NyarParser.MatchStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ConditionStatement}
	 * labeled alternative in {@link NyarParser#condition_statement}.
	 * @param ctx the parse tree
	 */
	void enterConditionStatement(NyarParser.ConditionStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ConditionStatement}
	 * labeled alternative in {@link NyarParser#condition_statement}.
	 * @param ctx the parse tree
	 */
	void exitConditionStatement(NyarParser.ConditionStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ElseStatement}
	 * labeled alternative in {@link NyarParser#if_else}.
	 * @param ctx the parse tree
	 */
	void enterElseStatement(NyarParser.ElseStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ElseStatement}
	 * labeled alternative in {@link NyarParser#if_else}.
	 * @param ctx the parse tree
	 */
	void exitElseStatement(NyarParser.ElseStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ElseIfStatement}
	 * labeled alternative in {@link NyarParser#if_elseif}.
	 * @param ctx the parse tree
	 */
	void enterElseIfStatement(NyarParser.ElseIfStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ElseIfStatement}
	 * labeled alternative in {@link NyarParser#if_elseif}.
	 * @param ctx the parse tree
	 */
	void exitElseIfStatement(NyarParser.ElseIfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#try_statement}.
	 * @param ctx the parse tree
	 */
	void enterTry_statement(NyarParser.Try_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#try_statement}.
	 * @param ctx the parse tree
	 */
	void exitTry_statement(NyarParser.Try_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#catchProduction}.
	 * @param ctx the parse tree
	 */
	void enterCatchProduction(NyarParser.CatchProductionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#catchProduction}.
	 * @param ctx the parse tree
	 */
	void exitCatchProduction(NyarParser.CatchProductionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#finalProduction}.
	 * @param ctx the parse tree
	 */
	void enterFinalProduction(NyarParser.FinalProductionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#finalProduction}.
	 * @param ctx the parse tree
	 */
	void exitFinalProduction(NyarParser.FinalProductionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ForLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterForLoop(NyarParser.ForLoopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ForLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitForLoop(NyarParser.ForLoopContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ForInLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterForInLoop(NyarParser.ForInLoopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ForInLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitForInLoop(NyarParser.ForInLoopContext ctx);
	/**
	 * Enter a parse tree produced by the {@code WhileLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterWhileLoop(NyarParser.WhileLoopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code WhileLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitWhileLoop(NyarParser.WhileLoopContext ctx);
	/**
	 * Enter a parse tree produced by the {@code DoLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void enterDoLoop(NyarParser.DoLoopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code DoLoop}
	 * labeled alternative in {@link NyarParser#loop_statement}.
	 * @param ctx the parse tree
	 */
	void exitDoLoop(NyarParser.DoLoopContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#dictLiteral}.
	 * @param ctx the parse tree
	 */
	void enterDictLiteral(NyarParser.DictLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#dictLiteral}.
	 * @param ctx the parse tree
	 */
	void exitDictLiteral(NyarParser.DictLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#keyvalue}.
	 * @param ctx the parse tree
	 */
	void enterKeyvalue(NyarParser.KeyvalueContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#keyvalue}.
	 * @param ctx the parse tree
	 */
	void exitKeyvalue(NyarParser.KeyvalueContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#key_valid}.
	 * @param ctx the parse tree
	 */
	void enterKey_valid(NyarParser.Key_validContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#key_valid}.
	 * @param ctx the parse tree
	 */
	void exitKey_valid(NyarParser.Key_validContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#listLiteral}.
	 * @param ctx the parse tree
	 */
	void enterListLiteral(NyarParser.ListLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#listLiteral}.
	 * @param ctx the parse tree
	 */
	void exitListLiteral(NyarParser.ListLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#element}.
	 * @param ctx the parse tree
	 */
	void enterElement(NyarParser.ElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#element}.
	 * @param ctx the parse tree
	 */
	void exitElement(NyarParser.ElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#indexLiteral}.
	 * @param ctx the parse tree
	 */
	void enterIndexLiteral(NyarParser.IndexLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#indexLiteral}.
	 * @param ctx the parse tree
	 */
	void exitIndexLiteral(NyarParser.IndexLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#index_valid}.
	 * @param ctx the parse tree
	 */
	void enterIndex_valid(NyarParser.Index_validContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#index_valid}.
	 * @param ctx the parse tree
	 */
	void exitIndex_valid(NyarParser.Index_validContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#signedInteger}.
	 * @param ctx the parse tree
	 */
	void enterSignedInteger(NyarParser.SignedIntegerContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#signedInteger}.
	 * @param ctx the parse tree
	 */
	void exitSignedInteger(NyarParser.SignedIntegerContext ctx);
}