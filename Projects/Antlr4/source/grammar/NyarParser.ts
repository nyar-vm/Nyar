// Generated from Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ATN } from "antlr4ts/atn/ATN";
import { ATNDeserializer } from "antlr4ts/atn/ATNDeserializer";
import { FailedPredicateException } from "antlr4ts/FailedPredicateException";
import { NotNull } from "antlr4ts/Decorators";
import { NoViableAltException } from "antlr4ts/NoViableAltException";
import { Override } from "antlr4ts/Decorators";
import { Parser } from "antlr4ts/Parser";
import { ParserRuleContext } from "antlr4ts/ParserRuleContext";
import { ParserATNSimulator } from "antlr4ts/atn/ParserATNSimulator";
import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";
import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";
import { RecognitionException } from "antlr4ts/RecognitionException";
import { RuleContext } from "antlr4ts/RuleContext";
//import { RuleVersion } from "antlr4ts/RuleVersion";
import { TerminalNode } from "antlr4ts/tree/TerminalNode";
import { Token } from "antlr4ts/Token";
import { TokenStream } from "antlr4ts/TokenStream";
import { Vocabulary } from "antlr4ts/Vocabulary";
import { VocabularyImpl } from "antlr4ts/VocabularyImpl";

import * as Utils from "antlr4ts/misc/Utils";

import { NyarListener } from "./NyarListener";
import { NyarVisitor } from "./NyarVisitor";


