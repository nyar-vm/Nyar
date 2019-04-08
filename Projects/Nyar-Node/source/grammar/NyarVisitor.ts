// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";

import { PrefixExpressionContext } from "./NyarParser";
import { Binary_LikeContext } from "./NyarParser";
import { Logic_LikeContext } from "./NyarParser";
import { Power_LikeContext } from "./NyarParser";
import { Multiply_LikeContext } from "./NyarParser";
import { Plus_LikeContext } from "./NyarParser";
import { List_LikeContext } from "./NyarParser";
import { OperatorAssignContext } from "./NyarParser";
import { TupleContext } from "./NyarParser";
import { ListContext } from "./NyarParser";
import { DictContext } from "./NyarParser";
import { StringContext } from "./NyarParser";
import { NumberContext } from "./NyarParser";
import { SymbolContext } from "./NyarParser";
import { PriorityExpressionContext } from "./NyarParser";
import { ModifierAssignContext } from "./NyarParser";
import { ProgramContext } from "./NyarParser";
import { StatementContext } from "./NyarParser";
import { BlockStatementContext } from "./NyarParser";
import { Expr_blockContext } from "./NyarParser";
import { EmptyStatementContext } from "./NyarParser";
import { EosContext } from "./NyarParser";
import { EolContext } from "./NyarParser";
import { ExpressionStatementContext } from "./NyarParser";
import { ExpressionContext } from "./NyarParser";
import { AssignableContext } from "./NyarParser";
import { AssignStatementContext } from "./NyarParser";
import { AssignTupleContext } from "./NyarParser";
import { AssignPassContext } from "./NyarParser";
import { ModuleStatementContext } from "./NyarParser";
import { MacroStatementContext } from "./NyarParser";
import { TemplateStatementContext } from "./NyarParser";
import { InterfaceStatementContext } from "./NyarParser";
import { ClassStatementContext } from "./NyarParser";
import { IfStatementContext } from "./NyarParser";
import { ElseifContext } from "./NyarParser";
import { ConditionContext } from "./NyarParser";
import { TryStatementContext } from "./NyarParser";
import { CatchProductionContext } from "./NyarParser";
import { FinalProductionContext } from "./NyarParser";
import { TupleLiteralContext } from "./NyarParser";
import { SingleContext } from "./NyarParser";
import { DictLiteralContext } from "./NyarParser";
import { KeyvalueContext } from "./NyarParser";
import { ListLiteralContext } from "./NyarParser";
import { ElementContext } from "./NyarParser";
import { SignedIntegerContext } from "./NyarParser";


/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by `NyarParser`.
 *
 * @param <Result> The return type of the visit operation. Use `void` for
 * operations with no return type.
 */
export interface NyarVisitor<Result> extends ParseTreeVisitor<Result> {
	/**
	 * Visit a parse tree produced by the `PrefixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPrefixExpression?: (ctx: PrefixExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `Binary_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBinary_Like?: (ctx: Binary_LikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `Logic_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitLogic_Like?: (ctx: Logic_LikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `Power_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPower_Like?: (ctx: Power_LikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `Multiply_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMultiply_Like?: (ctx: Multiply_LikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `Plus_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPlus_Like?: (ctx: Plus_LikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `List_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitList_Like?: (ctx: List_LikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `OperatorAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperatorAssign?: (ctx: OperatorAssignContext) => Result;

	/**
	 * Visit a parse tree produced by the `Tuple`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTuple?: (ctx: TupleContext) => Result;

	/**
	 * Visit a parse tree produced by the `List`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitList?: (ctx: ListContext) => Result;

	/**
	 * Visit a parse tree produced by the `Dict`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDict?: (ctx: DictContext) => Result;

	/**
	 * Visit a parse tree produced by the `String`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitString?: (ctx: StringContext) => Result;

	/**
	 * Visit a parse tree produced by the `Number`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber?: (ctx: NumberContext) => Result;

	/**
	 * Visit a parse tree produced by the `Symbol`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSymbol?: (ctx: SymbolContext) => Result;

	/**
	 * Visit a parse tree produced by the `PriorityExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPriorityExpression?: (ctx: PriorityExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `ModifierAssign`
	 * labeled alternative in `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModifierAssign?: (ctx: ModifierAssignContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.program`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitProgram?: (ctx: ProgramContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitStatement?: (ctx: StatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.blockStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBlockStatement?: (ctx: BlockStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expr_block`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpr_block?: (ctx: Expr_blockContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.emptyStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitEmptyStatement?: (ctx: EmptyStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.eos`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitEos?: (ctx: EosContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.eol`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitEol?: (ctx: EolContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expressionStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpressionStatement?: (ctx: ExpressionStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression?: (ctx: ExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignable`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignable?: (ctx: AssignableContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignStatement?: (ctx: AssignStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignTuple`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignTuple?: (ctx: AssignTupleContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignPass`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignPass?: (ctx: AssignPassContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.moduleStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModuleStatement?: (ctx: ModuleStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.macroStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMacroStatement?: (ctx: MacroStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.templateStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTemplateStatement?: (ctx: TemplateStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.interfaceStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInterfaceStatement?: (ctx: InterfaceStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.classStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassStatement?: (ctx: ClassStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.ifStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIfStatement?: (ctx: IfStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.elseif`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitElseif?: (ctx: ElseifContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.condition`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitCondition?: (ctx: ConditionContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.tryStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTryStatement?: (ctx: TryStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.catchProduction`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitCatchProduction?: (ctx: CatchProductionContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.finalProduction`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitFinalProduction?: (ctx: FinalProductionContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.tupleLiteral`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTupleLiteral?: (ctx: TupleLiteralContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.single`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSingle?: (ctx: SingleContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.dictLiteral`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDictLiteral?: (ctx: DictLiteralContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.keyvalue`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitKeyvalue?: (ctx: KeyvalueContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.listLiteral`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitListLiteral?: (ctx: ListLiteralContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.element`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitElement?: (ctx: ElementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.signedInteger`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSignedInteger?: (ctx: SignedIntegerContext) => Result;
}

