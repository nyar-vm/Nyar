// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";

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
 * This interface defines a complete generic visitor for a parse tree produced
 * by `NyarParser`.
 *
 * @param <Result> The return type of the visit operation. Use `void` for
 * operations with no return type.
 */
export interface NyarVisitor<Result> extends ParseTreeVisitor<Result> {
	/**
	 * Visit a parse tree produced by the `AssignValue`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignValue?: (ctx: AssignValueContext) => Result;

	/**
	 * Visit a parse tree produced by the `AssignAttribute`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignAttribute?: (ctx: AssignAttributeContext) => Result;

	/**
	 * Visit a parse tree produced by the `AssignFunction`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignFunction?: (ctx: AssignFunctionContext) => Result;

	/**
	 * Visit a parse tree produced by the `AssignPair`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignPair?: (ctx: AssignPairContext) => Result;

	/**
	 * Visit a parse tree produced by the `AssignWithList`
	 * labeled alternative in `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignWithList?: (ctx: AssignWithListContext) => Result;

	/**
	 * Visit a parse tree produced by the `ElseIfStatement`
	 * labeled alternative in `NyarParser.if_elseif`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitElseIfStatement?: (ctx: ElseIfStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `ClassImplement`
	 * labeled alternative in `NyarParser.class_implement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassImplement?: (ctx: ClassImplementContext) => Result;

	/**
	 * Visit a parse tree produced by the `ConditionStatement`
	 * labeled alternative in `NyarParser.condition_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitConditionStatement?: (ctx: ConditionStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `ClassDefine`
	 * labeled alternative in `NyarParser.class_define`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassDefine?: (ctx: ClassDefineContext) => Result;

	/**
	 * Visit a parse tree produced by the `BlockStatement`
	 * labeled alternative in `NyarParser.block_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBlockStatement?: (ctx: BlockStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `EmptyStatement`
	 * labeled alternative in `NyarParser.empty_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitEmptyStatement?: (ctx: EmptyStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `TypeStatement`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTypeStatement?: (ctx: TypeStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `FunctionApply`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitFunctionApply?: (ctx: FunctionApplyContext) => Result;

	/**
	 * Visit a parse tree produced by the `PrefixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPrefixExpression?: (ctx: PrefixExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `PostfixExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPostfixExpression?: (ctx: PostfixExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `MethodApply`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMethodApply?: (ctx: MethodApplyContext) => Result;

	/**
	 * Visit a parse tree produced by the `BinaryLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBinaryLike?: (ctx: BinaryLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `LogicLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitLogicLike?: (ctx: LogicLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `CompareLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitCompareLike?: (ctx: CompareLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `PowerLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPowerLike?: (ctx: PowerLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `MultiplyLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMultiplyLike?: (ctx: MultiplyLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `PlusLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPlusLike?: (ctx: PlusLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `ListLike`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitListLike?: (ctx: ListLikeContext) => Result;

	/**
	 * Visit a parse tree produced by the `LazyAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitLazyAssign?: (ctx: LazyAssignContext) => Result;

	/**
	 * Visit a parse tree produced by the `OperatorAssign`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperatorAssign?: (ctx: OperatorAssignContext) => Result;

	/**
	 * Visit a parse tree produced by the `List`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitList?: (ctx: ListContext) => Result;

	/**
	 * Visit a parse tree produced by the `Index`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIndex?: (ctx: IndexContext) => Result;

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
	 * Visit a parse tree produced by the `SymbolExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSymbolExpression?: (ctx: SymbolExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `PriorityExpression`
	 * labeled alternative in `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPriorityExpression?: (ctx: PriorityExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by the `IfSingle`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIfSingle?: (ctx: IfSingleContext) => Result;

	/**
	 * Visit a parse tree produced by the `IfNested`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIfNested?: (ctx: IfNestedContext) => Result;

	/**
	 * Visit a parse tree produced by the `SwitchStatement`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSwitchStatement?: (ctx: SwitchStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `MatchStatement`
	 * labeled alternative in `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMatchStatement?: (ctx: MatchStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `ExpressionStatement`
	 * labeled alternative in `NyarParser.expression_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpressionStatement?: (ctx: ExpressionStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `TypeAssign`
	 * labeled alternative in `NyarParser.type_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTypeAssign?: (ctx: TypeAssignContext) => Result;

	/**
	 * Visit a parse tree produced by the `AssignStatement`
	 * labeled alternative in `NyarParser.assign_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignStatement?: (ctx: AssignStatementContext) => Result;

	/**
	 * Visit a parse tree produced by the `ClassFather`
	 * labeled alternative in `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassFather?: (ctx: ClassFatherContext) => Result;

	/**
	 * Visit a parse tree produced by the `ClassFathers`
	 * labeled alternative in `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassFathers?: (ctx: ClassFathersContext) => Result;

	/**
	 * Visit a parse tree produced by the `ForLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitForLoop?: (ctx: ForLoopContext) => Result;

	/**
	 * Visit a parse tree produced by the `ForInLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitForInLoop?: (ctx: ForInLoopContext) => Result;

	/**
	 * Visit a parse tree produced by the `WhileLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitWhileLoop?: (ctx: WhileLoopContext) => Result;

	/**
	 * Visit a parse tree produced by the `DoLoop`
	 * labeled alternative in `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDoLoop?: (ctx: DoLoopContext) => Result;

	/**
	 * Visit a parse tree produced by the `ClassBase`
	 * labeled alternative in `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassBase?: (ctx: ClassBaseContext) => Result;

	/**
	 * Visit a parse tree produced by the `ClassWithFather`
	 * labeled alternative in `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClassWithFather?: (ctx: ClassWithFatherContext) => Result;

	/**
	 * Visit a parse tree produced by the `ModuleInclude`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModuleInclude?: (ctx: ModuleIncludeContext) => Result;

	/**
	 * Visit a parse tree produced by the `ModuleAlias`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModuleAlias?: (ctx: ModuleAliasContext) => Result;

	/**
	 * Visit a parse tree produced by the `ModuleSymbol`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModuleSymbol?: (ctx: ModuleSymbolContext) => Result;

	/**
	 * Visit a parse tree produced by the `ModuleSymbols`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModuleSymbols?: (ctx: ModuleSymbolsContext) => Result;

	/**
	 * Visit a parse tree produced by the `ModuleResolve`
	 * labeled alternative in `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModuleResolve?: (ctx: ModuleResolveContext) => Result;

	/**
	 * Visit a parse tree produced by the `ElseStatement`
	 * labeled alternative in `NyarParser.if_else`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitElseStatement?: (ctx: ElseStatementContext) => Result;

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
	 * Visit a parse tree produced by `NyarParser.block_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBlock_statement?: (ctx: Block_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expr_or_block`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpr_or_block?: (ctx: Expr_or_blockContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.empty_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitEmpty_statement?: (ctx: Empty_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.eos`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitEos?: (ctx: EosContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.symbol`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSymbol?: (ctx: SymbolContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.global`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitGlobal?: (ctx: GlobalContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expression_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression_statement?: (ctx: Expression_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.type_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitType_statement?: (ctx: Type_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.function_apply`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitFunction_apply?: (ctx: Function_applyContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.function_params`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitFunction_params?: (ctx: Function_paramsContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression?: (ctx: ExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.pst_ops`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitPst_ops?: (ctx: Pst_opsContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assign_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssign_statement?: (ctx: Assign_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assignable`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssignable?: (ctx: AssignableContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assign_lhs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssign_lhs?: (ctx: Assign_lhsContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.assign_pass`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAssign_pass?: (ctx: Assign_passContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.module_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitModule_statement?: (ctx: Module_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.id_tuples`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitId_tuples?: (ctx: Id_tuplesContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.class_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClass_statement?: (ctx: Class_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.class_fathers`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClass_fathers?: (ctx: Class_fathersContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.class_implement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClass_implement?: (ctx: Class_implementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.class_define`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitClass_define?: (ctx: Class_defineContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.interface_Statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInterface_Statement?: (ctx: Interface_StatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.template_Statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTemplate_Statement?: (ctx: Template_StatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.macro_Statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitMacro_Statement?: (ctx: Macro_StatementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.branch_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBranch_statement?: (ctx: Branch_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.condition_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitCondition_statement?: (ctx: Condition_statementContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.if_else`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIf_else?: (ctx: If_elseContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.if_elseif`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIf_elseif?: (ctx: If_elseifContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.try_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitTry_statement?: (ctx: Try_statementContext) => Result;

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
	 * Visit a parse tree produced by `NyarParser.loop_statement`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitLoop_statement?: (ctx: Loop_statementContext) => Result;

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
	 * Visit a parse tree produced by `NyarParser.key_valid`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitKey_valid?: (ctx: Key_validContext) => Result;

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
	 * Visit a parse tree produced by `NyarParser.indexLiteral`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIndexLiteral?: (ctx: IndexLiteralContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.index_valid`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitIndex_valid?: (ctx: Index_validContext) => Result;

	/**
	 * Visit a parse tree produced by `NyarParser.signedInteger`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSignedInteger?: (ctx: SignedIntegerContext) => Result;
}

