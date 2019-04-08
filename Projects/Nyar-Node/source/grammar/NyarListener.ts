// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

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
 * This interface defines a complete listener for a parse tree produced by
 * `NyarParser`.
 */
export interface NyarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by the `PrefixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPrefixExpression?: (ctx: PrefixExpressionContext) => void;
	/**
	 * Exit a parse tree produced by the `PrefixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPrefixExpression?: (ctx: PrefixExpressionContext) => void;

	/**
	 * Enter a parse tree produced by the `Binary_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterBinary_Like?: (ctx: Binary_LikeContext) => void;
	/**
	 * Exit a parse tree produced by the `Binary_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitBinary_Like?: (ctx: Binary_LikeContext) => void;

	/**
	 * Enter a parse tree produced by the `Logic_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterLogic_Like?: (ctx: Logic_LikeContext) => void;
	/**
	 * Exit a parse tree produced by the `Logic_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitLogic_Like?: (ctx: Logic_LikeContext) => void;

	/**
	 * Enter a parse tree produced by the `Power_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPower_Like?: (ctx: Power_LikeContext) => void;
	/**
	 * Exit a parse tree produced by the `Power_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPower_Like?: (ctx: Power_LikeContext) => void;

	/**
	 * Enter a parse tree produced by the `Multiply_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterMultiply_Like?: (ctx: Multiply_LikeContext) => void;
	/**
	 * Exit a parse tree produced by the `Multiply_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitMultiply_Like?: (ctx: Multiply_LikeContext) => void;

	/**
	 * Enter a parse tree produced by the `Plus_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPlus_Like?: (ctx: Plus_LikeContext) => void;
	/**
	 * Exit a parse tree produced by the `Plus_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPlus_Like?: (ctx: Plus_LikeContext) => void;

	/**
	 * Enter a parse tree produced by the `List_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterList_Like?: (ctx: List_LikeContext) => void;
	/**
	 * Exit a parse tree produced by the `List_Like`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitList_Like?: (ctx: List_LikeContext) => void;

	/**
	 * Enter a parse tree produced by the `OperatorAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterOperatorAssign?: (ctx: OperatorAssignContext) => void;
	/**
	 * Exit a parse tree produced by the `OperatorAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitOperatorAssign?: (ctx: OperatorAssignContext) => void;

	/**
	 * Enter a parse tree produced by the `Tuple`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterTuple?: (ctx: TupleContext) => void;
	/**
	 * Exit a parse tree produced by the `Tuple`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitTuple?: (ctx: TupleContext) => void;

	/**
	 * Enter a parse tree produced by the `List`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterList?: (ctx: ListContext) => void;
	/**
	 * Exit a parse tree produced by the `List`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitList?: (ctx: ListContext) => void;

	/**
	 * Enter a parse tree produced by the `Dict`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterDict?: (ctx: DictContext) => void;
	/**
	 * Exit a parse tree produced by the `Dict`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitDict?: (ctx: DictContext) => void;

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
	 * Enter a parse tree produced by the `Number`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterNumber?: (ctx: NumberContext) => void;
	/**
	 * Exit a parse tree produced by the `Number`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitNumber?: (ctx: NumberContext) => void;

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
	 * Enter a parse tree produced by the `PriorityExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPriorityExpression?: (ctx: PriorityExpressionContext) => void;
	/**
	 * Exit a parse tree produced by the `PriorityExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPriorityExpression?: (ctx: PriorityExpressionContext) => void;

	/**
	 * Enter a parse tree produced by the `ModifierAssign`
	 * labeled alternative in `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 */
	enterModifierAssign?: (ctx: ModifierAssignContext) => void;
	/**
	 * Exit a parse tree produced by the `ModifierAssign`
	 * labeled alternative in `NyarParser.assignStatement`.
	 * @param ctx the parse tree
	 */
	exitModifierAssign?: (ctx: ModifierAssignContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.blockStatement`.
	 * @param ctx the parse tree
	 */
	enterBlockStatement?: (ctx: BlockStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.blockStatement`.
	 * @param ctx the parse tree
	 */
	exitBlockStatement?: (ctx: BlockStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.expr_block`.
	 * @param ctx the parse tree
	 */
	enterExpr_block?: (ctx: Expr_blockContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.expr_block`.
	 * @param ctx the parse tree
	 */
	exitExpr_block?: (ctx: Expr_blockContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.emptyStatement`.
	 * @param ctx the parse tree
	 */
	enterEmptyStatement?: (ctx: EmptyStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.emptyStatement`.
	 * @param ctx the parse tree
	 */
	exitEmptyStatement?: (ctx: EmptyStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.eos`.
	 * @param ctx the parse tree
	 */
	enterEos?: (ctx: EosContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.eos`.
	 * @param ctx the parse tree
	 */
	exitEos?: (ctx: EosContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.eol`.
	 * @param ctx the parse tree
	 */
	enterEol?: (ctx: EolContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.eol`.
	 * @param ctx the parse tree
	 */
	exitEol?: (ctx: EolContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.assignable`.
	 * @param ctx the parse tree
	 */
	enterAssignable?: (ctx: AssignableContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assignable`.
	 * @param ctx the parse tree
	 */
	exitAssignable?: (ctx: AssignableContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.assignTuple`.
	 * @param ctx the parse tree
	 */
	enterAssignTuple?: (ctx: AssignTupleContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assignTuple`.
	 * @param ctx the parse tree
	 */
	exitAssignTuple?: (ctx: AssignTupleContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.assignPass`.
	 * @param ctx the parse tree
	 */
	enterAssignPass?: (ctx: AssignPassContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assignPass`.
	 * @param ctx the parse tree
	 */
	exitAssignPass?: (ctx: AssignPassContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.ifStatement`.
	 * @param ctx the parse tree
	 */
	enterIfStatement?: (ctx: IfStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.ifStatement`.
	 * @param ctx the parse tree
	 */
	exitIfStatement?: (ctx: IfStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.elseif`.
	 * @param ctx the parse tree
	 */
	enterElseif?: (ctx: ElseifContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.elseif`.
	 * @param ctx the parse tree
	 */
	exitElseif?: (ctx: ElseifContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.condition`.
	 * @param ctx the parse tree
	 */
	enterCondition?: (ctx: ConditionContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.condition`.
	 * @param ctx the parse tree
	 */
	exitCondition?: (ctx: ConditionContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.tryStatement`.
	 * @param ctx the parse tree
	 */
	enterTryStatement?: (ctx: TryStatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.tryStatement`.
	 * @param ctx the parse tree
	 */
	exitTryStatement?: (ctx: TryStatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.catchProduction`.
	 * @param ctx the parse tree
	 */
	enterCatchProduction?: (ctx: CatchProductionContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.catchProduction`.
	 * @param ctx the parse tree
	 */
	exitCatchProduction?: (ctx: CatchProductionContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.finalProduction`.
	 * @param ctx the parse tree
	 */
	enterFinalProduction?: (ctx: FinalProductionContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.finalProduction`.
	 * @param ctx the parse tree
	 */
	exitFinalProduction?: (ctx: FinalProductionContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.tupleLiteral`.
	 * @param ctx the parse tree
	 */
	enterTupleLiteral?: (ctx: TupleLiteralContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.tupleLiteral`.
	 * @param ctx the parse tree
	 */
	exitTupleLiteral?: (ctx: TupleLiteralContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.single`.
	 * @param ctx the parse tree
	 */
	enterSingle?: (ctx: SingleContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.single`.
	 * @param ctx the parse tree
	 */
	exitSingle?: (ctx: SingleContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.dictLiteral`.
	 * @param ctx the parse tree
	 */
	enterDictLiteral?: (ctx: DictLiteralContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.dictLiteral`.
	 * @param ctx the parse tree
	 */
	exitDictLiteral?: (ctx: DictLiteralContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.keyvalue`.
	 * @param ctx the parse tree
	 */
	enterKeyvalue?: (ctx: KeyvalueContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.keyvalue`.
	 * @param ctx the parse tree
	 */
	exitKeyvalue?: (ctx: KeyvalueContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.listLiteral`.
	 * @param ctx the parse tree
	 */
	enterListLiteral?: (ctx: ListLiteralContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.listLiteral`.
	 * @param ctx the parse tree
	 */
	exitListLiteral?: (ctx: ListLiteralContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.element`.
	 * @param ctx the parse tree
	 */
	enterElement?: (ctx: ElementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.element`.
	 * @param ctx the parse tree
	 */
	exitElement?: (ctx: ElementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.signedInteger`.
	 * @param ctx the parse tree
	 */
	enterSignedInteger?: (ctx: SignedIntegerContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.signedInteger`.
	 * @param ctx the parse tree
	 */
	exitSignedInteger?: (ctx: SignedIntegerContext) => void;
}

