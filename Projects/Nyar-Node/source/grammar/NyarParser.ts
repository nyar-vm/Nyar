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
	public static readonly LineComment = 1;
	public static readonly PartComment = 2;
	public static readonly WhiteSpace = 3;
	public static readonly NewLine = 4;
	public static readonly Using = 5;
	public static readonly Expose = 6;
	public static readonly As = 7;
	public static readonly With = 8;
	public static readonly Macro = 9;
	public static readonly End = 10;
	public static readonly Template = 11;
	public static readonly Interface = 12;
	public static readonly Enumerate = 13;
	public static readonly Structure = 14;
	public static readonly Class = 15;
	public static readonly Extend = 16;
	public static readonly Implement = 17;
	public static readonly Setter = 18;
	public static readonly Getter = 19;
	public static readonly Public = 20;
	public static readonly Private = 21;
	public static readonly Protect = 22;
	public static readonly Final = 23;
	public static readonly Let = 24;
	public static readonly Type = 25;
	public static readonly If = 26;
	public static readonly Then = 27;
	public static readonly Else = 28;
	public static readonly Match = 29;
	public static readonly Switch = 30;
	public static readonly Case = 31;
	public static readonly For = 32;
	public static readonly In = 33;
	public static readonly Try = 34;
	public static readonly Catch = 35;
	public static readonly While = 36;
	public static readonly Do = 37;
	public static readonly True = 38;
	public static readonly False = 39;
	public static readonly BOOL = 40;
	public static readonly STRING = 41;
	public static readonly Identifier = 42;
	public static readonly NUMBER = 43;
	public static readonly Float = 44;
	public static readonly Integer = 45;
	public static readonly LS = 46;
	public static readonly RS = 47;
	public static readonly LM = 48;
	public static readonly RM = 49;
	public static readonly LL = 50;
	public static readonly RL = 51;
	public static readonly LCeil = 52;
	public static readonly RCeil = 53;
	public static readonly LFloor = 54;
	public static readonly RFloor = 55;
	public static readonly LAngle = 56;
	public static readonly RAngle = 57;
	public static readonly LQuote = 58;
	public static readonly RQuote = 59;
	public static readonly Import = 60;
	public static readonly LeftShift = 61;
	public static readonly LessEqual = 62;
	public static readonly Less = 63;
	public static readonly Export = 64;
	public static readonly RightShift = 65;
	public static readonly GraterEqual = 66;
	public static readonly Grater = 67;
	public static readonly Increase = 68;
	public static readonly PlusTo = 69;
	public static readonly Plus = 70;
	public static readonly LogicXor = 71;
	public static readonly Decrease = 72;
	public static readonly MinusFrom = 73;
	public static readonly To = 74;
	public static readonly Minus = 75;
	public static readonly NullSequence = 76;
	public static readonly Sequence = 77;
	public static readonly Times = 78;
	public static readonly Multiply = 79;
	public static readonly Kronecker = 80;
	public static readonly TensorProduct = 81;
	public static readonly MapAll = 82;
	public static readonly Remainder = 83;
	public static readonly Map = 84;
	public static readonly Divide = 85;
	public static readonly Quotient = 86;
	public static readonly Comment = 87;
	public static readonly Output = 88;
	public static readonly Mod = 89;
	public static readonly BaseInput = 90;
	public static readonly Power = 91;
	public static readonly Surd = 92;
	public static readonly Equivalent = 93;
	public static readonly NotEquivalent = 94;
	public static readonly Equal = 95;
	public static readonly Infer = 96;
	public static readonly Assign = 97;
	public static readonly Concat = 98;
	public static readonly Destruct = 99;
	public static readonly Tilde = 100;
	public static readonly LogicOr = 101;
	public static readonly BitOr = 102;
	public static readonly LogicAnd = 103;
	public static readonly BitAnd = 104;
	public static readonly DoubleBang = 105;
	public static readonly NotEqual = 106;
	public static readonly BitNot = 107;
	public static readonly LogicNot = 108;
	public static readonly Shebang = 109;
	public static readonly PostfixFunction = 110;
	public static readonly Curry = 111;
	public static readonly Apply = 112;
	public static readonly LetAssign = 113;
	public static readonly At = 114;
	public static readonly TypeAnnotation = 115;
	public static readonly DelayedAssign = 116;
	public static readonly Colon = 117;
	public static readonly Semicolon = 118;
	public static readonly Quote = 119;
	public static readonly Acute = 120;
	public static readonly DoubleQuotation = 121;
	public static readonly Quotation = 122;
	public static readonly Underline = 123;
	public static readonly Ellipsis = 124;
	public static readonly FinalAssign = 125;
	public static readonly DOT = 126;
	public static readonly Dot = 127;
	public static readonly COMMA = 128;
	public static readonly Reciprocal = 129;
	public static readonly Degree = 130;
	public static readonly Transpose = 131;
	public static readonly Hermitian = 132;
	public static readonly FieldComplex = 133;
	public static readonly FieldReal = 134;
	public static readonly FieldUnsigned = 135;
	public static readonly FieldBool = 136;
	public static readonly FieldInteger = 137;
	public static readonly FieldString = 138;
	public static readonly Section = 139;
	public static readonly Pilcrow = 140;
	public static readonly Currency = 141;
	public static readonly Element = 142;
	public static readonly RULE_program = 0;
	public static readonly RULE_statement = 1;
	public static readonly RULE_block_statement = 2;
	public static readonly RULE_expr_or_block = 3;
	public static readonly RULE_empty_statement = 4;
	public static readonly RULE_eos = 5;
	public static readonly RULE_symbol = 6;
	public static readonly RULE_global = 7;
	public static readonly RULE_expression_statement = 8;
	public static readonly RULE_type_statement = 9;
	public static readonly RULE_function_apply = 10;
	public static readonly RULE_function_params = 11;
	public static readonly RULE_expression = 12;
	public static readonly RULE_pst_ops = 13;
	public static readonly RULE_assign_statement = 14;
	public static readonly RULE_assignable = 15;
	public static readonly RULE_assign_lhs = 16;
	public static readonly RULE_assign_pass = 17;
	public static readonly RULE_module_statement = 18;
	public static readonly RULE_id_tuples = 19;
	public static readonly RULE_class_statement = 20;
	public static readonly RULE_class_fathers = 21;
	public static readonly RULE_class_implement = 22;
	public static readonly RULE_class_define = 23;
	public static readonly RULE_interface_Statement = 24;
	public static readonly RULE_template_Statement = 25;
	public static readonly RULE_macro_Statement = 26;
	public static readonly RULE_branch_statement = 27;
	public static readonly RULE_condition_statement = 28;
	public static readonly RULE_if_else = 29;
	public static readonly RULE_if_elseif = 30;
	public static readonly RULE_try_statement = 31;
	public static readonly RULE_catchProduction = 32;
	public static readonly RULE_finalProduction = 33;
	public static readonly RULE_loop_statement = 34;
	public static readonly RULE_dictLiteral = 35;
	public static readonly RULE_keyvalue = 36;
	public static readonly RULE_key_valid = 37;
	public static readonly RULE_listLiteral = 38;
	public static readonly RULE_element = 39;
	public static readonly RULE_indexLiteral = 40;
	public static readonly RULE_index_valid = 41;
	public static readonly RULE_signedInteger = 42;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"program", "statement", "block_statement", "expr_or_block", "empty_statement", 
		"eos", "symbol", "global", "expression_statement", "type_statement", "function_apply", 
		"function_params", "expression", "pst_ops", "assign_statement", "assignable", 
		"assign_lhs", "assign_pass", "module_statement", "id_tuples", "class_statement", 
		"class_fathers", "class_implement", "class_define", "interface_Statement", 
		"template_Statement", "macro_Statement", "branch_statement", "condition_statement", 
		"if_else", "if_elseif", "try_statement", "catchProduction", "finalProduction", 
		"loop_statement", "dictLiteral", "keyvalue", "key_valid", "listLiteral", 
		"element", "indexLiteral", "index_valid", "signedInteger",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, undefined, "'using'", "'expose'", 
		"'as'", "'with'", "'macro'", "'end'", "'template'", "'interface'", "'enumerate'", 
		"'structure'", "'class'", "'extend'", "'implement'", "'setter'", "'getter'", 
		"'public'", "'private'", "'protect'", "'final'", "'let'", "'type'", "'if'", 
		"'then'", "'else'", "'match'", "'switch'", "'case'", "'for'", "'in'", 
		"'try'", "'catch'", "'while'", "'do'", "'true'", "'false'", undefined, 
		undefined, undefined, undefined, undefined, undefined, "'('", "')'", "'['", 
		"']'", "'{'", "'}'", "'\u2308'", "'\u2309'", "'\u230A'", "'\u230B'", undefined, 
		undefined, "'\u201C'", "'\u201D'", undefined, undefined, "'<='", "'<'", 
		undefined, undefined, "'>='", "'>'", "'++'", "'+='", "'+'", "'\u2295'", 
		"'--'", "'-='", undefined, "'-'", "'***'", "'**'", "'*'", "'\u00D7'", 
		"'\u2297'", "'\u2299'", "'//@'", "'//'", "'/@'", "'/'", "'\u00F7'", "'%%%'", 
		"'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", "'=!='", "'=='", undefined, 
		"'='", "'~~'", "'~='", "'~'", undefined, "'|'", undefined, "'&'", "'!!'", 
		undefined, undefined, undefined, "'#!'", "'$'", "'@@@'", "'@@'", "'@='", 
		"'@'", undefined, undefined, undefined, undefined, "'`'", "'\u00B4'", 
		"'\"'", "'''", "'_'", "'...'", undefined, undefined, "'\u22C5'", undefined, 
		"'\u215F'", "'\u00B0'", "'\u1D40'", "'\u1D34'", "'\u2102'", "'\u211D'", 
		"'\u2124'", "'\uD835\uDD39'", "'\uD835\uDD40'", "'\uD835\uDD4A'", "'\u00A7'", 
		"'\u00B6'", "'\u00A4'", "'\u2208'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, "LineComment", "PartComment", "WhiteSpace", "NewLine", "Using", 
		"Expose", "As", "With", "Macro", "End", "Template", "Interface", "Enumerate", 
		"Structure", "Class", "Extend", "Implement", "Setter", "Getter", "Public", 
		"Private", "Protect", "Final", "Let", "Type", "If", "Then", "Else", "Match", 
		"Switch", "Case", "For", "In", "Try", "Catch", "While", "Do", "True", 
		"False", "BOOL", "STRING", "Identifier", "NUMBER", "Float", "Integer", 
		"LS", "RS", "LM", "RM", "LL", "RL", "LCeil", "RCeil", "LFloor", "RFloor", 
		"LAngle", "RAngle", "LQuote", "RQuote", "Import", "LeftShift", "LessEqual", 
		"Less", "Export", "RightShift", "GraterEqual", "Grater", "Increase", "PlusTo", 
		"Plus", "LogicXor", "Decrease", "MinusFrom", "To", "Minus", "NullSequence", 
		"Sequence", "Times", "Multiply", "Kronecker", "TensorProduct", "MapAll", 
		"Remainder", "Map", "Divide", "Quotient", "Comment", "Output", "Mod", 
		"BaseInput", "Power", "Surd", "Equivalent", "NotEquivalent", "Equal", 
		"Infer", "Assign", "Concat", "Destruct", "Tilde", "LogicOr", "BitOr", 
		"LogicAnd", "BitAnd", "DoubleBang", "NotEqual", "BitNot", "LogicNot", 
		"Shebang", "PostfixFunction", "Curry", "Apply", "LetAssign", "At", "TypeAnnotation", 
		"DelayedAssign", "Colon", "Semicolon", "Quote", "Acute", "DoubleQuotation", 
		"Quotation", "Underline", "Ellipsis", "FinalAssign", "DOT", "Dot", "COMMA", 
		"Reciprocal", "Degree", "Transpose", "Hermitian", "FieldComplex", "FieldReal", 
		"FieldUnsigned", "FieldBool", "FieldInteger", "FieldString", "Section", 
		"Pilcrow", "Currency", "Element",
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
			this.state = 89;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.Using) | (1 << NyarParser.Class) | (1 << NyarParser.Final) | (1 << NyarParser.Let) | (1 << NyarParser.Type) | (1 << NyarParser.If) | (1 << NyarParser.Match) | (1 << NyarParser.Switch))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (NyarParser.For - 32)) | (1 << (NyarParser.Try - 32)) | (1 << (NyarParser.While - 32)) | (1 << (NyarParser.Do - 32)) | (1 << (NyarParser.STRING - 32)) | (1 << (NyarParser.Identifier - 32)) | (1 << (NyarParser.NUMBER - 32)) | (1 << (NyarParser.LS - 32)) | (1 << (NyarParser.LM - 32)) | (1 << (NyarParser.LL - 32)))) !== 0) || ((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Colon - 107)) | (1 << (NyarParser.Semicolon - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0)) {
				{
				{
				this.state = 86;
				this.statement();
				}
				}
				this.state = 91;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 92;
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
			this.state = 127;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 9, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 94;
				this.empty_statement();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 95;
				this.block_statement();
				this.state = 97;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
				case 1:
					{
					this.state = 96;
					this.eos();
					}
					break;
				}
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 99;
				this.expression_statement();
				this.state = 101;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 2, this._ctx) ) {
				case 1:
					{
					this.state = 100;
					this.eos();
					}
					break;
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 103;
				this.assign_statement();
				this.state = 105;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 3, this._ctx) ) {
				case 1:
					{
					this.state = 104;
					this.eos();
					}
					break;
				}
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 107;
				this.branch_statement();
				this.state = 109;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 4, this._ctx) ) {
				case 1:
					{
					this.state = 108;
					this.eos();
					}
					break;
				}
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 111;
				this.try_statement();
				this.state = 113;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 5, this._ctx) ) {
				case 1:
					{
					this.state = 112;
					this.eos();
					}
					break;
				}
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 115;
				this.module_statement();
				this.state = 117;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 6, this._ctx) ) {
				case 1:
					{
					this.state = 116;
					this.eos();
					}
					break;
				}
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 119;
				this.class_statement();
				this.state = 121;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 7, this._ctx) ) {
				case 1:
					{
					this.state = 120;
					this.eos();
					}
					break;
				}
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 123;
				this.loop_statement();
				this.state = 125;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 8, this._ctx) ) {
				case 1:
					{
					this.state = 124;
					this.eos();
					}
					break;
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
	public block_statement(): Block_statementContext {
		let _localctx: Block_statementContext = new Block_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 4, NyarParser.RULE_block_statement);
		let _la: number;
		try {
			this.state = 145;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.LL:
				_localctx = new BlockStatementContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 129;
				this.match(NyarParser.LL);
				this.state = 131;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				do {
					{
					{
					this.state = 130;
					this.statement();
					}
					}
					this.state = 133;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
				} while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.Using) | (1 << NyarParser.Class) | (1 << NyarParser.Final) | (1 << NyarParser.Let) | (1 << NyarParser.Type) | (1 << NyarParser.If) | (1 << NyarParser.Match) | (1 << NyarParser.Switch))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (NyarParser.For - 32)) | (1 << (NyarParser.Try - 32)) | (1 << (NyarParser.While - 32)) | (1 << (NyarParser.Do - 32)) | (1 << (NyarParser.STRING - 32)) | (1 << (NyarParser.Identifier - 32)) | (1 << (NyarParser.NUMBER - 32)) | (1 << (NyarParser.LS - 32)) | (1 << (NyarParser.LM - 32)) | (1 << (NyarParser.LL - 32)))) !== 0) || ((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Colon - 107)) | (1 << (NyarParser.Semicolon - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0));
				this.state = 135;
				this.match(NyarParser.RL);
				}
				break;
			case NyarParser.Colon:
				_localctx = new BlockStatementContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 137;
				this.match(NyarParser.Colon);
				this.state = 139;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				do {
					{
					{
					this.state = 138;
					this.statement();
					}
					}
					this.state = 141;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
				} while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.Using) | (1 << NyarParser.Class) | (1 << NyarParser.Final) | (1 << NyarParser.Let) | (1 << NyarParser.Type) | (1 << NyarParser.If) | (1 << NyarParser.Match) | (1 << NyarParser.Switch))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (NyarParser.For - 32)) | (1 << (NyarParser.Try - 32)) | (1 << (NyarParser.While - 32)) | (1 << (NyarParser.Do - 32)) | (1 << (NyarParser.STRING - 32)) | (1 << (NyarParser.Identifier - 32)) | (1 << (NyarParser.NUMBER - 32)) | (1 << (NyarParser.LS - 32)) | (1 << (NyarParser.LM - 32)) | (1 << (NyarParser.LL - 32)))) !== 0) || ((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Colon - 107)) | (1 << (NyarParser.Semicolon - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0));
				this.state = 143;
				this.match(NyarParser.End);
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
	public expr_or_block(): Expr_or_blockContext {
		let _localctx: Expr_or_blockContext = new Expr_or_blockContext(this._ctx, this.state);
		this.enterRule(_localctx, 6, NyarParser.RULE_expr_or_block);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 149;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 13, this._ctx) ) {
			case 1:
				{
				this.state = 147;
				this.block_statement();
				}
				break;

			case 2:
				{
				this.state = 148;
				this.expression(0);
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
	public empty_statement(): Empty_statementContext {
		let _localctx: Empty_statementContext = new Empty_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 8, NyarParser.RULE_empty_statement);
		try {
			_localctx = new EmptyStatementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 151;
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
			this.state = 153;
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
	public symbol(): SymbolContext {
		let _localctx: SymbolContext = new SymbolContext(this._ctx, this.state);
		this.enterRule(_localctx, 12, NyarParser.RULE_symbol);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 155;
			this.match(NyarParser.Identifier);
			this.state = 160;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 14, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					{
					{
					this.state = 156;
					this.match(NyarParser.DOT);
					this.state = 157;
					this.match(NyarParser.Identifier);
					}
					}
				}
				this.state = 162;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 14, this._ctx);
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
	public global(): GlobalContext {
		let _localctx: GlobalContext = new GlobalContext(this._ctx, this.state);
		this.enterRule(_localctx, 14, NyarParser.RULE_global);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 163;
			this.match(NyarParser.Section);
			this.state = 164;
			this.match(NyarParser.Identifier);
			this.state = 169;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.DOT) {
				{
				{
				this.state = 165;
				this.match(NyarParser.DOT);
				this.state = 166;
				this.match(NyarParser.Identifier);
				}
				}
				this.state = 171;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
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
	public expression_statement(): Expression_statementContext {
		let _localctx: Expression_statementContext = new Expression_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 16, NyarParser.RULE_expression_statement);
		let _la: number;
		try {
			_localctx = new ExpressionStatementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 172;
			this.expression(0);
			this.state = 177;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.COMMA) {
				{
				{
				this.state = 173;
				this.match(NyarParser.COMMA);
				this.state = 174;
				this.expression(0);
				}
				}
				this.state = 179;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
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
	public type_statement(): Type_statementContext {
		let _localctx: Type_statementContext = new Type_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 18, NyarParser.RULE_type_statement);
		try {
			this.state = 186;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.Identifier:
				_localctx = new TypeAssignContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 180;
				(_localctx as TypeAssignContext)._left = this.match(NyarParser.Identifier);
				this.state = 181;
				this.match(NyarParser.TypeAnnotation);
				this.state = 182;
				(_localctx as TypeAssignContext)._right = this.expression(0);
				}
				break;
			case NyarParser.Type:
				_localctx = new TypeAssignContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 183;
				this.match(NyarParser.Type);
				this.state = 184;
				(_localctx as TypeAssignContext)._left = this.match(NyarParser.Identifier);
				this.state = 185;
				(_localctx as TypeAssignContext)._right = this.expression(0);
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
	public function_apply(): Function_applyContext {
		let _localctx: Function_applyContext = new Function_applyContext(this._ctx, this.state);
		this.enterRule(_localctx, 20, NyarParser.RULE_function_apply);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 188;
			this.symbol();
			this.state = 189;
			this.match(NyarParser.LS);
			this.state = 191;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (((((_la - 25)) & ~0x1F) === 0 && ((1 << (_la - 25)) & ((1 << (NyarParser.Type - 25)) | (1 << (NyarParser.STRING - 25)) | (1 << (NyarParser.Identifier - 25)) | (1 << (NyarParser.NUMBER - 25)) | (1 << (NyarParser.LS - 25)) | (1 << (NyarParser.LM - 25)) | (1 << (NyarParser.LL - 25)))) !== 0) || ((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0)) {
				{
				this.state = 190;
				this.function_params();
				}
			}

			this.state = 193;
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
	public function_params(): Function_paramsContext {
		let _localctx: Function_paramsContext = new Function_paramsContext(this._ctx, this.state);
		this.enterRule(_localctx, 22, NyarParser.RULE_function_params);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 195;
			this.expression(0);
			this.state = 200;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.COMMA) {
				{
				{
				this.state = 196;
				this.match(NyarParser.COMMA);
				this.state = 197;
				this.expression(0);
				}
				}
				this.state = 202;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
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
		let _startState: number = 24;
		this.enterRecursionRule(_localctx, 24, NyarParser.RULE_expression, _p);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 225;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 20, this._ctx) ) {
			case 1:
				{
				_localctx = new TypeStatementContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;

				this.state = 204;
				this.type_statement();
				}
				break;

			case 2:
				{
				_localctx = new FunctionApplyContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 205;
				this.function_apply();
				}
				break;

			case 3:
				{
				_localctx = new PrefixExpressionContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 206;
				(_localctx as PrefixExpressionContext)._op = this._input.LT(1);
				_la = this._input.LA(1);
				if (!(((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0))) {
					(_localctx as PrefixExpressionContext)._op = this._errHandler.recoverInline(this);
				} else {
					if (this._input.LA(1) === Token.EOF) {
						this.matchedEOF = true;
					}

					this._errHandler.reportMatch(this);
					this.consume();
				}
				this.state = 207;
				(_localctx as PrefixExpressionContext)._right = this.expression(19);
				}
				break;

			case 4:
				{
				_localctx = new LazyAssignContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 208;
				(_localctx as LazyAssignContext)._id = this.function_apply();
				this.state = 209;
				(_localctx as LazyAssignContext)._op = this.match(NyarParser.DelayedAssign);
				this.state = 210;
				(_localctx as LazyAssignContext)._expr = this.assignable();
				}
				break;

			case 5:
				{
				_localctx = new OperatorAssignContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 212;
				(_localctx as OperatorAssignContext)._id = this.assign_lhs();
				this.state = 213;
				(_localctx as OperatorAssignContext)._op = this._input.LT(1);
				_la = this._input.LA(1);
				if (!(((((_la - 69)) & ~0x1F) === 0 && ((1 << (_la - 69)) & ((1 << (NyarParser.PlusTo - 69)) | (1 << (NyarParser.MinusFrom - 69)) | (1 << (NyarParser.Assign - 69)))) !== 0) || _la === NyarParser.LetAssign || _la === NyarParser.FinalAssign)) {
					(_localctx as OperatorAssignContext)._op = this._errHandler.recoverInline(this);
				} else {
					if (this._input.LA(1) === Token.EOF) {
						this.matchedEOF = true;
					}

					this._errHandler.reportMatch(this);
					this.consume();
				}
				this.state = 214;
				(_localctx as OperatorAssignContext)._expr = this.assignable();
				}
				break;

			case 6:
				{
				_localctx = new ListContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 216;
				(_localctx as ListContext)._data = this.listLiteral();
				}
				break;

			case 7:
				{
				_localctx = new DictContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 217;
				(_localctx as DictContext)._data = this.dictLiteral();
				}
				break;

			case 8:
				{
				_localctx = new StringContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 218;
				(_localctx as StringContext)._atom = this.match(NyarParser.STRING);
				}
				break;

			case 9:
				{
				_localctx = new NumberContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 219;
				(_localctx as NumberContext)._atom = this.match(NyarParser.NUMBER);
				}
				break;

			case 10:
				{
				_localctx = new SymbolExpressionContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 220;
				(_localctx as SymbolExpressionContext)._atom = this.symbol();
				}
				break;

			case 11:
				{
				_localctx = new PriorityExpressionContext(_localctx);
				this._ctx = _localctx;
				_prevctx = _localctx;
				this.state = 221;
				this.match(NyarParser.LS);
				this.state = 222;
				this.expression(0);
				this.state = 223;
				this.match(NyarParser.RS);
				}
				break;
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 257;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 22, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					if (this._parseListeners != null) {
						this.triggerExitRuleEvent();
					}
					_prevctx = _localctx;
					{
					this.state = 255;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 21, this._ctx) ) {
					case 1:
						{
						_localctx = new MethodApplyContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as MethodApplyContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 227;
						if (!(this.precpred(this._ctx, 17))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 17)");
						}
						this.state = 228;
						(_localctx as MethodApplyContext)._op = this.match(NyarParser.DOT);
						this.state = 229;
						(_localctx as MethodApplyContext)._right = this.expression(18);
						}
						break;

					case 2:
						{
						_localctx = new BinaryLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as BinaryLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 230;
						if (!(this.precpred(this._ctx, 16))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 16)");
						}
						this.state = 231;
						(_localctx as BinaryLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(_la === NyarParser.LeftShift || _la === NyarParser.RightShift)) {
							(_localctx as BinaryLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 232;
						(_localctx as BinaryLikeContext)._right = this.expression(17);
						}
						break;

					case 3:
						{
						_localctx = new LogicLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as LogicLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 233;
						if (!(this.precpred(this._ctx, 15))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 15)");
						}
						this.state = 234;
						(_localctx as LogicLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(((((_la - 62)) & ~0x1F) === 0 && ((1 << (_la - 62)) & ((1 << (NyarParser.LessEqual - 62)) | (1 << (NyarParser.Less - 62)) | (1 << (NyarParser.GraterEqual - 62)) | (1 << (NyarParser.Grater - 62)) | (1 << (NyarParser.Equivalent - 62)))) !== 0) || ((((_la - 94)) & ~0x1F) === 0 && ((1 << (_la - 94)) & ((1 << (NyarParser.NotEquivalent - 94)) | (1 << (NyarParser.Equal - 94)) | (1 << (NyarParser.LogicOr - 94)) | (1 << (NyarParser.LogicAnd - 94)) | (1 << (NyarParser.NotEqual - 94)))) !== 0))) {
							(_localctx as LogicLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 235;
						(_localctx as LogicLikeContext)._right = this.expression(16);
						}
						break;

					case 4:
						{
						_localctx = new CompareLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as CompareLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 236;
						if (!(this.precpred(this._ctx, 14))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 14)");
						}
						this.state = 237;
						(_localctx as CompareLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(((((_la - 62)) & ~0x1F) === 0 && ((1 << (_la - 62)) & ((1 << (NyarParser.LessEqual - 62)) | (1 << (NyarParser.Less - 62)) | (1 << (NyarParser.GraterEqual - 62)) | (1 << (NyarParser.Grater - 62)) | (1 << (NyarParser.Equivalent - 62)))) !== 0) || ((((_la - 94)) & ~0x1F) === 0 && ((1 << (_la - 94)) & ((1 << (NyarParser.NotEquivalent - 94)) | (1 << (NyarParser.Equal - 94)) | (1 << (NyarParser.LogicOr - 94)) | (1 << (NyarParser.LogicAnd - 94)) | (1 << (NyarParser.NotEqual - 94)))) !== 0))) {
							(_localctx as CompareLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 238;
						(_localctx as CompareLikeContext)._right = this.expression(15);
						}
						break;

					case 5:
						{
						_localctx = new PowerLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as PowerLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 239;
						if (!(this.precpred(this._ctx, 13))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 13)");
						}
						this.state = 240;
						(_localctx as PowerLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(_la === NyarParser.Power || _la === NyarParser.Surd)) {
							(_localctx as PowerLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 241;
						(_localctx as PowerLikeContext)._right = this.expression(13);
						}
						break;

					case 6:
						{
						_localctx = new MultiplyLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as MultiplyLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 242;
						if (!(this.precpred(this._ctx, 12))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 12)");
						}
						this.state = 243;
						(_localctx as MultiplyLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(((((_la - 78)) & ~0x1F) === 0 && ((1 << (_la - 78)) & ((1 << (NyarParser.Times - 78)) | (1 << (NyarParser.Multiply - 78)) | (1 << (NyarParser.Kronecker - 78)) | (1 << (NyarParser.TensorProduct - 78)) | (1 << (NyarParser.Divide - 78)))) !== 0))) {
							(_localctx as MultiplyLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 244;
						(_localctx as MultiplyLikeContext)._right = this.expression(13);
						}
						break;

					case 7:
						{
						_localctx = new PlusLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as PlusLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 245;
						if (!(this.precpred(this._ctx, 11))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 11)");
						}
						this.state = 246;
						(_localctx as PlusLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(_la === NyarParser.Plus || _la === NyarParser.Minus)) {
							(_localctx as PlusLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 247;
						(_localctx as PlusLikeContext)._right = this.expression(12);
						}
						break;

					case 8:
						{
						_localctx = new ListLikeContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as ListLikeContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 248;
						if (!(this.precpred(this._ctx, 10))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 10)");
						}
						this.state = 249;
						(_localctx as ListLikeContext)._op = this._input.LT(1);
						_la = this._input.LA(1);
						if (!(_la === NyarParser.LeftShift || _la === NyarParser.RightShift || _la === NyarParser.Concat)) {
							(_localctx as ListLikeContext)._op = this._errHandler.recoverInline(this);
						} else {
							if (this._input.LA(1) === Token.EOF) {
								this.matchedEOF = true;
							}

							this._errHandler.reportMatch(this);
							this.consume();
						}
						this.state = 250;
						(_localctx as ListLikeContext)._right = this.expression(11);
						}
						break;

					case 9:
						{
						_localctx = new PostfixExpressionContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as PostfixExpressionContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 251;
						if (!(this.precpred(this._ctx, 18))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 18)");
						}
						this.state = 252;
						(_localctx as PostfixExpressionContext)._op = this.pst_ops();
						}
						break;

					case 10:
						{
						_localctx = new IndexContext(new ExpressionContext(_parentctx, _parentState));
						(_localctx as IndexContext)._left = _prevctx;
						this.pushNewRecursionContext(_localctx, _startState, NyarParser.RULE_expression);
						this.state = 253;
						if (!(this.precpred(this._ctx, 6))) {
							throw new FailedPredicateException(this, "this.precpred(this._ctx, 6)");
						}
						this.state = 254;
						(_localctx as IndexContext)._data = this.indexLiteral();
						}
						break;
					}
					}
				}
				this.state = 259;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 22, this._ctx);
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
	public pst_ops(): Pst_opsContext {
		let _localctx: Pst_opsContext = new Pst_opsContext(this._ctx, this.state);
		this.enterRule(_localctx, 26, NyarParser.RULE_pst_ops);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 260;
			this.match(NyarParser.Increase);
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
	public assign_statement(): Assign_statementContext {
		let _localctx: Assign_statementContext = new Assign_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 28, NyarParser.RULE_assign_statement);
		let _la: number;
		try {
			_localctx = new AssignStatementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 262;
			(_localctx as AssignStatementContext)._op = this._input.LT(1);
			_la = this._input.LA(1);
			if (!(_la === NyarParser.Final || _la === NyarParser.Let)) {
				(_localctx as AssignStatementContext)._op = this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			this.state = 263;
			(_localctx as AssignStatementContext)._id = this.assign_lhs();
			this.state = 264;
			(_localctx as AssignStatementContext)._expr = this.assignable();
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
	public assignable(): AssignableContext {
		let _localctx: AssignableContext = new AssignableContext(this._ctx, this.state);
		this.enterRule(_localctx, 30, NyarParser.RULE_assignable);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 275;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 24, this._ctx) ) {
			case 1:
				{
				this.state = 266;
				this.expression(0);
				}
				break;

			case 2:
				{
				this.state = 267;
				this.match(NyarParser.LL);
				this.state = 269;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				do {
					{
					{
					this.state = 268;
					this.statement();
					}
					}
					this.state = 271;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
				} while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << NyarParser.Using) | (1 << NyarParser.Class) | (1 << NyarParser.Final) | (1 << NyarParser.Let) | (1 << NyarParser.Type) | (1 << NyarParser.If) | (1 << NyarParser.Match) | (1 << NyarParser.Switch))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (NyarParser.For - 32)) | (1 << (NyarParser.Try - 32)) | (1 << (NyarParser.While - 32)) | (1 << (NyarParser.Do - 32)) | (1 << (NyarParser.STRING - 32)) | (1 << (NyarParser.Identifier - 32)) | (1 << (NyarParser.NUMBER - 32)) | (1 << (NyarParser.LS - 32)) | (1 << (NyarParser.LM - 32)) | (1 << (NyarParser.LL - 32)))) !== 0) || ((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Colon - 107)) | (1 << (NyarParser.Semicolon - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0));
				this.state = 273;
				this.match(NyarParser.RL);
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
	public assign_lhs(): Assign_lhsContext {
		let _localctx: Assign_lhsContext = new Assign_lhsContext(this._ctx, this.state);
		this.enterRule(_localctx, 32, NyarParser.RULE_assign_lhs);
		let _la: number;
		try {
			let _alt: number;
			this.state = 308;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 29, this._ctx) ) {
			case 1:
				_localctx = new AssignValueContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 277;
				this.match(NyarParser.Identifier);
				}
				break;

			case 2:
				_localctx = new AssignAttributeContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 278;
				this.match(NyarParser.Identifier);
				this.state = 281;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				do {
					{
					{
					this.state = 279;
					this.match(NyarParser.DOT);
					this.state = 280;
					this.match(NyarParser.Identifier);
					}
					}
					this.state = 283;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
				} while (_la === NyarParser.DOT);
				}
				break;

			case 3:
				_localctx = new AssignFunctionContext(_localctx);
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 285;
				this.match(NyarParser.Identifier);
				this.state = 286;
				this.match(NyarParser.LS);
				this.state = 287;
				this.match(NyarParser.Identifier);
				this.state = 288;
				this.match(NyarParser.RS);
				}
				break;

			case 4:
				_localctx = new AssignPairContext(_localctx);
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 289;
				this.match(NyarParser.LS);
				this.state = 298;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Identifier || _la === NyarParser.Tilde) {
					{
					this.state = 290;
					this.assign_pass();
					this.state = 295;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 26, this._ctx);
					while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
						if (_alt === 1) {
							{
							{
							this.state = 291;
							this.match(NyarParser.COMMA);
							this.state = 292;
							this.assign_pass();
							}
							}
						}
						this.state = 297;
						this._errHandler.sync(this);
						_alt = this.interpreter.adaptivePredict(this._input, 26, this._ctx);
					}
					}
				}

				this.state = 301;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.COMMA) {
					{
					this.state = 300;
					this.match(NyarParser.COMMA);
					}
				}

				this.state = 303;
				this.match(NyarParser.RS);
				}
				break;

			case 5:
				_localctx = new AssignWithListContext(_localctx);
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 304;
				this.match(NyarParser.Identifier);
				this.state = 305;
				this.match(NyarParser.LM);
				this.state = 306;
				this.match(NyarParser.Integer);
				this.state = 307;
				this.match(NyarParser.RM);
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
	public assign_pass(): Assign_passContext {
		let _localctx: Assign_passContext = new Assign_passContext(this._ctx, this.state);
		this.enterRule(_localctx, 34, NyarParser.RULE_assign_pass);
		try {
			this.state = 312;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.Tilde:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 310;
				this.match(NyarParser.Tilde);
				}
				break;
			case NyarParser.Identifier:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 311;
				this.symbol();
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
	public module_statement(): Module_statementContext {
		let _localctx: Module_statementContext = new Module_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 36, NyarParser.RULE_module_statement);
		let _la: number;
		try {
			this.state = 340;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 34, this._ctx) ) {
			case 1:
				_localctx = new ModuleIncludeContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 314;
				this.match(NyarParser.Using);
				this.state = 315;
				(_localctx as ModuleIncludeContext)._module = this.symbol();
				this.state = 317;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Times || _la === NyarParser.Power) {
					{
					this.state = 316;
					_la = this._input.LA(1);
					if (!(_la === NyarParser.Times || _la === NyarParser.Power)) {
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

				}
				break;

			case 2:
				_localctx = new ModuleAliasContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 319;
				this.match(NyarParser.Using);
				this.state = 320;
				(_localctx as ModuleAliasContext)._module = this.symbol();
				this.state = 321;
				this.match(NyarParser.As);
				this.state = 322;
				(_localctx as ModuleAliasContext)._alias = this.match(NyarParser.Identifier);
				}
				break;

			case 3:
				_localctx = new ModuleSymbolContext(_localctx);
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 324;
				this.match(NyarParser.Using);
				this.state = 325;
				(_localctx as ModuleSymbolContext)._source = this.symbol();
				this.state = 327;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.With) {
					{
					this.state = 326;
					this.match(NyarParser.With);
					}
				}

				this.state = 329;
				(_localctx as ModuleSymbolContext)._name = this.match(NyarParser.Identifier);
				}
				break;

			case 4:
				_localctx = new ModuleSymbolsContext(_localctx);
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 331;
				this.match(NyarParser.Using);
				this.state = 332;
				(_localctx as ModuleSymbolsContext)._source = this.symbol();
				this.state = 334;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.With) {
					{
					this.state = 333;
					this.match(NyarParser.With);
					}
				}

				this.state = 336;
				this.id_tuples();
				}
				break;

			case 5:
				_localctx = new ModuleResolveContext(_localctx);
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 338;
				this.match(NyarParser.Using);
				this.state = 339;
				this.dictLiteral();
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
	public id_tuples(): Id_tuplesContext {
		let _localctx: Id_tuplesContext = new Id_tuplesContext(this._ctx, this.state);
		this.enterRule(_localctx, 38, NyarParser.RULE_id_tuples);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 342;
			this.match(NyarParser.LL);
			this.state = 343;
			this.match(NyarParser.Identifier);
			this.state = 348;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === NyarParser.COMMA) {
				{
				{
				this.state = 344;
				this.match(NyarParser.COMMA);
				this.state = 345;
				this.match(NyarParser.Identifier);
				}
				}
				this.state = 350;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 351;
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
	public class_statement(): Class_statementContext {
		let _localctx: Class_statementContext = new Class_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 40, NyarParser.RULE_class_statement);
		let _la: number;
		try {
			this.state = 367;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 38, this._ctx) ) {
			case 1:
				_localctx = new ClassBaseContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 353;
				this.match(NyarParser.Class);
				this.state = 354;
				(_localctx as ClassBaseContext)._id = this.match(NyarParser.Identifier);
				this.state = 356;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Implement || _la === NyarParser.Colon) {
					{
					this.state = 355;
					this.class_implement();
					}
				}

				this.state = 358;
				this.class_define();
				}
				break;

			case 2:
				_localctx = new ClassWithFatherContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 359;
				this.match(NyarParser.Class);
				this.state = 360;
				(_localctx as ClassWithFatherContext)._id = this.match(NyarParser.Identifier);
				this.state = 361;
				this.class_fathers();
				this.state = 363;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Implement || _la === NyarParser.Colon) {
					{
					this.state = 362;
					this.class_implement();
					}
				}

				this.state = 365;
				this.class_define();
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
	public class_fathers(): Class_fathersContext {
		let _localctx: Class_fathersContext = new Class_fathersContext(this._ctx, this.state);
		this.enterRule(_localctx, 42, NyarParser.RULE_class_fathers);
		let _la: number;
		try {
			this.state = 386;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 41, this._ctx) ) {
			case 1:
				_localctx = new ClassFatherContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 369;
				this.match(NyarParser.Extend);
				this.state = 370;
				(_localctx as ClassFatherContext)._father = this.symbol();
				}
				break;

			case 2:
				_localctx = new ClassFatherContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 371;
				this.match(NyarParser.LS);
				this.state = 372;
				(_localctx as ClassFatherContext)._father = this.symbol();
				this.state = 373;
				this.match(NyarParser.RS);
				}
				break;

			case 3:
				_localctx = new ClassFathersContext(_localctx);
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 375;
				this.match(NyarParser.LS);
				this.state = 383;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Identifier) {
					{
					this.state = 376;
					this.symbol();
					this.state = 379;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
					do {
						{
						{
						this.state = 377;
						this.match(NyarParser.COMMA);
						this.state = 378;
						this.symbol();
						}
						}
						this.state = 381;
						this._errHandler.sync(this);
						_la = this._input.LA(1);
					} while (_la === NyarParser.COMMA);
					}
				}

				this.state = 385;
				this.match(NyarParser.RS);
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
	public class_implement(): Class_implementContext {
		let _localctx: Class_implementContext = new Class_implementContext(this._ctx, this.state);
		this.enterRule(_localctx, 44, NyarParser.RULE_class_implement);
		let _la: number;
		try {
			_localctx = new ClassImplementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 388;
			_la = this._input.LA(1);
			if (!(_la === NyarParser.Implement || _la === NyarParser.Colon)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			this.state = 389;
			this.symbol();
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
	public class_define(): Class_defineContext {
		let _localctx: Class_defineContext = new Class_defineContext(this._ctx, this.state);
		this.enterRule(_localctx, 46, NyarParser.RULE_class_define);
		try {
			_localctx = new ClassDefineContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 391;
			this.match(NyarParser.LL);
			this.state = 392;
			this.expression(0);
			this.state = 393;
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
	public interface_Statement(): Interface_StatementContext {
		let _localctx: Interface_StatementContext = new Interface_StatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 48, NyarParser.RULE_interface_Statement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 395;
			this.match(NyarParser.Interface);
			this.state = 396;
			this.expression(0);
			this.state = 397;
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
	public template_Statement(): Template_StatementContext {
		let _localctx: Template_StatementContext = new Template_StatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 50, NyarParser.RULE_template_Statement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 399;
			this.match(NyarParser.Template);
			this.state = 400;
			this.expression(0);
			this.state = 401;
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
	public macro_Statement(): Macro_StatementContext {
		let _localctx: Macro_StatementContext = new Macro_StatementContext(this._ctx, this.state);
		this.enterRule(_localctx, 52, NyarParser.RULE_macro_Statement);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 403;
			this.match(NyarParser.Macro);
			this.state = 404;
			this.expression(0);
			this.state = 405;
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
	public branch_statement(): Branch_statementContext {
		let _localctx: Branch_statementContext = new Branch_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 54, NyarParser.RULE_branch_statement);
		let _la: number;
		try {
			let _alt: number;
			this.state = 433;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 45, this._ctx) ) {
			case 1:
				_localctx = new IfSingleContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 407;
				this.match(NyarParser.If);
				this.state = 408;
				this.condition_statement();
				this.state = 409;
				this.expr_or_block();
				this.state = 411;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Else) {
					{
					this.state = 410;
					this.if_else();
					}
				}

				}
				break;

			case 2:
				_localctx = new IfNestedContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 413;
				this.match(NyarParser.If);
				this.state = 414;
				this.condition_statement();
				this.state = 415;
				this.expr_or_block();
				this.state = 419;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 43, this._ctx);
				while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
					if (_alt === 1) {
						{
						{
						this.state = 416;
						this.if_elseif();
						}
						}
					}
					this.state = 421;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 43, this._ctx);
				}
				this.state = 423;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === NyarParser.Else) {
					{
					this.state = 422;
					this.if_else();
					}
				}

				}
				break;

			case 3:
				_localctx = new SwitchStatementContext(_localctx);
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 425;
				this.match(NyarParser.Switch);
				this.state = 426;
				this.condition_statement();
				this.state = 427;
				this.expr_or_block();
				}
				break;

			case 4:
				_localctx = new MatchStatementContext(_localctx);
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 429;
				this.match(NyarParser.Match);
				this.state = 430;
				this.condition_statement();
				this.state = 431;
				this.expr_or_block();
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
	public condition_statement(): Condition_statementContext {
		let _localctx: Condition_statementContext = new Condition_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 56, NyarParser.RULE_condition_statement);
		let _la: number;
		try {
			_localctx = new ConditionStatementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 436;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 46, this._ctx) ) {
			case 1:
				{
				this.state = 435;
				this.match(NyarParser.LS);
				}
				break;
			}
			this.state = 438;
			this.expression(0);
			this.state = 440;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.RS) {
				{
				this.state = 439;
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
	public if_else(): If_elseContext {
		let _localctx: If_elseContext = new If_elseContext(this._ctx, this.state);
		this.enterRule(_localctx, 58, NyarParser.RULE_if_else);
		try {
			_localctx = new ElseStatementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 442;
			this.match(NyarParser.Else);
			this.state = 443;
			this.expr_or_block();
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
	public if_elseif(): If_elseifContext {
		let _localctx: If_elseifContext = new If_elseifContext(this._ctx, this.state);
		this.enterRule(_localctx, 60, NyarParser.RULE_if_elseif);
		let _la: number;
		try {
			_localctx = new ElseIfStatementContext(_localctx);
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 445;
			this.match(NyarParser.Else);
			this.state = 446;
			this.match(NyarParser.If);
			this.state = 447;
			this.condition_statement();
			this.state = 449;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Then) {
				{
				this.state = 448;
				this.match(NyarParser.Then);
				}
			}

			this.state = 451;
			this.expr_or_block();
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
	public try_statement(): Try_statementContext {
		let _localctx: Try_statementContext = new Try_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 62, NyarParser.RULE_try_statement);
		try {
			this.state = 463;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 50, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 453;
				this.match(NyarParser.Try);
				this.state = 454;
				this.block_statement();
				this.state = 455;
				this.finalProduction();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 457;
				this.match(NyarParser.Try);
				this.state = 458;
				this.block_statement();
				{
				this.state = 459;
				this.catchProduction();
				this.state = 461;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 49, this._ctx) ) {
				case 1:
					{
					this.state = 460;
					this.finalProduction();
					}
					break;
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
		this.enterRule(_localctx, 64, NyarParser.RULE_catchProduction);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 465;
			this.match(NyarParser.Catch);
			this.state = 467;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.LS) {
				{
				this.state = 466;
				this.match(NyarParser.LS);
				}
			}

			this.state = 469;
			this.symbol();
			this.state = 471;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.RS) {
				{
				this.state = 470;
				this.match(NyarParser.RS);
				}
			}

			this.state = 473;
			this.block_statement();
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
		this.enterRule(_localctx, 66, NyarParser.RULE_finalProduction);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 475;
			this.match(NyarParser.Final);
			this.state = 476;
			this.block_statement();
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
	public loop_statement(): Loop_statementContext {
		let _localctx: Loop_statementContext = new Loop_statementContext(this._ctx, this.state);
		this.enterRule(_localctx, 68, NyarParser.RULE_loop_statement);
		try {
			this.state = 501;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 53, this._ctx) ) {
			case 1:
				_localctx = new ForLoopContext(_localctx);
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 478;
				this.match(NyarParser.For);
				this.state = 479;
				this.match(NyarParser.LS);
				{
				this.state = 480;
				(_localctx as ForLoopContext)._initial = this.expression(0);
				this.state = 481;
				this.match(NyarParser.COMMA);
				this.state = 482;
				(_localctx as ForLoopContext)._condition = this.expression(0);
				this.state = 483;
				this.match(NyarParser.COMMA);
				this.state = 484;
				(_localctx as ForLoopContext)._increment = this.expression(0);
				}
				this.state = 486;
				this.match(NyarParser.RS);
				this.state = 487;
				this.expr_or_block();
				}
				break;

			case 2:
				_localctx = new ForInLoopContext(_localctx);
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 489;
				this.match(NyarParser.For);
				this.state = 490;
				this.match(NyarParser.Identifier);
				this.state = 491;
				this.match(NyarParser.In);
				this.state = 492;
				this.expression(0);
				this.state = 493;
				this.expr_or_block();
				}
				break;

			case 3:
				_localctx = new WhileLoopContext(_localctx);
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 495;
				this.match(NyarParser.While);
				this.state = 496;
				this.condition_statement();
				this.state = 497;
				this.expr_or_block();
				}
				break;

			case 4:
				_localctx = new DoLoopContext(_localctx);
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 499;
				this.match(NyarParser.Do);
				this.state = 500;
				this.expr_or_block();
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
	public dictLiteral(): DictLiteralContext {
		let _localctx: DictLiteralContext = new DictLiteralContext(this._ctx, this.state);
		this.enterRule(_localctx, 70, NyarParser.RULE_dictLiteral);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 503;
			this.match(NyarParser.LL);
			this.state = 512;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (((((_la - 41)) & ~0x1F) === 0 && ((1 << (_la - 41)) & ((1 << (NyarParser.STRING - 41)) | (1 << (NyarParser.Identifier - 41)) | (1 << (NyarParser.NUMBER - 41)))) !== 0)) {
				{
				this.state = 504;
				this.keyvalue();
				this.state = 509;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 54, this._ctx);
				while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
					if (_alt === 1) {
						{
						{
						this.state = 505;
						this.match(NyarParser.COMMA);
						this.state = 506;
						this.keyvalue();
						}
						}
					}
					this.state = 511;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 54, this._ctx);
				}
				}
			}

			this.state = 515;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.COMMA) {
				{
				this.state = 514;
				this.match(NyarParser.COMMA);
				}
			}

			this.state = 517;
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
		this.enterRule(_localctx, 72, NyarParser.RULE_keyvalue);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 519;
			_localctx._key = this.key_valid();
			this.state = 520;
			this.match(NyarParser.Colon);
			this.state = 521;
			_localctx._value = this.element();
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
	public key_valid(): Key_validContext {
		let _localctx: Key_validContext = new Key_validContext(this._ctx, this.state);
		this.enterRule(_localctx, 74, NyarParser.RULE_key_valid);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 526;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.NUMBER:
				{
				this.state = 523;
				this.match(NyarParser.NUMBER);
				}
				break;
			case NyarParser.STRING:
				{
				this.state = 524;
				this.match(NyarParser.STRING);
				}
				break;
			case NyarParser.Identifier:
				{
				this.state = 525;
				this.symbol();
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
	public listLiteral(): ListLiteralContext {
		let _localctx: ListLiteralContext = new ListLiteralContext(this._ctx, this.state);
		this.enterRule(_localctx, 76, NyarParser.RULE_listLiteral);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 528;
			this.match(NyarParser.LM);
			this.state = 539;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (((((_la - 25)) & ~0x1F) === 0 && ((1 << (_la - 25)) & ((1 << (NyarParser.Type - 25)) | (1 << (NyarParser.STRING - 25)) | (1 << (NyarParser.Identifier - 25)) | (1 << (NyarParser.NUMBER - 25)) | (1 << (NyarParser.LS - 25)) | (1 << (NyarParser.LM - 25)) | (1 << (NyarParser.LL - 25)))) !== 0) || ((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (NyarParser.Increase - 68)) | (1 << (NyarParser.Plus - 68)) | (1 << (NyarParser.Minus - 68)))) !== 0) || ((((_la - 107)) & ~0x1F) === 0 && ((1 << (_la - 107)) & ((1 << (NyarParser.BitNot - 107)) | (1 << (NyarParser.LogicNot - 107)) | (1 << (NyarParser.Reciprocal - 107)))) !== 0)) {
				{
				this.state = 529;
				this.element();
				this.state = 536;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 59, this._ctx);
				while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
					if (_alt === 1) {
						{
						{
						this.state = 531;
						this._errHandler.sync(this);
						_la = this._input.LA(1);
						if (_la === NyarParser.COMMA) {
							{
							this.state = 530;
							this.match(NyarParser.COMMA);
							}
						}

						this.state = 533;
						this.element();
						}
						}
					}
					this.state = 538;
					this._errHandler.sync(this);
					_alt = this.interpreter.adaptivePredict(this._input, 59, this._ctx);
				}
				}
			}

			this.state = 542;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.COMMA) {
				{
				this.state = 541;
				this.match(NyarParser.COMMA);
				}
			}

			this.state = 544;
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
		this.enterRule(_localctx, 78, NyarParser.RULE_element);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 549;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 62, this._ctx) ) {
			case 1:
				{
				this.state = 546;
				this.expression(0);
				}
				break;

			case 2:
				{
				this.state = 547;
				this.dictLiteral();
				}
				break;

			case 3:
				{
				this.state = 548;
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
	public indexLiteral(): IndexLiteralContext {
		let _localctx: IndexLiteralContext = new IndexLiteralContext(this._ctx, this.state);
		this.enterRule(_localctx, 80, NyarParser.RULE_indexLiteral);
		let _la: number;
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 551;
			this.match(NyarParser.LM);
			this.state = 552;
			this.index_valid();
			this.state = 557;
			this._errHandler.sync(this);
			_alt = 1 + 1;
			do {
				switch (_alt) {
				case 1 + 1:
					{
					{
					this.state = 554;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
					if (_la === NyarParser.COMMA) {
						{
						this.state = 553;
						this.match(NyarParser.COMMA);
						}
					}

					this.state = 556;
					this.index_valid();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 559;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 64, this._ctx);
			} while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER);
			this.state = 561;
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
	public index_valid(): Index_validContext {
		let _localctx: Index_validContext = new Index_validContext(this._ctx, this.state);
		this.enterRule(_localctx, 82, NyarParser.RULE_index_valid);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 565;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case NyarParser.Identifier:
				{
				this.state = 563;
				this.symbol();
				}
				break;
			case NyarParser.Integer:
				{
				this.state = 564;
				this.match(NyarParser.Integer);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this.state = 568;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Colon) {
				{
				this.state = 567;
				this.match(NyarParser.Colon);
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
	public signedInteger(): SignedIntegerContext {
		let _localctx: SignedIntegerContext = new SignedIntegerContext(this._ctx, this.state);
		this.enterRule(_localctx, 84, NyarParser.RULE_signedInteger);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 571;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === NyarParser.Plus || _la === NyarParser.Minus) {
				{
				this.state = 570;
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

			this.state = 573;
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
		case 12:
			return this.expression_sempred(_localctx as ExpressionContext, predIndex);
		}
		return true;
	}
	private expression_sempred(_localctx: ExpressionContext, predIndex: number): boolean {
		switch (predIndex) {
		case 0:
			return this.precpred(this._ctx, 17);

		case 1:
			return this.precpred(this._ctx, 16);

		case 2:
			return this.precpred(this._ctx, 15);

		case 3:
			return this.precpred(this._ctx, 14);

		case 4:
			return this.precpred(this._ctx, 13);

		case 5:
			return this.precpred(this._ctx, 12);

		case 6:
			return this.precpred(this._ctx, 11);

		case 7:
			return this.precpred(this._ctx, 10);

		case 8:
			return this.precpred(this._ctx, 18);

		case 9:
			return this.precpred(this._ctx, 6);
		}
		return true;
	}

	private static readonly _serializedATNSegments: number = 2;
	private static readonly _serializedATNSegment0: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03\x90\u0242\x04" +
		"\x02\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04" +
		"\x07\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r" +
		"\x04\x0E\t\x0E\x04\x0F\t\x0F\x04\x10\t\x10\x04\x11\t\x11\x04\x12\t\x12" +
		"\x04\x13\t\x13\x04\x14\t\x14\x04\x15\t\x15\x04\x16\t\x16\x04\x17\t\x17" +
		"\x04\x18\t\x18\x04\x19\t\x19\x04\x1A\t\x1A\x04\x1B\t\x1B\x04\x1C\t\x1C" +
		"\x04\x1D\t\x1D\x04\x1E\t\x1E\x04\x1F\t\x1F\x04 \t \x04!\t!\x04\"\t\"\x04" +
		"#\t#\x04$\t$\x04%\t%\x04&\t&\x04\'\t\'\x04(\t(\x04)\t)\x04*\t*\x04+\t" +
		"+\x04,\t,\x03\x02\x07\x02Z\n\x02\f\x02\x0E\x02]\v\x02\x03\x02\x03\x02" +
		"\x03\x03\x03\x03\x03\x03\x05\x03d\n\x03\x03\x03\x03\x03\x05\x03h\n\x03" +
		"\x03\x03\x03\x03\x05\x03l\n\x03\x03\x03\x03\x03\x05\x03p\n\x03\x03\x03" +
		"\x03\x03\x05\x03t\n\x03\x03\x03\x03\x03\x05\x03x\n\x03\x03\x03\x03\x03" +
		"\x05\x03|\n\x03\x03\x03\x03\x03\x05\x03\x80\n\x03\x05\x03\x82\n\x03\x03" +
		"\x04\x03\x04\x06\x04\x86\n\x04\r\x04\x0E\x04\x87\x03\x04\x03\x04\x03\x04" +
		"\x03\x04\x06\x04\x8E\n\x04\r\x04\x0E\x04\x8F\x03\x04\x03\x04\x05\x04\x94" +
		"\n\x04\x03\x05\x03\x05\x05\x05\x98\n\x05\x03\x06\x03\x06\x03\x07\x03\x07" +
		"\x03\b\x03\b\x03\b\x07\b\xA1\n\b\f\b\x0E\b\xA4\v\b\x03\t\x03\t\x03\t\x03" +
		"\t\x07\t\xAA\n\t\f\t\x0E\t\xAD\v\t\x03\n\x03\n\x03\n\x07\n\xB2\n\n\f\n" +
		"\x0E\n\xB5\v\n\x03\v\x03\v\x03\v\x03\v\x03\v\x03\v\x05\v\xBD\n\v\x03\f" +
		"\x03\f\x03\f\x05\f\xC2\n\f\x03\f\x03\f\x03\r\x03\r\x03\r\x07\r\xC9\n\r" +
		"\f\r\x0E\r\xCC\v\r\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03" +
		"\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03" +
		"\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x05\x0E\xE4\n\x0E" +
		"\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E" +
		"\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E" +
		"\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E" +
		"\x03\x0E\x07\x0E\u0102\n\x0E\f\x0E\x0E\x0E\u0105\v\x0E\x03\x0F\x03\x0F" +
		"\x03\x10\x03\x10\x03\x10\x03\x10\x03\x11\x03\x11\x03\x11\x06\x11\u0110" +
		"\n\x11\r\x11\x0E\x11\u0111\x03\x11\x03\x11\x05\x11\u0116\n\x11\x03\x12" +
		"\x03\x12\x03\x12\x03\x12\x06\x12\u011C\n\x12\r\x12\x0E\x12\u011D\x03\x12" +
		"\x03\x12\x03\x12\x03\x12\x03\x12\x03\x12\x03\x12\x03\x12\x07\x12\u0128" +
		"\n\x12\f\x12\x0E\x12\u012B\v\x12\x05\x12\u012D\n\x12\x03\x12\x05\x12\u0130" +
		"\n\x12\x03\x12\x03\x12\x03\x12\x03\x12\x03\x12\x05\x12\u0137\n\x12\x03" +
		"\x13\x03\x13\x05\x13\u013B\n\x13\x03\x14\x03\x14\x03\x14\x05\x14\u0140" +
		"\n\x14\x03\x14\x03\x14\x03\x14\x03\x14\x03\x14\x03\x14\x03\x14\x03\x14" +
		"\x05\x14\u014A\n\x14\x03\x14\x03\x14\x03\x14\x03\x14\x03\x14\x05\x14\u0151" +
		"\n\x14\x03\x14\x03\x14\x03\x14\x03\x14\x05\x14\u0157\n\x14\x03\x15\x03" +
		"\x15\x03\x15\x03\x15\x07\x15\u015D\n\x15\f\x15\x0E\x15\u0160\v\x15\x03" +
		"\x15\x03\x15\x03\x16\x03\x16\x03\x16\x05\x16\u0167\n\x16\x03\x16\x03\x16" +
		"\x03\x16\x03\x16\x03\x16\x05\x16\u016E\n\x16\x03\x16\x03\x16\x05\x16\u0172" +
		"\n\x16\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17" +
		"\x03\x17\x03\x17\x06\x17\u017E\n\x17\r\x17\x0E\x17\u017F\x05\x17\u0182" +
		"\n\x17\x03\x17\x05\x17\u0185\n\x17\x03\x18\x03\x18\x03\x18\x03\x19\x03" +
		"\x19\x03\x19\x03\x19\x03\x1A\x03\x1A\x03\x1A\x03\x1A\x03\x1B\x03\x1B\x03" +
		"\x1B\x03\x1B\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1D\x03\x1D\x03\x1D\x03" +
		"\x1D\x05\x1D\u019E\n\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x07\x1D\u01A4" +
		"\n\x1D\f\x1D\x0E\x1D\u01A7\v\x1D\x03\x1D\x05\x1D\u01AA\n\x1D\x03\x1D\x03" +
		"\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x05\x1D\u01B4\n\x1D" +
		"\x03\x1E\x05\x1E\u01B7\n\x1E\x03\x1E\x03\x1E\x05\x1E\u01BB\n\x1E\x03\x1F" +
		"\x03\x1F\x03\x1F\x03 \x03 \x03 \x03 \x05 \u01C4\n \x03 \x03 \x03!\x03" +
		"!\x03!\x03!\x03!\x03!\x03!\x03!\x05!\u01D0\n!\x05!\u01D2\n!\x03\"\x03" +
		"\"\x05\"\u01D6\n\"\x03\"\x03\"\x05\"\u01DA\n\"\x03\"\x03\"\x03#\x03#\x03" +
		"#\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03" +
		"$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x05$\u01F8\n$\x03%\x03" +
		"%\x03%\x03%\x07%\u01FE\n%\f%\x0E%\u0201\v%\x05%\u0203\n%\x03%\x05%\u0206" +
		"\n%\x03%\x03%\x03&\x03&\x03&\x03&\x03\'\x03\'\x03\'\x05\'\u0211\n\'\x03" +
		"(\x03(\x03(\x05(\u0216\n(\x03(\x07(\u0219\n(\f(\x0E(\u021C\v(\x05(\u021E" +
		"\n(\x03(\x05(\u0221\n(\x03(\x03(\x03)\x03)\x03)\x05)\u0228\n)\x03*\x03" +
		"*\x03*\x05*\u022D\n*\x03*\x06*\u0230\n*\r*\x0E*\u0231\x03*\x03*\x03+\x03" +
		"+\x05+\u0238\n+\x03+\x05+\u023B\n+\x03,\x05,\u023E\n,\x03,\x03,\x03,\x03" +
		"\u0231\x02\x03\x1A-\x02\x02\x04\x02\x06\x02\b\x02\n\x02\f\x02\x0E\x02" +
		"\x10\x02\x12\x02\x14\x02\x16\x02\x18\x02\x1A\x02\x1C\x02\x1E\x02 \x02" +
		"\"\x02$\x02&\x02(\x02*\x02,\x02.\x020\x022\x024\x026\x028\x02:\x02<\x02" +
		">\x02@\x02B\x02D\x02F\x02H\x02J\x02L\x02N\x02P\x02R\x02T\x02V\x02\x02" +
		"\r\x07\x02FFHHMMmn\x83\x83\x07\x02GGKKccss\x7F\x7F\x04\x02??CC\b\x02@" +
		"ADE_aggiill\x03\x02]^\x04\x02PSWW\x04\x02HHMM\x05\x02??CCdd\x03\x02\x19" +
		"\x1A\x04\x02PP]]\x04\x02\x13\x13ww\x02\u027F\x02[\x03\x02\x02\x02\x04" +
		"\x81\x03\x02\x02\x02\x06\x93\x03\x02\x02\x02\b\x97\x03\x02\x02\x02\n\x99" +
		"\x03\x02\x02\x02\f\x9B\x03\x02\x02\x02\x0E\x9D\x03\x02\x02\x02\x10\xA5" +
		"\x03\x02\x02\x02\x12\xAE\x03\x02\x02\x02\x14\xBC\x03\x02\x02\x02\x16\xBE" +
		"\x03\x02\x02\x02\x18\xC5\x03\x02\x02\x02\x1A\xE3\x03\x02\x02\x02\x1C\u0106" +
		"\x03\x02\x02\x02\x1E\u0108\x03\x02\x02\x02 \u0115\x03\x02\x02\x02\"\u0136" +
		"\x03\x02\x02\x02$\u013A\x03\x02\x02\x02&\u0156\x03\x02\x02\x02(\u0158" +
		"\x03\x02\x02\x02*\u0171\x03\x02\x02\x02,\u0184\x03\x02\x02\x02.\u0186" +
		"\x03\x02\x02\x020\u0189\x03\x02\x02\x022\u018D\x03\x02\x02\x024\u0191" +
		"\x03\x02\x02\x026\u0195\x03\x02\x02\x028\u01B3\x03\x02\x02\x02:\u01B6" +
		"\x03\x02\x02\x02<\u01BC\x03\x02\x02\x02>\u01BF\x03\x02\x02\x02@\u01D1" +
		"\x03\x02\x02\x02B\u01D3\x03\x02\x02\x02D\u01DD\x03\x02\x02\x02F\u01F7" +
		"\x03\x02\x02\x02H\u01F9\x03\x02\x02\x02J\u0209\x03\x02\x02\x02L\u0210" +
		"\x03\x02\x02\x02N\u0212\x03\x02\x02\x02P\u0227\x03\x02\x02\x02R\u0229" +
		"\x03\x02\x02\x02T\u0237\x03\x02\x02\x02V\u023D\x03\x02\x02\x02XZ\x05\x04" +
		"\x03\x02YX\x03\x02\x02\x02Z]\x03\x02\x02\x02[Y\x03\x02\x02\x02[\\\x03" +
		"\x02\x02\x02\\^\x03\x02\x02\x02][\x03\x02\x02\x02^_\x07\x02\x02\x03_\x03" +
		"\x03\x02\x02\x02`\x82\x05\n\x06\x02ac\x05\x06\x04\x02bd\x05\f\x07\x02" +
		"cb\x03\x02\x02\x02cd\x03\x02\x02\x02d\x82\x03\x02\x02\x02eg\x05\x12\n" +
		"\x02fh\x05\f\x07\x02gf\x03\x02\x02\x02gh\x03\x02\x02\x02h\x82\x03\x02" +
		"\x02\x02ik\x05\x1E\x10\x02jl\x05\f\x07\x02kj\x03\x02\x02\x02kl\x03\x02" +
		"\x02\x02l\x82\x03\x02\x02\x02mo\x058\x1D\x02np\x05\f\x07\x02on\x03\x02" +
		"\x02\x02op\x03\x02\x02\x02p\x82\x03\x02\x02\x02qs\x05@!\x02rt\x05\f\x07" +
		"\x02sr\x03\x02\x02\x02st\x03\x02\x02\x02t\x82\x03\x02\x02\x02uw\x05&\x14" +
		"\x02vx\x05\f\x07\x02wv\x03\x02\x02\x02wx\x03\x02\x02\x02x\x82\x03\x02" +
		"\x02\x02y{\x05*\x16\x02z|\x05\f\x07\x02{z\x03\x02\x02\x02{|\x03\x02\x02" +
		"\x02|\x82\x03\x02\x02\x02}\x7F\x05F$\x02~\x80\x05\f\x07\x02\x7F~\x03\x02" +
		"\x02\x02\x7F\x80\x03\x02\x02\x02\x80\x82\x03\x02\x02\x02\x81`\x03\x02" +
		"\x02\x02\x81a\x03\x02\x02\x02\x81e\x03\x02\x02\x02\x81i\x03\x02\x02\x02" +
		"\x81m\x03\x02\x02\x02\x81q\x03\x02\x02\x02\x81u\x03\x02\x02\x02\x81y\x03" +
		"\x02\x02\x02\x81}\x03\x02\x02\x02\x82\x05\x03\x02\x02\x02\x83\x85\x07" +
		"4\x02\x02\x84\x86\x05\x04\x03\x02\x85\x84\x03\x02\x02\x02\x86\x87\x03" +
		"\x02\x02\x02\x87\x85\x03\x02\x02\x02\x87\x88\x03\x02\x02\x02\x88\x89\x03" +
		"\x02\x02\x02\x89\x8A\x075\x02\x02\x8A\x94\x03\x02\x02\x02\x8B\x8D\x07" +
		"w\x02\x02\x8C\x8E\x05\x04\x03\x02\x8D\x8C\x03\x02\x02\x02\x8E\x8F\x03" +
		"\x02\x02\x02\x8F\x8D\x03\x02\x02\x02\x8F\x90\x03\x02\x02\x02\x90\x91\x03" +
		"\x02\x02\x02\x91\x92\x07\f\x02\x02\x92\x94\x03\x02\x02\x02\x93\x83\x03" +
		"\x02\x02\x02\x93\x8B\x03\x02\x02\x02\x94\x07\x03\x02\x02\x02\x95\x98\x05" +
		"\x06\x04\x02\x96\x98\x05\x1A\x0E\x02\x97\x95\x03\x02\x02\x02\x97\x96\x03" +
		"\x02\x02\x02\x98\t\x03\x02\x02\x02\x99\x9A\x05\f\x07\x02\x9A\v\x03\x02" +
		"\x02\x02\x9B\x9C\x07x\x02\x02\x9C\r\x03\x02\x02\x02\x9D\xA2\x07,\x02\x02" +
		"\x9E\x9F\x07\x80\x02\x02\x9F\xA1\x07,\x02\x02\xA0\x9E\x03\x02\x02\x02" +
		"\xA1\xA4\x03\x02\x02\x02\xA2\xA0\x03\x02\x02\x02\xA2\xA3\x03\x02\x02\x02" +
		"\xA3\x0F\x03\x02\x02\x02\xA4\xA2\x03\x02\x02\x02\xA5\xA6\x07\x8D\x02\x02" +
		"\xA6\xAB\x07,\x02\x02\xA7\xA8\x07\x80\x02\x02\xA8\xAA\x07,\x02\x02\xA9" +
		"\xA7\x03\x02\x02\x02\xAA\xAD\x03\x02\x02\x02\xAB\xA9\x03\x02\x02\x02\xAB" +
		"\xAC\x03\x02\x02\x02\xAC\x11\x03\x02\x02\x02\xAD\xAB\x03\x02\x02\x02\xAE" +
		"\xB3\x05\x1A\x0E\x02\xAF\xB0\x07\x82\x02\x02\xB0\xB2\x05\x1A\x0E\x02\xB1" +
		"\xAF\x03\x02\x02\x02\xB2\xB5\x03\x02\x02\x02\xB3\xB1\x03\x02\x02\x02\xB3" +
		"\xB4\x03\x02\x02\x02\xB4\x13\x03\x02\x02\x02\xB5\xB3\x03\x02\x02\x02\xB6" +
		"\xB7\x07,\x02\x02\xB7\xB8\x07u\x02\x02\xB8\xBD\x05\x1A\x0E\x02\xB9\xBA" +
		"\x07\x1B\x02\x02\xBA\xBB\x07,\x02\x02\xBB\xBD\x05\x1A\x0E\x02\xBC\xB6" +
		"\x03\x02\x02\x02\xBC\xB9\x03\x02\x02\x02\xBD\x15\x03\x02\x02\x02\xBE\xBF" +
		"\x05\x0E\b\x02\xBF\xC1\x070\x02\x02\xC0\xC2\x05\x18\r\x02\xC1\xC0\x03" +
		"\x02\x02\x02\xC1\xC2\x03\x02\x02\x02\xC2\xC3\x03\x02\x02\x02\xC3\xC4\x07" +
		"1\x02\x02\xC4\x17\x03\x02\x02\x02\xC5\xCA\x05\x1A\x0E\x02\xC6\xC7\x07" +
		"\x82\x02\x02\xC7\xC9\x05\x1A\x0E\x02\xC8\xC6\x03\x02\x02\x02\xC9\xCC\x03" +
		"\x02\x02\x02\xCA\xC8\x03\x02\x02\x02\xCA\xCB\x03\x02\x02\x02\xCB\x19\x03" +
		"\x02\x02\x02\xCC\xCA\x03\x02\x02\x02\xCD\xCE\b\x0E\x01\x02\xCE\xE4\x05" +
		"\x14\v\x02\xCF\xE4\x05\x16\f\x02\xD0\xD1\t\x02\x02\x02\xD1\xE4\x05\x1A" +
		"\x0E\x15\xD2\xD3\x05\x16\f\x02\xD3\xD4\x07v\x02\x02\xD4\xD5\x05 \x11\x02" +
		"\xD5\xE4\x03\x02\x02\x02\xD6\xD7\x05\"\x12\x02\xD7\xD8\t\x03\x02\x02\xD8" +
		"\xD9\x05 \x11\x02\xD9\xE4\x03\x02\x02\x02\xDA\xE4\x05N(\x02\xDB\xE4\x05" +
		"H%\x02\xDC\xE4\x07+\x02\x02\xDD\xE4\x07-\x02\x02\xDE\xE4\x05\x0E\b\x02" +
		"\xDF\xE0\x070\x02\x02\xE0\xE1\x05\x1A\x0E\x02\xE1\xE2\x071\x02\x02\xE2" +
		"\xE4\x03\x02\x02\x02\xE3\xCD\x03\x02\x02\x02\xE3\xCF\x03\x02\x02\x02\xE3" +
		"\xD0\x03\x02\x02\x02\xE3\xD2\x03\x02\x02\x02\xE3\xD6\x03\x02\x02\x02\xE3" +
		"\xDA\x03\x02\x02\x02\xE3\xDB\x03\x02\x02\x02\xE3\xDC\x03\x02\x02\x02\xE3" +
		"\xDD\x03\x02\x02\x02\xE3\xDE\x03\x02\x02\x02\xE3\xDF\x03\x02\x02\x02\xE4" +
		"\u0103\x03\x02\x02\x02\xE5\xE6\f\x13\x02\x02\xE6\xE7\x07\x80\x02\x02\xE7" +
		"\u0102\x05\x1A\x0E\x14\xE8\xE9\f\x12\x02\x02\xE9\xEA\t\x04\x02\x02\xEA" +
		"\u0102\x05\x1A\x0E\x13\xEB\xEC\f\x11\x02\x02\xEC\xED\t\x05\x02\x02\xED" +
		"\u0102\x05\x1A\x0E\x12\xEE\xEF\f\x10\x02\x02\xEF\xF0\t\x05\x02\x02\xF0" +
		"\u0102\x05\x1A\x0E\x11\xF1\xF2\f\x0F\x02\x02\xF2\xF3\t\x06\x02\x02\xF3" +
		"\u0102\x05\x1A\x0E\x0F\xF4\xF5\f\x0E\x02\x02\xF5\xF6\t\x07\x02\x02\xF6" +
		"\u0102\x05\x1A\x0E\x0F\xF7\xF8\f\r\x02\x02\xF8\xF9\t\b\x02\x02\xF9\u0102" +
		"\x05\x1A\x0E\x0E\xFA\xFB\f\f\x02\x02\xFB\xFC\t\t\x02\x02\xFC\u0102\x05" +
		"\x1A\x0E\r\xFD\xFE\f\x14\x02\x02\xFE\u0102\x05\x1C\x0F\x02\xFF\u0100\f" +
		"\b\x02\x02\u0100\u0102\x05R*\x02\u0101\xE5\x03\x02\x02\x02\u0101\xE8\x03" +
		"\x02\x02\x02\u0101\xEB\x03\x02\x02\x02\u0101\xEE\x03\x02\x02\x02\u0101" +
		"\xF1\x03\x02\x02\x02\u0101\xF4\x03\x02\x02\x02\u0101\xF7\x03\x02\x02\x02" +
		"\u0101\xFA\x03\x02\x02\x02\u0101\xFD\x03\x02\x02\x02\u0101\xFF\x03\x02" +
		"\x02\x02\u0102\u0105\x03\x02\x02\x02\u0103\u0101\x03\x02\x02\x02\u0103" +
		"\u0104\x03\x02\x02\x02\u0104\x1B\x03\x02\x02\x02\u0105\u0103\x03\x02\x02" +
		"\x02\u0106\u0107\x07F\x02\x02\u0107\x1D\x03\x02\x02\x02\u0108\u0109\t" +
		"\n\x02\x02\u0109\u010A\x05\"\x12\x02\u010A\u010B\x05 \x11\x02\u010B\x1F" +
		"\x03\x02\x02\x02\u010C\u0116\x05\x1A\x0E\x02\u010D\u010F\x074\x02\x02" +
		"\u010E\u0110\x05\x04\x03\x02\u010F\u010E\x03\x02\x02\x02\u0110\u0111\x03" +
		"\x02\x02\x02\u0111\u010F\x03\x02\x02\x02\u0111\u0112\x03\x02\x02\x02\u0112" +
		"\u0113\x03\x02\x02\x02\u0113\u0114\x075\x02\x02\u0114\u0116\x03\x02\x02" +
		"\x02\u0115\u010C\x03\x02\x02\x02\u0115\u010D\x03\x02\x02\x02\u0116!\x03" +
		"\x02\x02\x02\u0117\u0137\x07,\x02\x02\u0118\u011B\x07,\x02\x02\u0119\u011A" +
		"\x07\x80\x02\x02\u011A\u011C\x07,\x02\x02\u011B\u0119\x03\x02\x02\x02" +
		"\u011C\u011D\x03\x02\x02\x02\u011D\u011B\x03\x02\x02\x02\u011D\u011E\x03" +
		"\x02\x02\x02\u011E\u0137\x03\x02\x02\x02\u011F\u0120\x07,\x02\x02\u0120" +
		"\u0121\x070\x02\x02\u0121\u0122\x07,\x02\x02\u0122\u0137\x071\x02\x02" +
		"\u0123\u012C\x070\x02\x02\u0124\u0129\x05$\x13\x02\u0125\u0126\x07\x82" +
		"\x02\x02\u0126\u0128\x05$\x13\x02\u0127\u0125\x03\x02\x02\x02\u0128\u012B" +
		"\x03\x02\x02\x02\u0129\u0127\x03\x02\x02\x02\u0129\u012A\x03\x02\x02\x02" +
		"\u012A\u012D\x03\x02\x02\x02\u012B\u0129\x03\x02\x02\x02\u012C\u0124\x03" +
		"\x02\x02\x02\u012C\u012D\x03\x02\x02\x02\u012D\u012F\x03\x02\x02\x02\u012E" +
		"\u0130\x07\x82\x02\x02\u012F\u012E\x03\x02\x02\x02\u012F\u0130\x03\x02" +
		"\x02\x02\u0130\u0131\x03\x02\x02\x02\u0131\u0137\x071\x02\x02\u0132\u0133" +
		"\x07,\x02\x02\u0133\u0134\x072\x02\x02\u0134\u0135\x07/\x02\x02\u0135" +
		"\u0137\x073\x02\x02\u0136\u0117\x03\x02\x02\x02\u0136\u0118\x03\x02\x02" +
		"\x02\u0136\u011F\x03\x02\x02\x02\u0136\u0123\x03\x02\x02\x02\u0136\u0132" +
		"\x03\x02\x02\x02\u0137#\x03\x02\x02\x02\u0138\u013B\x07f\x02\x02\u0139" +
		"\u013B\x05\x0E\b\x02\u013A\u0138\x03\x02\x02\x02\u013A\u0139\x03\x02\x02" +
		"\x02\u013B%\x03\x02\x02\x02\u013C\u013D\x07\x07\x02\x02\u013D\u013F\x05" +
		"\x0E\b\x02\u013E\u0140\t\v\x02\x02\u013F\u013E\x03\x02\x02\x02\u013F\u0140" +
		"\x03\x02\x02\x02\u0140\u0157\x03\x02\x02\x02\u0141\u0142\x07\x07\x02\x02" +
		"\u0142\u0143\x05\x0E\b\x02\u0143\u0144\x07\t\x02\x02\u0144\u0145\x07," +
		"\x02\x02\u0145\u0157\x03\x02\x02\x02\u0146\u0147\x07\x07\x02\x02\u0147" +
		"\u0149\x05\x0E\b\x02\u0148\u014A\x07\n\x02\x02\u0149\u0148\x03\x02\x02" +
		"\x02\u0149\u014A\x03\x02\x02\x02\u014A\u014B\x03\x02\x02\x02\u014B\u014C" +
		"\x07,\x02\x02\u014C\u0157\x03\x02\x02\x02\u014D\u014E\x07\x07\x02\x02" +
		"\u014E\u0150\x05\x0E\b\x02\u014F\u0151\x07\n\x02\x02\u0150\u014F\x03\x02" +
		"\x02\x02\u0150\u0151\x03\x02\x02\x02\u0151\u0152\x03\x02\x02\x02\u0152" +
		"\u0153\x05(\x15\x02\u0153\u0157\x03\x02\x02\x02\u0154\u0155\x07\x07\x02" +
		"\x02\u0155\u0157\x05H%\x02\u0156\u013C\x03\x02\x02\x02\u0156\u0141\x03" +
		"\x02\x02\x02\u0156\u0146\x03\x02\x02\x02\u0156\u014D\x03\x02\x02\x02\u0156" +
		"\u0154\x03\x02\x02\x02\u0157\'\x03\x02\x02\x02\u0158\u0159\x074\x02\x02" +
		"\u0159\u015E\x07,\x02\x02\u015A\u015B\x07\x82\x02\x02\u015B\u015D\x07" +
		",\x02\x02\u015C\u015A\x03\x02\x02\x02\u015D\u0160\x03\x02\x02\x02\u015E" +
		"\u015C\x03\x02\x02\x02\u015E\u015F\x03\x02\x02\x02\u015F\u0161\x03\x02" +
		"\x02\x02\u0160\u015E\x03\x02\x02\x02\u0161\u0162\x075\x02\x02\u0162)\x03" +
		"\x02\x02\x02\u0163\u0164\x07\x11\x02\x02\u0164\u0166\x07,\x02\x02\u0165" +
		"\u0167\x05.\x18\x02\u0166\u0165\x03\x02\x02\x02\u0166\u0167\x03\x02\x02" +
		"\x02\u0167\u0168\x03\x02\x02\x02\u0168\u0172\x050\x19\x02\u0169\u016A" +
		"\x07\x11\x02\x02\u016A\u016B\x07,\x02\x02\u016B\u016D\x05,\x17\x02\u016C" +
		"\u016E\x05.\x18\x02\u016D\u016C\x03\x02\x02\x02\u016D\u016E\x03\x02\x02" +
		"\x02\u016E\u016F\x03\x02\x02\x02\u016F\u0170\x050\x19\x02\u0170\u0172" +
		"\x03\x02\x02\x02\u0171\u0163\x03\x02\x02\x02\u0171\u0169\x03\x02\x02\x02" +
		"\u0172+\x03\x02\x02\x02\u0173\u0174\x07\x12\x02\x02\u0174\u0185\x05\x0E" +
		"\b\x02\u0175\u0176\x070\x02\x02\u0176\u0177\x05\x0E\b\x02\u0177\u0178" +
		"\x071\x02\x02\u0178\u0185\x03\x02\x02\x02\u0179\u0181\x070\x02\x02\u017A" +
		"\u017D\x05\x0E\b\x02\u017B\u017C\x07\x82\x02\x02\u017C\u017E\x05\x0E\b" +
		"\x02\u017D\u017B\x03\x02\x02\x02\u017E\u017F\x03\x02\x02\x02\u017F\u017D" +
		"\x03\x02\x02\x02\u017F\u0180\x03\x02\x02\x02\u0180\u0182\x03\x02\x02\x02" +
		"\u0181\u017A\x03\x02\x02\x02\u0181\u0182\x03\x02\x02\x02\u0182\u0183\x03" +
		"\x02\x02\x02\u0183\u0185\x071\x02\x02\u0184\u0173\x03\x02\x02\x02\u0184" +
		"\u0175\x03\x02\x02\x02\u0184\u0179\x03\x02\x02\x02\u0185-\x03\x02\x02" +
		"\x02\u0186\u0187\t\f\x02\x02\u0187\u0188\x05\x0E\b\x02\u0188/\x03\x02" +
		"\x02\x02\u0189\u018A\x074\x02\x02\u018A\u018B\x05\x1A\x0E\x02\u018B\u018C" +
		"\x075\x02\x02\u018C1\x03\x02\x02\x02\u018D\u018E\x07\x0E\x02\x02\u018E" +
		"\u018F\x05\x1A\x0E\x02\u018F\u0190\x05\f\x07\x02\u01903\x03\x02\x02\x02" +
		"\u0191\u0192\x07\r\x02\x02\u0192\u0193\x05\x1A\x0E\x02\u0193\u0194\x05" +
		"\f\x07\x02\u01945\x03\x02\x02\x02\u0195\u0196\x07\v\x02\x02\u0196\u0197" +
		"\x05\x1A\x0E\x02\u0197\u0198\x05\f\x07\x02\u01987\x03\x02\x02\x02\u0199" +
		"\u019A\x07\x1C\x02\x02\u019A\u019B\x05:\x1E\x02\u019B\u019D\x05\b\x05" +
		"\x02\u019C\u019E\x05<\x1F\x02\u019D\u019C\x03\x02\x02\x02\u019D\u019E" +
		"\x03\x02\x02\x02\u019E\u01B4\x03\x02\x02\x02\u019F\u01A0\x07\x1C\x02\x02" +
		"\u01A0\u01A1\x05:\x1E\x02\u01A1\u01A5\x05\b\x05\x02\u01A2\u01A4\x05> " +
		"\x02\u01A3\u01A2\x03\x02\x02\x02\u01A4\u01A7\x03\x02\x02\x02\u01A5\u01A3" +
		"\x03\x02\x02\x02\u01A5\u01A6\x03\x02\x02\x02\u01A6\u01A9\x03\x02\x02\x02" +
		"\u01A7\u01A5\x03\x02\x02\x02\u01A8\u01AA\x05<\x1F\x02\u01A9\u01A8\x03" +
		"\x02\x02\x02\u01A9\u01AA\x03\x02\x02\x02\u01AA\u01B4\x03\x02\x02\x02\u01AB" +
		"\u01AC\x07 \x02\x02\u01AC\u01AD\x05:\x1E\x02\u01AD\u01AE\x05\b\x05\x02" +
		"\u01AE\u01B4\x03\x02\x02\x02\u01AF\u01B0\x07\x1F\x02\x02\u01B0\u01B1\x05" +
		":\x1E\x02\u01B1\u01B2\x05\b\x05\x02\u01B2\u01B4\x03\x02\x02\x02\u01B3" +
		"\u0199\x03\x02\x02\x02\u01B3\u019F\x03\x02\x02\x02\u01B3\u01AB\x03\x02" +
		"\x02\x02\u01B3\u01AF\x03\x02\x02\x02\u01B49\x03\x02\x02\x02\u01B5\u01B7" +
		"\x070\x02\x02\u01B6\u01B5\x03\x02\x02\x02\u01B6\u01B7\x03\x02\x02\x02" +
		"\u01B7\u01B8\x03\x02\x02\x02\u01B8\u01BA\x05\x1A\x0E\x02\u01B9\u01BB\x07" +
		"1\x02\x02\u01BA\u01B9\x03\x02\x02\x02\u01BA\u01BB\x03\x02\x02\x02\u01BB" +
		";\x03\x02\x02\x02\u01BC\u01BD\x07\x1E\x02\x02\u01BD\u01BE\x05\b\x05\x02" +
		"\u01BE=\x03\x02\x02\x02\u01BF\u01C0\x07\x1E\x02\x02\u01C0\u01C1\x07\x1C" +
		"\x02\x02\u01C1\u01C3\x05:\x1E\x02\u01C2\u01C4\x07\x1D\x02\x02\u01C3\u01C2" +
		"\x03\x02\x02\x02\u01C3\u01C4\x03\x02\x02\x02\u01C4\u01C5\x03\x02\x02\x02" +
		"\u01C5\u01C6\x05\b\x05\x02\u01C6?\x03\x02\x02\x02\u01C7\u01C8\x07$\x02" +
		"\x02\u01C8\u01C9\x05\x06\x04\x02\u01C9\u01CA\x05D#\x02\u01CA\u01D2\x03" +
		"\x02\x02\x02\u01CB\u01CC\x07$\x02\x02\u01CC\u01CD\x05\x06\x04\x02\u01CD" +
		"\u01CF\x05B\"\x02\u01CE\u01D0\x05D#\x02\u01CF\u01CE\x03\x02\x02\x02\u01CF" +
		"\u01D0\x03\x02\x02\x02\u01D0\u01D2\x03\x02\x02\x02\u01D1\u01C7\x03\x02" +
		"\x02\x02\u01D1\u01CB\x03\x02\x02\x02\u01D2A\x03\x02\x02\x02\u01D3\u01D5" +
		"\x07%\x02\x02\u01D4\u01D6\x070\x02\x02\u01D5\u01D4\x03\x02\x02\x02\u01D5" +
		"\u01D6\x03\x02\x02\x02\u01D6\u01D7\x03\x02\x02\x02\u01D7\u01D9\x05\x0E" +
		"\b\x02\u01D8\u01DA\x071\x02\x02\u01D9\u01D8\x03\x02\x02\x02\u01D9\u01DA" +
		"\x03\x02\x02\x02\u01DA\u01DB\x03\x02\x02\x02\u01DB\u01DC\x05\x06\x04\x02" +
		"\u01DCC\x03\x02\x02\x02\u01DD\u01DE\x07\x19\x02\x02\u01DE\u01DF\x05\x06" +
		"\x04\x02\u01DFE\x03\x02\x02\x02\u01E0\u01E1\x07\"\x02\x02\u01E1\u01E2" +
		"\x070\x02\x02\u01E2\u01E3\x05\x1A\x0E\x02\u01E3\u01E4\x07\x82\x02\x02" +
		"\u01E4\u01E5\x05\x1A\x0E\x02\u01E5\u01E6\x07\x82\x02\x02\u01E6\u01E7\x05" +
		"\x1A\x0E\x02\u01E7\u01E8\x03\x02\x02\x02\u01E8\u01E9\x071\x02\x02\u01E9" +
		"\u01EA\x05\b\x05\x02\u01EA\u01F8\x03\x02\x02\x02\u01EB\u01EC\x07\"\x02" +
		"\x02\u01EC\u01ED\x07,\x02\x02\u01ED\u01EE\x07#\x02\x02\u01EE\u01EF\x05" +
		"\x1A\x0E\x02\u01EF\u01F0\x05\b\x05\x02\u01F0\u01F8\x03\x02\x02\x02\u01F1" +
		"\u01F2\x07&\x02\x02\u01F2\u01F3\x05:\x1E\x02\u01F3\u01F4\x05\b\x05\x02" +
		"\u01F4\u01F8\x03\x02\x02\x02\u01F5\u01F6\x07\'\x02\x02\u01F6\u01F8\x05" +
		"\b\x05\x02\u01F7\u01E0\x03\x02\x02\x02\u01F7\u01EB\x03\x02\x02\x02\u01F7" +
		"\u01F1\x03\x02\x02\x02\u01F7\u01F5\x03\x02\x02\x02\u01F8G\x03\x02\x02" +
		"\x02\u01F9\u0202\x074\x02\x02\u01FA\u01FF\x05J&\x02\u01FB\u01FC\x07\x82" +
		"\x02\x02\u01FC\u01FE\x05J&\x02\u01FD\u01FB\x03\x02\x02\x02\u01FE\u0201" +
		"\x03\x02\x02\x02\u01FF\u01FD\x03\x02\x02\x02\u01FF\u0200\x03\x02\x02\x02" +
		"\u0200\u0203\x03\x02\x02\x02\u0201\u01FF\x03\x02\x02\x02\u0202\u01FA\x03" +
		"\x02\x02\x02\u0202\u0203\x03\x02\x02\x02\u0203\u0205\x03\x02\x02\x02\u0204" +
		"\u0206\x07\x82\x02\x02\u0205\u0204\x03\x02\x02\x02\u0205\u0206\x03\x02" +
		"\x02\x02\u0206\u0207\x03\x02\x02\x02\u0207\u0208\x075\x02\x02\u0208I\x03" +
		"\x02\x02\x02\u0209\u020A\x05L\'\x02\u020A\u020B\x07w\x02\x02\u020B\u020C" +
		"\x05P)\x02\u020CK\x03\x02\x02\x02\u020D\u0211\x07-\x02\x02\u020E\u0211" +
		"\x07+\x02\x02\u020F\u0211\x05\x0E\b\x02\u0210\u020D\x03\x02\x02\x02\u0210" +
		"\u020E\x03\x02\x02\x02\u0210\u020F\x03\x02\x02\x02\u0211M\x03\x02\x02" +
		"\x02\u0212\u021D\x072\x02\x02\u0213\u021A\x05P)\x02\u0214\u0216\x07\x82" +
		"\x02\x02\u0215\u0214\x03\x02\x02\x02\u0215\u0216\x03\x02\x02\x02\u0216" +
		"\u0217\x03\x02\x02\x02\u0217\u0219\x05P)\x02\u0218\u0215\x03\x02\x02\x02" +
		"\u0219\u021C\x03\x02\x02\x02\u021A\u0218\x03\x02\x02\x02\u021A\u021B\x03" +
		"\x02\x02\x02\u021B\u021E\x03\x02\x02\x02\u021C\u021A\x03\x02\x02\x02\u021D" +
		"\u0213\x03\x02\x02\x02\u021D\u021E\x03\x02\x02\x02\u021E\u0220\x03\x02" +
		"\x02\x02\u021F\u0221";
	private static readonly _serializedATNSegment1: string =
		"\x07\x82\x02\x02\u0220\u021F\x03\x02\x02\x02\u0220\u0221\x03\x02\x02\x02" +
		"\u0221\u0222\x03\x02\x02\x02\u0222\u0223\x073\x02\x02\u0223O\x03\x02\x02" +
		"\x02\u0224\u0228\x05\x1A\x0E\x02\u0225\u0228\x05H%\x02\u0226\u0228\x05" +
		"N(\x02\u0227\u0224\x03\x02\x02\x02\u0227\u0225\x03\x02\x02\x02\u0227\u0226" +
		"\x03\x02\x02\x02\u0228Q\x03\x02\x02\x02\u0229\u022A\x072\x02\x02\u022A" +
		"\u022F\x05T+\x02\u022B\u022D\x07\x82\x02\x02\u022C\u022B\x03\x02\x02\x02" +
		"\u022C\u022D\x03\x02\x02\x02\u022D\u022E\x03\x02\x02\x02\u022E\u0230\x05" +
		"T+\x02\u022F\u022C\x03\x02\x02\x02\u0230\u0231\x03\x02\x02\x02\u0231\u0232" +
		"\x03\x02\x02\x02\u0231\u022F\x03\x02\x02\x02\u0232\u0233\x03\x02\x02\x02" +
		"\u0233\u0234\x073\x02\x02\u0234S\x03\x02\x02\x02\u0235\u0238\x05\x0E\b" +
		"\x02\u0236\u0238\x07/\x02\x02\u0237\u0235\x03\x02\x02\x02\u0237\u0236" +
		"\x03\x02\x02\x02\u0238\u023A\x03\x02\x02\x02\u0239\u023B\x07w\x02\x02" +
		"\u023A\u0239\x03\x02\x02\x02\u023A\u023B\x03\x02\x02\x02\u023BU\x03\x02" +
		"\x02\x02\u023C\u023E\t\b\x02\x02\u023D\u023C\x03\x02\x02\x02\u023D\u023E" +
		"\x03\x02\x02\x02\u023E\u023F\x03\x02\x02\x02\u023F\u0240\x07/\x02\x02" +
		"\u0240W\x03\x02\x02\x02F[cgkosw{\x7F\x81\x87\x8F\x93\x97\xA2\xAB\xB3\xBC" +
		"\xC1\xCA\xE3\u0101\u0103\u0111\u0115\u011D\u0129\u012C\u012F\u0136\u013A" +
		"\u013F\u0149\u0150\u0156\u015E\u0166\u016D\u0171\u017F\u0181\u0184\u019D" +
		"\u01A5\u01A9\u01B3\u01B6\u01BA\u01C3\u01CF\u01D1\u01D5\u01D9\u01F7\u01FF" +
		"\u0202\u0205\u0210\u0215\u021A\u021D\u0220\u0227\u022C\u0231\u0237\u023A" +
		"\u023D";
	public static readonly _serializedATN: string = Utils.join(
		[
			NyarParser._serializedATNSegment0,
			NyarParser._serializedATNSegment1,
		],
		"",
	);
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
	public empty_statement(): Empty_statementContext | undefined {
		return this.tryGetRuleContext(0, Empty_statementContext);
	}
	public block_statement(): Block_statementContext | undefined {
		return this.tryGetRuleContext(0, Block_statementContext);
	}
	public eos(): EosContext | undefined {
		return this.tryGetRuleContext(0, EosContext);
	}
	public expression_statement(): Expression_statementContext | undefined {
		return this.tryGetRuleContext(0, Expression_statementContext);
	}
	public assign_statement(): Assign_statementContext | undefined {
		return this.tryGetRuleContext(0, Assign_statementContext);
	}
	public branch_statement(): Branch_statementContext | undefined {
		return this.tryGetRuleContext(0, Branch_statementContext);
	}
	public try_statement(): Try_statementContext | undefined {
		return this.tryGetRuleContext(0, Try_statementContext);
	}
	public module_statement(): Module_statementContext | undefined {
		return this.tryGetRuleContext(0, Module_statementContext);
	}
	public class_statement(): Class_statementContext | undefined {
		return this.tryGetRuleContext(0, Class_statementContext);
	}
	public loop_statement(): Loop_statementContext | undefined {
		return this.tryGetRuleContext(0, Loop_statementContext);
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


export class Block_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_block_statement; }
	public copyFrom(ctx: Block_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class BlockStatementContext extends Block_statementContext {
	public LL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LL, 0); }
	public RL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RL, 0); }
	public statement(): StatementContext[];
	public statement(i: number): StatementContext;
	public statement(i?: number): StatementContext | StatementContext[] {
		if (i === undefined) {
			return this.getRuleContexts(StatementContext);
		} else {
			return this.getRuleContext(i, StatementContext);
		}
	}
	public Colon(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Colon, 0); }
	public End(): TerminalNode | undefined { return this.tryGetToken(NyarParser.End, 0); }
	constructor(ctx: Block_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
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


export class Expr_or_blockContext extends ParserRuleContext {
	public block_statement(): Block_statementContext | undefined {
		return this.tryGetRuleContext(0, Block_statementContext);
	}
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_expr_or_block; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterExpr_or_block) {
			listener.enterExpr_or_block(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitExpr_or_block) {
			listener.exitExpr_or_block(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitExpr_or_block) {
			return visitor.visitExpr_or_block(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Empty_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_empty_statement; }
	public copyFrom(ctx: Empty_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class EmptyStatementContext extends Empty_statementContext {
	public eos(): EosContext {
		return this.getRuleContext(0, EosContext);
	}
	constructor(ctx: Empty_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
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


export class SymbolContext extends ParserRuleContext {
	public Identifier(): TerminalNode[];
	public Identifier(i: number): TerminalNode;
	public Identifier(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Identifier);
		} else {
			return this.getToken(NyarParser.Identifier, i);
		}
	}
	public DOT(): TerminalNode[];
	public DOT(i: number): TerminalNode;
	public DOT(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.DOT);
		} else {
			return this.getToken(NyarParser.DOT, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_symbol; }
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


export class GlobalContext extends ParserRuleContext {
	public Section(): TerminalNode { return this.getToken(NyarParser.Section, 0); }
	public Identifier(): TerminalNode[];
	public Identifier(i: number): TerminalNode;
	public Identifier(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Identifier);
		} else {
			return this.getToken(NyarParser.Identifier, i);
		}
	}
	public DOT(): TerminalNode[];
	public DOT(i: number): TerminalNode;
	public DOT(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.DOT);
		} else {
			return this.getToken(NyarParser.DOT, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_global; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterGlobal) {
			listener.enterGlobal(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitGlobal) {
			listener.exitGlobal(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitGlobal) {
			return visitor.visitGlobal(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Expression_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_expression_statement; }
	public copyFrom(ctx: Expression_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class ExpressionStatementContext extends Expression_statementContext {
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	constructor(ctx: Expression_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
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


export class Type_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_type_statement; }
	public copyFrom(ctx: Type_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class TypeAssignContext extends Type_statementContext {
	public _left: Token;
	public _right: ExpressionContext;
	public TypeAnnotation(): TerminalNode | undefined { return this.tryGetToken(NyarParser.TypeAnnotation, 0); }
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public Type(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Type, 0); }
	constructor(ctx: Type_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTypeAssign) {
			listener.enterTypeAssign(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTypeAssign) {
			listener.exitTypeAssign(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTypeAssign) {
			return visitor.visitTypeAssign(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Function_applyContext extends ParserRuleContext {
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	public function_params(): Function_paramsContext | undefined {
		return this.tryGetRuleContext(0, Function_paramsContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_function_apply; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterFunction_apply) {
			listener.enterFunction_apply(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitFunction_apply) {
			listener.exitFunction_apply(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitFunction_apply) {
			return visitor.visitFunction_apply(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Function_paramsContext extends ParserRuleContext {
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_function_params; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterFunction_params) {
			listener.enterFunction_params(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitFunction_params) {
			listener.exitFunction_params(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitFunction_params) {
			return visitor.visitFunction_params(this);
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
export class TypeStatementContext extends ExpressionContext {
	public type_statement(): Type_statementContext {
		return this.getRuleContext(0, Type_statementContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTypeStatement) {
			listener.enterTypeStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTypeStatement) {
			listener.exitTypeStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTypeStatement) {
			return visitor.visitTypeStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class FunctionApplyContext extends ExpressionContext {
	public function_apply(): Function_applyContext {
		return this.getRuleContext(0, Function_applyContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterFunctionApply) {
			listener.enterFunctionApply(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitFunctionApply) {
			listener.exitFunctionApply(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitFunctionApply) {
			return visitor.visitFunctionApply(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class PrefixExpressionContext extends ExpressionContext {
	public _op: Token;
	public _right: ExpressionContext;
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public Plus(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Plus, 0); }
	public Minus(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Minus, 0); }
	public BitNot(): TerminalNode | undefined { return this.tryGetToken(NyarParser.BitNot, 0); }
	public LogicNot(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LogicNot, 0); }
	public Reciprocal(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Reciprocal, 0); }
	public Increase(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Increase, 0); }
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
export class PostfixExpressionContext extends ExpressionContext {
	public _left: ExpressionContext;
	public _op: Pst_opsContext;
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public pst_ops(): Pst_opsContext {
		return this.getRuleContext(0, Pst_opsContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPostfixExpression) {
			listener.enterPostfixExpression(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPostfixExpression) {
			listener.exitPostfixExpression(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPostfixExpression) {
			return visitor.visitPostfixExpression(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class MethodApplyContext extends ExpressionContext {
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
	public DOT(): TerminalNode { return this.getToken(NyarParser.DOT, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMethodApply) {
			listener.enterMethodApply(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMethodApply) {
			listener.exitMethodApply(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMethodApply) {
			return visitor.visitMethodApply(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class BinaryLikeContext extends ExpressionContext {
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
	public LeftShift(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LeftShift, 0); }
	public RightShift(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RightShift, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterBinaryLike) {
			listener.enterBinaryLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitBinaryLike) {
			listener.exitBinaryLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitBinaryLike) {
			return visitor.visitBinaryLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class LogicLikeContext extends ExpressionContext {
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
	public Equal(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Equal, 0); }
	public NotEqual(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NotEqual, 0); }
	public Equivalent(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Equivalent, 0); }
	public NotEquivalent(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NotEquivalent, 0); }
	public Grater(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Grater, 0); }
	public GraterEqual(): TerminalNode | undefined { return this.tryGetToken(NyarParser.GraterEqual, 0); }
	public Less(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Less, 0); }
	public LessEqual(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LessEqual, 0); }
	public LogicAnd(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LogicAnd, 0); }
	public LogicOr(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LogicOr, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterLogicLike) {
			listener.enterLogicLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitLogicLike) {
			listener.exitLogicLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitLogicLike) {
			return visitor.visitLogicLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class CompareLikeContext extends ExpressionContext {
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
	public Equal(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Equal, 0); }
	public NotEqual(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NotEqual, 0); }
	public Equivalent(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Equivalent, 0); }
	public NotEquivalent(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NotEquivalent, 0); }
	public Grater(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Grater, 0); }
	public GraterEqual(): TerminalNode | undefined { return this.tryGetToken(NyarParser.GraterEqual, 0); }
	public Less(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Less, 0); }
	public LessEqual(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LessEqual, 0); }
	public LogicAnd(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LogicAnd, 0); }
	public LogicOr(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LogicOr, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterCompareLike) {
			listener.enterCompareLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitCompareLike) {
			listener.exitCompareLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitCompareLike) {
			return visitor.visitCompareLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class PowerLikeContext extends ExpressionContext {
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
	public Power(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Power, 0); }
	public Surd(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Surd, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPowerLike) {
			listener.enterPowerLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPowerLike) {
			listener.exitPowerLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPowerLike) {
			return visitor.visitPowerLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class MultiplyLikeContext extends ExpressionContext {
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
	public Divide(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Divide, 0); }
	public Times(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Times, 0); }
	public Multiply(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Multiply, 0); }
	public Kronecker(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Kronecker, 0); }
	public TensorProduct(): TerminalNode | undefined { return this.tryGetToken(NyarParser.TensorProduct, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMultiplyLike) {
			listener.enterMultiplyLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMultiplyLike) {
			listener.exitMultiplyLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMultiplyLike) {
			return visitor.visitMultiplyLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class PlusLikeContext extends ExpressionContext {
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
	public Plus(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Plus, 0); }
	public Minus(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Minus, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPlusLike) {
			listener.enterPlusLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPlusLike) {
			listener.exitPlusLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPlusLike) {
			return visitor.visitPlusLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ListLikeContext extends ExpressionContext {
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
	public Concat(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Concat, 0); }
	public LeftShift(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LeftShift, 0); }
	public RightShift(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RightShift, 0); }
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterListLike) {
			listener.enterListLike(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitListLike) {
			listener.exitListLike(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitListLike) {
			return visitor.visitListLike(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class LazyAssignContext extends ExpressionContext {
	public _id: Function_applyContext;
	public _op: Token;
	public _expr: AssignableContext;
	public function_apply(): Function_applyContext {
		return this.getRuleContext(0, Function_applyContext);
	}
	public DelayedAssign(): TerminalNode { return this.getToken(NyarParser.DelayedAssign, 0); }
	public assignable(): AssignableContext {
		return this.getRuleContext(0, AssignableContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterLazyAssign) {
			listener.enterLazyAssign(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitLazyAssign) {
			listener.exitLazyAssign(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitLazyAssign) {
			return visitor.visitLazyAssign(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class OperatorAssignContext extends ExpressionContext {
	public _id: Assign_lhsContext;
	public _op: Token;
	public _expr: AssignableContext;
	public assign_lhs(): Assign_lhsContext {
		return this.getRuleContext(0, Assign_lhsContext);
	}
	public assignable(): AssignableContext {
		return this.getRuleContext(0, AssignableContext);
	}
	public Assign(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Assign, 0); }
	public PlusTo(): TerminalNode | undefined { return this.tryGetToken(NyarParser.PlusTo, 0); }
	public MinusFrom(): TerminalNode | undefined { return this.tryGetToken(NyarParser.MinusFrom, 0); }
	public LetAssign(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LetAssign, 0); }
	public FinalAssign(): TerminalNode | undefined { return this.tryGetToken(NyarParser.FinalAssign, 0); }
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
export class IndexContext extends ExpressionContext {
	public _left: ExpressionContext;
	public _data: IndexLiteralContext;
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public indexLiteral(): IndexLiteralContext {
		return this.getRuleContext(0, IndexLiteralContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterIndex) {
			listener.enterIndex(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitIndex) {
			listener.exitIndex(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitIndex) {
			return visitor.visitIndex(this);
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
export class SymbolExpressionContext extends ExpressionContext {
	public _atom: SymbolContext;
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	constructor(ctx: ExpressionContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterSymbolExpression) {
			listener.enterSymbolExpression(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitSymbolExpression) {
			listener.exitSymbolExpression(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitSymbolExpression) {
			return visitor.visitSymbolExpression(this);
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


export class Pst_opsContext extends ParserRuleContext {
	public Increase(): TerminalNode { return this.getToken(NyarParser.Increase, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_pst_ops; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterPst_ops) {
			listener.enterPst_ops(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitPst_ops) {
			listener.exitPst_ops(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitPst_ops) {
			return visitor.visitPst_ops(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Assign_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assign_statement; }
	public copyFrom(ctx: Assign_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class AssignStatementContext extends Assign_statementContext {
	public _op: Token;
	public _id: Assign_lhsContext;
	public _expr: AssignableContext;
	public assign_lhs(): Assign_lhsContext {
		return this.getRuleContext(0, Assign_lhsContext);
	}
	public assignable(): AssignableContext {
		return this.getRuleContext(0, AssignableContext);
	}
	public Let(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Let, 0); }
	public Final(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Final, 0); }
	constructor(ctx: Assign_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
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


export class AssignableContext extends ParserRuleContext {
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	public LL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LL, 0); }
	public RL(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RL, 0); }
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


export class Assign_lhsContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assign_lhs; }
	public copyFrom(ctx: Assign_lhsContext): void {
		super.copyFrom(ctx);
	}
}
export class AssignValueContext extends Assign_lhsContext {
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	constructor(ctx: Assign_lhsContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignValue) {
			listener.enterAssignValue(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignValue) {
			listener.exitAssignValue(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignValue) {
			return visitor.visitAssignValue(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class AssignAttributeContext extends Assign_lhsContext {
	public Identifier(): TerminalNode[];
	public Identifier(i: number): TerminalNode;
	public Identifier(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Identifier);
		} else {
			return this.getToken(NyarParser.Identifier, i);
		}
	}
	public DOT(): TerminalNode[];
	public DOT(i: number): TerminalNode;
	public DOT(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.DOT);
		} else {
			return this.getToken(NyarParser.DOT, i);
		}
	}
	constructor(ctx: Assign_lhsContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignAttribute) {
			listener.enterAssignAttribute(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignAttribute) {
			listener.exitAssignAttribute(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignAttribute) {
			return visitor.visitAssignAttribute(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class AssignFunctionContext extends Assign_lhsContext {
	public Identifier(): TerminalNode[];
	public Identifier(i: number): TerminalNode;
	public Identifier(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Identifier);
		} else {
			return this.getToken(NyarParser.Identifier, i);
		}
	}
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	constructor(ctx: Assign_lhsContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignFunction) {
			listener.enterAssignFunction(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignFunction) {
			listener.exitAssignFunction(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignFunction) {
			return visitor.visitAssignFunction(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class AssignPairContext extends Assign_lhsContext {
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	public assign_pass(): Assign_passContext[];
	public assign_pass(i: number): Assign_passContext;
	public assign_pass(i?: number): Assign_passContext | Assign_passContext[] {
		if (i === undefined) {
			return this.getRuleContexts(Assign_passContext);
		} else {
			return this.getRuleContext(i, Assign_passContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	constructor(ctx: Assign_lhsContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignPair) {
			listener.enterAssignPair(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignPair) {
			listener.exitAssignPair(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignPair) {
			return visitor.visitAssignPair(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class AssignWithListContext extends Assign_lhsContext {
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	public LM(): TerminalNode { return this.getToken(NyarParser.LM, 0); }
	public Integer(): TerminalNode { return this.getToken(NyarParser.Integer, 0); }
	public RM(): TerminalNode { return this.getToken(NyarParser.RM, 0); }
	constructor(ctx: Assign_lhsContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssignWithList) {
			listener.enterAssignWithList(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssignWithList) {
			listener.exitAssignWithList(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssignWithList) {
			return visitor.visitAssignWithList(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Assign_passContext extends ParserRuleContext {
	public Tilde(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Tilde, 0); }
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_assign_pass; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterAssign_pass) {
			listener.enterAssign_pass(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitAssign_pass) {
			listener.exitAssign_pass(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitAssign_pass) {
			return visitor.visitAssign_pass(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Module_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_module_statement; }
	public copyFrom(ctx: Module_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class ModuleIncludeContext extends Module_statementContext {
	public _module: SymbolContext;
	public Using(): TerminalNode { return this.getToken(NyarParser.Using, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public Times(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Times, 0); }
	public Power(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Power, 0); }
	constructor(ctx: Module_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModuleInclude) {
			listener.enterModuleInclude(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModuleInclude) {
			listener.exitModuleInclude(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModuleInclude) {
			return visitor.visitModuleInclude(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ModuleAliasContext extends Module_statementContext {
	public _module: SymbolContext;
	public _alias: Token;
	public Using(): TerminalNode { return this.getToken(NyarParser.Using, 0); }
	public As(): TerminalNode { return this.getToken(NyarParser.As, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	constructor(ctx: Module_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModuleAlias) {
			listener.enterModuleAlias(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModuleAlias) {
			listener.exitModuleAlias(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModuleAlias) {
			return visitor.visitModuleAlias(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ModuleSymbolContext extends Module_statementContext {
	public _source: SymbolContext;
	public _name: Token;
	public Using(): TerminalNode { return this.getToken(NyarParser.Using, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	public With(): TerminalNode | undefined { return this.tryGetToken(NyarParser.With, 0); }
	constructor(ctx: Module_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModuleSymbol) {
			listener.enterModuleSymbol(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModuleSymbol) {
			listener.exitModuleSymbol(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModuleSymbol) {
			return visitor.visitModuleSymbol(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ModuleSymbolsContext extends Module_statementContext {
	public _source: SymbolContext;
	public Using(): TerminalNode { return this.getToken(NyarParser.Using, 0); }
	public id_tuples(): Id_tuplesContext {
		return this.getRuleContext(0, Id_tuplesContext);
	}
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public With(): TerminalNode | undefined { return this.tryGetToken(NyarParser.With, 0); }
	constructor(ctx: Module_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModuleSymbols) {
			listener.enterModuleSymbols(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModuleSymbols) {
			listener.exitModuleSymbols(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModuleSymbols) {
			return visitor.visitModuleSymbols(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ModuleResolveContext extends Module_statementContext {
	public Using(): TerminalNode { return this.getToken(NyarParser.Using, 0); }
	public dictLiteral(): DictLiteralContext {
		return this.getRuleContext(0, DictLiteralContext);
	}
	constructor(ctx: Module_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterModuleResolve) {
			listener.enterModuleResolve(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitModuleResolve) {
			listener.exitModuleResolve(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitModuleResolve) {
			return visitor.visitModuleResolve(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Id_tuplesContext extends ParserRuleContext {
	public LL(): TerminalNode { return this.getToken(NyarParser.LL, 0); }
	public Identifier(): TerminalNode[];
	public Identifier(i: number): TerminalNode;
	public Identifier(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.Identifier);
		} else {
			return this.getToken(NyarParser.Identifier, i);
		}
	}
	public RL(): TerminalNode { return this.getToken(NyarParser.RL, 0); }
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_id_tuples; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterId_tuples) {
			listener.enterId_tuples(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitId_tuples) {
			listener.exitId_tuples(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitId_tuples) {
			return visitor.visitId_tuples(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Class_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_class_statement; }
	public copyFrom(ctx: Class_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class ClassBaseContext extends Class_statementContext {
	public _id: Token;
	public Class(): TerminalNode { return this.getToken(NyarParser.Class, 0); }
	public class_define(): Class_defineContext {
		return this.getRuleContext(0, Class_defineContext);
	}
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	public class_implement(): Class_implementContext | undefined {
		return this.tryGetRuleContext(0, Class_implementContext);
	}
	constructor(ctx: Class_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassBase) {
			listener.enterClassBase(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassBase) {
			listener.exitClassBase(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassBase) {
			return visitor.visitClassBase(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ClassWithFatherContext extends Class_statementContext {
	public _id: Token;
	public Class(): TerminalNode { return this.getToken(NyarParser.Class, 0); }
	public class_fathers(): Class_fathersContext {
		return this.getRuleContext(0, Class_fathersContext);
	}
	public class_define(): Class_defineContext {
		return this.getRuleContext(0, Class_defineContext);
	}
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	public class_implement(): Class_implementContext | undefined {
		return this.tryGetRuleContext(0, Class_implementContext);
	}
	constructor(ctx: Class_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassWithFather) {
			listener.enterClassWithFather(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassWithFather) {
			listener.exitClassWithFather(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassWithFather) {
			return visitor.visitClassWithFather(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Class_fathersContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_class_fathers; }
	public copyFrom(ctx: Class_fathersContext): void {
		super.copyFrom(ctx);
	}
}
export class ClassFatherContext extends Class_fathersContext {
	public _father: SymbolContext;
	public Extend(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Extend, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public LS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LS, 0); }
	public RS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RS, 0); }
	constructor(ctx: Class_fathersContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassFather) {
			listener.enterClassFather(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassFather) {
			listener.exitClassFather(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassFather) {
			return visitor.visitClassFather(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ClassFathersContext extends Class_fathersContext {
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	public symbol(): SymbolContext[];
	public symbol(i: number): SymbolContext;
	public symbol(i?: number): SymbolContext | SymbolContext[] {
		if (i === undefined) {
			return this.getRuleContexts(SymbolContext);
		} else {
			return this.getRuleContext(i, SymbolContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	constructor(ctx: Class_fathersContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassFathers) {
			listener.enterClassFathers(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassFathers) {
			listener.exitClassFathers(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassFathers) {
			return visitor.visitClassFathers(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Class_implementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_class_implement; }
	public copyFrom(ctx: Class_implementContext): void {
		super.copyFrom(ctx);
	}
}
export class ClassImplementContext extends Class_implementContext {
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public Implement(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Implement, 0); }
	public Colon(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Colon, 0); }
	constructor(ctx: Class_implementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassImplement) {
			listener.enterClassImplement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassImplement) {
			listener.exitClassImplement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassImplement) {
			return visitor.visitClassImplement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Class_defineContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_class_define; }
	public copyFrom(ctx: Class_defineContext): void {
		super.copyFrom(ctx);
	}
}
export class ClassDefineContext extends Class_defineContext {
	public LL(): TerminalNode { return this.getToken(NyarParser.LL, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public RL(): TerminalNode { return this.getToken(NyarParser.RL, 0); }
	constructor(ctx: Class_defineContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterClassDefine) {
			listener.enterClassDefine(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitClassDefine) {
			listener.exitClassDefine(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitClassDefine) {
			return visitor.visitClassDefine(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Interface_StatementContext extends ParserRuleContext {
	public Interface(): TerminalNode { return this.getToken(NyarParser.Interface, 0); }
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
	public get ruleIndex(): number { return NyarParser.RULE_interface_Statement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterInterface_Statement) {
			listener.enterInterface_Statement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitInterface_Statement) {
			listener.exitInterface_Statement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitInterface_Statement) {
			return visitor.visitInterface_Statement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Template_StatementContext extends ParserRuleContext {
	public Template(): TerminalNode { return this.getToken(NyarParser.Template, 0); }
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
	public get ruleIndex(): number { return NyarParser.RULE_template_Statement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTemplate_Statement) {
			listener.enterTemplate_Statement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTemplate_Statement) {
			listener.exitTemplate_Statement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTemplate_Statement) {
			return visitor.visitTemplate_Statement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Macro_StatementContext extends ParserRuleContext {
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
	public get ruleIndex(): number { return NyarParser.RULE_macro_Statement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMacro_Statement) {
			listener.enterMacro_Statement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMacro_Statement) {
			listener.exitMacro_Statement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMacro_Statement) {
			return visitor.visitMacro_Statement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Branch_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_branch_statement; }
	public copyFrom(ctx: Branch_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class IfSingleContext extends Branch_statementContext {
	public If(): TerminalNode { return this.getToken(NyarParser.If, 0); }
	public condition_statement(): Condition_statementContext {
		return this.getRuleContext(0, Condition_statementContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	public if_else(): If_elseContext | undefined {
		return this.tryGetRuleContext(0, If_elseContext);
	}
	constructor(ctx: Branch_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterIfSingle) {
			listener.enterIfSingle(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitIfSingle) {
			listener.exitIfSingle(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitIfSingle) {
			return visitor.visitIfSingle(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class IfNestedContext extends Branch_statementContext {
	public If(): TerminalNode { return this.getToken(NyarParser.If, 0); }
	public condition_statement(): Condition_statementContext {
		return this.getRuleContext(0, Condition_statementContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	public if_elseif(): If_elseifContext[];
	public if_elseif(i: number): If_elseifContext;
	public if_elseif(i?: number): If_elseifContext | If_elseifContext[] {
		if (i === undefined) {
			return this.getRuleContexts(If_elseifContext);
		} else {
			return this.getRuleContext(i, If_elseifContext);
		}
	}
	public if_else(): If_elseContext | undefined {
		return this.tryGetRuleContext(0, If_elseContext);
	}
	constructor(ctx: Branch_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterIfNested) {
			listener.enterIfNested(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitIfNested) {
			listener.exitIfNested(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitIfNested) {
			return visitor.visitIfNested(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class SwitchStatementContext extends Branch_statementContext {
	public Switch(): TerminalNode { return this.getToken(NyarParser.Switch, 0); }
	public condition_statement(): Condition_statementContext {
		return this.getRuleContext(0, Condition_statementContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	constructor(ctx: Branch_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterSwitchStatement) {
			listener.enterSwitchStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitSwitchStatement) {
			listener.exitSwitchStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitSwitchStatement) {
			return visitor.visitSwitchStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class MatchStatementContext extends Branch_statementContext {
	public Match(): TerminalNode { return this.getToken(NyarParser.Match, 0); }
	public condition_statement(): Condition_statementContext {
		return this.getRuleContext(0, Condition_statementContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	constructor(ctx: Branch_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterMatchStatement) {
			listener.enterMatchStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitMatchStatement) {
			listener.exitMatchStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitMatchStatement) {
			return visitor.visitMatchStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Condition_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_condition_statement; }
	public copyFrom(ctx: Condition_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class ConditionStatementContext extends Condition_statementContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public LS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.LS, 0); }
	public RS(): TerminalNode | undefined { return this.tryGetToken(NyarParser.RS, 0); }
	constructor(ctx: Condition_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterConditionStatement) {
			listener.enterConditionStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitConditionStatement) {
			listener.exitConditionStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitConditionStatement) {
			return visitor.visitConditionStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class If_elseContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_if_else; }
	public copyFrom(ctx: If_elseContext): void {
		super.copyFrom(ctx);
	}
}
export class ElseStatementContext extends If_elseContext {
	public Else(): TerminalNode { return this.getToken(NyarParser.Else, 0); }
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	constructor(ctx: If_elseContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterElseStatement) {
			listener.enterElseStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitElseStatement) {
			listener.exitElseStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitElseStatement) {
			return visitor.visitElseStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class If_elseifContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_if_elseif; }
	public copyFrom(ctx: If_elseifContext): void {
		super.copyFrom(ctx);
	}
}
export class ElseIfStatementContext extends If_elseifContext {
	public Else(): TerminalNode { return this.getToken(NyarParser.Else, 0); }
	public If(): TerminalNode { return this.getToken(NyarParser.If, 0); }
	public condition_statement(): Condition_statementContext {
		return this.getRuleContext(0, Condition_statementContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	public Then(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Then, 0); }
	constructor(ctx: If_elseifContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterElseIfStatement) {
			listener.enterElseIfStatement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitElseIfStatement) {
			listener.exitElseIfStatement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitElseIfStatement) {
			return visitor.visitElseIfStatement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Try_statementContext extends ParserRuleContext {
	public Try(): TerminalNode { return this.getToken(NyarParser.Try, 0); }
	public block_statement(): Block_statementContext {
		return this.getRuleContext(0, Block_statementContext);
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
	public get ruleIndex(): number { return NyarParser.RULE_try_statement; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterTry_statement) {
			listener.enterTry_statement(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitTry_statement) {
			listener.exitTry_statement(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitTry_statement) {
			return visitor.visitTry_statement(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class CatchProductionContext extends ParserRuleContext {
	public Catch(): TerminalNode { return this.getToken(NyarParser.Catch, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public block_statement(): Block_statementContext {
		return this.getRuleContext(0, Block_statementContext);
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
	public block_statement(): Block_statementContext {
		return this.getRuleContext(0, Block_statementContext);
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


export class Loop_statementContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_loop_statement; }
	public copyFrom(ctx: Loop_statementContext): void {
		super.copyFrom(ctx);
	}
}
export class ForLoopContext extends Loop_statementContext {
	public _initial: ExpressionContext;
	public _condition: ExpressionContext;
	public _increment: ExpressionContext;
	public For(): TerminalNode { return this.getToken(NyarParser.For, 0); }
	public LS(): TerminalNode { return this.getToken(NyarParser.LS, 0); }
	public RS(): TerminalNode { return this.getToken(NyarParser.RS, 0); }
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	constructor(ctx: Loop_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterForLoop) {
			listener.enterForLoop(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitForLoop) {
			listener.exitForLoop(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitForLoop) {
			return visitor.visitForLoop(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class ForInLoopContext extends Loop_statementContext {
	public For(): TerminalNode { return this.getToken(NyarParser.For, 0); }
	public Identifier(): TerminalNode { return this.getToken(NyarParser.Identifier, 0); }
	public In(): TerminalNode { return this.getToken(NyarParser.In, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	constructor(ctx: Loop_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterForInLoop) {
			listener.enterForInLoop(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitForInLoop) {
			listener.exitForInLoop(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitForInLoop) {
			return visitor.visitForInLoop(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class WhileLoopContext extends Loop_statementContext {
	public While(): TerminalNode { return this.getToken(NyarParser.While, 0); }
	public condition_statement(): Condition_statementContext {
		return this.getRuleContext(0, Condition_statementContext);
	}
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	constructor(ctx: Loop_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterWhileLoop) {
			listener.enterWhileLoop(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitWhileLoop) {
			listener.exitWhileLoop(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitWhileLoop) {
			return visitor.visitWhileLoop(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}
export class DoLoopContext extends Loop_statementContext {
	public Do(): TerminalNode { return this.getToken(NyarParser.Do, 0); }
	public expr_or_block(): Expr_or_blockContext {
		return this.getRuleContext(0, Expr_or_blockContext);
	}
	constructor(ctx: Loop_statementContext) {
		super(ctx.parent, ctx.invokingState);
		this.copyFrom(ctx);
	}
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterDoLoop) {
			listener.enterDoLoop(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitDoLoop) {
			listener.exitDoLoop(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitDoLoop) {
			return visitor.visitDoLoop(this);
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
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
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
	public _key: Key_validContext;
	public _value: ElementContext;
	public Colon(): TerminalNode { return this.getToken(NyarParser.Colon, 0); }
	public key_valid(): Key_validContext {
		return this.getRuleContext(0, Key_validContext);
	}
	public element(): ElementContext {
		return this.getRuleContext(0, ElementContext);
	}
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


export class Key_validContext extends ParserRuleContext {
	public NUMBER(): TerminalNode | undefined { return this.tryGetToken(NyarParser.NUMBER, 0); }
	public STRING(): TerminalNode | undefined { return this.tryGetToken(NyarParser.STRING, 0); }
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_key_valid; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterKey_valid) {
			listener.enterKey_valid(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitKey_valid) {
			listener.exitKey_valid(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitKey_valid) {
			return visitor.visitKey_valid(this);
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
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
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


export class IndexLiteralContext extends ParserRuleContext {
	public LM(): TerminalNode { return this.getToken(NyarParser.LM, 0); }
	public index_valid(): Index_validContext[];
	public index_valid(i: number): Index_validContext;
	public index_valid(i?: number): Index_validContext | Index_validContext[] {
		if (i === undefined) {
			return this.getRuleContexts(Index_validContext);
		} else {
			return this.getRuleContext(i, Index_validContext);
		}
	}
	public RM(): TerminalNode { return this.getToken(NyarParser.RM, 0); }
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(NyarParser.COMMA);
		} else {
			return this.getToken(NyarParser.COMMA, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_indexLiteral; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterIndexLiteral) {
			listener.enterIndexLiteral(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitIndexLiteral) {
			listener.exitIndexLiteral(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitIndexLiteral) {
			return visitor.visitIndexLiteral(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Index_validContext extends ParserRuleContext {
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	public Integer(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Integer, 0); }
	public Colon(): TerminalNode | undefined { return this.tryGetToken(NyarParser.Colon, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return NyarParser.RULE_index_valid; }
	// @Override
	public enterRule(listener: NyarListener): void {
		if (listener.enterIndex_valid) {
			listener.enterIndex_valid(this);
		}
	}
	// @Override
	public exitRule(listener: NyarListener): void {
		if (listener.exitIndex_valid) {
			listener.exitIndex_valid(this);
		}
	}
	// @Override
	public accept<Result>(visitor: NyarVisitor<Result>): Result {
		if (visitor.visitIndex_valid) {
			return visitor.visitIndex_valid(this);
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


