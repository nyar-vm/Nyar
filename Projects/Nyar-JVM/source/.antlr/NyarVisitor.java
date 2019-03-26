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
	 * Visit a parse tree produced by {@link NyarParser#expressionStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#moduleStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitModuleStatement(NyarParser.ModuleStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#assignStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignStatement(NyarParser.AssignStatementContext ctx);
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
	 * Visit a parse tree produced by the {@code Integer}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInteger(NyarParser.IntegerContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Multiply_Divide_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiply_Divide_(NyarParser.Multiply_Divide_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code List_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList_(NyarParser.List_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code Symbol}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Real}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReal(NyarParser.RealContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Binary_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBinary_(NyarParser.Binary_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code String}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString(NyarParser.StringContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Logic_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogic_(NyarParser.Logic_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code Power_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPower_(NyarParser.Power_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code PriorityOperation}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPriorityOperation(NyarParser.PriorityOperationContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Add_Subtract_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAdd_Subtract_(NyarParser.Add_Subtract_Context ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList(NyarParser.ListContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#record}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRecord(NyarParser.RecordContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#keyValue}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitKeyValue(NyarParser.KeyValueContext ctx);
	/**
	 * Visit a parse tree produced by {@link NyarParser#mathAlias}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMathAlias(NyarParser.MathAliasContext ctx);
}