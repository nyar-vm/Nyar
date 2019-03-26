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
	 * Enter a parse tree produced by {@link NyarParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStatement(NyarParser.ExpressionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#moduleStatement}.
	 * @param ctx the parse tree
	 */
	void enterModuleStatement(NyarParser.ModuleStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#moduleStatement}.
	 * @param ctx the parse tree
	 */
	void exitModuleStatement(NyarParser.ModuleStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#assignStatement}.
	 * @param ctx the parse tree
	 */
	void enterAssignStatement(NyarParser.AssignStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#assignStatement}.
	 * @param ctx the parse tree
	 */
	void exitAssignStatement(NyarParser.AssignStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#macroStatement}.
	 * @param ctx the parse tree
	 */
	void enterMacroStatement(NyarParser.MacroStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#macroStatement}.
	 * @param ctx the parse tree
	 */
	void exitMacroStatement(NyarParser.MacroStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#templateStatement}.
	 * @param ctx the parse tree
	 */
	void enterTemplateStatement(NyarParser.TemplateStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#templateStatement}.
	 * @param ctx the parse tree
	 */
	void exitTemplateStatement(NyarParser.TemplateStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#interfaceStatement}.
	 * @param ctx the parse tree
	 */
	void enterInterfaceStatement(NyarParser.InterfaceStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#interfaceStatement}.
	 * @param ctx the parse tree
	 */
	void exitInterfaceStatement(NyarParser.InterfaceStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#classStatement}.
	 * @param ctx the parse tree
	 */
	void enterClassStatement(NyarParser.ClassStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#classStatement}.
	 * @param ctx the parse tree
	 */
	void exitClassStatement(NyarParser.ClassStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Integer}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterInteger(NyarParser.IntegerContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Integer}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitInteger(NyarParser.IntegerContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Multiply_Divide_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMultiply_Divide_(NyarParser.Multiply_Divide_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code Multiply_Divide_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMultiply_Divide_(NyarParser.Multiply_Divide_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code List_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterList_(NyarParser.List_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code List_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitList_(NyarParser.List_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code Symbol}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Symbol}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitSymbol(NyarParser.SymbolContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Real}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterReal(NyarParser.RealContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Real}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitReal(NyarParser.RealContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Binary_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBinary_(NyarParser.Binary_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code Binary_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBinary_(NyarParser.Binary_Context ctx);
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
	 * Enter a parse tree produced by the {@code Logic_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterLogic_(NyarParser.Logic_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code Logic_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitLogic_(NyarParser.Logic_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code Power_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPower_(NyarParser.Power_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code Power_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPower_(NyarParser.Power_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code PriorityOperation}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPriorityOperation(NyarParser.PriorityOperationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PriorityOperation}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPriorityOperation(NyarParser.PriorityOperationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Add_Subtract_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAdd_Subtract_(NyarParser.Add_Subtract_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code Add_Subtract_}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAdd_Subtract_(NyarParser.Add_Subtract_Context ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#list}.
	 * @param ctx the parse tree
	 */
	void enterList(NyarParser.ListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#list}.
	 * @param ctx the parse tree
	 */
	void exitList(NyarParser.ListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#record}.
	 * @param ctx the parse tree
	 */
	void enterRecord(NyarParser.RecordContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#record}.
	 * @param ctx the parse tree
	 */
	void exitRecord(NyarParser.RecordContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#keyValue}.
	 * @param ctx the parse tree
	 */
	void enterKeyValue(NyarParser.KeyValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#keyValue}.
	 * @param ctx the parse tree
	 */
	void exitKeyValue(NyarParser.KeyValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#mathAlias}.
	 * @param ctx the parse tree
	 */
	void enterMathAlias(NyarParser.MathAliasContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#mathAlias}.
	 * @param ctx the parse tree
	 */
	void exitMathAlias(NyarParser.MathAliasContext ctx);
}