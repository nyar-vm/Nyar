// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


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
	public static readonly MacroApply = 13;
	public static readonly Template = 14;
	public static readonly TemplayeApply = 15;
	public static readonly Interface = 16;
	public static readonly Class = 17;
	public static readonly Extends = 18;
	public static readonly Mixin = 19;
	public static readonly Setter = 20;
	public static readonly Getter = 21;
	public static readonly Public = 22;
	public static readonly Private = 23;
	public static readonly Protected = 24;
	public static readonly Final = 25;
	public static readonly Try = 26;
	public static readonly Catch = 27;
	public static readonly For = 28;
	public static readonly In = 29;
	public static readonly Pi = 30;
	public static readonly E = 31;
	public static readonly I = 32;
	public static readonly EulerGamma = 33;
	public static readonly Plank = 34;
	public static readonly Reciprocal = 35;
	public static readonly Derivative = 36;
	public static readonly IntegerField = 37;
	public static readonly RealField = 38;
	public static readonly ComplexField = 39;
	public static readonly SYMBOL = 40;
	public static readonly Math = 41;
	public static readonly LS = 42;
	public static readonly RS = 43;
	public static readonly LM = 44;
	public static readonly RM = 45;
	public static readonly LL = 46;
	public static readonly RL = 47;
	public static readonly LCeil = 48;
	public static readonly RCeil = 49;
	public static readonly LFloor = 50;
	public static readonly RFloor = 51;
	public static readonly LAngle = 52;
	public static readonly RAngle = 53;
	public static readonly Import = 54;
	public static readonly Export = 55;
	public static readonly LeftShift = 56;
	public static readonly RightShift = 57;
	public static readonly Less = 58;
	public static readonly Grater = 59;
	public static readonly Plus3 = 60;
	public static readonly Increase = 61;
	public static readonly Add = 62;
	public static readonly Minus3 = 63;
	public static readonly Decrease = 64;
	public static readonly Subtract = 65;
	public static readonly NullSequence = 66;
	public static readonly Sequence = 67;
	public static readonly Times = 68;
	public static readonly Remainder = 69;
	public static readonly Divide = 70;
	public static readonly Quotient = 71;
	public static readonly Output = 72;
	public static readonly Mod = 73;
	public static readonly BaseInput = 74;
	public static readonly Power = 75;
	public static readonly Root = 76;
	public static readonly Equivalent = 77;
	public static readonly Equal = 78;
	public static readonly Set = 79;
	public static readonly NotEqual = 80;
	public static readonly NotEquivalent = 81;
	public static readonly GraterEqual = 82;
	public static readonly LessEqual = 83;
	public static readonly Bar3 = 84;
	public static readonly Bar2 = 85;
	public static readonly Bar = 86;
	public static readonly SlotSequence = 87;
	public static readonly Slot = 88;
	public static readonly PostfixFunction = 89;
	public static readonly AnonymousFunction = 90;
	public static readonly Curry = 91;
	public static readonly Apply = 92;
	public static readonly At = 93;
	public static readonly Type = 94;
	public static readonly Colon = 95;
	public static readonly Quote = 96;
	public static readonly Bang = 97;
	public static readonly Dot = 98;
	public static readonly Comma = 99;
	public static readonly Quotation = 100;
	public static readonly SetConstant = 101;
	public static readonly DelayedSet = 102;
	public static readonly SetAddTo = 103;
	public static readonly SetMinusFrom = 104;
	public static readonly SetTimesTo = 105;
	public static readonly SetDivideFrom = 106;
	public static readonly SetModTo = 107;
	public static readonly SetPowerTo = 108;
	public static readonly Clean = 109;
	public static readonly Map = 110;
	public static readonly MapAll = 111;
	public static readonly To = 112;
	public static readonly Infer = 113;
	public static readonly Concat = 114;
	public static readonly Unknow5 = 115;
	public static readonly Unknow6 = 116;
	public static readonly Multiply = 117;
	public static readonly Kronecker = 118;
	public static readonly TensorProduct = 119;
	public static readonly AssignmentOperator = 120;
	public static readonly BinaryOperator = 121;
	public static readonly LogicOperator = 122;
	public static readonly PowerLike = 123;
	public static readonly MultiplyLike = 124;
	public static readonly AddLike = 125;
	public static readonly ListOperator = 126;
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
	public static readonly RULE_mathAlias = 13;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"program", "statement", "expressionStatement", "moduleStatement", "assignStatement", 
		"macroStatement", "templateStatement", "interfaceStatement", "classStatement", 
		"expression", "list", "record", "keyValue", "mathAlias",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "';'", undefined, undefined, undefined, undefined, undefined, 
		undefined, "'Using'", "'Exposing'", "'With'", "'As'", "'Macro'", "'\u00A7'", 
		"'Template'", "'\u00B6'", "'Interface'", "'Class'", "'Extends'", "'Mixin'", 
		"'Setter'", "'Getter'", "'Public'", "'Private'", "'Protected'", "'Final'", 
		"'Try'", "'Catch'", "'For'", "'In'", "'\u213C'", "'\u2147'", "'\u2148'", 
		"'\u213D'", "'\u210E'", "'\u215F'", "'\u2146'", "'\u2124'", "'\u211D'", 
		"'\u2102'", undefined, undefined, "'('", "')'", "'['", "']'", "'{'", "'}'", 
		"'\u2308'", "'\u2309'", "'\u230A'", "'\u230B'", "'\u27E8'", "'\u27E9'", 
		undefined, undefined, undefined, undefined, "'<'", "'>'", "'+++'", "'++'", 
		"'+'", "'---'", "'--'", "'-'", "'***'", "'**'", "'*'", "'//'", "'/'", 
		"'\u00F7'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", "'=='", 
		"'='", undefined, "'=!='", "'>='", "'<='", "'|||'", "'||'", "'|'", "'##'", 
		"'#'", "'$$'", "'$'", "'@@@'", "'@@'", "'@'", undefined, "':'", "'`'", 
		"'!'", "'.'", "','", "'''", "'=<'", undefined, "'+='", "'-='", "'*='", 
		"'/='", "'%='", "'^='", "'=.'", "'/@'", "'//@'", undefined, undefined, 
		"'<>'", "'<->'", undefined, "'\u00D7'", "'\u2297'", "'\u2299'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", 
		"Comment", "Using", "Exposing", "With", "As", "Macro", "MacroApply", "Template", 
		"TemplayeApply", "Interface", "Class", "Extends", "Mixin", "Setter", "Getter", 
		"Public", "Private", "Protected", "Final", "Try", "Catch", "For", "In", 
		"Pi", "E", "I", "EulerGamma", "Plank", "Reciprocal", "Derivative", "IntegerField", 
		"RealField", "ComplexField", "SYMBOL", "Math", "LS", "RS", "LM", "RM", 
		"LL", "RL", "LCeil", "RCeil", "LFloor", "RFloor", "LAngle", "RAngle", 
		"Import", "Export", "LeftShift", "RightShift", "Less", "Grater", "Plus3", 
		"Increase", "Add", "Minus3", "Decrease", "Subtract", "NullSequence", "Sequence", 
		"Times", "Remainder", "Divide", "Quotient", "Output", "Mod", "BaseInput", 
		"Power", "Root", "Equivalent", "Equal", "Set", "NotEqual", "NotEquivalent", 
		"GraterEqual", "LessEqual", "Bar3", "Bar2", "Bar", "SlotSequence", "Slot", 
		"PostfixFunction", "AnonymousFunction", "Curry", "Apply", "At", "Type", 
		"Colon", "Quote", "Bang", "Dot", "Comma", "Quotation", "SetConstant", 
		"DelayedSet", "SetAddTo", "SetMinusFrom", "SetTimesTo", "SetDivideFrom", 
		"SetModTo", "SetPowerTo", "Clean", "Map", "MapAll", "To", "Infer", "Concat", 
		"Unknow5", "Unknow6", "Multiply", "Kronecker", "TensorProduct", "AssignmentOperator", 
		"BinaryOperator", "LogicOperator", "PowerLike", "MultiplyLike", "AddLike", 
		"ListOperator",
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
			this.state = 31;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.STRING) | (1 << NyarParser.INTEGER) | (1 << NyarParser.REAL) | (1 << NyarParser.Using) | (1 << NyarParser.Exposing) | (1 << NyarParser.Macro) | (1 << NyarParser.Template) | (1 << NyarParser.Interface) | (1 << NyarParser.Class))) !== 0) || _la === NyarParser.SYMBOL || _la === NyarParser.LS) {
				{
				{
				this.state = 28;
				this.statement();
				}
				}
				this.state = 33;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 34;
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
			this.state = 43;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 36;
				this.expressionStatement();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 37;
				this.moduleStatement();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 38;
				this.assignStatement();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 39;
				this.macroStatement();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 40;
				this.templateStatement();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 41;
				this.interfaceStatement();
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 42;
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
			this.state = 45;
			this.expression(0);
			this.state = 46;
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
			this.state = 60;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 2, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 48;
				this.match(NyarParser.Using);
				this.state = 49;
				_localctx._core = this.match(NyarParser.SYMBOL);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 50;
				this.match(NyarParser.Using);
				this.state = 51;
				_localctx._source = this.match(NyarParser.STRING);
				this.state = 52;
				this.match(NyarParser.As);
				this.state = 53;
				_localctx._name = this.match(NyarParser.SYMBOL);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 54;
				this.match(NyarParser.Using);
				this.state = 55;
				_localctx._source = this.match(NyarParser.STRING);
				this.state = 56;
				this.match(NyarParser.With);
				this.state = 57;
				_localctx._name = this.match(NyarParser.SYMBOL);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 58;
				this.match(NyarParser.Exposing);
				this.state = 59;
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
			this.state = 62;
			this.match(NyarParser.SYMBOL);
			this.state = 63;
			this.match(NyarParser.AssignmentOperator);
			this.state = 64;
			this.expression(0);
			this.state = 65;
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
			this.state = 67;
			this.match(NyarParser.Macro);
			this.state = 68;
			this.expression(0);
			this.state = 69;
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
			this.state = 71;
			this.match(NyarParser.Template);
			this.state = 72;
			this.expression(0);
			this.state = 73;
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
			this.state = 75;
			this.match(NyarParser.Interface);
			this.state = 76;
			this.expression(0);
			this.state = 77;
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
			this.state = 79;
			this.match(NyarParser.Class);
			this.state = 80;
			this.expression(0);
			this.state = 81;
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
			this.state = 92;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.STRING:
				{
				_localctx = new StringContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;

				this.state = 84;
				(_localctx as StringContext)._atom = this.match(NyarParser.STRING);
				}
				break;
			case NyarParser.REAL:
				{
				_localctx = new RealContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 85;
				(_localctx as RealContext)._atom = this.match(NyarParser.REAL);
				}
				break;
			case NyarParser.INTEGER:
				{
				_localctx = new IntegerContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 86;
				(_localctx as IntegerContext)._atom = this.match(NyarParser.INTEGER);
				}
				break;
			case NyarParser.SYMBOL:
				{
				_localctx = new SymbolContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 87;
				(_localctx as SymbolContext)._atom = this.match(NyarParser.SYMBOL);
				}
				break;
			case NyarParser.LS:
				{
				_localctx = new PriorityOperationContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 88;
				this.match(NyarParser.LS);
				this.state = 89;
				this.expression(0);
				this.state = 90;
				this.match(NyarParser.RS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 114;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 5, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					if (this._parseListeners != null) {
						this.triggerExitRuleEvent();
					}
					_prevctx = _localctx;
					{
					this.state = 112;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 4, this._ctx) ) {
					case 1:
						{
						_localctx = new Binary_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Binary_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 94;
						if (!(this.precpred(this._ctx, 11))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 11)");
						}
						this.state = 95;
						(_localctx as Binary_Context)._op = this.match(NyarParser.BinaryOperator);
						this.state = 96;
						(_localctx as Binary_Context)._right = this.expression(12);
						}
						break;

					case 2:
						{
						_localctx = new Logic_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Logic_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 97;
						if (!(this.precpred(this._ctx, 10))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 10)");
						}
						this.state = 98;
						(_localctx as Logic_Context)._op = this.match(NyarParser.LogicOperator);
						this.state = 99;
						(_localctx as Logic_Context)._right = this.expression(11);
						}
						break;

					case 3:
						{
						_localctx = new Power_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Power_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 100;
						if (!(this.precpred(this._ctx, 9))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 9)");
						}
						this.state = 101;
						(_localctx as Power_Context)._op = this.match(NyarParser.PowerLike);
						this.state = 102;
						(_localctx as Power_Context)._right = this.expression(9);
						}
						break;

					case 4:
						{
						_localctx = new Multiply_Divide_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Multiply_Divide_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 103;
						if (!(this.precpred(this._ctx, 8))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 8)");
						}
						this.state = 104;
						(_localctx as Multiply_Divide_Context)._op = this.match(NyarParser.MultiplyLike);
						this.state = 105;
						(_localctx as Multiply_Divide_Context)._right = this.expression(9);
						}
						break;

					case 5:
						{
						_localctx = new Add_Subtract_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Add_Subtract_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 106;
						if (!(this.precpred(this._ctx, 7))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 7)");
						}
						this.state = 107;
						(_localctx as Add_Subtract_Context)._op = this.match(NyarParser.AddLike);
						this.state = 108;
						(_localctx as Add_Subtract_Context)._right = this.expression(8);
						}
						break;

					case 6:
						{
						_localctx = new List_Context(new ExpressionContext(_parentctx, _parentState));
						(_localctx as List_Context)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 109;
						if (!(this.precpred(this._ctx, 6))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 6)");
						}
						this.state = 110;
						(_localctx as List_Context)._op = this.match(NyarParser.ListOperator);
						this.state = 111;
						(_localctx as List_Context)._right = this.expression(7);
						}
						break;
					}
					}
				}
				this.state = 116;
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
			this.state = 117;
			this.match(NyarParser.LM);
			this.state = 124;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.STRING) | (1 << NyarParser.INTEGER) | (1 << NyarParser.REAL))) !== 0) || _la === NyarParser.SYMBOL || _la === NyarParser.LS) {
				{
				{
				this.state = 118;
				this.expression(0);
				this.state = 120;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Comma) {
					{
					this.state = 119;
					this.match(NyarParser.Comma);
					}
				}

				}
				}
				this.state = 126;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 127;
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
			this.state = 129;
			this.match(NyarParser.LL);
			this.state = 136;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.SYMBOL) {
				{
				{
				this.state = 130;
				this.keyValue();
				this.state = 132;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Comma) {
					{
					this.state = 131;
					this.match(NyarParser.Comma);
					}
				}

				}
				}
				this.state = 138;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 139;
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
			this.state = 141;
			_localctx._key = this.match(NyarParser.SYMBOL);
			this.state = 142;
			this.match(NyarParser.Colon);
			this.state = 143;
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
	// @RuleVersion(0)
	public mathAlias(): MathAliasContext {
		let _localctx: MathAliasContext = new MathAliasContext(this._ctx, this.state);
		this.enterRule(_localctx, 26, NyarParser.RULE_mathAlias);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 145;
			_localctx._alias = this.match(NyarParser.Math);
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
			return this.precpred(this._ctx, 11);

		case 1:
			return this.precpred(this._ctx, 10);

		case 2:
			return this.precpred(this._ctx, 9);

		case 3:
			return this.precpred(this._ctx, 8);

		case 4:
			return this.precpred(this._ctx, 7);

		case 5:
			return this.precpred(this._ctx, 6);
		}
		return true;
	}

	public static readonly _serializedATN: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03\x80\x96\x04\x02" +
		"\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04\x07" +
		"\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r\x04" +
		"\x0E\t\x0E\x04\x0F\t\x0F\x03\x02\x07\x02 \n\x02\f\x02\x0E\x02#\v\x02\x03" +
		"\x02\x03\x02\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x05" +
		"\x03.\n\x03\x03\x04\x03\x04\x03\x04\x03\x05\x03\x05\x03\x05\x03\x05\x03" +
		"\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x05\x05?" +
		"\n\x05\x03\x06\x03\x06\x03\x06\x03\x06\x03\x06\x03\x07\x03\x07\x03\x07" +
		"\x03\x07\x03\b\x03\b\x03\b\x03\b\x03\t\x03\t\x03\t\x03\t\x03\n\x03\n\x03" +
		"\n\x03\n\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x05\v_" +
		"\n\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v" +
		"\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x07\vs\n\v\f\v\x0E\vv\v\v\x03" +
		"\f\x03\f\x03\f\x05\f{\n\f\x07\f}\n\f\f\f\x0E\f\x80\v\f\x03\f\x03\f\x03" +
		"\r\x03\r\x03\r\x05\r\x87\n\r\x07\r\x89\n\r\f\r\x0E\r\x8C\v\r\x03\r\x03" +
		"\r\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0F\x03\x0F\x03\x0F\x02\x02\x03" +
		"\x14\x10\x02\x02\x04\x02\x06\x02\b\x02\n\x02\f\x02\x0E\x02\x10\x02\x12" +
		"\x02\x14\x02\x16\x02\x18\x02\x1A\x02\x1C\x02\x02\x02\x02\x9F\x02!\x03" +
		"\x02\x02\x02\x04-\x03\x02\x02\x02\x06/\x03\x02\x02\x02\b>\x03\x02\x02" +
		"\x02\n@\x03\x02\x02\x02\fE\x03\x02\x02\x02\x0EI\x03\x02\x02\x02\x10M\x03" +
		"\x02\x02\x02\x12Q\x03\x02\x02\x02\x14^\x03\x02\x02\x02\x16w\x03\x02\x02" +
		"\x02\x18\x83\x03\x02\x02\x02\x1A\x8F\x03\x02\x02\x02\x1C\x93\x03\x02\x02" +
		"\x02\x1E \x05\x04\x03\x02\x1F\x1E\x03\x02\x02\x02 #\x03\x02\x02\x02!\x1F" +
		"\x03\x02\x02\x02!\"\x03\x02\x02\x02\"$\x03\x02\x02\x02#!\x03\x02\x02\x02" +
		"$%\x07\x02\x02\x03%\x03\x03\x02\x02\x02&.\x05\x06\x04\x02\'.\x05\b\x05" +
		"\x02(.\x05\n\x06\x02).\x05\f\x07\x02*.\x05\x0E\b\x02+.\x05\x10\t\x02," +
		".\x05\x12\n\x02-&\x03\x02\x02\x02-\'\x03\x02\x02\x02-(\x03\x02\x02\x02" +
		"-)\x03\x02\x02\x02-*\x03\x02\x02\x02-+\x03\x02\x02\x02-,\x03\x02\x02\x02" +
		".\x05\x03\x02\x02\x02/0\x05\x14\v\x0201\x07\x03\x02\x021\x07\x03\x02\x02" +
		"\x0223\x07\n\x02\x023?\x07*\x02\x0245\x07\n\x02\x0256\x07\x04\x02\x02" +
		"67\x07\r\x02\x027?\x07*\x02\x0289\x07\n\x02\x029:\x07\x04\x02\x02:;\x07" +
		"\f\x02\x02;?\x07*\x02\x02<=\x07\v\x02\x02=?\x07\x04\x02\x02>2\x03\x02" +
		"\x02\x02>4\x03\x02\x02\x02>8\x03\x02\x02\x02><\x03\x02\x02\x02?\t\x03" +
		"\x02\x02\x02@A\x07*\x02\x02AB\x07z\x02\x02BC\x05\x14\v\x02CD\x07\x03\x02" +
		"\x02D\v\x03\x02\x02\x02EF\x07\x0E\x02\x02FG\x05\x14\v\x02GH\x07\x03\x02" +
		"\x02H\r\x03\x02\x02\x02IJ\x07\x10\x02\x02JK\x05\x14\v\x02KL\x07\x03\x02" +
		"\x02L\x0F\x03\x02\x02\x02MN\x07\x12\x02\x02NO\x05\x14\v\x02OP\x07\x03" +
		"\x02\x02P\x11\x03\x02\x02\x02QR\x07\x13\x02\x02RS\x05\x14\v\x02ST\x07" +
		"\x03\x02\x02T\x13\x03\x02\x02\x02UV\b\v\x01\x02V_\x07\x04\x02\x02W_\x07" +
		"\x06\x02\x02X_\x07\x05\x02\x02Y_\x07*\x02\x02Z[\x07,\x02\x02[\\\x05\x14" +
		"\v\x02\\]\x07-\x02\x02]_\x03\x02\x02\x02^U\x03\x02\x02\x02^W\x03\x02\x02" +
		"\x02^X\x03\x02\x02\x02^Y\x03\x02\x02\x02^Z\x03\x02\x02\x02_t\x03\x02\x02" +
		"\x02`a\f\r\x02\x02ab\x07{\x02\x02bs\x05\x14\v\x0Ecd\f\f\x02\x02de\x07" +
		"|\x02\x02es\x05\x14\v\rfg\f\v\x02\x02gh\x07}\x02\x02hs\x05\x14\v\vij\f" +
		"\n\x02\x02jk\x07~\x02\x02ks\x05\x14\v\vlm\f\t\x02\x02mn\x07\x7F\x02\x02" +
		"ns\x05\x14\v\nop\f\b\x02\x02pq\x07\x80\x02\x02qs\x05\x14\v\tr`\x03\x02" +
		"\x02\x02rc\x03\x02\x02\x02rf\x03\x02\x02\x02ri\x03\x02\x02\x02rl\x03\x02" +
		"\x02\x02ro\x03\x02\x02\x02sv\x03\x02\x02\x02tr\x03\x02\x02\x02tu\x03\x02" +
		"\x02\x02u\x15\x03\x02\x02\x02vt\x03\x02\x02\x02w~\x07.\x02\x02xz\x05\x14" +
		"\v\x02y{\x07e\x02\x02zy\x03\x02\x02\x02z{\x03\x02\x02\x02{}\x03\x02\x02" +
		"\x02|x\x03\x02\x02\x02}\x80\x03\x02\x02\x02~|\x03\x02\x02\x02~\x7F\x03" +
		"\x02\x02\x02\x7F\x81\x03\x02\x02\x02\x80~\x03\x02\x02\x02\x81\x82\x07" +
		"/\x02\x02\x82\x17\x03\x02\x02\x02\x83\x8A\x070\x02\x02\x84\x86\x05\x1A" +
		"\x0E\x02\x85\x87\x07e\x02\x02\x86\x85\x03\x02\x02\x02\x86\x87\x03\x02" +
		"\x02\x02\x87\x89\x03\x02\x02\x02\x88\x84\x03\x02\x02\x02\x89\x8C\x03\x02" +
		"\x02\x02\x8A\x88\x03\x02\x02\x02\x8A\x8B\x03\x02\x02\x02\x8B\x8D\x03\x02" +
		"\x02\x02\x8C\x8A\x03\x02\x02\x02\x8D\x8E\x071\x02\x02\x8E\x19\x03\x02" +
		"\x02\x02\x8F\x90\x07*\x02\x02\x90\x91\x07a\x02\x02\x91\x92\x05\x14\v\x02" +
		"\x92\x1B\x03\x02\x02\x02\x93\x94\x07+\x02\x02\x94\x1D\x03\x02\x02\x02" +
		"\f!->^rtz~\x86\x8A";
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
export class List_Context extends ExpressionContext {
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
	public ListOperator(): TerminalNode { return this.getToken(NyarParser.ListOperator, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterList_) {
			listener.enterList_(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitList_) {
			listener.exitList_(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitList_) {
			return visitor.visitList_(this);
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


export class MathAliasContext extends ParserRuleContext {
	public _alias: Token;
	public Math(): TerminalNode { return this.getToken(NyarParser.Math, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_mathAlias; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMathAlias) {
			listener.enterMathAlias(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMathAlias) {
			listener.exitMathAlias(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMathAlias) {
			return visitor.visitMathAlias(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