export class NyarParser extends Parser {
	public static readonly T__0 = 1;
	public static readonly STRING = 2;
	public static readonly INTEGER = 3;
	public static readonly REAL = 4;
	public static readonly WhiteSpace = 5;
	public static readonly NewLine = 6;
	public static readonly Comment = 7;
	public static readonly Using = 8;
	public static readonly Exposing = 9;
	public static readonly With = 10;
	public static readonly As = 11;
	public static readonly Macro = 12;
	public static readonly Template = 13;
	public static readonly Interface = 14;
	public static readonly Class = 15;
	public static readonly Extends = 16;
	public static readonly Mixin = 17;
	public static readonly Setter = 18;
	public static readonly Getter = 19;
	public static readonly Public = 20;
	public static readonly Private = 21;
	public static readonly Protected = 22;
	public static readonly Final = 23;
	public static readonly Try = 24;
	public static readonly Catch = 25;
	public static readonly For = 26;
	public static readonly In = 27;
	public static readonly SYMBOL = 28;
	public static readonly LS = 29;
	public static readonly RS = 30;
	public static readonly LM = 31;
	public static readonly RM = 32;
	public static readonly LL = 33;
	public static readonly RL = 34;
	public static readonly Export = 35;
	public static readonly RightShift = 36;
	public static readonly Grater = 37;
	public static readonly Import = 38;
	public static readonly LeftShift = 39;
	public static readonly Less = 40;
	public static readonly Plus3 = 41;
	public static readonly Increase = 42;
	public static readonly Add = 43;
	public static readonly Unknow1 = 44;
	public static readonly Minus3 = 45;
	public static readonly Decrease = 46;
	public static readonly Subtract = 47;
	public static readonly Unknow2 = 48;
	public static readonly NullSequence = 49;
	public static readonly Sequence = 50;
	public static readonly Times = 51;
	public static readonly Multiply = 52;
	public static readonly Kronecker = 53;
	public static readonly Unknow3 = 54;
	public static readonly Remainder = 55;
	public static readonly Divide = 56;
	public static readonly Unknow4 = 57;
	public static readonly Quotient = 58;
	public static readonly Output = 59;
	public static readonly Mod = 60;
	public static readonly BaseInput = 61;
	public static readonly Power = 62;
	public static readonly Root = 63;
	public static readonly Equivalent = 64;
	public static readonly Equal = 65;
	public static readonly Set = 66;
	public static readonly NotEqual = 67;
	public static readonly NotEquivalent = 68;
	public static readonly GraterEqual = 69;
	public static readonly LessEqual = 70;
	public static readonly Bar3 = 71;
	public static readonly Bar2 = 72;
	public static readonly Bar = 73;
	public static readonly SlotSequence = 74;
	public static readonly Slot = 75;
	public static readonly PostfixFunction = 76;
	public static readonly AnonymousFunction = 77;
	public static readonly Curry = 78;
	public static readonly Apply = 79;
	public static readonly At = 80;
	public static readonly Type = 81;
	public static readonly Colon = 82;
	public static readonly Accuracy = 83;
	public static readonly Quote = 84;
	public static readonly Bang2 = 85;
	public static readonly Bang = 86;
	public static readonly Dot = 87;
	public static readonly Comma = 88;
	public static readonly Quotation = 89;
	public static readonly SetConstant = 90;
	public static readonly DelayedSet = 91;
	public static readonly UpSet = 92;
	public static readonly SetAddTo = 93;
	public static readonly SetMinusFrom = 94;
	public static readonly Map = 95;
	public static readonly MapAll = 96;
	public static readonly To = 97;
	public static readonly Infer = 98;
	public static readonly Concat = 99;
	public static readonly Unknow5 = 100;
	public static readonly Unknow6 = 101;
	public static readonly AssignmentOperator = 102;
	public static readonly LogicOperator = 103;
	public static readonly PowerLike = 104;
	public static readonly MultiplyLike = 105;
	public static readonly AddLike = 106;
	public static readonly BinaryOperator = 107;
	public static readonly RULE_program = 0;
	public static readonly RULE_statement = 1;
	public static readonly RULE_expressionStatement = 2;
	public static readonly RULE_moduleStatement = 3;
	public static readonly RULE_assignStatement = 4;
	public static readonly RULE_macroStatement = 5;
	public static readonly RULE_templateStatement = 6;
	public static readonly RULE_interfaceStatement = 7;
	public static readonly RULE_classStatement = 8;
	public static readonly RULE_expression = 9;
	public static readonly RULE_list = 10;
	public static readonly RULE_record = 11;
	public static readonly RULE_keyValue = 12;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"program", "statement", "expressionStatement", "moduleStatement", "assignStatement", 
		"macroStatement", "templateStatement", "interfaceStatement", "classStatement", 
		"expression", "list", "record", "keyValue",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "';'", undefined, undefined, undefined, undefined, undefined, 
		undefined, "'Using'", "'Exposing'", "'With'", "'As'", "'Macro'", "'Template'", 
		"'Interface'", "'Class'", "'Extends'", "'Mixin'", "'Setter'", "'Getter'", 
		"'Public'", "'Private'", "'Protected'", "'Final'", "'Try'", "'Catch'", 
		"'For'", "'In'", undefined, "'('", "')'", "'['", "']'", "'{'", "'}'", 
		"'>>>'", "'>>'", "'>'", "'<<<'", "'<<'", "'<'", "'+++'", "'++'", "'+'", 
		"'\u2295'", "'---'", "'--'", "'-'", "'\u2296'", "'***'", "'**'", "'*'", 
		"'\u00D7'", "'\u2297'", "'\u2299'", "'//'", "'/'", "'\u2298'", "'\u00F7'", 
		"'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", "'=='", "'='", undefined, 
		"'=!='", "'>='", "'<='", "'|||'", "'||'", "'|'", "'##'", "'#'", "'$$'", 
		"'$'", "'@@@'", "'@@'", "'@'", "'::'", "':'", "'``'", "'`'", "'!!'", "'!'", 
		"'.'", "','", "'''", "'=<'", "':='", "'^='", "'+='", "'-='", "'/@'", "'//@'", 
		undefined, undefined, "'<>'", "'<->'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", 
		"Comment", "Using", "Exposing", "With", "As", "Macro", "Template", "Interface", 
		"Class", "Extends", "Mixin", "Setter", "Getter", "Public", "Private", 
		"Protected", "Final", "Try", "Catch", "For", "In", "SYMBOL", "LS", "RS", 
		"LM", "RM", "LL", "RL", "Export", "RightShift", "Grater", "Import", "LeftShift", 
		"Less", "Plus3", "Increase", "Add", "Unknow1", "Minus3", "Decrease", "Subtract", 
		"Unknow2", "NullSequence", "Sequence", "Times", "Multiply", "Kronecker", 
		"Unknow3", "Remainder", "Divide", "Unknow4", "Quotient", "Output", "Mod", 
		"BaseInput", "Power", "Root", "Equivalent", "Equal", "Set", "NotEqual", 
		"NotEquivalent", "GraterEqual", "LessEqual", "Bar3", "Bar2", "Bar", "SlotSequence", 
		"Slot", "PostfixFunction", "AnonymousFunction", "Curry", "Apply", "At", 
		"Type", "Colon", "Accuracy", "Quote", "Bang2", "Bang", "Dot", "Comma", 
		"Quotation", "SetConstant", "DelayedSet", "UpSet", "SetAddTo", "SetMinusFrom", 
		"Map", "MapAll", "To", "Infer", "Concat", "Unknow5", "Unknow6", "AssignmentOperator", 
		"LogicOperator", "PowerLike", "MultiplyLike", "AddLike", "BinaryOperator",
	];
	public static readonly VOCABULARY: Vocabulary = new VocabularyImpl(NyarParser._LITERAL_NAMES, NyarParser._SYMBOLIC_NAMES, []);

	// @Override
	// @NotNull
	public get vocabulary(): Vocabulary {
		return NyarParser.VOCABULARY;
	}
	// tslint:enable:no-trailing-whitespace

	// @Override
	public get grammarFileName(): string { return "Nyar.g4"; }

	// @Override
	public get ruleNames(): string[] { return NyarParser.ruleNames; }

	// @Override
	public get serializedATN(): string { return NyarParser._serializedATN; }

	constructor(input: TokenStream) {
		super(input);
		this._interp = new ParserATNSimulator(NyarParser._ATN, this);
	}
	// @RuleVersion(0)
	public program(): ProgramContext {
		let _localctx: ProgramContext = new ProgramContext(this._ctx, this.state);
		this.enterRule(_localctx, 0, NyarParser.RULE_program);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 29;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.STRING) | (1 << NyarParser.INTEGER) | (1 << NyarParser.REAL) | (1 << NyarParser.Using) | (1 << NyarParser.Exposing) | (1 << NyarParser.Macro) | (1 << NyarParser.Template) | (1 << NyarParser.Interface) | (1 << NyarParser.Class) | (1 << NyarParser.SYMBOL) | (1 << NyarParser.LS))) !== 0)) {
				{
				{
				this.state = 26;
				this.statement();
				}
				}
				this.state = 31;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 32;
			this.match(NyarParser.EOF);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public statement(): StatementContext {
		let _localctx: StatementContext = new StatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 2, NyarParser.RULE_statement);
		try {
			this.state = 41;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 34;
				this.expressionStatement();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 35;
				this.moduleStatement();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 36;
				this.assignStatement();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 37;
				this.macroStatement();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 38;
				this.templateStatement();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 39;
				this.interfaceStatement();
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 40;
				this.classStatement();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public expressionStatement(): ExpressionStatementContext {
		let _localctx: ExpressionStatementContext = new ExpressionStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 4, NyarParser.RULE_expressionStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 43;
			this.expression(0);
			this.state = 44;
			this.match(NyarParser.T__0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public moduleStatement(): ModuleStatementContext {
		let _localctx: ModuleStatementContext = new ModuleStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 6, NyarParser.RULE_moduleStatement);
		try {
			this.state = 58;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 2, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 46;
				this.match(NyarParser.Using);
				this.state = 47;
				_localctx._core = this.match(NyarParser.SYMBOL);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 48;
				this.match(NyarParser.Using);
				this.state = 49;
				_localctx._source = this.match(NyarParser.STRING);
				this.state = 50;
				this.match(NyarParser.As);
				this.state = 51;
				_localctx._name = this.match(NyarParser.SYMBOL);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 52;
				this.match(NyarParser.Using);
				this.state = 53;
				_localctx._source = this.match(NyarParser.STRING);
				this.state = 54;
				this.match(NyarParser.With);
				this.state = 55;
				_localctx._name = this.match(NyarParser.SYMBOL);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 56;
				this.match(NyarParser.Exposing);
				this.state = 57;
				_localctx._source = this.match(NyarParser.STRING);
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public assignStatement(): AssignStatementContext {
		let _localctx: AssignStatementContext = new AssignStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 8, NyarParser.RULE_assignStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 60;
			this.match(NyarParser.SYMBOL);
			this.state = 61;
			this.match(NyarParser.AssignmentOperator);
			this.state = 62;
			this.expression(0);
			this.state = 63;
			this.match(NyarParser.T__0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public macroStatement(): MacroStatementContext {
		let _localctx: MacroStatementContext = new MacroStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 10, NyarParser.RULE_macroStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 65;
			this.match(NyarParser.Macro);
			this.state = 66;
			this.expression(0);
			this.state = 67;
			this.match(NyarParser.T__0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public templateStatement(): TemplateStatementContext {
		let _localctx: TemplateStatementContext = new TemplateStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 12, NyarParser.RULE_templateStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 69;
			this.match(NyarParser.Template);
			this.state = 70;
			this.expression(0);
			this.state = 71;
			this.match(NyarParser.T__0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public interfaceStatement(): InterfaceStatementContext {
		let _localctx: InterfaceStatementContext = new InterfaceStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 14, NyarParser.RULE_interfaceStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 73;
			this.match(NyarParser.Interface);
			this.state = 74;
			this.expression(0);
			this.state = 75;
			this.match(NyarParser.T__0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public classStatement(): ClassStatementContext {
		let _localctx: ClassStatementContext = new ClassStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 16, NyarParser.RULE_classStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 77;
			this.match(NyarParser.Class);
			this.state = 78;
			this.expression(0);
			this.state = 79;
			this.match(NyarParser.T__0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}

	public expression(): ExpressionContext;
	public expression(_p: number): ExpressionContext;
	// @RuleVersion(0)
	public expression(_p?: number): ExpressionContext {
		if (_p === undefined) {
			_p = 0;
		}

		let _parentctx: ParserRuleContext = this._ctx;
		let _parentState: number = this.state;
		let _localctx: ExpressionContext = new ExpressionContext(this._ctx, _parentState);
		let _prevctx: ExpressionContext = _localctx;
		let _startState: number = 18;
		this.enterRecursionRule(_localctx, 18, NyarParser.RULE_expression, _p);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 90;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.STRING:
				{
				_localctx = new StringContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;

				this.state = 82;
				(_localctx as StringContext)._atom = this.match(NyarParser.STRING);
				}
				break;
			case NyarParser.REAL:
				{
				_localctx = new RealContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 83;
				(_localctx as RealContext)._atom = this.match(NyarParser.REAL);
				}
				break;
			case NyarParser.INTEGER:
				{
				_localctx = new IntegerContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 84;
				(_localctx as IntegerContext)._atom = this.match(NyarParser.INTEGER);
				}
				break;
			case NyarParser.SYMBOL:
				{
				_localctx = new SymbolContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 85;
				(_localctx as SymbolContext)._atom = this.match(NyarParser.SYMBOL);
				}
				break;
			case NyarParser.LS:
				{
				_localctx = new PriorityOperationContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 86;
				this.match(NyarParser.LS);
				this.state = 87;
				this.expression(0);
				this.state = 88;
				this.match(NyarParser.RS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 109;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 5, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					if (this._parseListeners != null) {
						this.triggerExitRuleEvent();
					}
					_prevctx = _localctx;
					{
					this.state = 107;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 4, this._ctx) ) {
					case 1:
						{
						_localctx = new Logic_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Logic_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 92;
						if (!(this.precpred(this._ctx, 10))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 10)");
						}
						this.state = 93;
						(_localctx as Logic_Context)._op = this.match(NyarParser.LogicOperator);
						this.state = 94;
						(_localctx as Logic_Context)._right = this.expression(11);
						}
						break;

					case 2:
						{
						_localctx = new Power_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Power_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 95;
						if (!(this.precpred(this._ctx, 9))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 9)");
						}
						this.state = 96;
						(_localctx as Power_Context)._op = this.match(NyarParser.PowerLike);
						this.state = 97;
						(_localctx as Power_Context)._right = this.expression(9);
						}
						break;

					case 3:
						{
						_localctx = new Multiply_Divide_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Multiply_Divide_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 98;
						if (!(this.precpred(this._ctx, 8))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 8)");
						}
						this.state = 99;
						(_localctx as Multiply_Divide_Context)._op = this.match(NyarParser.MultiplyLike);
						this.state = 100;
						(_localctx as Multiply_Divide_Context)._right = this.expression(9);
						}
						break;

					case 4:
						{
						_localctx = new Add_Subtract_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Add_Subtract_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 101;
						if (!(this.precpred(this._ctx, 7))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 7)");
						}
						this.state = 102;
						(_localctx as Add_Subtract_Context)._op = this.match(NyarParser.AddLike);
						this.state = 103;
						(_localctx as Add_Subtract_Context)._right = this.expression(8);
						}
						break;

					case 5:
						{
						_localctx = new Binary_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Binary_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 104;
						if (!(this.precpred(this._ctx, 6))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 6)");
						}
						this.state = 105;
						(_localctx as Binary_Context)._op = this.match(NyarParser.BinaryOperator);
						this.state = 106;
						(_localctx as Binary_Context)._right = this.expression(7);
						}
						break;
					}
					}
				}
				this.state = 111;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 5, this._ctx);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public list(): ListContext {
		let _localctx: ListContext = new ListContext(this._ctx, this.state);
		this.enterRule(_localctx, 20, NyarParser.RULE_list);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 112;
			this.match(NyarParser.LM);
			this.state = 119;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.STRING) | (1 << NyarParser.INTEGER) | (1 << NyarParser.REAL) | (1 << NyarParser.SYMBOL) | (1 << NyarParser.LS))) !== 0)) {
				{
				{
				this.state = 113;
				this.expression(0);
				this.state = 115;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Comma) {
					{
					this.state = 114;
					this.match(NyarParser.Comma);
					}
				}

				}
				}
				this.state = 121;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 122;
			this.match(NyarParser.RM);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public record(): RecordContext {
		let _localctx: RecordContext = new RecordContext(this._ctx, this.state);
		this.enterRule(_localctx, 22, NyarParser.RULE_record);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 124;
			this.match(NyarParser.LL);
			this.state = 131;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.SYMBOL) {
				{
				{
				this.state = 125;
				this.keyValue();
				this.state = 127;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Comma) {
					{
					this.state = 126;
					this.match(NyarParser.Comma);
					}
				}

				}
				}
				this.state = 133;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 134;
			this.match(NyarParser.RL);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public keyValue(): KeyValueContext {
		let _localctx: KeyValueContext = new KeyValueContext(this._ctx, this.state);
		this.enterRule(_localctx, 24, NyarParser.RULE_keyValue);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 136;
			_localctx._key = this.match(NyarParser.SYMBOL);
			this.state = 137;
			this.match(NyarParser.Colon);
			this.state = 138;
			_localctx._value = this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}

	public sempred(_localctx: RuleContext, ruleIndex: number, predIndex: number): boolean {
		switch (ruleIndex) {
		case 9:
			return this.expression_sempred(_localctx as ExpressionContext, predIndex);
		}
		return true;
	}
	private expression_sempred(_localctx: ExpressionContext, predIndex: number): boolean {
		switch (predIndex) {
		case 0:
			return this.precpred(this._ctx, 10);

		case 1:
			return this.precpred(this._ctx, 9);

		case 2:
			return this.precpred(this._ctx, 8);

		case 3:
			return this.precpred(this._ctx, 7);

		case 4:
			return this.precpred(this._ctx, 6);
		}
		return true;
	}

	public static readonly _serializedATN: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03m\x8F\x04\x02" +
		"\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04\x07" +
		"\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r\x04" +
		"\x0E\t\x0E\x03\x02\x07\x02\x1E\n\x02\f\x02\x0E\x02!\v\x02\x03\x02\x03" +
		"\x02\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x05\x03," +
		"\n\x03\x03\x04\x03\x04\x03\x04\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05" +
		"\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x05\x05=\n\x05" +
		"\x03\x06\x03\x06\x03\x06\x03\x06\x03\x06\x03\x07\x03\x07\x03\x07\x03\x07" +
		"\x03\b\x03\b\x03\b\x03\b\x03\t\x03\t\x03\t\x03\t\x03\n\x03\n\x03\n\x03" +
		"\n\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x05\v]\n\v\x03" +
		"\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03" +
		"\v\x03\v\x03\v\x07\vn\n\v\f\v\x0E\vq\v\v\x03\f\x03\f\x03\f\x05\fv\n\f" +
		"\x07\fx\n\f\f\f\x0E\f{\v\f\x03\f\x03\f\x03\r\x03\r\x03\r\x05\r\x82\n\r" +
		"\x07\r\x84\n\r\f\r\x0E\r\x87\v\r\x03\r\x03\r\x03\x0E\x03\x0E\x03\x0E\x03" +
		"\x0E\x03\x0E\x02\x02\x03\x14\x0F\x02\x02\x04\x02\x06\x02\b\x02\n\x02\f" +
		"\x02\x0E\x02\x10\x02\x12\x02\x14\x02\x16\x02\x18\x02\x1A\x02\x02\x02\x02" +
		"\x98\x02\x1F\x03\x02\x02\x02\x04+\x03\x02\x02\x02\x06-\x03\x02\x02\x02" +
		"\b<\x03\x02\x02\x02\n>\x03\x02\x02\x02\fC\x03\x02\x02\x02\x0EG\x03\x02" +
		"\x02\x02\x10K\x03\x02\x02\x02\x12O\x03\x02\x02\x02\x14\\\x03\x02\x02\x02" +
		"\x16r\x03\x02\x02\x02\x18~\x03\x02\x02\x02\x1A\x8A\x03\x02\x02\x02\x1C" +
		"\x1E\x05\x04\x03\x02\x1D\x1C\x03\x02\x02\x02\x1E!\x03\x02\x02\x02\x1F" +
		"\x1D\x03\x02\x02\x02\x1F \x03\x02\x02\x02 \"\x03\x02\x02\x02!\x1F\x03" +
		"\x02\x02\x02\"#\x07\x02\x02\x03#\x03\x03\x02\x02\x02$,\x05\x06\x04\x02" +
		"%,\x05\b\x05\x02&,\x05\n\x06\x02\',\x05\f\x07\x02(,\x05\x0E\b\x02),\x05" +
		"\x10\t\x02*,\x05\x12\n\x02+$\x03\x02\x02\x02+%\x03\x02\x02\x02+&\x03\x02" +
		"\x02\x02+\'\x03\x02\x02\x02+(\x03\x02\x02\x02+)\x03\x02\x02\x02+*\x03" +
		"\x02\x02\x02,\x05\x03\x02\x02\x02-.\x05\x14\v\x02./\x07\x03\x02\x02/\x07" +
		"\x03\x02\x02\x0201\x07\n\x02\x021=\x07\x1E\x02\x0223\x07\n\x02\x0234\x07" +
		"\x04\x02\x0245\x07\r\x02\x025=\x07\x1E\x02\x0267\x07\n\x02\x0278\x07\x04" +
		"\x02\x0289\x07\f\x02\x029=\x07\x1E\x02\x02:;\x07\v\x02\x02;=\x07\x04\x02" +
		"\x02<0\x03\x02\x02\x02<2\x03\x02\x02\x02<6\x03\x02\x02\x02<:\x03\x02\x02" +
		"\x02=\t\x03\x02\x02\x02>?\x07\x1E\x02\x02?@\x07h\x02\x02@A\x05\x14\v\x02" +
		"AB\x07\x03\x02\x02B\v\x03\x02\x02\x02CD\x07\x0E\x02\x02DE\x05\x14\v\x02" +
		"EF\x07\x03\x02\x02F\r\x03\x02\x02\x02GH\x07\x0F\x02\x02HI\x05\x14\v\x02" +
		"IJ\x07\x03\x02\x02J\x0F\x03\x02\x02\x02KL\x07\x10\x02\x02LM\x05\x14\v" +
		"\x02MN\x07\x03\x02\x02N\x11\x03\x02\x02\x02OP\x07\x11\x02\x02PQ\x05\x14" +
		"\v\x02QR\x07\x03\x02\x02R\x13\x03\x02\x02\x02ST\b\v\x01\x02T]\x07\x04" +
		"\x02\x02U]\x07\x06\x02\x02V]\x07\x05\x02\x02W]\x07\x1E\x02\x02XY\x07\x1F" +
		"\x02\x02YZ\x05\x14\v\x02Z[\x07 \x02\x02[]\x03\x02\x02\x02\\S\x03\x02\x02" +
		"\x02\\U\x03\x02\x02\x02\\V\x03\x02\x02\x02\\W\x03\x02\x02\x02\\X\x03\x02" +
		"\x02\x02]o\x03\x02\x02\x02^_\f\f\x02\x02_`\x07i\x02\x02`n\x05\x14\v\r" +
		"ab\f\v\x02\x02bc\x07j\x02\x02cn\x05\x14\v\vde\f\n\x02\x02ef\x07k\x02\x02" +
		"fn\x05\x14\v\vgh\f\t\x02\x02hi\x07l\x02\x02in\x05\x14\v\njk\f\b\x02\x02" +
		"kl\x07m\x02\x02ln\x05\x14\v\tm^\x03\x02\x02\x02ma\x03\x02\x02\x02md\x03" +
		"\x02\x02\x02mg\x03\x02\x02\x02mj\x03\x02\x02\x02nq\x03\x02\x02\x02om\x03" +
		"\x02\x02\x02op\x03\x02\x02\x02p\x15\x03\x02\x02\x02qo\x03\x02\x02\x02" +
		"ry\x07!\x02\x02su\x05\x14\v\x02tv\x07Z\x02\x02ut\x03\x02\x02\x02uv\x03" +
		"\x02\x02\x02vx\x03\x02\x02\x02ws\x03\x02\x02\x02x{\x03\x02\x02\x02yw\x03" +
		"\x02\x02\x02yz\x03\x02\x02\x02z|\x03\x02\x02\x02{y\x03\x02\x02\x02|}\x07" +
		"\"\x02\x02}\x17\x03\x02\x02\x02~\x85\x07#\x02\x02\x7F\x81\x05\x1A\x0E" +
		"\x02\x80\x82\x07Z\x02\x02\x81\x80\x03\x02\x02\x02\x81\x82\x03\x02\x02" +
		"\x02\x82\x84\x03\x02\x02\x02\x83\x7F\x03\x02\x02\x02\x84\x87\x03\x02\x02" +
		"\x02\x85\x83\x03\x02\x02\x02\x85\x86\x03\x02\x02\x02\x86\x88\x03\x02\x02" +
		"\x02\x87\x85\x03\x02\x02\x02\x88\x89\x07$\x02\x02\x89\x19\x03\x02\x02" +
		"\x02\x8A\x8B\x07\x1E\x02\x02\x8B\x8C\x07T\x02\x02\x8C\x8D\x05\x14\v\x02" +
		"\x8D\x1B\x03\x02\x02\x02\f\x1F+<\\mouy\x81\x85";
	public static __ATN: ATN;
	public static get _ATN(): ATN {
		if (!NyarParser.__ATN) {
			NyarParser.__ATN = new ATNDeserializer().deserialize(Utils.toCharArray(NyarParser._serializedATN));
		}

		return NyarParser.__ATN;
	}

}

export class ProgramContext extends ParserRuleContext {
	public EOF(): TerminalNode { return this.getToken(NyarParser.EOF, 0); }
	public statement(): StatementContext[];
	public statement(i: number): StatementContext;
	public statement(i?: number): StatementContext | StatementContext[] {
		if (i === undefined) {
			return this.getRuleContexts(StatementContext);
		} else {
			return this.getRuleContext(i, StatementContext);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_program; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterProgram) {
			listener.enterProgram(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitProgram) {
			listener.exitProgram(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitProgram) {
			return visitor.visitProgram(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class StatementContext extends ParserRuleContext {
	public expressionStatement(): ExpressionStatementContext | undefined {
		return this.tryGetRuleContext(0, ExpressionStatementContext);
	}
	public moduleStatement(): ModuleStatementContext | undefined {
		return this.tryGetRuleContext(0, ModuleStatementContext);
	}
	public assignStatement(): AssignStatementContext | undefined {
		return this.tryGetRuleContext(0, AssignStatementContext);
	}
	public macroStatement(): MacroStatementContext | undefined {
		return this.tryGetRuleContext(0, MacroStatementContext);
	}
	public templateStatement(): TemplateStatementContext | undefined {
		return this.tryGetRuleContext(0, TemplateStatementContext);
	}
	public interfaceStatement(): InterfaceStatementContext | undefined {
		return this.tryGetRuleContext(0, InterfaceStatementContext);
	}
	public classStatement(): ClassStatementContext | undefined {
		return this.tryGetRuleContext(0, ClassStatementContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_statement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterStatement) {
			listener.enterStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitStatement) {
			listener.exitStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitStatement) {
			return visitor.visitStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ExpressionStatementContext extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_expressionStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterExpressionStatement) {
			listener.enterExpressionStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitExpressionStatement) {
			listener.exitExpressionStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitExpressionStatement) {
			return visitor.visitExpressionStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ModuleStatementContext extends ParserRuleContext {
	public _core: Token;
	public _source: Token;
	public _name: Token;
	public Using(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Using, 0); }
	public SYMBOL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.SYMBOL, 0); }
	public As(): TerminalNode | undefined { return this.tryGetToken(NyarParser.As, 0); }
	public STRING(): TerminalNode | undefined { return this.tryGetToken(NyarParser.STRING, 0); }
	public With(): TerminalNode | undefined { return this.tryGetToken(NyarParser.With, 0); }
	public Exposing(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Exposing, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_moduleStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModuleStatement) {
			listener.enterModuleStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModuleStatement) {
			listener.exitModuleStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModuleStatement) {
			return visitor.visitModuleStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class AssignStatementContext extends ParserRuleContext {
	public SYMBOL(): TerminalNode { return this.getToken(NyarParser.SYMBOL, 0); }
	public AssignmentOperator(): TerminalNode { return this.getToken(NyarParser.AssignmentOperator, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assignStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignStatement) {
			listener.enterAssignStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignStatement) {
			listener.exitAssignStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignStatement) {
			return visitor.visitAssignStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class MacroStatementContext extends ParserRuleContext {
	public Macro(): TerminalNode { return this.getToken(NyarParser.Macro, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_macroStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMacroStatement) {
			listener.enterMacroStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMacroStatement) {
			listener.exitMacroStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMacroStatement) {
			return visitor.visitMacroStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class TemplateStatementContext extends ParserRuleContext {
	public Template(): TerminalNode { return this.getToken(NyarParser.Template, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_templateStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTemplateStatement) {
			listener.enterTemplateStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTemplateStatement) {
			listener.exitTemplateStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTemplateStatement) {
			return visitor.visitTemplateStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class InterfaceStatementContext extends ParserRuleContext {
	public Interface(): TerminalNode { return this.getToken(NyarParser.Interface, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_interfaceStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterInterfaceStatement) {
			listener.enterInterfaceStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitInterfaceStatement) {
			listener.exitInterfaceStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitInterfaceStatement) {
			return visitor.visitInterfaceStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ClassStatementContext extends ParserRuleContext {
	public Class(): TerminalNode { return this.getToken(NyarParser.Class, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_classStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassStatement) {
			listener.enterClassStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassStatement) {
			listener.exitClassStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassStatement) {
			return visitor.visitClassStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ExpressionContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_expression; }
	public copyFrom(ctx: ExpressionContext): void {
		super.copyFrom(ctx);
	}
}
export class Logic_Context extends ExpressionContext {
	public _left: ExpressionContext;
	public _op: Token;
	public _right: ExpressionContext;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public LogicOperator(): TerminalNode { return this.getToken(NyarParser.LogicOperator, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterLogic_) {
			listener.enterLogic_(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitLogic_) {
			listener.exitLogic_(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitLogic_) {
			return visitor.visitLogic_(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Power_Context extends ExpressionContext {
	public _left: ExpressionContext;
	public _op: Token;
	public _right: ExpressionContext;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public PowerLike(): TerminalNode { return this.getToken(NyarParser.PowerLike, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPower_) {
			listener.enterPower_(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPower_) {
			listener.exitPower_(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPower_) {
			return visitor.visitPower_(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Multiply_Divide_Context extends ExpressionContext {
	public _left: ExpressionContext;
	public _op: Token;
	public _right: ExpressionContext;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public MultiplyLike(): TerminalNode { return this.getToken(NyarParser.MultiplyLike, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMultiply_Divide_) {
			listener.enterMultiply_Divide_(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMultiply_Divide_) {
			listener.exitMultiply_Divide_(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMultiply_Divide_) {
			return visitor.visitMultiply_Divide_(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Add_Subtract_Context extends ExpressionContext {
	public _left: ExpressionContext;
	public _op: Token;
	public _right: ExpressionContext;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public AddLike(): TerminalNode { return this.getToken(NyarParser.AddLike, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAdd_Subtract_) {
			listener.enterAdd_Subtract_(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAdd_Subtract_) {
			listener.exitAdd_Subtract_(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAdd_Subtract_) {
			return visitor.visitAdd_Subtract_(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Binary_Context extends ExpressionContext {
	public _left: ExpressionContext;
	public _op: Token;
	public _right: ExpressionContext;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public BinaryOperator(): TerminalNode { return this.getToken(NyarParser.BinaryOperator, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterBinary_) {
			listener.enterBinary_(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitBinary_) {
			listener.exitBinary_(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitBinary_) {
			return visitor.visitBinary_(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class StringContext extends ExpressionContext {
	public _atom: Token;
	public STRING(): TerminalNode { return this.getToken(NyarParser.STRING, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterString) {
			listener.enterString(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitString) {
			listener.exitString(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitString) {
			return visitor.visitString(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class RealContext extends ExpressionContext {
	public _atom: Token;
	public REAL(): TerminalNode { return this.getToken(NyarParser.REAL, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterReal) {
			listener.enterReal(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitReal) {
			listener.exitReal(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitReal) {
			return visitor.visitReal(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class IntegerContext extends ExpressionContext {
	public _atom: Token;
	public INTEGER(): TerminalNode { return this.getToken(NyarParser.INTEGER, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterInteger) {
			listener.enterInteger(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitInteger) {
			listener.exitInteger(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitInteger) {
			return visitor.visitInteger(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class SymbolContext extends ExpressionContext {
	public _atom: Token;
	public SYMBOL(): TerminalNode { return this.getToken(NyarParser.SYMBOL, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterSymbol) {
			listener.enterSymbol(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitSymbol) {
			listener.exitSymbol(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitSymbol) {
			return visitor.visitSymbol(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class PriorityOperationContext extends ExpressionContext {
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPriorityOperation) {
			listener.enterPriorityOperation(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPriorityOperation) {
			listener.exitPriorityOperation(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPriorityOperation) {
			return visitor.visitPriorityOperation(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ListContext extends ParserRuleContext {
	public LM(): TerminalNode { return this.getToken(NyarParser.LM, 0); }
	public RM(): TerminalNode { return this.getToken(NyarParser.RM, 0); }
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public Comma(): TerminalNode[];
	public Comma(i: number): TerminalNode;
	public Comma(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Comma);
		} else {
			return this.getToken(NyarParser.Comma, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_list; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterList) {
			listener.enterList(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitList) {
			listener.exitList(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitList) {
			return visitor.visitList(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class RecordContext extends ParserRuleContext {
	public LL(): TerminalNode { return this.getToken(NyarParser.LL, 0); }
	public RL(): TerminalNode { return this.getToken(NyarParser.RL, 0); }
	public keyValue(): KeyValueContext[];
	public keyValue(i: number): KeyValueContext;
	public keyValue(i?: number): KeyValueContext | KeyValueContext[] {
		if (i === undefined) {
			return this.getRuleContexts(KeyValueContext);
		} else {
			return this.getRuleContext(i, KeyValueContext);
		}
	}
	public Comma(): TerminalNode[];
	public Comma(i: number): TerminalNode;
	public Comma(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Comma);
		} else {
			return this.getToken(NyarParser.Comma, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_record; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterRecord) {
			listener.enterRecord(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitRecord) {
			listener.exitRecord(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitRecord) {
			return visitor.visitRecord(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class KeyValueContext extends ParserRuleContext {
	public _key: Token;
	public _value: ExpressionContext;
	public Colon(): TerminalNode { return this.getToken(NyarParser.Colon, 0); }
	public SYMBOL(): TerminalNode { return this.getToken(NyarParser.SYMBOL, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_keyValue; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterKeyValue) {
			listener.enterKeyValue(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitKeyValue) {
			listener.exitKeyValue(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitKeyValue) {
			return visitor.visitKeyValue(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


