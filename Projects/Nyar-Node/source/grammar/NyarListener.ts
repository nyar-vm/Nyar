// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

import { AssignValueContext } from "./NyarParser";
import { AssignAttributeContext } from "./NyarParser";
import { AssignFunctionContext } from "./NyarParser";
import { AssignPairContext } from "./NyarParser";
import { AssignWithListContext } from "./NyarParser";
import { ElseIfStatementContext } from "./NyarParser";
import { ClassImplementContext } from "./NyarParser";
import { ConditionStatementContext } from "./NyarParser";
import { ClassDefineContext } from "./NyarParser";
import { BlockStatementContext } from "./NyarParser";
import { EmptyStatementContext } from "./NyarParser";
import { TypeStatementContext } from "./NyarParser";
import { FunctionApplyContext } from "./NyarParser";
import { PrefixExpressionContext } from "./NyarParser";
import { PostfixExpressionContext } from "./NyarParser";
import { MethodApplyContext } from "./NyarParser";
import { BinaryLikeContext } from "./NyarParser";
import { LogicLikeContext } from "./NyarParser";
import { CompareLikeContext } from "./NyarParser";
import { PowerLikeContext } from "./NyarParser";
import { MultiplyLikeContext } from "./NyarParser";
import { PlusLikeContext } from "./NyarParser";
import { ListLikeContext } from "./NyarParser";
import { LazyAssignContext } from "./NyarParser";
import { OperatorAssignContext } from "./NyarParser";
import { ListContext } from "./NyarParser";
import { IndexContext } from "./NyarParser";
import { DictContext } from "./NyarParser";
import { StringContext } from "./NyarParser";
import { NumberContext } from "./NyarParser";
import { SymbolExpressionContext } from "./NyarParser";
import { PriorityExpressionContext } from "./NyarParser";
import { IfSingleContext } from "./NyarParser";
import { IfNestedContext } from "./NyarParser";
import { SwitchStatementContext } from "./NyarParser";
import { MatchStatementContext } from "./NyarParser";
import { ExpressionStatementContext } from "./NyarParser";
import { TypeAssignContext } from "./NyarParser";
import { AssignStatementContext } from "./NyarParser";
import { ClassFatherContext } from "./NyarParser";
import { ClassFathersContext } from "./NyarParser";
import { ForLoopContext } from "./NyarParser";
import { ForInLoopContext } from "./NyarParser";
import { WhileLoopContext } from "./NyarParser";
import { DoLoopContext } from "./NyarParser";
import { ClassBaseContext } from "./NyarParser";
import { ClassWithFatherContext } from "./NyarParser";
import { ModuleIncludeContext } from "./NyarParser";
import { ModuleAliasContext } from "./NyarParser";
import { ModuleSymbolContext } from "./NyarParser";
import { ModuleSymbolsContext } from "./NyarParser";
import { ModuleResolveContext } from "./NyarParser";
import { ElseStatementContext } from "./NyarParser";
import { ProgramContext } from "./NyarParser";
import { StatementContext } from "./NyarParser";
import { Block_statementContext } from "./NyarParser";
import { Expr_or_blockContext } from "./NyarParser";
import { Empty_statementContext } from "./NyarParser";
import { EosContext } from "./NyarParser";
import { SymbolContext } from "./NyarParser";
import { GlobalContext } from "./NyarParser";
import { Expression_statementContext } from "./NyarParser";
import { Type_statementContext } from "./NyarParser";
import { Function_applyContext } from "./NyarParser";
import { Function_paramsContext } from "./NyarParser";
import { ExpressionContext } from "./NyarParser";
import { Pst_opsContext } from "./NyarParser";
import { Assign_statementContext } from "./NyarParser";
import { AssignableContext } from "./NyarParser";
import { Assign_lhsContext } from "./NyarParser";
import { Assign_passContext } from "./NyarParser";
import { Module_statementContext } from "./NyarParser";
import { Id_tuplesContext } from "./NyarParser";
import { Class_statementContext } from "./NyarParser";
import { Class_fathersContext } from "./NyarParser";
import { Class_implementContext } from "./NyarParser";
import { Class_defineContext } from "./NyarParser";
import { Interface_StatementContext } from "./NyarParser";
import { Template_StatementContext } from "./NyarParser";
import { Macro_StatementContext } from "./NyarParser";
import { Branch_statementContext } from "./NyarParser";
import { Condition_statementContext } from "./NyarParser";
import { If_elseContext } from "./NyarParser";
import { If_elseifContext } from "./NyarParser";
import { Try_statementContext } from "./NyarParser";
import { CatchProductionContext } from "./NyarParser";
import { FinalProductionContext } from "./NyarParser";
import { Loop_statementContext } from "./NyarParser";
import { DictLiteralContext } from "./NyarParser";
import { KeyvalueContext } from "./NyarParser";
import { Key_validContext } from "./NyarParser";
import { ListLiteralContext } from "./NyarParser";
import { ElementContext } from "./NyarParser";
import { IndexLiteralContext } from "./NyarParser";
import { Index_validContext } from "./NyarParser";
import { SignedIntegerContext } from "./NyarParser";


