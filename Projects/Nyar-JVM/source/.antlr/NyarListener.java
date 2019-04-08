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
	 * Enter a parse tree produced by {@link NyarParser#blockStatement}.
	 * @param ctx the parse tree
	 */
	void enterBlockStatement(NyarParser.BlockStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#blockStatement}.
	 * @param ctx the parse tree
	 */
	void exitBlockStatement(NyarParser.BlockStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#expr_block}.
	 * @param ctx the parse tree
	 */
	void enterExpr_block(NyarParser.Expr_blockContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#expr_block}.
	 * @param ctx the parse tree
	 */
	void exitExpr_block(NyarParser.Expr_blockContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#emptyStatement}.
	 * @param ctx the parse tree
	 */
	void enterEmptyStatement(NyarParser.EmptyStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#emptyStatement}.
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
	 * Enter a parse tree produced by {@link NyarParser#eol}.
	 * @param ctx the parse tree
	 */
	void enterEol(NyarParser.EolContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#eol}.
	 * @param ctx the parse tree
	 */
	void exitEol(NyarParser.EolContext ctx);
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
	 * Enter a parse tree produced by the {@code Plus_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPlus_Like(NyarParser.Plus_LikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Plus_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPlus_Like(NyarParser.Plus_LikeContext ctx);
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
	 * Enter a parse tree produced by the {@code List_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterList_Like(NyarParser.List_LikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code List_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitList_Like(NyarParser.List_LikeContext ctx);
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
	 * Enter a parse tree produced by the {@code Logic_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterLogic_Like(NyarParser.Logic_LikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Logic_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitLogic_Like(NyarParser.Logic_LikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Power_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPower_Like(NyarParser.Power_LikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Power_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPower_Like(NyarParser.Power_LikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Multiply_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMultiply_Like(NyarParser.Multiply_LikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Multiply_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMultiply_Like(NyarParser.Multiply_LikeContext ctx);
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
	 * Enter a parse tree produced by the {@code Binary_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBinary_Like(NyarParser.Binary_LikeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Binary_Like}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBinary_Like(NyarParser.Binary_LikeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Tuple}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterTuple(NyarParser.TupleContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Tuple}
	 * labeled alternative in {@link NyarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitTuple(NyarParser.TupleContext ctx);
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
	 * Enter a parse tree produced by the {@code ModifierAssign}
	 * labeled alternative in {@link NyarParser#assignStatement}.
	 * @param ctx the parse tree
	 */
	void enterModifierAssign(NyarParser.ModifierAssignContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModifierAssign}
	 * labeled alternative in {@link NyarParser#assignStatement}.
	 * @param ctx the parse tree
	 */
	void exitModifierAssign(NyarParser.ModifierAssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#assignTuple}.
	 * @param ctx the parse tree
	 */
	void enterAssignTuple(NyarParser.AssignTupleContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#assignTuple}.
	 * @param ctx the parse tree
	 */
	void exitAssignTuple(NyarParser.AssignTupleContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#assignPass}.
	 * @param ctx the parse tree
	 */
	void enterAssignPass(NyarParser.AssignPassContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#assignPass}.
	 * @param ctx the parse tree
	 */
	void exitAssignPass(NyarParser.AssignPassContext ctx);
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
	 * Enter a parse tree produced by {@link NyarParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(NyarParser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(NyarParser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#elseif}.
	 * @param ctx the parse tree
	 */
	void enterElseif(NyarParser.ElseifContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#elseif}.
	 * @param ctx the parse tree
	 */
	void exitElseif(NyarParser.ElseifContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(NyarParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(NyarParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#tryStatement}.
	 * @param ctx the parse tree
	 */
	void enterTryStatement(NyarParser.TryStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#tryStatement}.
	 * @param ctx the parse tree
	 */
	void exitTryStatement(NyarParser.TryStatementContext ctx);
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
	 * Enter a parse tree produced by {@link NyarParser#tupleLiteral}.
	 * @param ctx the parse tree
	 */
	void enterTupleLiteral(NyarParser.TupleLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#tupleLiteral}.
	 * @param ctx the parse tree
	 */
	void exitTupleLiteral(NyarParser.TupleLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NyarParser#single}.
	 * @param ctx the parse tree
	 */
	void enterSingle(NyarParser.SingleContext ctx);
	/**
	 * Exit a parse tree produced by {@link NyarParser#single}.
	 * @param ctx the parse tree
	 */
	void exitSingle(NyarParser.SingleContext ctx);
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