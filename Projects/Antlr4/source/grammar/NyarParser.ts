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
	public static readonly T__1 = 2;
	public static readonly T__2 = 3;
	public static readonly String = 4;
	public static readonly WhiteSpace = 5;
	public static readonly NewLine = 6;
	public static readonly Comment = 7;
	public static readonly Integer = 8;
	public static readonly Using = 9;
	public static readonly Exposing = 10;
	public static readonly With = 11;
	public static readonly As = 12;
	public static readonly Macro = 13;
	public static readonly Template = 14;
	public static readonly Interface = 15;
	public static readonly Class = 16;
	public static readonly Extends = 17;
	public static readonly Mixin = 18;
	public static readonly Setter = 19;
	public static readonly Getter = 20;
	public static readonly Public = 21;
	public static readonly Private = 22;
	public static readonly Protected = 23;
	public static readonly Final = 24;
	public static readonly Try = 25;
	public static readonly Catch = 26;
	public static readonly For = 27;
	public static readonly In = 28;
	public static readonly Symbol = 29;
	public static readonly Output = 30;
	public static readonly RightShift = 31;
	public static readonly Grater = 32;
	public static readonly Import = 33;
	public static readonly LeftShift = 34;
	public static readonly Less = 35;
	public static readonly Plus3 = 36;
	public static readonly Plus2 = 37;
	public static readonly Add = 38;
	public static readonly Minus3 = 39;
	public static readonly Minus2 = 40;
	public static readonly Subtract = 41;
	public static readonly BlankNullSequence = 42;
	public static readonly BlankSequence = 43;
	public static readonly Times = 44;
	public static readonly Multiply = 45;
	public static readonly Div = 46;
	public static readonly Divide = 47;
	public static readonly NumberedOutput = 48;
	public static readonly Mod = 49;
	public static readonly Caret3 = 50;
	public static readonly BaseInput = 51;
	public static readonly Power = 52;
	public static readonly SlotSequence = 53;
	public static readonly Slot = 54;
	public static readonly Equivalent = 55;
	public static readonly Equal = 56;
	public static readonly Set = 57;
	public static readonly Bar3 = 58;
	public static readonly Bar2 = 59;
	public static readonly Bar = 60;
	public static readonly Colon3 = 61;
	public static readonly Colon2 = 62;
	public static readonly Colon = 63;
	public static readonly Quote3 = 64;
	public static readonly Quote2 = 65;
	public static readonly Quote = 66;
	public static readonly At3 = 67;
	public static readonly At2 = 68;
	public static readonly At = 69;
	public static readonly Bang3 = 70;
	public static readonly Bang2 = 71;
	public static readonly Bang = 72;
	public static readonly Dot = 73;
	public static readonly Comma = 74;
	public static readonly Quotation = 75;
	public static readonly SetConstant = 76;
	public static readonly DelayedSet = 77;
	public static readonly UpSet = 78;
	public static readonly SetAddTo = 79;
	public static readonly SetMinusFrom = 80;
	public static readonly AssignmentOperator = 81;
	public static readonly NotEqual = 82;
	public static readonly NotEquivalent = 83;
	public static readonly Map = 84;
	public static readonly To = 85;
	public static readonly Infer = 86;
	public static readonly Link = 87;
	public static readonly Linka = 88;
	public static readonly Linki = 89;
	public static readonly RULE_program = 0;
	public static readonly RULE_statement = 1;
	public static readonly RULE_expressionStatement = 2;
	public static readonly RULE_assignStatement = 3;
	public static readonly RULE_macroStatement = 4;
	public static readonly RULE_templateStatement = 5;
	public static readonly RULE_interfaceStatement = 6;
	public static readonly RULE_classStatement = 7;
	public static readonly RULE_expression = 8;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"program", "statement", "expressionStatement", "assignStatement", "macroStatement", 
		"templateStatement", "interfaceStatement", "classStatement", "expression",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "';'", "'('", "')'", undefined, undefined, undefined, undefined, 
		undefined, "'Using'", "'Exposing'", "'With'", "'As'", "'Macro'", "'Template'", 
		"'Interface'", "'Class'", "'Extends'", "'Mixin'", "'Setter'", "'Getter'", 
		"'Public'", "'Private'", "'Protected'", "'Final'", "'Try'", "'Catch'", 
		"'For'", "'In'", undefined, "'>>>'", "'>>'", "'>'", "'<<<'", "'<<'", "'<'", 
		"'+++'", "'++'", "'+'", "'---'", "'--'", "'-'", "'***'", "'**'", "'*'", 
		"'\u00D7'", "'//'", "'\u00F7'", "'%%'", "'%'", "'^^^'", "'^^'", "'^'", 
		"'##'", "'#'", "'==='", "'=='", "'='", "'|||'", "'||'", "'|'", "':::'", 
		"'::'", "':'", "'```'", "'``'", "'`'", "'@@@'", "'@@'", "'@'", "'!!!'", 
		"'!!'", "'!'", "'.'", "','", "'''", "'=<'", "':='", "'^='", "'+='", "'-='", 
		undefined, undefined, "'=!='", "'/@'", undefined, "'=>'", "'<>'", "'<->'", 
		"'<=>'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, "String", "WhiteSpace", "NewLine", 
		"Comment", "Integer", "Using", "Exposing", "With", "As", "Macro", "Template", 
		"Interface", "Class", "Extends", "Mixin", "Setter", "Getter", "Public", 
		"Private", "Protected", "Final", "Try", "Catch", "For", "In", "Symbol", 
		"Output", "RightShift", "Grater", "Import", "LeftShift", "Less", "Plus3", 
		"Plus2", "Add", "Minus3", "Minus2", "Subtract", "BlankNullSequence", "BlankSequence", 
		"Times", "Multiply", "Div", "Divide", "NumberedOutput", "Mod", "Caret3", 
		"BaseInput", "Power", "SlotSequence", "Slot", "Equivalent", "Equal", "Set", 
		"Bar3", "Bar2", "Bar", "Colon3", "Colon2", "Colon", "Quote3", "Quote2", 
		"Quote", "At3", "At2", "At", "Bang3", "Bang2", "Bang", "Dot", "Comma", 
		"Quotation", "SetConstant", "DelayedSet", "UpSet", "SetAddTo", "SetMinusFrom", 
		"AssignmentOperator", "NotEqual", "NotEquivalent", "Map", "To", "Infer", 
		"Link", "Linka", "Linki",
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
			this.state = 19;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.T__1) | (1 << NyarParser.String) | (1 << NyarParser.Integer) | (1 << NyarParser.Macro) | (1 << NyarParser.Template) | (1 << NyarParser.Interface) | (1 << NyarParser.Class) | (1 << NyarParser.Symbol))) !== 0)) {
				{
				this.state = 18;
				this.statement();
				}
			}

			this.state = 21;
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
			this.state = 29;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 23;
				this.expressionStatement();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 24;
				this.assignStatement();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 25;
				this.macroStatement();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 26;
				this.templateStatement();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 27;
				this.interfaceStatement();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 28;
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
			this.state = 31;
			this.expression(0);
			this.state = 32;
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
	public assignStatement(): AssignStatementContext {
		let _localctx: AssignStatementContext = new AssignStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 6, NyarParser.RULE_assignStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 34;
			this.match(NyarParser.Symbol);
			this.state = 35;
			this.match(NyarParser.AssignmentOperator);
			this.state = 36;
			this.expression(0);
			this.state = 37;
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
		this.enterRule(_localctx, 8, NyarParser.RULE_macroStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 39;
			this.match(NyarParser.Macro);
			this.state = 40;
			this.expression(0);
			this.state = 41;
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
		this.enterRule(_localctx, 10, NyarParser.RULE_templateStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 43;
			this.match(NyarParser.Template);
			this.state = 44;
			this.expression(0);
			this.state = 45;
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
		this.enterRule(_localctx, 12, NyarParser.RULE_interfaceStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 47;
			this.match(NyarParser.Interface);
			this.state = 48;
			this.expression(0);
			this.state = 49;
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
		this.enterRule(_localctx, 14, NyarParser.RULE_classStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 51;
			this.match(NyarParser.Class);
			this.state = 52;
			this.expression(0);
			this.state = 53;
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
		let _startState: number = 16;
		this.enterRecursionRule(_localctx, 16, NyarParser.RULE_expression, _p);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 63;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.String:
				{
				_localctx = new StringContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;

				this.state = 56;
				this.match(NyarParser.String);
				}
				break;
			case NyarParser.Integer:
				{
				_localctx = new IntegerContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 57;
				this.match(NyarParser.Integer);
				}
				break;
			case NyarParser.Symbol:
				{
				_localctx = new SymbolContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 58;
				this.match(NyarParser.Symbol);
				}
				break;
			case NyarParser.T__1:
				{
				_localctx = new PriorityOperationContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 59;
				this.match(NyarParser.T__1);
				this.state = 60;
				this.expression(0);
				this.state = 61;
				this.match(NyarParser.T__2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 73;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 4, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					if (this._parseListeners != null) {
						this.triggerExitRuleEvent();
					}
					_prevctx = _localctx;
					{
					this.state = 71;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 3, this._ctx) ) {
					case 1:
						{
						_localctx = new Multiply_Divide_Context(new ExpressionContext(_parentctx, _parentState));
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 65;
						if (!(this.precpred(this._ctx, 3))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 3)");
						}
						this.state = 66;
						(_localctx as Multiply_Divide_Context)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(((((_la - 44)) & ~0x1F) === 0 && ((1 << (_la - 44)) & ((1 << (NyarParser.Times - 44)) | (1 << (NyarParser.Multiply - 44)) | (1 << (NyarParser.Divide - 44)))) !== 0))) {
							(_localctx as Multiply_Divide_Context)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 67;
						this.expression(4);
						}
						break;

					case 2:
						{
						_localctx = new Add_Subtract_Context(new ExpressionContext(_parentctx, _parentState));
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 68;
						if (!(this.precpred(this._ctx, 2))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 2)");
						}
						this.state = 69;
						(_localctx as Add_Subtract_Context)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(_la === NyarParser.Add || _la === NyarParser.Subtract)) {
							(_localctx as Add_Subtract_Context)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 70;
						this.expression(3);
						}
						break;
					}
					}
				}
				this.state = 75;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 4, this._ctx);
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

	public sempred(_localctx: RuleContext, ruleIndex: number, predIndex: number): boolean {
		switch (ruleIndex) {
		case 8:
			return this.expression_sempred(_localctx as ExpressionContext, predIndex);
		}
		return true;
	}
	private expression_sempred(_localctx: ExpressionContext, predIndex: number): boolean {
		switch (predIndex) {
		case 0:
			return this.precpred(this._ctx, 3);

		case 1:
			return this.precpred(this._ctx, 2);
		}
		return true;
	}

	public static readonly _serializedATN: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03[O\x04\x02\t\x02" +
		"\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04\x07\t\x07" +
		"\x04\b\t\b\x04\t\t\t\x04\n\t\n\x03\x02\x05\x02\x16\n\x02\x03\x02\x03\x02" +
		"\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03\x05\x03 \n\x03\x03\x04" +
		"\x03\x04\x03\x04\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x06\x03\x06" +
		"\x03\x06\x03\x06\x03\x07\x03\x07\x03\x07\x03\x07\x03\b\x03\b\x03\b\x03" +
		"\b\x03\t\x03\t\x03\t\x03\t\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03" +
		"\n\x05\nB\n\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x07\nJ\n\n\f\n\x0E\n" +
		"M\v\n\x03\n\x02\x02\x03\x12\v\x02\x02\x04\x02\x06\x02\b\x02\n\x02\f\x02" +
		"\x0E\x02\x10\x02\x12\x02\x02\x04\x04\x02./11\x04\x02((++\x02P\x02\x15" +
		"\x03\x02\x02\x02\x04\x1F\x03\x02\x02\x02\x06!\x03\x02\x02\x02\b$\x03\x02" +
		"\x02\x02\n)\x03\x02\x02\x02\f-\x03\x02\x02\x02\x0E1\x03\x02\x02\x02\x10" +
		"5\x03\x02\x02\x02\x12A\x03\x02\x02\x02\x14\x16\x05\x04\x03\x02\x15\x14" +
		"\x03\x02\x02\x02\x15\x16\x03\x02\x02\x02\x16\x17\x03\x02\x02\x02\x17\x18" +
		"\x07\x02\x02\x03\x18\x03\x03\x02\x02\x02\x19 \x05\x06\x04\x02\x1A \x05" +
		"\b\x05\x02\x1B \x05\n\x06\x02\x1C \x05\f\x07\x02\x1D \x05\x0E\b\x02\x1E" +
		" \x05\x10\t\x02\x1F\x19\x03\x02\x02\x02\x1F\x1A\x03\x02\x02\x02\x1F\x1B" +
		"\x03\x02\x02\x02\x1F\x1C\x03\x02\x02\x02\x1F\x1D\x03\x02\x02\x02\x1F\x1E" +
		"\x03\x02\x02\x02 \x05\x03\x02\x02\x02!\"\x05\x12\n\x02\"#\x07\x03\x02" +
		"\x02#\x07\x03\x02\x02\x02$%\x07\x1F\x02\x02%&\x07S\x02\x02&\'\x05\x12" +
		"\n\x02\'(\x07\x03\x02\x02(\t\x03\x02\x02\x02)*\x07\x0F\x02\x02*+\x05\x12" +
		"\n\x02+,\x07\x03\x02\x02,\v\x03\x02\x02\x02-.\x07\x10\x02\x02./\x05\x12" +
		"\n\x02/0\x07\x03\x02\x020\r\x03\x02\x02\x0212\x07\x11\x02\x0223\x05\x12" +
		"\n\x0234\x07\x03\x02\x024\x0F\x03\x02\x02\x0256\x07\x12\x02\x0267\x05" +
		"\x12\n\x0278\x07\x03\x02\x028\x11\x03\x02\x02\x029:\b\n\x01\x02:B\x07" +
		"\x06\x02\x02;B\x07\n\x02\x02<B\x07\x1F\x02\x02=>\x07\x04\x02\x02>?\x05" +
		"\x12\n\x02?@\x07\x05\x02\x02@B\x03\x02\x02\x02A9\x03\x02\x02\x02A;\x03" +
		"\x02\x02\x02A<\x03\x02\x02\x02A=\x03\x02\x02\x02BK\x03\x02\x02\x02CD\f" +
		"\x05\x02\x02DE\t\x02\x02\x02EJ\x05\x12\n\x06FG\f\x04\x02\x02GH\t\x03\x02" +
		"\x02HJ\x05\x12\n\x05IC\x03\x02\x02\x02IF\x03\x02\x02\x02JM\x03\x02\x02" +
		"\x02KI\x03\x02\x02\x02KL\x03\x02\x02\x02L\x13\x03\x02\x02\x02MK\x03\x02" +
		"\x02\x02\x07\x15\x1FAIK";
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
	public statement(): StatementContext | undefined {
		return this.tryGetRuleContext(0, StatementContext);
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


export class AssignStatementContext extends ParserRuleContext {
	public Symbol(): TerminalNode { return this.getToken(NyarParser.Symbol, 0); }
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
export class StringContext extends ExpressionContext {
	public String(): TerminalNode { return this.getToken(NyarParser.String, 0); }
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
export class IntegerContext extends ExpressionContext {
	public Integer(): TerminalNode { return this.getToken(NyarParser.Integer, 0); }
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
	public Symbol(): TerminalNode { return this.getToken(NyarParser.Symbol, 0); }
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
export class Multiply_Divide_Context extends ExpressionContext {
	public _op: Token;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public Multiply(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Multiply, 0); }
	public Divide(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Divide, 0); }
	public Times(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Times, 0); }
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
	public _op: Token;
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public Add(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Add, 0); }
	public Subtract(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Subtract, 0); }
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
export class PriorityOperationContext extends ExpressionContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
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


