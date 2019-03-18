// Generated from Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

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
 * This interface defines a complete listener for a parse tree produced by
 * `NyarParser`.
 */
export interface NyarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by the `MulDivExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterMulDivExpr?: (ctx: MulDivExprContext) => void;
	/**
	 * Exit a parse tree produced by the `MulDivExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitMulDivExpr?: (ctx: MulDivExprContext) => void;

	/**
	 * Enter a parse tree produced by the `AddSubExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterAddSubExpr?: (ctx: AddSubExprContext) => void;
	/**
	 * Exit a parse tree produced by the `AddSubExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitAddSubExpr?: (ctx: AddSubExprContext) => void;

	/**
	 * Enter a parse tree produced by the `IntegerExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterIntegerExpression?: (ctx: IntegerExpressionContext) => void;
	/**
	 * Exit a parse tree produced by the `IntegerExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitIntegerExpression?: (ctx: IntegerExpressionContext) => void;

	/**
	 * Enter a parse tree produced by the `IdExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterIdExpr?: (ctx: IdExprContext) => void;
	/**
	 * Exit a parse tree produced by the `IdExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitIdExpr?: (ctx: IdExprContext) => void;

	/**
	 * Enter a parse tree produced by the `ParenExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterParenExpr?: (ctx: ParenExprContext) => void;
	/**
	 * Exit a parse tree produced by the `ParenExpr`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitParenExpr?: (ctx: ParenExprContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.prog`.
	 * @param ctx the parse tree
	 */
	enterProg?: (ctx: ProgContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.prog`.
	 * @param ctx the parse tree
	 */
	exitProg?: (ctx: ProgContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.stat`.
	 * @param ctx the parse tree
	 */
	enterStat?: (ctx: StatContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.stat`.
	 * @param ctx the parse tree
	 */
	exitStat?: (ctx: StatContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.exprStat`.
	 * @param ctx the parse tree
	 */
	enterExprStat?: (ctx: ExprStatContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.exprStat`.
	 * @param ctx the parse tree
	 */
	exitExprStat?: (ctx: ExprStatContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.assignStat`.
	 * @param ctx the parse tree
	 */
	enterAssignStat?: (ctx: AssignStatContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assignStat`.
	 * @param ctx the parse tree
	 */
	exitAssignStat?: (ctx: AssignStatContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterExpression?: (ctx: ExpressionContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitExpression?: (ctx: ExpressionContext) => void;
}

