// Generated from Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";

import { StringContext } from "./NyarParser";
import { IntegerContext } from "./NyarParser";
import { SymbolContext } from "./NyarParser";
import { Multiply_Divide_Context } from "./NyarParser";
import { Add_Subtract_Context } from "./NyarParser";
import { PriorityOperationContext } from "./NyarParser";
import { ProgramContext } from "./NyarParser";
import { StatementContext } from "./NyarParser";
import { ExpressionStatementContext } from "./NyarParser";
import { AssignStatementContext } from "./NyarParser";
import { MacroStatementContext } from "./NyarParser";
import { TemplateStatementContext } from "./NyarParser";
import { InterfaceStatementContext } from "./NyarParser";
import { ClassStatementContext } from "./NyarParser";
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
	 * Visit a parse tree produced by the `String`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitString?: (ctx: StringContext) => Result;

	/**
	 * Visit a parse tree produced by the `Integer`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInteger?: (ctx: IntegerContext) => Result;

	/**
	 * Visit a parse tree produced by the `Symbol`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSymbol?: (ctx: SymbolContext) => Result;

	/**
	 * Visit a parse tree produced by the `Multiply_Divide_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMultiply_Divide_?: (ctx: Multiply_Divide_Context) => Result;

	/**
	 * Visit a parse tree produced by the `Add_Subtract_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAdd_Subtract_?: (ctx: Add_Subtract_Context) => Result;

	/**
	 * Visit a parse tree produced by the `PriorityOperation`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPriorityOperation?: (ctx: PriorityOperationContext) => Result;

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
	 * Visit a parse tree produced by `NyarParser.expressionStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpressionStatement?: (ctx: ExpressionStatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignStatement?: (ctx: AssignStatementContext) => Result;

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
	 * Visit a parse tree produced by `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression?: (ctx: ExpressionContext) => Result;
}

