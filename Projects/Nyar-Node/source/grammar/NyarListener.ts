// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

import { Binary_Context } from "./NyarParser";
import { Logic_Context } from "./NyarParser";
import { Power_Context } from "./NyarParser";
import { Multiply_Divide_Context } from "./NyarParser";
import { Add_Subtract_Context } from "./NyarParser";
import { List_Context } from "./NyarParser";
import { StringContext } from "./NyarParser";
import { RealContext } from "./NyarParser";
import { IntegerContext } from "./NyarParser";
import { SymbolContext } from "./NyarParser";
import { PriorityOperationContext } from "./NyarParser";
import { ProgramContext } from "./NyarParser";
import { StatementContext } from "./NyarParser";
import { ExpressionStatementContext } from "./NyarParser";
import { ModuleStatementContext } from "./NyarParser";
import { AssignStatementContext } from "./NyarParser";
import { MacroStatementContext } from "./NyarParser";
import { TemplateStatementContext } from "./NyarParser";
import { InterfaceStatementContext } from "./NyarParser";
import { ClassStatementContext } from "./NyarParser";
import { ExpressionContext } from "./NyarParser";
import { ListContext } from "./NyarParser";
import { RecordContext } from "./NyarParser";
import { KeyValueContext } from "./NyarParser";
import { MathAliasContext } from "./NyarParser";


/**
 * This interface defines a complete listener for a parse tree produced by
 * `NyarParser`.
 */
export interface NyarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by the `Binary_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterBinary_?: (ctx: Binary_Context) => void;
	/**
	 * Exit a parse tree produced by the `Binary_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitBinary_?: (ctx: Binary_Context) => void;

	/**
	 * Enter a parse tree produced by the `Logic_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterLogic_?: (ctx: Logic_Context) => void;
	/**
	 * Exit a parse tree produced by the `Logic_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitLogic_?: (ctx: Logic_Context) => void;

	/**
	 * Enter a parse tree produced by the `Power_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPower_?: (ctx: Power_Context) => void;
	/**
	 * Exit a parse tree produced by the `Power_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPower_?: (ctx: Power_Context) => void;

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
	 * Enter a parse tree produced by the `List_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterList_?: (ctx: List_Context) => void;
	/**
	 * Exit a parse tree produced by the `List_`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitList_?: (ctx: List_Context) => void;

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
	 * Enter a parse tree produced by the `Real`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterReal?: (ctx: RealContext) => void;
	/**
	 * Exit a parse tree produced by the `Real`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitReal?: (ctx: RealContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.moduleStatement`.
	 * @param ctx the parse tree
	 */
	enterModuleStatement?: (ctx: ModuleStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.moduleStatement`.
	 * @param ctx the parse tree
	 */
	exitModuleStatement?: (ctx: ModuleStatementContext) => void;

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

	/**
	 * Enter a parse tree produced by `NyarParser.list`.
	 * @param ctx the parse tree
	 */
	enterList?: (ctx: ListContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.list`.
	 * @param ctx the parse tree
	 */
	exitList?: (ctx: ListContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.record`.
	 * @param ctx the parse tree
	 */
	enterRecord?: (ctx: RecordContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.record`.
	 * @param ctx the parse tree
	 */
	exitRecord?: (ctx: RecordContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.keyValue`.
	 * @param ctx the parse tree
	 */
	enterKeyValue?: (ctx: KeyValueContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.keyValue`.
	 * @param ctx the parse tree
	 */
	exitKeyValue?: (ctx: KeyValueContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.mathAlias`.
	 * @param ctx the parse tree
	 */
	enterMathAlias?: (ctx: MathAliasContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.mathAlias`.
	 * @param ctx the parse tree
	 */
	exitMathAlias?: (ctx: MathAliasContext) => void;
}

