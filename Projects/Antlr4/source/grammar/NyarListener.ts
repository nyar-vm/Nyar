// Generated from Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

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
 * This interface defines a complete listener for a parse tree produced by
 * `NyarParser`.
 */
export interface NyarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by the `String`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterString?: (ctx: StringContext) => void;
	/**
	 * Exit a parse tree produced by the `String`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitString?: (ctx: StringContext) => void;

	/**
	 * Enter a parse tree produced by the `Integer`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterInteger?: (ctx: IntegerContext) => void;
	/**
	 * Exit a parse tree produced by the `Integer`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitInteger?: (ctx: IntegerContext) => void;

	/**
	 * Enter a parse tree produced by the `Symbol`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterSymbol?: (ctx: SymbolContext) => void;
	/**
	 * Exit a parse tree produced by the `Symbol`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitSymbol?: (ctx: SymbolContext) => void;

	/**
	 * Enter a parse tree produced by the `Multiply_Divide_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterMultiply_Divide_?: (ctx: Multiply_Divide_Context) => void;
	/**
	 * Exit a parse tree produced by the `Multiply_Divide_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitMultiply_Divide_?: (ctx: Multiply_Divide_Context) => void;

	/**
	 * Enter a parse tree produced by the `Add_Subtract_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterAdd_Subtract_?: (ctx: Add_Subtract_Context) => void;
	/**
	 * Exit a parse tree produced by the `Add_Subtract_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitAdd_Subtract_?: (ctx: Add_Subtract_Context) => void;

	/**
	 * Enter a parse tree produced by the `PriorityOperation`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPriorityOperation?: (ctx: PriorityOperationContext) => void;
	/**
	 * Exit a parse tree produced by the `PriorityOperation`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPriorityOperation?: (ctx: PriorityOperationContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.program`.
	 * @param ctx the parse tree
	 */
	enterProgram?: (ctx: ProgramContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.program`.
	 * @param ctx the parse tree
	 */
	exitProgram?: (ctx: ProgramContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.statement`.
	 * @param ctx the parse tree
	 */
	enterStatement?: (ctx: StatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.statement`.
	 * @param ctx the parse tree
	 */
	exitStatement?: (ctx: StatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.expressionStatement`.
	 * @param ctx the parse tree
	 */
	enterExpressionStatement?: (ctx: ExpressionStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.expressionStatement`.
	 * @param ctx the parse tree
	 */
	exitExpressionStatement?: (ctx: ExpressionStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 */
	enterAssignStatement?: (ctx: AssignStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 */
	exitAssignStatement?: (ctx: AssignStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.macroStatement`.
	 * @param ctx the parse tree
	 */
	enterMacroStatement?: (ctx: MacroStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.macroStatement`.
	 * @param ctx the parse tree
	 */
	exitMacroStatement?: (ctx: MacroStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.templateStatement`.
	 * @param ctx the parse tree
	 */
	enterTemplateStatement?: (ctx: TemplateStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.templateStatement`.
	 * @param ctx the parse tree
	 */
	exitTemplateStatement?: (ctx: TemplateStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.interfaceStatement`.
	 * @param ctx the parse tree
	 */
	enterInterfaceStatement?: (ctx: InterfaceStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.interfaceStatement`.
	 * @param ctx the parse tree
	 */
	exitInterfaceStatement?: (ctx: InterfaceStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.classStatement`.
	 * @param ctx the parse tree
	 */
	enterClassStatement?: (ctx: ClassStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.classStatement`.
	 * @param ctx the parse tree
	 */
	exitClassStatement?: (ctx: ClassStatementContext) => void;

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

