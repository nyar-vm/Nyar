// Generated from Nyar.g4 by ANTLR 4.7.3-SNAPSHOT


import { ATN } from "antlr4ts/atn/ATN";
import { ATNDeserializer } from "antlr4ts/atn/ATNDeserializer";
import { CharStream } from "antlr4ts/CharStream";
import { Lexer } from "antlr4ts/Lexer";
import { LexerATNSimulator } from "antlr4ts/atn/LexerATNSimulator";
import { NotNull } from "antlr4ts/Decorators";
import { Override } from "antlr4ts/Decorators";
import { RuleContext } from "antlr4ts/RuleContext";
import { Vocabulary } from "antlr4ts/Vocabulary";
import { VocabularyImpl } from "antlr4ts/VocabularyImpl";

import * as Utils from "antlr4ts/misc/Utils";


export class NyarLexer extends Lexer {
	public static readonly T__0 = 1;
	public static readonly MUL = 2;
	public static readonly DIV = 3;
	public static readonly ADD = 4;
	public static readonly SUB = 5;
	public static readonly LPAREN = 6;
	public static readonly RPAREN = 7;
	public static readonly ID = 8;
	public static readonly SEMI = 9;
	public static readonly String = 10;
	public static readonly Comment = 11;
	public static readonly WhiteSpace = 12;
	public static readonly Integer = 13;

	// tslint:disable:no-trailing-whitespace
	public static readonly channelNames: string[] = [
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN",
	];

	// tslint:disable:no-trailing-whitespace
	public static readonly modeNames: string[] = [
		"DEFAULT_MODE",
	];

	public static readonly ruleNames: string[] = [
		"T__0", "MUL", "DIV", "ADD", "SUB", "LPAREN", "RPAREN", "ID", "SEMI", 
		"LETTER", "DIGIT", "String", "Comment", "WhiteSpace", "Integer",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "'='", "'*'", "'/'", "'+'", "'-'", "'('", "')'", undefined, 
		"';'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, "MUL", "DIV", "ADD", "SUB", "LPAREN", "RPAREN", 
		"ID", "SEMI", "String", "Comment", "WhiteSpace", "Integer",
	];
	public static readonly VOCABULARY: Vocabulary = new VocabularyImpl(NyarLexer._LITERAL_NAMES, NyarLexer._SYMBOLIC_NAMES, []);

	// @Override
	// @NotNull
	public get vocabulary(): Vocabulary {
		return NyarLexer.VOCABULARY;
	}
	// tslint:enable:no-trailing-whitespace


	constructor(input: CharStream) {
		super(input);
		this._interp = new LexerATNSimulator(NyarLexer._ATN, this);
	}

	// @Override
	public get grammarFileName(): string { return "Nyar.g4"; }

	// @Override
	public get ruleNames(): string[] { return NyarLexer.ruleNames; }

	// @Override
	public get serializedATN(): string { return NyarLexer._serializedATN; }

	// @Override
	public get channelNames(): string[] { return NyarLexer.channelNames; }

	// @Override
	public get modeNames(): string[] { return NyarLexer.modeNames; }

