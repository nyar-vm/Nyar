// Generated from Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";

import { MulDivExprContext } from "./NyarParser";
import { AddSubExprContext } from "./NyarParser";
import { IntegerExpressionContext } from "./NyarParser";
import { IdExprContext } from "./NyarParser";
import { ParenExprContext } from "./NyarParser";
import { ProgContext } from "./NyarParser";
import { StatContext } from "./NyarParser";
import { ExprStatContext } from "./NyarParser";
import { AssignStatContext } from "./NyarParser";
import { ExpressionContext } from "./NyarParser";


/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by `NyarParser`.
 *
 * @param <Result> The return type of the visit operation. Use `void` for
 * operations with no return type.
 */
export interface NyarVisitor<Result> extends ParseTreeVisitor<Result> {
	/**
	 * Visit a parse tree produced by the `MulDivExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMulDivExpr?: (ctx: MulDivExprContext) => Result;

	/**
	 * Visit a parse tree produced by the `AddSubExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAddSubExpr?: (ctx: AddSubExprContext) => Result;

	/**
	 * Visit a parse tree produced by the `IntegerExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIntegerExpression?: (ctx: IntegerExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `IdExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIdExpr?: (ctx: IdExprContext) => Result;

	/**
	 * Visit a parse tree produced by the `ParenExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitParenExpr?: (ctx: ParenExprContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.prog`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitProg?: (ctx: ProgContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.stat`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitStat?: (ctx: StatContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.exprStat`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExprStat?: (ctx: ExprStatContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignStat`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignStat?: (ctx: AssignStatContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression?: (ctx: ExpressionContext) => Result;
}

