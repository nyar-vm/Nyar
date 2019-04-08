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
	 * Visit a parse tree produced by {@link NyarParser#blockStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlockStatement(NyarParser.BlockStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#expr_block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr_block(NyarParser.Expr_blockContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#emptyStatement}.
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
	 * Visit a parse tree produced by {@link NyarParser#eol}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEol(NyarParser.EolContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#expressionStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PriorityExpression}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPriorityExpression(NyarParser.PriorityExpressionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Symbol}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Plus_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPlus_Like(NyarParser.Plus_LikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code String}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString(NyarParser.StringContext ctx);
	/**
	 * Visit a parse tree produced by the {@code List_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList_Like(NyarParser.List_LikeContext ctx);
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
	 * Visit a parse tree produced by the {@code Logic_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogic_Like(NyarParser.Logic_LikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Power_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPower_Like(NyarParser.Power_LikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Multiply_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiply_Like(NyarParser.Multiply_LikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code List}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList(NyarParser.ListContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Binary_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBinary_Like(NyarParser.Binary_LikeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Tuple}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTuple(NyarParser.TupleContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#assignable}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignable(NyarParser.AssignableContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ModifierAssign}
	 * labeled alternative in {@link NyarParser#assignStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModifierAssign(NyarParser.ModifierAssignContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#assignTuple}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignTuple(NyarParser.AssignTupleContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#assignPass}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignPass(NyarParser.AssignPassContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#moduleStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleStatement(NyarParser.ModuleStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#macroStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMacroStatement(NyarParser.MacroStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#templateStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTemplateStatement(NyarParser.TemplateStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#interfaceStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInterfaceStatement(NyarParser.InterfaceStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#classStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitClassStatement(NyarParser.ClassStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#ifStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfStatement(NyarParser.IfStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#elseif}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitElseif(NyarParser.ElseifContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#condition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCondition(NyarParser.ConditionContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#tryStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTryStatement(NyarParser.TryStatementContext ctx);
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
	 * Visit a parse tree produced by {@link NyarParser#tupleLiteral}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTupleLiteral(NyarParser.TupleLiteralContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#single}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSingle(NyarParser.SingleContext ctx);
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
	 * Visit a parse tree produced by {@link NyarParser#signedInteger}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSignedInteger(NyarParser.SignedIntegerContext ctx);
}