	public static readonly _serializedATN: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x02\x0Fb\b\x01\x04" +
		"\x02\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04" +
		"\x07\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r" +
		"\x04\x0E\t\x0E\x04\x0F\t\x0F\x04\x10\t\x10\x03\x02\x03\x02\x03\x03\x03" +
		"\x03\x03\x04\x03\x04\x03\x05\x03\x05\x03\x06\x03\x06\x03\x07\x03\x07\x03" +
		"\b\x03\b\x03\t\x03\t\x03\t\x07\t3\n\t\f\t\x0E\t6\v\t\x03\n\x03\n\x03\v" +
		"\x03\v\x03\f\x03\f\x03\r\x03\r\x07\r@\n\r\f\r\x0E\rC\v\r\x03\r\x03\r\x03" +
		"\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x07\x0EL\n\x0E\f\x0E\x0E\x0EO\v\x0E" +
		"\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x03\x0F\x06\x0FX\n\x0F" +
		"\r\x0F\x0E\x0FY\x03\x0F\x03\x0F\x03\x10\x06\x10_\n\x10\r\x10\x0E\x10`" +
		"\x04AM\x02\x02\x11\x03\x02\x03\x05\x02\x04\x07\x02\x05\t\x02\x06\v\x02" +
		"\x07\r\x02\b\x0F\x02\t\x11\x02\n\x13\x02\v\x15\x02\x02\x17\x02\x02\x19" +
		"\x02\f\x1B\x02\r\x1D\x02\x0E\x1F\x02\x0F\x03\x02\x05\x04\x02C\\c|\x03" +
		"\x022;\x04\x02\v\f\x0F\x0F\x02e\x02\x03\x03\x02\x02\x02\x02\x05\x03\x02" +
		"\x02\x02\x02\x07\x03\x02\x02\x02\x02\t\x03\x02\x02\x02\x02\v\x03\x02\x02" +
		"\x02\x02\r\x03\x02\x02\x02\x02\x0F\x03\x02\x02\x02\x02\x11\x03\x02\x02" +
		"\x02\x02\x13\x03\x02\x02\x02\x02\x19\x03\x02\x02\x02\x02\x1B\x03\x02\x02" +
		"\x02\x02\x1D\x03\x02\x02\x02\x02\x1F\x03\x02\x02\x02\x03!\x03\x02\x02" +
		"\x02\x05#\x03\x02\x02\x02\x07%\x03\x02\x02\x02\t\'\x03\x02\x02\x02\v)" +
		"\x03\x02\x02\x02\r+\x03\x02\x02\x02\x0F-\x03\x02\x02\x02\x11/\x03\x02" +
		"\x02\x02\x137\x03\x02\x02\x02\x159\x03\x02\x02\x02\x17;\x03\x02\x02\x02" +
		"\x19=\x03\x02\x02\x02\x1BF\x03\x02\x02\x02\x1DW\x03\x02\x02\x02\x1F^\x03" +
		"\x02\x02\x02!\"\x07?\x02\x02\"\x04\x03\x02\x02\x02#$\x07,\x02\x02$\x06" +
		"\x03\x02\x02\x02%&\x071\x02\x02&\b\x03\x02\x02\x02\'(\x07-\x02\x02(\n" +
		"\x03\x02\x02\x02)*\x07/\x02\x02*\f\x03\x02\x02\x02+,\x07*\x02\x02,\x0E" +
		"\x03\x02\x02\x02-.\x07+\x02\x02.\x10\x03\x02\x02\x02/4\x05\x15\v\x020" +
		"3\x05\x15\v\x0213\x05\x17\f\x0220\x03\x02\x02\x0221\x03\x02\x02\x0236" +
		"\x03\x02\x02\x0242\x03\x02\x02\x0245\x03\x02\x02\x025\x12\x03\x02\x02" +
		"\x0264\x03\x02\x02\x0278\x07=\x02\x028\x14\x03\x02\x02\x029:\t\x02\x02" +
		"\x02:\x16\x03\x02\x02\x02;<\t\x03\x02\x02<\x18\x03\x02\x02\x02=A\x07$" +
		"\x02\x02>@\v\x02\x02\x02?>\x03\x02\x02\x02@C\x03\x02\x02\x02AB\x03\x02" +
		"\x02\x02A?\x03\x02\x02\x02BD\x03\x02\x02\x02CA\x03\x02\x02\x02DE\x07$" +
		"\x02\x02E\x1A\x03\x02\x02\x02FG\x07\'\x02\x02GH\x07\'\x02\x02HI\x07\'" +
		"\x02\x02IM\x03\x02\x02\x02JL\v\x02\x02\x02KJ\x03\x02\x02\x02LO\x03\x02" +
		"\x02\x02MN\x03\x02\x02\x02MK\x03\x02\x02\x02NP\x03\x02\x02\x02OM\x03\x02" +
		"\x02\x02PQ\x07\'\x02\x02QR\x07\'\x02\x02RS\x07\'\x02\x02ST\x03\x02\x02" +
		"\x02TU\b\x0E\x02\x02U\x1C\x03\x02\x02\x02VX\t\x04\x02\x02WV\x03\x02\x02" +
		"\x02XY\x03\x02\x02\x02YW\x03\x02\x02\x02YZ\x03\x02\x02\x02Z[\x03\x02\x02" +
		"\x02[\\\b\x0F\x02\x02\\\x1E\x03\x02\x02\x02]_\t\x03\x02\x02^]\x03\x02" +
		"\x02\x02_`\x03\x02\x02\x02`^\x03\x02\x02\x02`a\x03\x02\x02\x02a \x03\x02" +
		"\x02\x02\t\x0224AMY`\x03\x02\x03\x02";
	public static __ATN: ATN;
	public static get _ATN(): ATN {
		if (!NyarLexer.__ATN) {
			NyarLexer.__ATN = new ATNDeserializer().deserialize(Utils.toCharArray(NyarLexer._serializedATN));
		}

		return NyarLexer.__ATN;
	}

}

