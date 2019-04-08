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
	public static readonly T__1 = 2;
	public static readonly Assign_ops = 3;
	public static readonly Lazy_assign = 4;
	public static readonly Assign_mods = 5;
	public static readonly LineComment = 6;
	public static readonly PartComment = 7;
	public static readonly WhiteSpace = 8;
	public static readonly NewLine = 9;
	public static readonly Using = 10;
	public static readonly Expose = 11;
	public static readonly With = 12;
	public static readonly As = 13;
	public static readonly Macro = 14;
	public static readonly Template = 15;
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
	public static readonly Let = 26;
	public static readonly True = 27;
	public static readonly False = 28;
	public static readonly If = 29;
	public static readonly Else = 30;
	public static readonly Try = 31;
	public static readonly Catch = 32;
	public static readonly For = 33;
	public static readonly In = 34;
	public static readonly BOOL = 35;
	public static readonly NUMBER = 36;
	public static readonly STRING = 37;
	public static readonly SYMBOL = 38;
	public static readonly Integer = 39;
	public static readonly Float = 40;
	public static readonly Add_ops = 41;
	public static readonly Bit_ops = 42;
	public static readonly Logic_ops = 43;
	public static readonly Pow_ops = 44;
	public static readonly Mul_ops = 45;
	public static readonly List_ops = 46;
	public static readonly Pre_ops = 47;
	public static readonly LS = 48;
	public static readonly RS = 49;
	public static readonly LM = 50;
	public static readonly RM = 51;
	public static readonly LL = 52;
	public static readonly RL = 53;
	public static readonly LCeil = 54;
	public static readonly RCeil = 55;
	public static readonly LFloor = 56;
	public static readonly RFloor = 57;
	public static readonly LAngle = 58;
	public static readonly RAngle = 59;
	public static readonly LQuote = 60;
	public static readonly RQuote = 61;
	public static readonly Import = 62;
	public static readonly LeftShift = 63;
	public static readonly LessEqual = 64;
	public static readonly Less = 65;
	public static readonly Export = 66;
	public static readonly RightShift = 67;
	public static readonly GraterEqual = 68;
	public static readonly Grater = 69;
	public static readonly Increase = 70;
	public static readonly PlusTo = 71;
	public static readonly Plus = 72;
	public static readonly Decrease = 73;
	public static readonly MinusFrom = 74;
	public static readonly To = 75;
	public static readonly Minus = 76;
	public static readonly NullSequence = 77;
	public static readonly Sequence = 78;
	public static readonly Times = 79;
	public static readonly Remainder = 80;
	public static readonly Divide = 81;
	public static readonly Degree = 82;
	public static readonly Quotient = 83;
	public static readonly Comment = 84;
	public static readonly Output = 85;
	public static readonly Mod = 86;
	public static readonly BaseInput = 87;
	public static readonly Power = 88;
	public static readonly Surd = 89;
	public static readonly Equivalent = 90;
	public static readonly NotEquivalent = 91;
	public static readonly Equal = 92;
	public static readonly Infer = 93;
	public static readonly Assign = 94;
	public static readonly Bar2 = 95;
	public static readonly Bar = 96;
	public static readonly DelayedAssign = 97;
	public static readonly Shebang = 98;
	public static readonly PostfixFunction = 99;
	public static readonly AnonymousFunction = 100;
	public static readonly Curry = 101;
	public static readonly Apply = 102;
	public static readonly LetAssign = 103;
	public static readonly At = 104;
	public static readonly Type = 105;
	public static readonly Colon = 106;
	public static readonly Semicolon = 107;
	public static readonly Quote = 108;
	public static readonly Acute = 109;
	public static readonly NotEqual = 110;
	public static readonly Not = 111;
	public static readonly Ellipsis = 112;
	public static readonly FinalAssign = 113;
	public static readonly Dot = 114;
	public static readonly Comma = 115;
	public static readonly Quotation = 116;
	public static readonly Map = 117;
	public static readonly MapAll = 118;
	public static readonly Concat = 119;
	public static readonly Destruct = 120;
	public static readonly Tilde = 121;
	public static readonly Multiply = 122;
	public static readonly Kronecker = 123;
	public static readonly TensorProduct = 124;
	public static readonly Section = 125;
	public static readonly Pilcrow = 126;
	public static readonly Currency = 127;
	public static readonly RULE_program = 0;
	public static readonly RULE_statement = 1;
	public static readonly RULE_blockStatement = 2;
	public static readonly RULE_expr_block = 3;
	public static readonly RULE_emptyStatement = 4;
	public static readonly RULE_eos = 5;
	public static readonly RULE_eol = 6;
	public static readonly RULE_expressionStatement = 7;
	public static readonly RULE_expression = 8;
	public static readonly RULE_assignable = 9;
	public static readonly RULE_assignStatement = 10;
	public static readonly RULE_assignTuple = 11;
	public static readonly RULE_assignPass = 12;
	public static readonly RULE_moduleStatement = 13;
	public static readonly RULE_macroStatement = 14;
	public static readonly RULE_templateStatement = 15;
	public static readonly RULE_interfaceStatement = 16;
	public static readonly RULE_classStatement = 17;
	public static readonly RULE_ifStatement = 18;
	public static readonly RULE_elseif = 19;
	public static readonly RULE_condition = 20;
	public static readonly RULE_tryStatement = 21;
	public static readonly RULE_catchProduction = 22;
	public static readonly RULE_finalProduction = 23;
	public static readonly RULE_tupleLiteral = 24;
	public static readonly RULE_single = 25;
	public static readonly RULE_dictLiteral = 26;
	public static readonly RULE_keyvalue = 27;
	public static readonly RULE_listLiteral = 28;
	public static readonly RULE_element = 29;
	public static readonly RULE_signedInteger = 30;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"program", "statement", "blockStatement", "expr_block", "emptyStatement", 
		"eos", "eol", "expressionStatement", "expression", "assignable", "assignStatement", 
		"assignTuple", "assignPass", "moduleStatement", "macroStatement", "templateStatement", 
		"interfaceStatement", "classStatement", "ifStatement", "elseif", "condition", 
		"tryStatement", "catchProduction", "finalProduction", "tupleLiteral", 
		"single", "dictLiteral", "keyvalue", "listLiteral", "element", "signedInteger",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "'\r'", "'\n'", undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, "'use'", "'expose'", "'with'", "'as'", 
		"'macro'", "'template'", "'interface'", "'class'", "'extends'", "'mixin'", 
		"'setter'", "'getter'", "'public'", "'private'", "'protected'", "'final'", 
		"'let'", "'true'", "'false'", "'if'", "'else'", "'try'", "'catch'", "'for'", 
		"'in'", undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		"'('", "')'", "'['", "']'", "'{'", "'}'", "'\u2308'", "'\u2309'", "'\u230A'", 
		"'\u230B'", undefined, undefined, undefined, undefined, undefined, undefined, 
		"'<='", "'<'", undefined, undefined, "'>='", "'>'", "'++'", "'+='", "'+'", 
		"'--'", "'-='", undefined, "'-'", "'***'", "'**'", "'*'", "'//'", "'/'", 
		"'\u00B0'", "'\u00F7'", "'%%%'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", 
		"'==='", "'=!='", "'=='", undefined, "'='", undefined, "'|'", undefined, 
		"'#!'", "'$$'", "'$'", "'@@@'", "'@@'", "'@='", "'@'", undefined, "':'", 
		"';'", "'`'", "'\u00B4'", undefined, undefined, "'...'", "'.='", "'.'", 
		"','", "'''", "'/@'", "'//@'", "'~~'", "'~='", "'~'", "'\u00D7'", "'\u2297'", 
		"'\u2299'", "'\u00A7'", "'\u00B6'", "'\u00A4'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, "Assign_ops", "Lazy_assign", "Assign_mods", 
		"LineComment", "PartComment", "WhiteSpace", "NewLine", "Using", "Expose", 
		"With", "As", "Macro", "Template", "Interface", "Class", "Extends", "Mixin", 
		"Setter", "Getter", "Public", "Private", "Protected", "Final", "Let", 
		"True", "False", "If", "Else", "Try", "Catch", "For", "In", "BOOL", "NUMBER", 
		"STRING", "SYMBOL", "Integer", "Float", "Add_ops", "Bit_ops", "Logic_ops", 
		"Pow_ops", "Mul_ops", "List_ops", "Pre_ops", "LS", "RS", "LM", "RM", "LL", 
		"RL", "LCeil", "RCeil", "LFloor", "RFloor", "LAngle", "RAngle", "LQuote", 
		"RQuote", "Import", "LeftShift", "LessEqual", "Less", "Export", "RightShift", 
		"GraterEqual", "Grater", "Increase", "PlusTo", "Plus", "Decrease", "MinusFrom", 
		"To", "Minus", "NullSequence", "Sequence", "Times", "Remainder", "Divide", 
		"Degree", "Quotient", "Comment", "Output", "Mod", "BaseInput", "Power", 
		"Surd", "Equivalent", "NotEquivalent", "Equal", "Infer", "Assign", "Bar2", 
		"Bar", "DelayedAssign", "Shebang", "PostfixFunction", "AnonymousFunction", 
		"Curry", "Apply", "LetAssign", "At", "Type", "Colon", "Semicolon", "Quote", 
		"Acute", "NotEqual", "Not", "Ellipsis", "FinalAssign", "Dot", "Comma", 
		"Quotation", "Map", "MapAll", "Concat", "Destruct", "Tilde", "Multiply", 
		"Kronecker", "TensorProduct", "Section", "Pilcrow", "Currency",
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
			this.state = 65;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.Assign_mods) | (1 << NyarParser.If) | (1 << NyarParser.Try))) !== 0) || ((((_la - 36)) & ~0x1F) === 0 && ((1 << (_la - 36)) & ((1 << (NyarParser.NUMBER - 36)) | (1 << (NyarParser.STRING - 36)) | (1 << (NyarParser.SYMBOL - 36)) | (1 << (NyarParser.LS - 36)) | (1 << (NyarParser.LM - 36)) | (1 << (NyarParser.LL - 36)))) !== 0) || _la === NyarParser.Semicolon) {
				{
				{
				this.state = 62;
				this.statement();
				}
				}
				this.state = 67;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 68;
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
			this.state = 76;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 70;
				this.emptyStatement();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 71;
				this.blockStatement();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 72;
				this.expressionStatement();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 73;
				this.assignStatement();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 74;
				this.ifStatement();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 75;
				this.tryStatement();
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
	public blockStatement(): BlockStatementContext {
		let _localctx: BlockStatementContext = new BlockStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 4, NyarParser.RULE_blockStatement);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 78;
			this.match(NyarParser.LL);
			this.state = 80;
			this._errHandler.sync(this);
			_alt = 1 + 1;
			do {
				switch (_alt) {
				case 1 + 1:
					{
					{
					this.state = 79;
					this.statement();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 82;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 2, this._ctx);
			} while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER);
			this.state = 84;
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
	public expr_block(): Expr_blockContext {
		let _localctx: Expr_blockContext = new Expr_blockContext(this._ctx, this.state);
		this.enterRule(_localctx, 6, NyarParser.RULE_expr_block);
		try {
			this.state = 88;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 3, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 86;
				this.blockStatement();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 87;
				this.expression(0);
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
	public emptyStatement(): EmptyStatementContext {
		let _localctx: EmptyStatementContext = new EmptyStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 8, NyarParser.RULE_emptyStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 90;
			this.eos();
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
	public eos(): EosContext {
		let _localctx: EosContext = new EosContext(this._ctx, this.state);
		this.enterRule(_localctx, 10, NyarParser.RULE_eos);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 92;
			this.match(NyarParser.Semicolon);
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
	public eol(): EolContext {
		let _localctx: EolContext = new EolContext(this._ctx, this.state);
		this.enterRule(_localctx, 12, NyarParser.RULE_eol);
		let _la: number;
		try {
			this.state = 102;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.Semicolon:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 94;
				this.eos();
				}
				break;
			case NyarParser.T__0:
			case NyarParser.T__1:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 100;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 5, this._ctx) ) {
				case 1:
					{
					this.state = 96;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
					if (_la === NyarParser.T__0) {
						{
						this.state = 95;
						this.match(NyarParser.T__0);
						}
					}

					this.state = 98;
					this.match(NyarParser.T__1);
					}
					break;

				case 2:
					{
					this.state = 99;
					this.match(NyarParser.T__0);
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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
		this.enterRule(_localctx, 14, NyarParser.RULE_expressionStatement);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 104;
			this.expression(0);
			this.state = 109;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.Comma) {
				{
				{
				this.state = 105;
				this.match(NyarParser.Comma);
				this.state = 106;
				this.expression(0);
				}
				}
				this.state = 111;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 113;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 8, this._ctx) ) {
			case 1:
				{
				this.state = 112;
				this.eos();
				}
				break;
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
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 135;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 9, this._ctx) ) {
			case 1:
				{
				_localctx = new PrefixExpressionContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;

				this.state = 116;
				this.match(NyarParser.LS);
				this.state = 117;
				(_localctx as PrefixExpressionContext)._op = this.match(NyarParser.Pre_ops);
				this.state = 118;
				(_localctx as PrefixExpressionContext)._right = this.expression(0);
				this.state = 119;
				this.match(NyarParser.RS);
				}
				break;

			case 2:
				{
				_localctx = new OperatorAssignContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 121;
				(_localctx as OperatorAssignContext)._id = this.assignTuple();
				this.state = 122;
				(_localctx as OperatorAssignContext)._op = this.match(NyarParser.Assign_ops);
				this.state = 123;
				(_localctx as OperatorAssignContext)._expr = this.assignable();
				}
				break;

			case 3:
				{
				_localctx = new TupleContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 125;
				(_localctx as TupleContext)._data = this.tupleLiteral();
				}
				break;

			case 4:
				{
				_localctx = new ListContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 126;
				(_localctx as ListContext)._data = this.listLiteral();
				}
				break;

			case 5:
				{
				_localctx = new DictContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 127;
				(_localctx as DictContext)._data = this.dictLiteral();
				}
				break;

			case 6:
				{
				_localctx = new StringContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 128;
				(_localctx as StringContext)._atom = this.match(NyarParser.STRING);
				}
				break;

			case 7:
				{
				_localctx = new NumberContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 129;
				(_localctx as NumberContext)._atom = this.match(NyarParser.NUMBER);
				}
				break;

			case 8:
				{
				_localctx = new SymbolContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 130;
				(_localctx as SymbolContext)._atom = this.match(NyarParser.SYMBOL);
				}
				break;

			case 9:
				{
				_localctx = new PriorityExpressionContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 131;
				this.match(NyarParser.LS);
				this.state = 132;
				this.expression(0);
				this.state = 133;
				this.match(NyarParser.RS);
				}
				break;
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 157;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 11, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					if (this._parseListeners != null) {
						this.triggerExitRuleEvent();
					}
					_prevctx = _localctx;
					{
					this.state = 155;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 10, this._ctx) ) {
					case 1:
						{
						_localctx = new Binary_LikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Binary_LikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 137;
						if (!(this.precpred(this._ctx, 14))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 14)");
						}
						this.state = 138;
						(_localctx as Binary_LikeContext)._op = this.match(NyarParser.Bit_ops);
						this.state = 139;
						(_localctx as Binary_LikeContext)._right = this.expression(15);
						}
						break;

					case 2:
						{
						_localctx = new Logic_LikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Logic_LikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 140;
						if (!(this.precpred(this._ctx, 13))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 13)");
						}
						this.state = 141;
						(_localctx as Logic_LikeContext)._op = this.match(NyarParser.Logic_ops);
						this.state = 142;
						(_localctx as Logic_LikeContext)._right = this.expression(14);
						}
						break;

					case 3:
						{
						_localctx = new Power_LikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Power_LikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 143;
						if (!(this.precpred(this._ctx, 12))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 12)");
						}
						this.state = 144;
						(_localctx as Power_LikeContext)._op = this.match(NyarParser.Pow_ops);
						this.state = 145;
						(_localctx as Power_LikeContext)._right = this.expression(12);
						}
						break;

					case 4:
						{
						_localctx = new Multiply_LikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Multiply_LikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 146;
						if (!(this.precpred(this._ctx, 11))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 11)");
						}
						this.state = 147;
						(_localctx as Multiply_LikeContext)._op = this.match(NyarParser.Mul_ops);
						this.state = 148;
						(_localctx as Multiply_LikeContext)._right = this.expression(12);
						}
						break;

					case 5:
						{
						_localctx = new Plus_LikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as Plus_LikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 149;
						if (!(this.precpred(this._ctx, 10))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 10)");
						}
						this.state = 150;
						(_localctx as Plus_LikeContext)._op = this.match(NyarParser.Add_ops);
						this.state = 151;
						(_localctx as Plus_LikeContext)._right = this.expression(11);
						}
						break;

					case 6:
						{
						_localctx = new List_LikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as List_LikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 152;
						if (!(this.precpred(this._ctx, 9))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 9)");
						}
						this.state = 153;
						(_localctx as List_LikeContext)._op = this.match(NyarParser.List_ops);
						this.state = 154;
						(_localctx as List_LikeContext)._right = this.expression(10);
						}
						break;
					}
					}
				}
				this.state = 159;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 11, this._ctx);
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
	public assignable(): AssignableContext {
		let _localctx: AssignableContext = new AssignableContext(this._ctx, this.state);
		this.enterRule(_localctx, 18, NyarParser.RULE_assignable);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 162;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 12, this._ctx) ) {
			case 1:
				{
				this.state = 160;
				this.expression(0);
				}
				break;

			case 2:
				{
				this.state = 161;
				this.blockStatement();
				}
				break;
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public assignStatement(): AssignStatementContext {
		let _localctx: AssignStatementContext = new AssignStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 20, NyarParser.RULE_assignStatement);
		try {
			_localctx = new ModifierAssignContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 164;
			(_localctx as ModifierAssignContext)._op = this.match(NyarParser.Assign_mods);
			this.state = 165;
			(_localctx as ModifierAssignContext)._id = this.assignTuple();
			this.state = 166;
			(_localctx as ModifierAssignContext)._expr = this.assignable();
			this.state = 168;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 13, this._ctx) ) {
			case 1:
				{
				this.state = 167;
				this.eos();
				}
				break;
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public assignTuple(): AssignTupleContext {
		let _localctx: AssignTupleContext = new AssignTupleContext(this._ctx, this.state);
		this.enterRule(_localctx, 22, NyarParser.RULE_assignTuple);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 186;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.SYMBOL:
				{
				this.state = 170;
				this.match(NyarParser.SYMBOL);
				}
				break;
			case NyarParser.LS:
				{
				this.state = 171;
				this.match(NyarParser.LS);
				this.state = 180;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.SYMBOL || _la === NyarParser.Tilde) {
					{
					this.state = 172;
					this.assignPass();
					this.state = 177;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 14, this._ctx);
					while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
						if (_alt === 1) {
							{
							{
							this.state = 173;
							this.match(NyarParser.Comma);
							this.state = 174;
							this.assignPass();
							}
							}
						}
						this.state = 179;
						this._errHandler.sync(this);
						_alt = this.interpreter.adaptivePredict(this._input, 14, this._ctx);
					}
					}
				}

				this.state = 183;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Comma) {
					{
					this.state = 182;
					this.match(NyarParser.Comma);
					}
				}

				this.state = 185;
				this.match(NyarParser.RS);
				}
				break;
			default:
				throw new NoViableAltException(this);
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public assignPass(): AssignPassContext {
		let _localctx: AssignPassContext = new AssignPassContext(this._ctx, this.state);
		this.enterRule(_localctx, 24, NyarParser.RULE_assignPass);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 188;
			_la = this._input.LA(1);
			if (!(_la === NyarParser.SYMBOL || _la === NyarParser.Tilde)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public moduleStatement(): ModuleStatementContext {
		let _localctx: ModuleStatementContext = new ModuleStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 26, NyarParser.RULE_moduleStatement);
		try {
			this.state = 202;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 18, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 190;
				this.match(NyarParser.Using);
				this.state = 191;
				_localctx._core = this.match(NyarParser.SYMBOL);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 192;
				this.match(NyarParser.Using);
				this.state = 193;
				_localctx._source = this.match(NyarParser.STRING);
				this.state = 194;
				this.match(NyarParser.As);
				this.state = 195;
				_localctx._name = this.match(NyarParser.SYMBOL);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 196;
				this.match(NyarParser.Using);
				this.state = 197;
				_localctx._source = this.match(NyarParser.STRING);
				this.state = 198;
				this.match(NyarParser.With);
				this.state = 199;
				_localctx._name = this.match(NyarParser.SYMBOL);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 200;
				this.match(NyarParser.Expose);
				this.state = 201;
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
	public macroStatement(): MacroStatementContext {
		let _localctx: MacroStatementContext = new MacroStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 28, NyarParser.RULE_macroStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 204;
			this.match(NyarParser.Macro);
			this.state = 205;
			this.expression(0);
			this.state = 206;
			this.eos();
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
		this.enterRule(_localctx, 30, NyarParser.RULE_templateStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 208;
			this.match(NyarParser.Template);
			this.state = 209;
			this.expression(0);
			this.state = 210;
			this.eol();
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
		this.enterRule(_localctx, 32, NyarParser.RULE_interfaceStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 212;
			this.match(NyarParser.Interface);
			this.state = 213;
			this.expression(0);
			this.state = 214;
			this.eol();
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
		this.enterRule(_localctx, 34, NyarParser.RULE_classStatement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 216;
			this.match(NyarParser.Class);
			this.state = 217;
			this.expression(0);
			this.state = 218;
			this.eol();
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
	public ifStatement(): IfStatementContext {
		let _localctx: IfStatementContext = new IfStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 36, NyarParser.RULE_ifStatement);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 220;
			this.match(NyarParser.If);
			this.state = 221;
			this.condition();
			this.state = 222;
			this.elseif();
			this.state = 225;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Else) {
				{
				this.state = 223;
				this.match(NyarParser.Else);
				this.state = 224;
				this.expr_block();
				}
			}

			this.state = 228;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 20, this._ctx) ) {
			case 1:
				{
				this.state = 227;
				this.eos();
				}
				break;
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public elseif(): ElseifContext {
		let _localctx: ElseifContext = new ElseifContext(this._ctx, this.state);
		this.enterRule(_localctx, 38, NyarParser.RULE_elseif);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 235;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 21, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					{
					{
					this.state = 230;
					this.match(NyarParser.Else);
					this.state = 231;
					this.match(NyarParser.If);
					this.state = 232;
					this.condition();
					}
					}
				}
				this.state = 237;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 21, this._ctx);
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public condition(): ConditionContext {
		let _localctx: ConditionContext = new ConditionContext(this._ctx, this.state);
		this.enterRule(_localctx, 40, NyarParser.RULE_condition);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 239;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 22, this._ctx) ) {
			case 1:
				{
				this.state = 238;
				this.match(NyarParser.LS);
				}
				break;
			}
			this.state = 241;
			this.expression(0);
			this.state = 242;
			this.expr_block();
			this.state = 244;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.RS) {
				{
				this.state = 243;
				this.match(NyarParser.RS);
				}
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public tryStatement(): TryStatementContext {
		let _localctx: TryStatementContext = new TryStatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 42, NyarParser.RULE_tryStatement);
		let _la: number;
		try {
			this.state = 256;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 25, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 246;
				this.match(NyarParser.Try);
				this.state = 247;
				this.blockStatement();
				this.state = 248;
				this.finalProduction();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 250;
				this.match(NyarParser.Try);
				this.state = 251;
				this.blockStatement();
				{
				this.state = 252;
				this.catchProduction();
				this.state = 254;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Final) {
					{
					this.state = 253;
					this.finalProduction();
					}
				}

				}
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
	public catchProduction(): CatchProductionContext {
		let _localctx: CatchProductionContext = new CatchProductionContext(this._ctx, this.state);
		this.enterRule(_localctx, 44, NyarParser.RULE_catchProduction);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 258;
			this.match(NyarParser.Catch);
			this.state = 260;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.LS) {
				{
				this.state = 259;
				this.match(NyarParser.LS);
				}
			}

			this.state = 262;
			this.match(NyarParser.SYMBOL);
			this.state = 264;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.RS) {
				{
				this.state = 263;
				this.match(NyarParser.RS);
				}
			}

			this.state = 266;
			this.blockStatement();
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
	public finalProduction(): FinalProductionContext {
		let _localctx: FinalProductionContext = new FinalProductionContext(this._ctx, this.state);
		this.enterRule(_localctx, 46, NyarParser.RULE_finalProduction);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 268;
			this.match(NyarParser.Final);
			this.state = 269;
			this.blockStatement();
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
	public tupleLiteral(): TupleLiteralContext {
		let _localctx: TupleLiteralContext = new TupleLiteralContext(this._ctx, this.state);
		this.enterRule(_localctx, 48, NyarParser.RULE_tupleLiteral);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 271;
			this.match(NyarParser.LS);
			this.state = 280;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (((((_la - 35)) & ~0x1F) === 0 && ((1 << (_la - 35)) & ((1 << (NyarParser.BOOL - 35)) | (1 << (NyarParser.NUMBER - 35)) | (1 << (NyarParser.STRING - 35)))) !== 0)) {
				{
				this.state = 272;
				this.single();
				this.state = 277;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 28, this._ctx);
				while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
					if (_alt === 1) {
						{
						{
						this.state = 273;
						this.match(NyarParser.Comma);
						this.state = 274;
						this.single();
						}
						}
					}
					this.state = 279;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 28, this._ctx);
				}
				}
			}

			this.state = 283;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Comma) {
				{
				this.state = 282;
				this.match(NyarParser.Comma);
				}
			}

			this.state = 285;
			this.match(NyarParser.RS);
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
	public single(): SingleContext {
		let _localctx: SingleContext = new SingleContext(this._ctx, this.state);
		this.enterRule(_localctx, 50, NyarParser.RULE_single);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 287;
			_la = this._input.LA(1);
			if (!(((((_la - 35)) & ~0x1F) === 0 && ((1 << (_la - 35)) & ((1 << (NyarParser.BOOL - 35)) | (1 << (NyarParser.NUMBER - 35)) | (1 << (NyarParser.STRING - 35)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public dictLiteral(): DictLiteralContext {
		let _localctx: DictLiteralContext = new DictLiteralContext(this._ctx, this.state);
		this.enterRule(_localctx, 52, NyarParser.RULE_dictLiteral);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 289;
			this.match(NyarParser.LL);
			this.state = 298;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (((((_la - 36)) & ~0x1F) === 0 && ((1 << (_la - 36)) & ((1 << (NyarParser.NUMBER - 36)) | (1 << (NyarParser.STRING - 36)) | (1 << (NyarParser.SYMBOL - 36)))) !== 0)) {
				{
				this.state = 290;
				this.keyvalue();
				this.state = 295;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 31, this._ctx);
				while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
					if (_alt === 1) {
						{
						{
						this.state = 291;
						this.match(NyarParser.Comma);
						this.state = 292;
						this.keyvalue();
						}
						}
					}
					this.state = 297;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 31, this._ctx);
				}
				}
			}

			this.state = 301;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Comma) {
				{
				this.state = 300;
				this.match(NyarParser.Comma);
				}
			}

			this.state = 303;
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
	public keyvalue(): KeyvalueContext {
		let _localctx: KeyvalueContext = new KeyvalueContext(this._ctx, this.state);
		this.enterRule(_localctx, 54, NyarParser.RULE_keyvalue);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 305;
			_la = this._input.LA(1);
			if (!(((((_la - 36)) & ~0x1F) === 0 && ((1 << (_la - 36)) & ((1 << (NyarParser.NUMBER - 36)) | (1 << (NyarParser.STRING - 36)) | (1 << (NyarParser.SYMBOL - 36)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			this.state = 306;
			this.match(NyarParser.Colon);
			this.state = 307;
			this.element();
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
	public listLiteral(): ListLiteralContext {
		let _localctx: ListLiteralContext = new ListLiteralContext(this._ctx, this.state);
		this.enterRule(_localctx, 56, NyarParser.RULE_listLiteral);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 309;
			this.match(NyarParser.LM);
			this.state = 320;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (((((_la - 36)) & ~0x1F) === 0 && ((1 << (_la - 36)) & ((1 << (NyarParser.NUMBER - 36)) | (1 << (NyarParser.STRING - 36)) | (1 << (NyarParser.SYMBOL - 36)) | (1 << (NyarParser.LS - 36)) | (1 << (NyarParser.LM - 36)) | (1 << (NyarParser.LL - 36)))) !== 0)) {
				{
				this.state = 310;
				this.element();
				this.state = 317;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 35, this._ctx);
				while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
					if (_alt === 1) {
						{
						{
						this.state = 312;
						this._errHandler.sync(this);
						_la = this._input.LA(1);
						if (_la === NyarParser.Comma) {
							{
							this.state = 311;
							this.match(NyarParser.Comma);
							}
						}

						this.state = 314;
						this.element();
						}
						}
					}
					this.state = 319;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 35, this._ctx);
				}
				}
			}

			this.state = 323;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Comma) {
				{
				this.state = 322;
				this.match(NyarParser.Comma);
				}
			}

			this.state = 325;
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
	public element(): ElementContext {
		let _localctx: ElementContext = new ElementContext(this._ctx, this.state);
		this.enterRule(_localctx, 58, NyarParser.RULE_element);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 330;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 38, this._ctx) ) {
			case 1:
				{
				this.state = 327;
				this.expression(0);
				}
				break;

			case 2:
				{
				this.state = 328;
				this.dictLiteral();
				}
				break;

			case 3:
				{
				this.state = 329;
				this.listLiteral();
				}
				break;
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
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public signedInteger(): SignedIntegerContext {
		let _localctx: SignedIntegerContext = new SignedIntegerContext(this._ctx, this.state);
		this.enterRule(_localctx, 60, NyarParser.RULE_signedInteger);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 333;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Plus || _la === NyarParser.Minus) {
				{
				this.state = 332;
				_la = this._input.LA(1);
				if (!(_la === NyarParser.Plus || _la === NyarParser.Minus)) {
				this._errHandler.recoverInline(this);
				} else {
					if (this._input.LA(1) === Token.EOF) {
						this.matchedEOF = true;
					}

					this._errHandler.reportMatch(this);
					this.consume();
				}
				}
			}

			this.state = 335;
			this.match(NyarParser.Integer);
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
		case 8:
			return this.expression_sempred(_localctx as ExpressionContext, predIndex);
		}
		return true;
	}
	private expression_sempred(_localctx: ExpressionContext, predIndex: number): boolean {
		switch (predIndex) {
		case 0:
			return this.precpred(this._ctx, 14);

		case 1:
			return this.precpred(this._ctx, 13);

		case 2:
			return this.precpred(this._ctx, 12);

		case 3:
			return this.precpred(this._ctx, 11);

		case 4:
			return this.precpred(this._ctx, 10);

		case 5:
			return this.precpred(this._ctx, 9);
		}
		return true;
	}

	public static readonly _serializedATN: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03\x81\u0154\x04" +
		"\x02\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04" +
		"\x07\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r" +
		"\x04\x0E\t\x0E\x04\x0F\t\x0F\x04\x10\t\x10\x04\x11\t\x11\x04\x12\t\x12" +
		"\x04\x13\t\x13\x04\x14\t\x14\x04\x15\t\x15\x04\x16\t\x16\x04\x17\t\x17" +
		"\x04\x18\t\x18\x04\x19\t\x19\x04\x1A\t\x1A\x04\x1B\t\x1B\x04\x1C\t\x1C" +
		"\x04\x1D\t\x1D\x04\x1E\t\x1E\x04\x1F\t\x1F\x04 \t \x03\x02\x07\x02B\n" +
		"\x02\f\x02\x0E\x02E\v\x02\x03\x02\x03\x02\x03\x03\x03\x03\x03\x03\x03" +
		"\x03\x03\x03\x03\x03\x05\x03O\n\x03\x03\x04\x03\x04\x06\x04S\n\x04\r\x04" +
		"\x0E\x04T\x03\x04\x03\x04\x03\x05\x03\x05\x05\x05[\n\x05\x03\x06\x03\x06" +
		"\x03\x07\x03\x07\x03\b\x03\b\x05\bc\n\b\x03\b\x03\b\x05\bg\n\b\x05\bi" +
		"\n\b\x03\t\x03\t\x03\t\x07\tn\n\t\f\t\x0E\tq\v\t\x03\t\x05\tt\n\t\x03" +
		"\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03" +
		"\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x05\n\x8A\n\n\x03\n\x03\n" +
		"\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03\n\x03" +
		"\n\x03\n\x03\n\x03\n\x03\n\x07\n\x9E\n\n\f\n\x0E\n\xA1\v\n\x03\v\x03\v" +
		"\x05\v\xA5\n\v\x03\f\x03\f\x03\f\x03\f\x05\f\xAB\n\f\x03\r\x03\r\x03\r" +
		"\x03\r\x03\r\x07\r\xB2\n\r\f\r\x0E\r\xB5\v\r\x05\r\xB7\n\r\x03\r\x05\r" +
		"\xBA\n\r\x03\r\x05\r\xBD\n\r\x03\x0E\x03\x0E\x03\x0F\x03\x0F\x03\x0F\x03" +
		"\x0F\x03\x0F\x03\x0F\x03\x0F\x03\x0F\x03\x0F\x03\x0F\x03\x0F\x03\x0F\x05" +
		"\x0F\xCD\n\x0F\x03\x10\x03\x10\x03\x10\x03\x10\x03\x11\x03\x11\x03\x11" +
		"\x03\x11\x03\x12\x03\x12\x03\x12\x03\x12\x03\x13\x03\x13\x03\x13\x03\x13" +
		"\x03\x14\x03\x14\x03\x14\x03\x14\x03\x14\x05\x14\xE4\n\x14\x03\x14\x05" +
		"\x14\xE7\n\x14\x03\x15\x03\x15\x03\x15\x07\x15\xEC\n\x15\f\x15\x0E\x15" +
		"\xEF\v\x15\x03\x16\x05\x16\xF2\n\x16\x03\x16\x03\x16\x03\x16\x05\x16\xF7" +
		"\n\x16\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17" +
		"\x05\x17\u0101\n\x17\x05\x17\u0103\n\x17\x03\x18\x03\x18\x05\x18\u0107" +
		"\n\x18\x03\x18\x03\x18\x05\x18\u010B\n\x18\x03\x18\x03\x18\x03\x19\x03" +
		"\x19\x03\x19\x03\x1A\x03\x1A\x03\x1A\x03\x1A\x07\x1A\u0116\n\x1A\f\x1A" +
		"\x0E\x1A\u0119\v\x1A\x05\x1A\u011B\n\x1A\x03\x1A\x05\x1A\u011E\n\x1A\x03" +
		"\x1A\x03\x1A\x03\x1B\x03\x1B\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x07\x1C\u0128" +
		"\n\x1C\f\x1C\x0E\x1C\u012B\v\x1C\x05\x1C\u012D\n\x1C\x03\x1C\x05\x1C\u0130" +
		"\n\x1C\x03\x1C\x03\x1C\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1E\x03\x1E" +
		"\x03\x1E\x05\x1E\u013B\n\x1E\x03\x1E\x07\x1E\u013E\n\x1E\f\x1E\x0E\x1E" +
		"\u0141\v\x1E\x05\x1E\u0143\n\x1E\x03\x1E\x05\x1E\u0146\n\x1E\x03\x1E\x03" +
		"\x1E\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u014D\n\x1F\x03 \x05 \u0150\n \x03" +
		" \x03 \x03 \x03T\x02\x03\x12!\x02\x02\x04\x02\x06\x02\b\x02\n\x02\f\x02" +
		"\x0E\x02\x10\x02\x12\x02\x14\x02\x16\x02\x18\x02\x1A\x02\x1C\x02\x1E\x02" +
		" \x02\"\x02$\x02&\x02(\x02*\x02,\x02.\x020\x022\x024\x026\x028\x02:\x02" +
		"<\x02>\x02\x02\x06\x04\x02(({{\x03\x02%\'\x03\x02&(\x04\x02JJNN\x02\u016E" +
		"\x02C\x03\x02\x02\x02\x04N\x03\x02\x02\x02\x06P\x03\x02\x02\x02\bZ\x03" +
		"\x02\x02\x02\n\\\x03\x02\x02\x02\f^\x03\x02\x02\x02\x0Eh\x03\x02\x02\x02" +
		"\x10j\x03\x02\x02\x02\x12\x89\x03\x02\x02\x02\x14\xA4\x03\x02\x02\x02" +
		"\x16\xA6\x03\x02\x02\x02\x18\xBC\x03\x02\x02\x02\x1A\xBE\x03\x02\x02\x02" +
		"\x1C\xCC\x03\x02\x02\x02\x1E\xCE\x03\x02\x02\x02 \xD2\x03\x02\x02\x02" +
		"\"\xD6\x03\x02\x02\x02$\xDA\x03\x02\x02\x02&\xDE\x03\x02\x02\x02(\xED" +
		"\x03\x02\x02\x02*\xF1\x03\x02\x02\x02,\u0102\x03\x02\x02\x02.\u0104\x03" +
		"\x02\x02\x020\u010E\x03\x02\x02\x022\u0111\x03\x02\x02\x024\u0121\x03" +
		"\x02\x02\x026\u0123\x03\x02\x02\x028\u0133\x03\x02\x02\x02:\u0137\x03" +
		"\x02\x02\x02<\u014C\x03\x02\x02\x02>\u014F\x03\x02\x02\x02@B\x05\x04\x03" +
		"\x02A@\x03\x02\x02\x02BE\x03\x02\x02\x02CA\x03\x02\x02\x02CD\x03\x02\x02" +
		"\x02DF\x03\x02\x02\x02EC\x03\x02\x02\x02FG\x07\x02\x02\x03G\x03\x03\x02" +
		"\x02\x02HO\x05\n\x06\x02IO\x05\x06\x04\x02JO\x05\x10\t\x02KO\x05\x16\f" +
		"\x02LO\x05&\x14\x02MO\x05,\x17\x02NH\x03\x02\x02\x02NI\x03\x02\x02\x02" +
		"NJ\x03\x02\x02\x02NK\x03\x02\x02\x02NL\x03\x02\x02\x02NM\x03\x02\x02\x02" +
		"O\x05\x03\x02\x02\x02PR\x076\x02\x02QS\x05\x04\x03\x02RQ\x03\x02\x02\x02" +
		"ST\x03\x02\x02\x02TU\x03\x02\x02\x02TR\x03\x02\x02\x02UV\x03\x02\x02\x02" +
		"VW\x077\x02\x02W\x07\x03\x02\x02\x02X[\x05\x06\x04\x02Y[\x05\x12\n\x02" +
		"ZX\x03\x02\x02\x02ZY\x03\x02\x02\x02[\t\x03\x02\x02\x02\\]\x05\f\x07\x02" +
		"]\v\x03\x02\x02\x02^_\x07m\x02\x02_\r\x03\x02\x02\x02`i\x05\f\x07\x02" +
		"ac\x07\x03\x02\x02ba\x03\x02\x02\x02bc\x03\x02\x02\x02cd\x03\x02\x02\x02" +
		"dg\x07\x04\x02\x02eg\x07\x03\x02\x02fb\x03\x02\x02\x02fe\x03\x02\x02\x02" +
		"gi\x03\x02\x02\x02h`\x03\x02\x02\x02hf\x03\x02\x02\x02i\x0F\x03\x02\x02" +
		"\x02jo\x05\x12\n\x02kl\x07u\x02\x02ln\x05\x12\n\x02mk\x03\x02\x02\x02" +
		"nq\x03\x02\x02\x02om\x03\x02\x02\x02op\x03\x02\x02\x02ps\x03\x02\x02\x02" +
		"qo\x03\x02\x02\x02rt\x05\f\x07\x02sr\x03\x02\x02\x02st\x03\x02\x02\x02" +
		"t\x11\x03\x02\x02\x02uv\b\n\x01\x02vw\x072\x02\x02wx\x071\x02\x02xy\x05" +
		"\x12\n\x02yz\x073\x02\x02z\x8A\x03\x02\x02\x02{|\x05\x18\r\x02|}\x07\x05" +
		"\x02\x02}~\x05\x14\v\x02~\x8A\x03\x02\x02\x02\x7F\x8A\x052\x1A\x02\x80" +
		"\x8A\x05:\x1E\x02\x81\x8A\x056\x1C\x02\x82\x8A\x07\'\x02\x02\x83\x8A\x07" +
		"&\x02\x02\x84\x8A\x07(\x02\x02\x85\x86\x072\x02\x02\x86\x87\x05\x12\n" +
		"\x02\x87\x88\x073\x02\x02\x88\x8A\x03\x02\x02\x02\x89u\x03\x02\x02\x02" +
		"\x89{\x03\x02\x02\x02\x89\x7F\x03\x02\x02\x02\x89\x80\x03\x02\x02\x02" +
		"\x89\x81\x03\x02\x02\x02\x89\x82\x03\x02\x02\x02\x89\x83\x03\x02\x02\x02" +
		"\x89\x84\x03\x02\x02\x02\x89\x85\x03\x02\x02\x02\x8A\x9F\x03\x02\x02\x02" +
		"\x8B\x8C\f\x10\x02\x02\x8C\x8D\x07,\x02\x02\x8D\x9E\x05\x12\n\x11\x8E" +
		"\x8F\f\x0F\x02\x02\x8F\x90\x07-\x02\x02\x90\x9E\x05\x12\n\x10\x91\x92" +
		"\f\x0E\x02\x02\x92\x93\x07.\x02\x02\x93\x9E\x05\x12\n\x0E\x94\x95\f\r" +
		"\x02\x02\x95\x96\x07/\x02\x02\x96\x9E\x05\x12\n\x0E\x97\x98\f\f\x02\x02" +
		"\x98\x99\x07+\x02\x02\x99\x9E\x05\x12\n\r\x9A\x9B\f\v\x02\x02\x9B\x9C" +
		"\x070\x02\x02\x9C\x9E\x05\x12\n\f\x9D\x8B\x03\x02\x02\x02\x9D\x8E\x03" +
		"\x02\x02\x02\x9D\x91\x03\x02\x02\x02\x9D\x94\x03\x02\x02\x02\x9D\x97\x03" +
		"\x02\x02\x02\x9D\x9A\x03\x02\x02\x02\x9E\xA1\x03\x02\x02\x02\x9F\x9D\x03" +
		"\x02\x02\x02\x9F\xA0\x03\x02\x02\x02\xA0\x13\x03\x02\x02\x02\xA1\x9F\x03" +
		"\x02\x02\x02\xA2\xA5\x05\x12\n\x02\xA3\xA5\x05\x06\x04\x02\xA4\xA2\x03" +
		"\x02\x02\x02\xA4\xA3\x03\x02\x02\x02\xA5\x15\x03\x02\x02\x02\xA6\xA7\x07" +
		"\x07\x02\x02\xA7\xA8\x05\x18\r\x02\xA8\xAA\x05\x14\v\x02\xA9\xAB\x05\f" +
		"\x07\x02\xAA\xA9\x03\x02\x02\x02\xAA\xAB\x03\x02\x02\x02\xAB\x17\x03\x02" +
		"\x02\x02\xAC\xBD\x07(\x02\x02\xAD\xB6\x072\x02\x02\xAE\xB3\x05\x1A\x0E" +
		"\x02\xAF\xB0\x07u\x02\x02\xB0\xB2\x05\x1A\x0E\x02\xB1\xAF\x03\x02\x02" +
		"\x02\xB2\xB5\x03\x02\x02\x02\xB3\xB1\x03\x02\x02\x02\xB3\xB4\x03\x02\x02" +
		"\x02\xB4\xB7\x03\x02\x02\x02\xB5\xB3\x03\x02\x02\x02\xB6\xAE\x03\x02\x02" +
		"\x02\xB6\xB7\x03\x02\x02\x02\xB7\xB9\x03\x02\x02\x02\xB8\xBA\x07u\x02" +
		"\x02\xB9\xB8\x03\x02\x02\x02\xB9\xBA\x03\x02\x02\x02\xBA\xBB\x03\x02\x02" +
		"\x02\xBB\xBD\x073\x02\x02\xBC\xAC\x03\x02\x02\x02\xBC\xAD\x03\x02\x02" +
		"\x02\xBD\x19\x03\x02\x02\x02\xBE\xBF\t\x02\x02\x02\xBF\x1B\x03\x02\x02" +
		"\x02\xC0\xC1\x07\f\x02\x02\xC1\xCD\x07(\x02\x02\xC2\xC3\x07\f\x02\x02" +
		"\xC3\xC4\x07\'\x02\x02\xC4\xC5\x07\x0F\x02\x02\xC5\xCD\x07(\x02\x02\xC6" +
		"\xC7\x07\f\x02\x02\xC7\xC8\x07\'\x02\x02\xC8\xC9\x07\x0E\x02\x02\xC9\xCD" +
		"\x07(\x02\x02\xCA\xCB\x07\r\x02\x02\xCB\xCD\x07\'\x02\x02\xCC\xC0\x03" +
		"\x02\x02\x02\xCC\xC2\x03\x02\x02\x02\xCC\xC6\x03\x02\x02\x02\xCC\xCA\x03" +
		"\x02\x02\x02\xCD\x1D\x03\x02\x02\x02\xCE\xCF\x07\x10\x02\x02\xCF\xD0\x05" +
		"\x12\n\x02\xD0\xD1\x05\f\x07\x02\xD1\x1F\x03\x02\x02\x02\xD2\xD3\x07\x11" +
		"\x02\x02\xD3\xD4\x05\x12\n\x02\xD4\xD5\x05\x0E\b\x02\xD5!\x03\x02\x02" +
		"\x02\xD6\xD7\x07\x12\x02\x02\xD7\xD8\x05\x12\n\x02\xD8\xD9\x05\x0E\b\x02" +
		"\xD9#\x03\x02\x02\x02\xDA\xDB\x07\x13\x02\x02\xDB\xDC\x05\x12\n\x02\xDC" +
		"\xDD\x05\x0E\b\x02\xDD%\x03\x02\x02\x02\xDE\xDF\x07\x1F\x02\x02\xDF\xE0" +
		"\x05*\x16\x02\xE0\xE3\x05(\x15\x02\xE1\xE2\x07 \x02\x02\xE2\xE4\x05\b" +
		"\x05\x02\xE3\xE1\x03\x02\x02\x02\xE3\xE4\x03\x02\x02\x02\xE4\xE6\x03\x02" +
		"\x02\x02\xE5\xE7\x05\f\x07\x02\xE6\xE5\x03\x02\x02\x02\xE6\xE7\x03\x02" +
		"\x02\x02\xE7\'\x03\x02\x02\x02\xE8\xE9\x07 \x02\x02\xE9\xEA\x07\x1F\x02" +
		"\x02\xEA\xEC\x05*\x16\x02\xEB\xE8\x03\x02\x02\x02\xEC\xEF\x03\x02\x02" +
		"\x02\xED\xEB\x03\x02\x02\x02\xED\xEE\x03\x02\x02\x02\xEE)\x03\x02\x02" +
		"\x02\xEF\xED\x03\x02\x02\x02\xF0\xF2\x072\x02\x02\xF1\xF0\x03\x02\x02" +
		"\x02\xF1\xF2\x03\x02\x02\x02\xF2\xF3\x03\x02\x02\x02\xF3\xF4\x05\x12\n" +
		"\x02\xF4\xF6\x05\b\x05\x02\xF5\xF7\x073\x02\x02\xF6\xF5\x03\x02\x02\x02" +
		"\xF6\xF7\x03\x02\x02\x02\xF7+\x03\x02\x02\x02\xF8\xF9\x07!\x02\x02\xF9" +
		"\xFA\x05\x06\x04\x02\xFA\xFB\x050\x19\x02\xFB\u0103\x03\x02\x02\x02\xFC" +
		"\xFD\x07!\x02\x02\xFD\xFE\x05\x06\x04\x02\xFE\u0100\x05.\x18\x02\xFF\u0101" +
		"\x050\x19\x02\u0100\xFF\x03\x02\x02\x02\u0100\u0101\x03\x02\x02\x02\u0101" +
		"\u0103\x03\x02\x02\x02\u0102\xF8\x03\x02\x02\x02\u0102\xFC\x03\x02\x02" +
		"\x02\u0103-\x03\x02\x02\x02\u0104\u0106\x07\"\x02\x02\u0105\u0107\x07" +
		"2\x02\x02\u0106\u0105\x03\x02\x02\x02\u0106\u0107\x03\x02\x02\x02\u0107" +
		"\u0108\x03\x02\x02\x02\u0108\u010A\x07(\x02\x02\u0109\u010B\x073\x02\x02" +
		"\u010A\u0109\x03\x02\x02\x02\u010A\u010B\x03\x02\x02\x02\u010B\u010C\x03" +
		"\x02\x02\x02\u010C\u010D\x05\x06\x04\x02\u010D/\x03\x02\x02\x02\u010E" +
		"\u010F\x07\x1B\x02\x02\u010F\u0110\x05\x06\x04\x02\u01101\x03\x02\x02" +
		"\x02\u0111\u011A\x072\x02\x02\u0112\u0117\x054\x1B\x02\u0113\u0114\x07" +
		"u\x02\x02\u0114\u0116\x054\x1B\x02\u0115\u0113\x03\x02\x02\x02\u0116\u0119" +
		"\x03\x02\x02\x02\u0117\u0115\x03\x02\x02\x02\u0117\u0118\x03\x02\x02\x02" +
		"\u0118\u011B\x03\x02\x02\x02\u0119\u0117\x03\x02\x02\x02\u011A\u0112\x03" +
		"\x02\x02\x02\u011A\u011B\x03\x02\x02\x02\u011B\u011D\x03\x02\x02\x02\u011C" +
		"\u011E\x07u\x02\x02\u011D\u011C\x03\x02\x02\x02\u011D\u011E\x03\x02\x02" +
		"\x02\u011E\u011F\x03\x02\x02\x02\u011F\u0120\x073\x02\x02\u01203\x03\x02" +
		"\x02\x02\u0121\u0122\t\x03\x02\x02\u01225\x03\x02\x02\x02\u0123\u012C" +
		"\x076\x02\x02\u0124\u0129\x058\x1D\x02\u0125\u0126\x07u\x02\x02\u0126" +
		"\u0128\x058\x1D\x02\u0127\u0125\x03\x02\x02\x02\u0128\u012B\x03\x02\x02" +
		"\x02\u0129\u0127\x03\x02\x02\x02\u0129\u012A\x03\x02\x02\x02\u012A\u012D" +
		"\x03\x02\x02\x02\u012B\u0129\x03\x02\x02\x02\u012C\u0124\x03\x02\x02\x02" +
		"\u012C\u012D\x03\x02\x02\x02\u012D\u012F\x03\x02\x02\x02\u012E\u0130\x07" +
		"u\x02\x02\u012F\u012E\x03\x02\x02\x02\u012F\u0130\x03\x02\x02\x02\u0130" +
		"\u0131\x03\x02\x02\x02\u0131\u0132\x077\x02\x02\u01327\x03\x02\x02\x02" +
		"\u0133\u0134\t\x04\x02\x02\u0134\u0135\x07l\x02\x02\u0135\u0136\x05<\x1F" +
		"\x02\u01369\x03\x02\x02\x02\u0137\u0142\x074\x02\x02\u0138\u013F\x05<" +
		"\x1F\x02\u0139\u013B\x07u\x02\x02\u013A\u0139\x03\x02\x02\x02\u013A\u013B" +
		"\x03\x02\x02\x02\u013B\u013C\x03\x02\x02\x02\u013C\u013E\x05<\x1F\x02" +
		"\u013D\u013A\x03\x02\x02\x02\u013E\u0141\x03\x02\x02\x02\u013F\u013D\x03" +
		"\x02\x02\x02\u013F\u0140\x03\x02\x02\x02\u0140\u0143\x03\x02\x02\x02\u0141" +
		"\u013F\x03\x02\x02\x02\u0142\u0138\x03\x02\x02\x02\u0142\u0143\x03\x02" +
		"\x02\x02\u0143\u0145\x03\x02\x02\x02\u0144\u0146\x07u\x02\x02\u0145\u0144" +
		"\x03\x02\x02\x02\u0145\u0146\x03\x02\x02\x02\u0146\u0147\x03\x02\x02\x02" +
		"\u0147\u0148\x075\x02\x02\u0148;\x03\x02\x02\x02\u0149\u014D\x05\x12\n" +
		"\x02\u014A\u014D\x056\x1C\x02\u014B\u014D\x05:\x1E\x02\u014C\u0149\x03" +
		"\x02\x02\x02\u014C\u014A\x03\x02\x02\x02\u014C\u014B\x03\x02\x02\x02\u014D" +
		"=\x03\x02\x02\x02\u014E\u0150\t\x05\x02\x02\u014F\u014E\x03\x02\x02\x02" +
		"\u014F\u0150\x03\x02\x02\x02\u0150\u0151\x03\x02\x02\x02\u0151\u0152\x07" +
		")\x02\x02\u0152?\x03\x02\x02\x02*CNTZbfhos\x89\x9D\x9F\xA4\xAA\xB3\xB6" +
		"\xB9\xBC\xCC\xE3\xE6\xED\xF1\xF6\u0100\u0102\u0106\u010A\u0117\u011A\u011D" +
		"\u0129\u012C\u012F\u013A\u013F\u0142\u0145\u014C\u014F";
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
	public emptyStatement(): EmptyStatementContext | undefined {
		return this.tryGetRuleContext(0, EmptyStatementContext);
	}
	public blockStatement(): BlockStatementContext | undefined {
		return this.tryGetRuleContext(0, BlockStatementContext);
	}
	public expressionStatement(): ExpressionStatementContext | undefined {
		return this.tryGetRuleContext(0, ExpressionStatementContext);
	}
	public assignStatement(): AssignStatementContext | undefined {
		return this.tryGetRuleContext(0, AssignStatementContext);
	}
	public ifStatement(): IfStatementContext | undefined {
		return this.tryGetRuleContext(0, IfStatementContext);
	}
	public tryStatement(): TryStatementContext | undefined {
		return this.tryGetRuleContext(0, TryStatementContext);
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


export class BlockStatementContext extends ParserRuleContext {
	public LL(): TerminalNode { return this.getToken(NyarParser.LL, 0); }
	public RL(): TerminalNode { return this.getToken(NyarParser.RL, 0); }
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
	public get ruleIndex(): number { return NyarParser.RULE_blockStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterBlockStatement) {
			listener.enterBlockStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitBlockStatement) {
			listener.exitBlockStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitBlockStatement) {
			return visitor.visitBlockStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Expr_blockContext extends ParserRuleContext {
	public blockStatement(): BlockStatementContext | undefined {
		return this.tryGetRuleContext(0, BlockStatementContext);
	}
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_expr_block; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterExpr_block) {
			listener.enterExpr_block(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitExpr_block) {
			listener.exitExpr_block(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitExpr_block) {
			return visitor.visitExpr_block(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class EmptyStatementContext extends ParserRuleContext {
	public eos(): EosContext {
		return this.getRuleContext(0, EosContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_emptyStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterEmptyStatement) {
			listener.enterEmptyStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitEmptyStatement) {
			listener.exitEmptyStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitEmptyStatement) {
			return visitor.visitEmptyStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class EosContext extends ParserRuleContext {
	public Semicolon(): TerminalNode { return this.getToken(NyarParser.Semicolon, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_eos; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterEos) {
			listener.enterEos(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitEos) {
			listener.exitEos(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitEos) {
			return visitor.visitEos(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class EolContext extends ParserRuleContext {
	public eos(): EosContext | undefined {
		return this.tryGetRuleContext(0, EosContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_eol; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterEol) {
			listener.enterEol(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitEol) {
			listener.exitEol(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitEol) {
			return visitor.visitEol(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ExpressionStatementContext extends ParserRuleContext {
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
	public eos(): EosContext | undefined {
		return this.tryGetRuleContext(0, EosContext);
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
export class PrefixExpressionContext extends ExpressionContext {
	public _op: Token;
	public _right: ExpressionContext;
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	public Pre_ops(): TerminalNode { return this.getToken(NyarParser.Pre_ops, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPrefixExpression) {
			listener.enterPrefixExpression(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPrefixExpression) {
			listener.exitPrefixExpression(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPrefixExpression) {
			return visitor.visitPrefixExpression(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Binary_LikeContext extends ExpressionContext {
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
	public Bit_ops(): TerminalNode { return this.getToken(NyarParser.Bit_ops, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterBinary_Like) {
			listener.enterBinary_Like(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitBinary_Like) {
			listener.exitBinary_Like(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitBinary_Like) {
			return visitor.visitBinary_Like(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Logic_LikeContext extends ExpressionContext {
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
	public Logic_ops(): TerminalNode { return this.getToken(NyarParser.Logic_ops, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterLogic_Like) {
			listener.enterLogic_Like(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitLogic_Like) {
			listener.exitLogic_Like(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitLogic_Like) {
			return visitor.visitLogic_Like(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Power_LikeContext extends ExpressionContext {
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
	public Pow_ops(): TerminalNode { return this.getToken(NyarParser.Pow_ops, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPower_Like) {
			listener.enterPower_Like(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPower_Like) {
			listener.exitPower_Like(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPower_Like) {
			return visitor.visitPower_Like(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Multiply_LikeContext extends ExpressionContext {
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
	public Mul_ops(): TerminalNode { return this.getToken(NyarParser.Mul_ops, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMultiply_Like) {
			listener.enterMultiply_Like(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMultiply_Like) {
			listener.exitMultiply_Like(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMultiply_Like) {
			return visitor.visitMultiply_Like(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class Plus_LikeContext extends ExpressionContext {
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
	public Add_ops(): TerminalNode { return this.getToken(NyarParser.Add_ops, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPlus_Like) {
			listener.enterPlus_Like(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPlus_Like) {
			listener.exitPlus_Like(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPlus_Like) {
			return visitor.visitPlus_Like(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class List_LikeContext extends ExpressionContext {
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
	public List_ops(): TerminalNode { return this.getToken(NyarParser.List_ops, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterList_Like) {
			listener.enterList_Like(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitList_Like) {
			listener.exitList_Like(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitList_Like) {
			return visitor.visitList_Like(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class OperatorAssignContext extends ExpressionContext {
	public _id: AssignTupleContext;
	public _op: Token;
	public _expr: AssignableContext;
	public assignTuple(): AssignTupleContext {
		return this.getRuleContext(0, AssignTupleContext);
	}
	public Assign_ops(): TerminalNode { return this.getToken(NyarParser.Assign_ops, 0); }
	public assignable(): AssignableContext {
		return this.getRuleContext(0, AssignableContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterOperatorAssign) {
			listener.enterOperatorAssign(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitOperatorAssign) {
			listener.exitOperatorAssign(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitOperatorAssign) {
			return visitor.visitOperatorAssign(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class TupleContext extends ExpressionContext {
	public _data: TupleLiteralContext;
	public tupleLiteral(): TupleLiteralContext {
		return this.getRuleContext(0, TupleLiteralContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTuple) {
			listener.enterTuple(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTuple) {
			listener.exitTuple(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTuple) {
			return visitor.visitTuple(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ListContext extends ExpressionContext {
	public _data: ListLiteralContext;
	public listLiteral(): ListLiteralContext {
		return this.getRuleContext(0, ListLiteralContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
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
export class DictContext extends ExpressionContext {
	public _data: DictLiteralContext;
	public dictLiteral(): DictLiteralContext {
		return this.getRuleContext(0, DictLiteralContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterDict) {
			listener.enterDict(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitDict) {
			listener.exitDict(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitDict) {
			return visitor.visitDict(this);
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
export class NumberContext extends ExpressionContext {
	public _atom: Token;
	public NUMBER(): TerminalNode { return this.getToken(NyarParser.NUMBER, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterNumber) {
			listener.enterNumber(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitNumber) {
			listener.exitNumber(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitNumber) {
			return visitor.visitNumber(this);
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
export class PriorityExpressionContext extends ExpressionContext {
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
		if (listener.enterPriorityExpression) {
			listener.enterPriorityExpression(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPriorityExpression) {
			listener.exitPriorityExpression(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPriorityExpression) {
			return visitor.visitPriorityExpression(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class AssignableContext extends ParserRuleContext {
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	public blockStatement(): BlockStatementContext | undefined {
		return this.tryGetRuleContext(0, BlockStatementContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assignable; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignable) {
			listener.enterAssignable(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignable) {
			listener.exitAssignable(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignable) {
			return visitor.visitAssignable(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class AssignStatementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assignStatement; }
	public copyFrom(ctx: AssignStatementContext): void {
		super.copyFrom(ctx);
	}
}
export class ModifierAssignContext extends AssignStatementContext {
	public _op: Token;
	public _id: AssignTupleContext;
	public _expr: AssignableContext;
	public Assign_mods(): TerminalNode { return this.getToken(NyarParser.Assign_mods, 0); }
	public assignTuple(): AssignTupleContext {
		return this.getRuleContext(0, AssignTupleContext);
	}
	public assignable(): AssignableContext {
		return this.getRuleContext(0, AssignableContext);
	}
	public eos(): EosContext | undefined {
		return this.tryGetRuleContext(0, EosContext);
	}
	constructor(ctx: AssignStatementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModifierAssign) {
			listener.enterModifierAssign(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModifierAssign) {
			listener.exitModifierAssign(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModifierAssign) {
			return visitor.visitModifierAssign(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class AssignTupleContext extends ParserRuleContext {
	public SYMBOL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.SYMBOL, 0); }
	public LS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LS, 0); }
	public RS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RS, 0); }
	public assignPass(): AssignPassContext[];
	public assignPass(i: number): AssignPassContext;
	public assignPass(i?: number): AssignPassContext | AssignPassContext[] {
		if (i === undefined) {
			return this.getRuleContexts(AssignPassContext);
		} else {
			return this.getRuleContext(i, AssignPassContext);
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
	public get ruleIndex(): number { return NyarParser.RULE_assignTuple; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignTuple) {
			listener.enterAssignTuple(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignTuple) {
			listener.exitAssignTuple(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignTuple) {
			return visitor.visitAssignTuple(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class AssignPassContext extends ParserRuleContext {
	public Tilde(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Tilde, 0); }
	public SYMBOL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.SYMBOL, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assignPass; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignPass) {
			listener.enterAssignPass(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignPass) {
			listener.exitAssignPass(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignPass) {
			return visitor.visitAssignPass(this);
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
	public Expose(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Expose, 0); }
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


export class MacroStatementContext extends ParserRuleContext {
	public Macro(): TerminalNode { return this.getToken(NyarParser.Macro, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public eos(): EosContext {
		return this.getRuleContext(0, EosContext);
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
	public eol(): EolContext {
		return this.getRuleContext(0, EolContext);
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
	public eol(): EolContext {
		return this.getRuleContext(0, EolContext);
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
	public eol(): EolContext {
		return this.getRuleContext(0, EolContext);
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


export class IfStatementContext extends ParserRuleContext {
	public If(): TerminalNode { return this.getToken(NyarParser.If, 0); }
	public condition(): ConditionContext {
		return this.getRuleContext(0, ConditionContext);
	}
	public elseif(): ElseifContext {
		return this.getRuleContext(0, ElseifContext);
	}
	public Else(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Else, 0); }
	public expr_block(): Expr_blockContext | undefined {
		return this.tryGetRuleContext(0, Expr_blockContext);
	}
	public eos(): EosContext | undefined {
		return this.tryGetRuleContext(0, EosContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_ifStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterIfStatement) {
			listener.enterIfStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitIfStatement) {
			listener.exitIfStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitIfStatement) {
			return visitor.visitIfStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ElseifContext extends ParserRuleContext {
	public Else(): TerminalNode[];
	public Else(i: number): TerminalNode;
	public Else(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Else);
		} else {
			return this.getToken(NyarParser.Else, i);
		}
	}
	public If(): TerminalNode[];
	public If(i: number): TerminalNode;
	public If(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.If);
		} else {
			return this.getToken(NyarParser.If, i);
		}
	}
	public condition(): ConditionContext[];
	public condition(i: number): ConditionContext;
	public condition(i?: number): ConditionContext | ConditionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ConditionContext);
		} else {
			return this.getRuleContext(i, ConditionContext);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_elseif; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterElseif) {
			listener.enterElseif(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitElseif) {
			listener.exitElseif(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitElseif) {
			return visitor.visitElseif(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ConditionContext extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public expr_block(): Expr_blockContext {
		return this.getRuleContext(0, Expr_blockContext);
	}
	public LS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LS, 0); }
	public RS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RS, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_condition; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterCondition) {
			listener.enterCondition(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitCondition) {
			listener.exitCondition(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitCondition) {
			return visitor.visitCondition(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class TryStatementContext extends ParserRuleContext {
	public Try(): TerminalNode { return this.getToken(NyarParser.Try, 0); }
	public blockStatement(): BlockStatementContext {
		return this.getRuleContext(0, BlockStatementContext);
	}
	public finalProduction(): FinalProductionContext | undefined {
		return this.tryGetRuleContext(0, FinalProductionContext);
	}
	public catchProduction(): CatchProductionContext | undefined {
		return this.tryGetRuleContext(0, CatchProductionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_tryStatement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTryStatement) {
			listener.enterTryStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTryStatement) {
			listener.exitTryStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTryStatement) {
			return visitor.visitTryStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class CatchProductionContext extends ParserRuleContext {
	public Catch(): TerminalNode { return this.getToken(NyarParser.Catch, 0); }
	public SYMBOL(): TerminalNode { return this.getToken(NyarParser.SYMBOL, 0); }
	public blockStatement(): BlockStatementContext {
		return this.getRuleContext(0, BlockStatementContext);
	}
	public LS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LS, 0); }
	public RS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RS, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_catchProduction; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterCatchProduction) {
			listener.enterCatchProduction(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitCatchProduction) {
			listener.exitCatchProduction(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitCatchProduction) {
			return visitor.visitCatchProduction(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class FinalProductionContext extends ParserRuleContext {
	public Final(): TerminalNode { return this.getToken(NyarParser.Final, 0); }
	public blockStatement(): BlockStatementContext {
		return this.getRuleContext(0, BlockStatementContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_finalProduction; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterFinalProduction) {
			listener.enterFinalProduction(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitFinalProduction) {
			listener.exitFinalProduction(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitFinalProduction) {
			return visitor.visitFinalProduction(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class TupleLiteralContext extends ParserRuleContext {
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	public single(): SingleContext[];
	public single(i: number): SingleContext;
	public single(i?: number): SingleContext | SingleContext[] {
		if (i === undefined) {
			return this.getRuleContexts(SingleContext);
		} else {
			return this.getRuleContext(i, SingleContext);
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
	public get ruleIndex(): number { return NyarParser.RULE_tupleLiteral; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTupleLiteral) {
			listener.enterTupleLiteral(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTupleLiteral) {
			listener.exitTupleLiteral(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTupleLiteral) {
			return visitor.visitTupleLiteral(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class SingleContext extends ParserRuleContext {
	public STRING(): TerminalNode | undefined { return this.tryGetToken(NyarParser.STRING, 0); }
	public NUMBER(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NUMBER, 0); }
	public BOOL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.BOOL, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_single; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterSingle) {
			listener.enterSingle(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitSingle) {
			listener.exitSingle(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitSingle) {
			return visitor.visitSingle(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class DictLiteralContext extends ParserRuleContext {
	public LL(): TerminalNode { return this.getToken(NyarParser.LL, 0); }
	public RL(): TerminalNode { return this.getToken(NyarParser.RL, 0); }
	public keyvalue(): KeyvalueContext[];
	public keyvalue(i: number): KeyvalueContext;
	public keyvalue(i?: number): KeyvalueContext | KeyvalueContext[] {
		if (i === undefined) {
			return this.getRuleContexts(KeyvalueContext);
		} else {
			return this.getRuleContext(i, KeyvalueContext);
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
	public get ruleIndex(): number { return NyarParser.RULE_dictLiteral; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterDictLiteral) {
			listener.enterDictLiteral(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitDictLiteral) {
			listener.exitDictLiteral(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitDictLiteral) {
			return visitor.visitDictLiteral(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class KeyvalueContext extends ParserRuleContext {
	public Colon(): TerminalNode { return this.getToken(NyarParser.Colon, 0); }
	public element(): ElementContext {
		return this.getRuleContext(0, ElementContext);
	}
	public NUMBER(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NUMBER, 0); }
	public STRING(): TerminalNode | undefined { return this.tryGetToken(NyarParser.STRING, 0); }
	public SYMBOL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.SYMBOL, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_keyvalue; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterKeyvalue) {
			listener.enterKeyvalue(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitKeyvalue) {
			listener.exitKeyvalue(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitKeyvalue) {
			return visitor.visitKeyvalue(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ListLiteralContext extends ParserRuleContext {
	public LM(): TerminalNode { return this.getToken(NyarParser.LM, 0); }
	public RM(): TerminalNode { return this.getToken(NyarParser.RM, 0); }
	public element(): ElementContext[];
	public element(i: number): ElementContext;
	public element(i?: number): ElementContext | ElementContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ElementContext);
		} else {
			return this.getRuleContext(i, ElementContext);
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
	public get ruleIndex(): number { return NyarParser.RULE_listLiteral; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterListLiteral) {
			listener.enterListLiteral(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitListLiteral) {
			listener.exitListLiteral(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitListLiteral) {
			return visitor.visitListLiteral(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ElementContext extends ParserRuleContext {
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	public dictLiteral(): DictLiteralContext | undefined {
		return this.tryGetRuleContext(0, DictLiteralContext);
	}
	public listLiteral(): ListLiteralContext | undefined {
		return this.tryGetRuleContext(0, ListLiteralContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_element; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterElement) {
			listener.enterElement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitElement) {
			listener.exitElement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitElement) {
			return visitor.visitElement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class SignedIntegerContext extends ParserRuleContext {
	public Integer(): TerminalNode { return this.getToken(NyarParser.Integer, 0); }
	public Plus(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Plus, 0); }
	public Minus(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Minus, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_signedInteger; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterSignedInteger) {
			listener.enterSignedInteger(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitSignedInteger) {
			listener.exitSignedInteger(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitSignedInteger) {
			return visitor.visitSignedInteger(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