/**
 * This interface defines a complete listener for a parse tree produced by
 * `NyarParser`.
 */
export interface NyarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by the `AssignValue`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	enterAssignValue?: (ctx: AssignValueContext) => void;
	/**
	 * Exit a parse tree produced by the `AssignValue`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	exitAssignValue?: (ctx: AssignValueContext) => void;

	/**
	 * Enter a parse tree produced by the `AssignAttribute`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	enterAssignAttribute?: (ctx: AssignAttributeContext) => void;
	/**
	 * Exit a parse tree produced by the `AssignAttribute`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	exitAssignAttribute?: (ctx: AssignAttributeContext) => void;

	/**
	 * Enter a parse tree produced by the `AssignFunction`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	enterAssignFunction?: (ctx: AssignFunctionContext) => void;
	/**
	 * Exit a parse tree produced by the `AssignFunction`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	exitAssignFunction?: (ctx: AssignFunctionContext) => void;

	/**
	 * Enter a parse tree produced by the `AssignPair`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	enterAssignPair?: (ctx: AssignPairContext) => void;
	/**
	 * Exit a parse tree produced by the `AssignPair`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	exitAssignPair?: (ctx: AssignPairContext) => void;

	/**
	 * Enter a parse tree produced by the `AssignWithList`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	enterAssignWithList?: (ctx: AssignWithListContext) => void;
	/**
	 * Exit a parse tree produced by the `AssignWithList`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	exitAssignWithList?: (ctx: AssignWithListContext) => void;

	/**
	 * Enter a parse tree produced by the `ElseIfStatement`
	 * labeled alternative in `NyarParser.if_elseif`.
	 * @param ctx the parse tree
	 */
	enterElseIfStatement?: (ctx: ElseIfStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `ElseIfStatement`
	 * labeled alternative in `NyarParser.if_elseif`.
	 * @param ctx the parse tree
	 */
	exitElseIfStatement?: (ctx: ElseIfStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `ClassImplement`
	 * labeled alternative in `NyarParser.class_implement`.
	 * @param ctx the parse tree
	 */
	enterClassImplement?: (ctx: ClassImplementContext) => void;
	/**
	 * Exit a parse tree produced by the `ClassImplement`
	 * labeled alternative in `NyarParser.class_implement`.
	 * @param ctx the parse tree
	 */
	exitClassImplement?: (ctx: ClassImplementContext) => void;

	/**
	 * Enter a parse tree produced by the `ConditionStatement`
	 * labeled alternative in `NyarParser.condition_statement`.
	 * @param ctx the parse tree
	 */
	enterConditionStatement?: (ctx: ConditionStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `ConditionStatement`
	 * labeled alternative in `NyarParser.condition_statement`.
	 * @param ctx the parse tree
	 */
	exitConditionStatement?: (ctx: ConditionStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `ClassDefine`
	 * labeled alternative in `NyarParser.class_define`.
	 * @param ctx the parse tree
	 */
	enterClassDefine?: (ctx: ClassDefineContext) => void;
	/**
	 * Exit a parse tree produced by the `ClassDefine`
	 * labeled alternative in `NyarParser.class_define`.
	 * @param ctx the parse tree
	 */
	exitClassDefine?: (ctx: ClassDefineContext) => void;

	/**
	 * Enter a parse tree produced by the `BlockStatement`
	 * labeled alternative in `NyarParser.block_statement`.
	 * @param ctx the parse tree
	 */
	enterBlockStatement?: (ctx: BlockStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `BlockStatement`
	 * labeled alternative in `NyarParser.block_statement`.
	 * @param ctx the parse tree
	 */
	exitBlockStatement?: (ctx: BlockStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `EmptyStatement`
	 * labeled alternative in `NyarParser.empty_statement`.
	 * @param ctx the parse tree
	 */
	enterEmptyStatement?: (ctx: EmptyStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `EmptyStatement`
	 * labeled alternative in `NyarParser.empty_statement`.
	 * @param ctx the parse tree
	 */
	exitEmptyStatement?: (ctx: EmptyStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `TypeStatement`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterTypeStatement?: (ctx: TypeStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `TypeStatement`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitTypeStatement?: (ctx: TypeStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `FunctionApply`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterFunctionApply?: (ctx: FunctionApplyContext) => void;
	/**
	 * Exit a parse tree produced by the `FunctionApply`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitFunctionApply?: (ctx: FunctionApplyContext) => void;

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
	 * Enter a parse tree produced by the `PostfixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPostfixExpression?: (ctx: PostfixExpressionContext) => void;
	/**
	 * Exit a parse tree produced by the `PostfixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPostfixExpression?: (ctx: PostfixExpressionContext) => void;

	/**
	 * Enter a parse tree produced by the `MethodApply`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterMethodApply?: (ctx: MethodApplyContext) => void;
	/**
	 * Exit a parse tree produced by the `MethodApply`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitMethodApply?: (ctx: MethodApplyContext) => void;

	/**
	 * Enter a parse tree produced by the `BinaryLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterBinaryLike?: (ctx: BinaryLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `BinaryLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitBinaryLike?: (ctx: BinaryLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `LogicLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterLogicLike?: (ctx: LogicLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `LogicLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitLogicLike?: (ctx: LogicLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `CompareLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterCompareLike?: (ctx: CompareLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `CompareLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitCompareLike?: (ctx: CompareLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `PowerLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPowerLike?: (ctx: PowerLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `PowerLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPowerLike?: (ctx: PowerLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `MultiplyLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterMultiplyLike?: (ctx: MultiplyLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `MultiplyLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitMultiplyLike?: (ctx: MultiplyLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `PlusLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterPlusLike?: (ctx: PlusLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `PlusLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitPlusLike?: (ctx: PlusLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `ListLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterListLike?: (ctx: ListLikeContext) => void;
	/**
	 * Exit a parse tree produced by the `ListLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitListLike?: (ctx: ListLikeContext) => void;

	/**
	 * Enter a parse tree produced by the `LazyAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterLazyAssign?: (ctx: LazyAssignContext) => void;
	/**
	 * Exit a parse tree produced by the `LazyAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitLazyAssign?: (ctx: LazyAssignContext) => void;

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
	 * Enter a parse tree produced by the `Index`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterIndex?: (ctx: IndexContext) => void;
	/**
	 * Exit a parse tree produced by the `Index`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitIndex?: (ctx: IndexContext) => void;

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
	 * Enter a parse tree produced by the `SymbolExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	enterSymbolExpression?: (ctx: SymbolExpressionContext) => void;
	/**
	 * Exit a parse tree produced by the `SymbolExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 */
	exitSymbolExpression?: (ctx: SymbolExpressionContext) => void;

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
	 * Enter a parse tree produced by the `IfSingle`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	enterIfSingle?: (ctx: IfSingleContext) => void;
	/**
	 * Exit a parse tree produced by the `IfSingle`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	exitIfSingle?: (ctx: IfSingleContext) => void;

	/**
	 * Enter a parse tree produced by the `IfNested`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	enterIfNested?: (ctx: IfNestedContext) => void;
	/**
	 * Exit a parse tree produced by the `IfNested`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	exitIfNested?: (ctx: IfNestedContext) => void;

	/**
	 * Enter a parse tree produced by the `SwitchStatement`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	enterSwitchStatement?: (ctx: SwitchStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `SwitchStatement`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	exitSwitchStatement?: (ctx: SwitchStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `MatchStatement`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	enterMatchStatement?: (ctx: MatchStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `MatchStatement`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	exitMatchStatement?: (ctx: MatchStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `ExpressionStatement`
	 * labeled alternative in `NyarParser.expression_statement`.
	 * @param ctx the parse tree
	 */
	enterExpressionStatement?: (ctx: ExpressionStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `ExpressionStatement`
	 * labeled alternative in `NyarParser.expression_statement`.
	 * @param ctx the parse tree
	 */
	exitExpressionStatement?: (ctx: ExpressionStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `TypeAssign`
	 * labeled alternative in `NyarParser.type_statement`.
	 * @param ctx the parse tree
	 */
	enterTypeAssign?: (ctx: TypeAssignContext) => void;
	/**
	 * Exit a parse tree produced by the `TypeAssign`
	 * labeled alternative in `NyarParser.type_statement`.
	 * @param ctx the parse tree
	 */
	exitTypeAssign?: (ctx: TypeAssignContext) => void;

	/**
	 * Enter a parse tree produced by the `AssignStatement`
	 * labeled alternative in `NyarParser.assign_statement`.
	 * @param ctx the parse tree
	 */
	enterAssignStatement?: (ctx: AssignStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `AssignStatement`
	 * labeled alternative in `NyarParser.assign_statement`.
	 * @param ctx the parse tree
	 */
	exitAssignStatement?: (ctx: AssignStatementContext) => void;

	/**
	 * Enter a parse tree produced by the `ClassFather`
	 * labeled alternative in `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 */
	enterClassFather?: (ctx: ClassFatherContext) => void;
	/**
	 * Exit a parse tree produced by the `ClassFather`
	 * labeled alternative in `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 */
	exitClassFather?: (ctx: ClassFatherContext) => void;

	/**
	 * Enter a parse tree produced by the `ClassFathers`
	 * labeled alternative in `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 */
	enterClassFathers?: (ctx: ClassFathersContext) => void;
	/**
	 * Exit a parse tree produced by the `ClassFathers`
	 * labeled alternative in `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 */
	exitClassFathers?: (ctx: ClassFathersContext) => void;

	/**
	 * Enter a parse tree produced by the `ForLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	enterForLoop?: (ctx: ForLoopContext) => void;
	/**
	 * Exit a parse tree produced by the `ForLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	exitForLoop?: (ctx: ForLoopContext) => void;

	/**
	 * Enter a parse tree produced by the `ForInLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	enterForInLoop?: (ctx: ForInLoopContext) => void;
	/**
	 * Exit a parse tree produced by the `ForInLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	exitForInLoop?: (ctx: ForInLoopContext) => void;

	/**
	 * Enter a parse tree produced by the `WhileLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	enterWhileLoop?: (ctx: WhileLoopContext) => void;
	/**
	 * Exit a parse tree produced by the `WhileLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	exitWhileLoop?: (ctx: WhileLoopContext) => void;

	/**
	 * Enter a parse tree produced by the `DoLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	enterDoLoop?: (ctx: DoLoopContext) => void;
	/**
	 * Exit a parse tree produced by the `DoLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	exitDoLoop?: (ctx: DoLoopContext) => void;

	/**
	 * Enter a parse tree produced by the `ClassBase`
	 * labeled alternative in `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 */
	enterClassBase?: (ctx: ClassBaseContext) => void;
	/**
	 * Exit a parse tree produced by the `ClassBase`
	 * labeled alternative in `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 */
	exitClassBase?: (ctx: ClassBaseContext) => void;

	/**
	 * Enter a parse tree produced by the `ClassWithFather`
	 * labeled alternative in `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 */
	enterClassWithFather?: (ctx: ClassWithFatherContext) => void;
	/**
	 * Exit a parse tree produced by the `ClassWithFather`
	 * labeled alternative in `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 */
	exitClassWithFather?: (ctx: ClassWithFatherContext) => void;

	/**
	 * Enter a parse tree produced by the `ModuleInclude`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	enterModuleInclude?: (ctx: ModuleIncludeContext) => void;
	/**
	 * Exit a parse tree produced by the `ModuleInclude`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	exitModuleInclude?: (ctx: ModuleIncludeContext) => void;

	/**
	 * Enter a parse tree produced by the `ModuleAlias`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	enterModuleAlias?: (ctx: ModuleAliasContext) => void;
	/**
	 * Exit a parse tree produced by the `ModuleAlias`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	exitModuleAlias?: (ctx: ModuleAliasContext) => void;

	/**
	 * Enter a parse tree produced by the `ModuleSymbol`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	enterModuleSymbol?: (ctx: ModuleSymbolContext) => void;
	/**
	 * Exit a parse tree produced by the `ModuleSymbol`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	exitModuleSymbol?: (ctx: ModuleSymbolContext) => void;

	/**
	 * Enter a parse tree produced by the `ModuleSymbols`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	enterModuleSymbols?: (ctx: ModuleSymbolsContext) => void;
	/**
	 * Exit a parse tree produced by the `ModuleSymbols`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	exitModuleSymbols?: (ctx: ModuleSymbolsContext) => void;

	/**
	 * Enter a parse tree produced by the `ModuleResolve`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	enterModuleResolve?: (ctx: ModuleResolveContext) => void;
	/**
	 * Exit a parse tree produced by the `ModuleResolve`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	exitModuleResolve?: (ctx: ModuleResolveContext) => void;

	/**
	 * Enter a parse tree produced by the `ElseStatement`
	 * labeled alternative in `NyarParser.if_else`.
	 * @param ctx the parse tree
	 */
	enterElseStatement?: (ctx: ElseStatementContext) => void;
	/**
	 * Exit a parse tree produced by the `ElseStatement`
	 * labeled alternative in `NyarParser.if_else`.
	 * @param ctx the parse tree
	 */
	exitElseStatement?: (ctx: ElseStatementContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.block_statement`.
	 * @param ctx the parse tree
	 */
	enterBlock_statement?: (ctx: Block_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.block_statement`.
	 * @param ctx the parse tree
	 */
	exitBlock_statement?: (ctx: Block_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.expr_or_block`.
	 * @param ctx the parse tree
	 */
	enterExpr_or_block?: (ctx: Expr_or_blockContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.expr_or_block`.
	 * @param ctx the parse tree
	 */
	exitExpr_or_block?: (ctx: Expr_or_blockContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.empty_statement`.
	 * @param ctx the parse tree
	 */
	enterEmpty_statement?: (ctx: Empty_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.empty_statement`.
	 * @param ctx the parse tree
	 */
	exitEmpty_statement?: (ctx: Empty_statementContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.symbol`.
	 * @param ctx the parse tree
	 */
	enterSymbol?: (ctx: SymbolContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.symbol`.
	 * @param ctx the parse tree
	 */
	exitSymbol?: (ctx: SymbolContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.global`.
	 * @param ctx the parse tree
	 */
	enterGlobal?: (ctx: GlobalContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.global`.
	 * @param ctx the parse tree
	 */
	exitGlobal?: (ctx: GlobalContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.expression_statement`.
	 * @param ctx the parse tree
	 */
	enterExpression_statement?: (ctx: Expression_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.expression_statement`.
	 * @param ctx the parse tree
	 */
	exitExpression_statement?: (ctx: Expression_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.type_statement`.
	 * @param ctx the parse tree
	 */
	enterType_statement?: (ctx: Type_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.type_statement`.
	 * @param ctx the parse tree
	 */
	exitType_statement?: (ctx: Type_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.function_apply`.
	 * @param ctx the parse tree
	 */
	enterFunction_apply?: (ctx: Function_applyContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.function_apply`.
	 * @param ctx the parse tree
	 */
	exitFunction_apply?: (ctx: Function_applyContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.function_params`.
	 * @param ctx the parse tree
	 */
	enterFunction_params?: (ctx: Function_paramsContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.function_params`.
	 * @param ctx the parse tree
	 */
	exitFunction_params?: (ctx: Function_paramsContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.pst_ops`.
	 * @param ctx the parse tree
	 */
	enterPst_ops?: (ctx: Pst_opsContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.pst_ops`.
	 * @param ctx the parse tree
	 */
	exitPst_ops?: (ctx: Pst_opsContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.assign_statement`.
	 * @param ctx the parse tree
	 */
	enterAssign_statement?: (ctx: Assign_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assign_statement`.
	 * @param ctx the parse tree
	 */
	exitAssign_statement?: (ctx: Assign_statementContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	enterAssign_lhs?: (ctx: Assign_lhsContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 */
	exitAssign_lhs?: (ctx: Assign_lhsContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.assign_pass`.
	 * @param ctx the parse tree
	 */
	enterAssign_pass?: (ctx: Assign_passContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.assign_pass`.
	 * @param ctx the parse tree
	 */
	exitAssign_pass?: (ctx: Assign_passContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	enterModule_statement?: (ctx: Module_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 */
	exitModule_statement?: (ctx: Module_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.id_tuples`.
	 * @param ctx the parse tree
	 */
	enterId_tuples?: (ctx: Id_tuplesContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.id_tuples`.
	 * @param ctx the parse tree
	 */
	exitId_tuples?: (ctx: Id_tuplesContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 */
	enterClass_statement?: (ctx: Class_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 */
	exitClass_statement?: (ctx: Class_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 */
	enterClass_fathers?: (ctx: Class_fathersContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 */
	exitClass_fathers?: (ctx: Class_fathersContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.class_implement`.
	 * @param ctx the parse tree
	 */
	enterClass_implement?: (ctx: Class_implementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.class_implement`.
	 * @param ctx the parse tree
	 */
	exitClass_implement?: (ctx: Class_implementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.class_define`.
	 * @param ctx the parse tree
	 */
	enterClass_define?: (ctx: Class_defineContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.class_define`.
	 * @param ctx the parse tree
	 */
	exitClass_define?: (ctx: Class_defineContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.interface_Statement`.
	 * @param ctx the parse tree
	 */
	enterInterface_Statement?: (ctx: Interface_StatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.interface_Statement`.
	 * @param ctx the parse tree
	 */
	exitInterface_Statement?: (ctx: Interface_StatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.template_Statement`.
	 * @param ctx the parse tree
	 */
	enterTemplate_Statement?: (ctx: Template_StatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.template_Statement`.
	 * @param ctx the parse tree
	 */
	exitTemplate_Statement?: (ctx: Template_StatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.macro_Statement`.
	 * @param ctx the parse tree
	 */
	enterMacro_Statement?: (ctx: Macro_StatementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.macro_Statement`.
	 * @param ctx the parse tree
	 */
	exitMacro_Statement?: (ctx: Macro_StatementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	enterBranch_statement?: (ctx: Branch_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 */
	exitBranch_statement?: (ctx: Branch_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.condition_statement`.
	 * @param ctx the parse tree
	 */
	enterCondition_statement?: (ctx: Condition_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.condition_statement`.
	 * @param ctx the parse tree
	 */
	exitCondition_statement?: (ctx: Condition_statementContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.if_else`.
	 * @param ctx the parse tree
	 */
	enterIf_else?: (ctx: If_elseContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.if_else`.
	 * @param ctx the parse tree
	 */
	exitIf_else?: (ctx: If_elseContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.if_elseif`.
	 * @param ctx the parse tree
	 */
	enterIf_elseif?: (ctx: If_elseifContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.if_elseif`.
	 * @param ctx the parse tree
	 */
	exitIf_elseif?: (ctx: If_elseifContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.try_statement`.
	 * @param ctx the parse tree
	 */
	enterTry_statement?: (ctx: Try_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.try_statement`.
	 * @param ctx the parse tree
	 */
	exitTry_statement?: (ctx: Try_statementContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	enterLoop_statement?: (ctx: Loop_statementContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 */
	exitLoop_statement?: (ctx: Loop_statementContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.key_valid`.
	 * @param ctx the parse tree
	 */
	enterKey_valid?: (ctx: Key_validContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.key_valid`.
	 * @param ctx the parse tree
	 */
	exitKey_valid?: (ctx: Key_validContext) => void;

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
	 * Enter a parse tree produced by `NyarParser.indexLiteral`.
	 * @param ctx the parse tree
	 */
	enterIndexLiteral?: (ctx: IndexLiteralContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.indexLiteral`.
	 * @param ctx the parse tree
	 */
	exitIndexLiteral?: (ctx: IndexLiteralContext) => void;

	/**
	 * Enter a parse tree produced by `NyarParser.index_valid`.
	 * @param ctx the parse tree
	 */
	enterIndex_valid?: (ctx: Index_validContext) => void;
	/**
	 * Exit a parse tree produced by `NyarParser.index_valid`.
	 * @param ctx the parse tree
	 */
	exitIndex_valid?: (ctx: Index_validContext) => void;

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

