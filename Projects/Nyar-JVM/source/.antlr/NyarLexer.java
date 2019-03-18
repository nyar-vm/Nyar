// Generated from D:/Hybrid/Nyar/Projects/Antlr4\Nyar.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NyarLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, STRING=2, INTEGER=3, REAL=4, WhiteSpace=5, NewLine=6, Comment=7, 
		Using=8, Exposing=9, With=10, As=11, Macro=12, Template=13, Interface=14, 
		Class=15, Extends=16, Mixin=17, Setter=18, Getter=19, Public=20, Private=21, 
		Protected=22, Final=23, Try=24, Catch=25, For=26, In=27, SYMBOL=28, LS=29, 
		RS=30, LM=31, RM=32, LL=33, RL=34, Export=35, RightShift=36, Grater=37, 
		Import=38, LeftShift=39, Less=40, Plus3=41, Increase=42, Add=43, Unknow1=44, 
		Minus3=45, Decrease=46, Subtract=47, Unknow2=48, NullSequence=49, Sequence=50, 
		Times=51, Multiply=52, Kronecker=53, Unknow3=54, Remainder=55, Divide=56, 
		Unknow4=57, Quotient=58, Output=59, Mod=60, BaseInput=61, Power=62, Root=63, 
		Equivalent=64, Equal=65, Set=66, NotEqual=67, NotEquivalent=68, GraterEqual=69, 
		LessEqual=70, Bar3=71, Bar2=72, Bar=73, SlotSequence=74, Slot=75, PostfixFunction=76, 
		AnonymousFunction=77, Curry=78, Apply=79, At=80, Type=81, Colon=82, Accuracy=83, 
		Quote=84, Bang2=85, Bang=86, Dot=87, Comma=88, Quotation=89, SetConstant=90, 
		DelayedSet=91, UpSet=92, SetAddTo=93, SetMinusFrom=94, Map=95, MapAll=96, 
		To=97, Infer=98, Concat=99, Unknow5=100, Unknow6=101, AssignmentOperator=102, 
		BinaryOperator=103, LogicOperator=104, PowerLike=105, MultiplyLike=106, 
		AddLike=107, ListOperator=108;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", "Comment", 
			"Using", "Exposing", "With", "As", "Macro", "Template", "Interface", 
			"Class", "Extends", "Mixin", "Setter", "Getter", "Public", "Private", 
			"Protected", "Final", "Try", "Catch", "For", "In", "SYMBOL", "DIGIT", 
			"LETTER", "NameCharacter", "NameStartCharacter", "LS", "RS", "LM", "RM", 
			"LL", "RL", "Export", "RightShift", "Grater", "Import", "LeftShift", 
			"Less", "Plus3", "Increase", "Add", "Unknow1", "Minus3", "Decrease", 
			"Subtract", "Unknow2", "NullSequence", "Sequence", "Times", "Multiply", 
			"Kronecker", "Unknow3", "Remainder", "Divide", "Unknow4", "Quotient", 
			"Output", "Mod", "BaseInput", "Power", "Root", "Equivalent", "Equal", 
			"Set", "NotEqual", "NotEquivalent", "GraterEqual", "LessEqual", "Bar3", 
			"Bar2", "Bar", "SlotSequence", "Slot", "PostfixFunction", "AnonymousFunction", 
			"Curry", "Apply", "At", "Type", "Colon", "Accuracy", "Quote", "Bang2", 
			"Bang", "Dot", "Comma", "Quotation", "SetConstant", "DelayedSet", "UpSet", 
			"SetAddTo", "SetMinusFrom", "Map", "MapAll", "To", "Infer", "Concat", 
			"Unknow5", "Unknow6", "AssignmentOperator", "BinaryOperator", "LogicOperator", 
			"PowerLike", "MultiplyLike", "AddLike", "ListOperator"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", null, null, null, null, null, null, "'Using'", "'Exposing'", 
			"'With'", "'As'", "'Macro'", "'Template'", "'Interface'", "'Class'", 
			"'Extends'", "'Mixin'", "'Setter'", "'Getter'", "'Public'", "'Private'", 
			"'Protected'", "'Final'", "'Try'", "'Catch'", "'For'", "'In'", null, 
			"'('", "')'", "'['", "']'", "'{'", "'}'", "'>>>'", "'>>'", "'>'", "'<<<'", 
			"'<<'", "'<'", "'+++'", "'++'", "'+'", "'\u2295'", "'---'", "'--'", "'-'", 
			"'\u2296'", "'***'", "'**'", "'*'", "'\u00D7'", "'\u2297'", "'\u2299'", 
			"'//'", "'/'", "'\u2298'", "'\u00F7'", "'%%'", "'%'", "'^^'", "'^'", 
			"'\u221A'", "'==='", "'=='", "'='", null, "'=!='", "'>='", "'<='", "'|||'", 
			"'||'", "'|'", "'##'", "'#'", "'$$'", "'$'", "'@@@'", "'@@'", "'@'", 
			"'::'", "':'", "'``'", "'`'", "'!!'", "'!'", "'.'", "','", "'''", "'=<'", 
			"':='", "'^='", "'+='", "'-='", "'/@'", "'//@'", null, null, "'<>'", 
			"'<->'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", "Comment", 
			"Using", "Exposing", "With", "As", "Macro", "Template", "Interface", 
			"Class", "Extends", "Mixin", "Setter", "Getter", "Public", "Private", 
			"Protected", "Final", "Try", "Catch", "For", "In", "SYMBOL", "LS", "RS", 
			"LM", "RM", "LL", "RL", "Export", "RightShift", "Grater", "Import", "LeftShift", 
			"Less", "Plus3", "Increase", "Add", "Unknow1", "Minus3", "Decrease", 
			"Subtract", "Unknow2", "NullSequence", "Sequence", "Times", "Multiply", 
			"Kronecker", "Unknow3", "Remainder", "Divide", "Unknow4", "Quotient", 
			"Output", "Mod", "BaseInput", "Power", "Root", "Equivalent", "Equal", 
			"Set", "NotEqual", "NotEquivalent", "GraterEqual", "LessEqual", "Bar3", 
			"Bar2", "Bar", "SlotSequence", "Slot", "PostfixFunction", "AnonymousFunction", 
			"Curry", "Apply", "At", "Type", "Colon", "Accuracy", "Quote", "Bang2", 
			"Bang", "Dot", "Comma", "Quotation", "SetConstant", "DelayedSet", "UpSet", 
			"SetAddTo", "SetMinusFrom", "Map", "MapAll", "To", "Infer", "Concat", 
			"Unknow5", "Unknow6", "AssignmentOperator", "BinaryOperator", "LogicOperator", 
			"PowerLike", "MultiplyLike", "AddLike", "ListOperator"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public NyarLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Nyar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2n\u02ab\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\3\2\3\2\3\3\3\3\7\3\u00e8\n\3\f"+
		"\3\16\3\u00eb\13\3\3\3\3\3\3\4\6\4\u00f0\n\4\r\4\16\4\u00f1\3\5\6\5\u00f5"+
		"\n\5\r\5\16\5\u00f6\3\5\3\5\6\5\u00fb\n\5\r\5\16\5\u00fc\5\5\u00ff\n\5"+
		"\3\6\6\6\u0102\n\6\r\6\16\6\u0103\3\6\3\6\3\7\5\7\u0109\n\7\3\7\3\7\6"+
		"\7\u010d\n\7\r\7\16\7\u010e\3\7\3\7\3\b\3\b\3\b\3\b\3\b\7\b\u0118\n\b"+
		"\f\b\16\b\u011b\13\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3"+
		"\f\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\7\35\u01a7\n\35\f\35"+
		"\16\35\u01aa\13\35\3\36\3\36\3\37\3\37\3 \3 \3 \5 \u01b3\n \3!\5!\u01b6"+
		"\n!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3(\3(\3)\3)\3)\3*\3"+
		"*\3+\3+\3+\3+\3,\3,\3,\3-\3-\3.\3.\3.\3.\3/\3/\3/\3\60\3\60\3\61\3\61"+
		"\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\64\3\64\3\65\3\65\3\66\3\66\3\66"+
		"\3\66\3\67\3\67\3\67\38\38\39\39\3:\3:\3;\3;\3<\3<\3<\3=\3=\3>\3>\3?\3"+
		"?\3@\3@\3@\3A\3A\3B\3B\3B\3C\3C\3D\3D\3E\3E\3E\3E\3F\3F\3F\3G\3G\3H\3"+
		"H\3H\5H\u021c\nH\3I\3I\3I\3I\3J\3J\3J\3K\3K\3K\3L\3L\3L\3L\3M\3M\3M\3"+
		"N\3N\3O\3O\3O\3P\3P\3Q\3Q\3Q\3R\3R\3S\3S\3S\3S\3T\3T\3T\3U\3U\3V\3V\3"+
		"V\3W\3W\3X\3X\3X\3Y\3Y\3Z\3Z\3Z\3[\3[\3\\\3\\\3]\3]\3^\3^\3_\3_\3_\3`"+
		"\3`\3`\3a\3a\3a\3b\3b\3b\3c\3c\3c\3d\3d\3d\3e\3e\3e\3e\3f\3f\3f\5f\u0272"+
		"\nf\3g\3g\3g\5g\u0277\ng\3h\3h\3h\3i\3i\3i\3i\3j\3j\3j\3j\5j\u0284\nj"+
		"\3k\3k\3k\3k\3k\3k\5k\u028c\nk\3l\3l\5l\u0290\nl\3m\3m\3m\3m\3m\3m\3m"+
		"\3m\5m\u029a\nm\3n\3n\5n\u029e\nn\3o\3o\3o\3o\5o\u02a4\no\3p\3p\5p\u02a8"+
		"\np\3q\3q\4\u00e9\u0119\2r\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32"+
		"\63\33\65\34\67\359\36;\2=\2?\2A\2C\37E G!I\"K#M$O%Q&S\'U(W)Y*[+],_-a"+
		".c/e\60g\61i\62k\63m\64o\65q\66s\67u8w9y:{;}<\177=\u0081>\u0083?\u0085"+
		"@\u0087A\u0089B\u008bC\u008dD\u008fE\u0091F\u0093G\u0095H\u0097I\u0099"+
		"J\u009bK\u009dL\u009fM\u00a1N\u00a3O\u00a5P\u00a7Q\u00a9R\u00abS\u00ad"+
		"T\u00afU\u00b1V\u00b3W\u00b5X\u00b7Y\u00b9Z\u00bb[\u00bd\\\u00bf]\u00c1"+
		"^\u00c3_\u00c5`\u00c7a\u00c9b\u00cbc\u00cdd\u00cfe\u00d1f\u00d3g\u00d5"+
		"h\u00d7i\u00d9j\u00dbk\u00ddl\u00dfm\u00e1n\3\2\7\3\2\62;\4\2\13\f\17"+
		"\17\4\2C\\c|\5\2\u00b9\u00b9\u0302\u0371\u2041\u2042\f\2&&<<C\\aac|\u2072"+
		"\u2191\u2c02\u2ff1\u3003\ud801\uf902\ufdd1\ufdf2\uffff\2\u02c9\2\3\3\2"+
		"\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17"+
		"\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2"+
		"\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3"+
		"\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3"+
		"\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2C\3\2\2\2\2"+
		"E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3"+
		"\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2"+
		"\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2"+
		"k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3\2\2\2\2w\3"+
		"\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2\177\3\2\2\2\2\u0081\3\2\2\2"+
		"\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u0087\3\2\2\2\2\u0089\3\2\2\2\2\u008b"+
		"\3\2\2\2\2\u008d\3\2\2\2\2\u008f\3\2\2\2\2\u0091\3\2\2\2\2\u0093\3\2\2"+
		"\2\2\u0095\3\2\2\2\2\u0097\3\2\2\2\2\u0099\3\2\2\2\2\u009b\3\2\2\2\2\u009d"+
		"\3\2\2\2\2\u009f\3\2\2\2\2\u00a1\3\2\2\2\2\u00a3\3\2\2\2\2\u00a5\3\2\2"+
		"\2\2\u00a7\3\2\2\2\2\u00a9\3\2\2\2\2\u00ab\3\2\2\2\2\u00ad\3\2\2\2\2\u00af"+
		"\3\2\2\2\2\u00b1\3\2\2\2\2\u00b3\3\2\2\2\2\u00b5\3\2\2\2\2\u00b7\3\2\2"+
		"\2\2\u00b9\3\2\2\2\2\u00bb\3\2\2\2\2\u00bd\3\2\2\2\2\u00bf\3\2\2\2\2\u00c1"+
		"\3\2\2\2\2\u00c3\3\2\2\2\2\u00c5\3\2\2\2\2\u00c7\3\2\2\2\2\u00c9\3\2\2"+
		"\2\2\u00cb\3\2\2\2\2\u00cd\3\2\2\2\2\u00cf\3\2\2\2\2\u00d1\3\2\2\2\2\u00d3"+
		"\3\2\2\2\2\u00d5\3\2\2\2\2\u00d7\3\2\2\2\2\u00d9\3\2\2\2\2\u00db\3\2\2"+
		"\2\2\u00dd\3\2\2\2\2\u00df\3\2\2\2\2\u00e1\3\2\2\2\3\u00e3\3\2\2\2\5\u00e5"+
		"\3\2\2\2\7\u00ef\3\2\2\2\t\u00f4\3\2\2\2\13\u0101\3\2\2\2\r\u010c\3\2"+
		"\2\2\17\u0112\3\2\2\2\21\u0122\3\2\2\2\23\u0128\3\2\2\2\25\u0131\3\2\2"+
		"\2\27\u0136\3\2\2\2\31\u0139\3\2\2\2\33\u013f\3\2\2\2\35\u0148\3\2\2\2"+
		"\37\u0152\3\2\2\2!\u0158\3\2\2\2#\u0160\3\2\2\2%\u0166\3\2\2\2\'\u016d"+
		"\3\2\2\2)\u0174\3\2\2\2+\u017b\3\2\2\2-\u0183\3\2\2\2/\u018d\3\2\2\2\61"+
		"\u0193\3\2\2\2\63\u0197\3\2\2\2\65\u019d\3\2\2\2\67\u01a1\3\2\2\29\u01a4"+
		"\3\2\2\2;\u01ab\3\2\2\2=\u01ad\3\2\2\2?\u01b2\3\2\2\2A\u01b5\3\2\2\2C"+
		"\u01b7\3\2\2\2E\u01b9\3\2\2\2G\u01bb\3\2\2\2I\u01bd\3\2\2\2K\u01bf\3\2"+
		"\2\2M\u01c1\3\2\2\2O\u01c3\3\2\2\2Q\u01c7\3\2\2\2S\u01ca\3\2\2\2U\u01cc"+
		"\3\2\2\2W\u01d0\3\2\2\2Y\u01d3\3\2\2\2[\u01d5\3\2\2\2]\u01d9\3\2\2\2_"+
		"\u01dc\3\2\2\2a\u01de\3\2\2\2c\u01e0\3\2\2\2e\u01e4\3\2\2\2g\u01e7\3\2"+
		"\2\2i\u01e9\3\2\2\2k\u01eb\3\2\2\2m\u01ef\3\2\2\2o\u01f2\3\2\2\2q\u01f4"+
		"\3\2\2\2s\u01f6\3\2\2\2u\u01f8\3\2\2\2w\u01fa\3\2\2\2y\u01fd\3\2\2\2{"+
		"\u01ff\3\2\2\2}\u0201\3\2\2\2\177\u0203\3\2\2\2\u0081\u0206\3\2\2\2\u0083"+
		"\u0208\3\2\2\2\u0085\u020b\3\2\2\2\u0087\u020d\3\2\2\2\u0089\u020f\3\2"+
		"\2\2\u008b\u0213\3\2\2\2\u008d\u0216\3\2\2\2\u008f\u021b\3\2\2\2\u0091"+
		"\u021d\3\2\2\2\u0093\u0221\3\2\2\2\u0095\u0224\3\2\2\2\u0097\u0227\3\2"+
		"\2\2\u0099\u022b\3\2\2\2\u009b\u022e\3\2\2\2\u009d\u0230\3\2\2\2\u009f"+
		"\u0233\3\2\2\2\u00a1\u0235\3\2\2\2\u00a3\u0238\3\2\2\2\u00a5\u023a\3\2"+
		"\2\2\u00a7\u023e\3\2\2\2\u00a9\u0241\3\2\2\2\u00ab\u0243\3\2\2\2\u00ad"+
		"\u0246\3\2\2\2\u00af\u0248\3\2\2\2\u00b1\u024b\3\2\2\2\u00b3\u024d\3\2"+
		"\2\2\u00b5\u0250\3\2\2\2\u00b7\u0252\3\2\2\2\u00b9\u0254\3\2\2\2\u00bb"+
		"\u0256\3\2\2\2\u00bd\u0258\3\2\2\2\u00bf\u025b\3\2\2\2\u00c1\u025e\3\2"+
		"\2\2\u00c3\u0261\3\2\2\2\u00c5\u0264\3\2\2\2\u00c7\u0267\3\2\2\2\u00c9"+
		"\u026a\3\2\2\2\u00cb\u0271\3\2\2\2\u00cd\u0276\3\2\2\2\u00cf\u0278\3\2"+
		"\2\2\u00d1\u027b\3\2\2\2\u00d3\u0283\3\2\2\2\u00d5\u028b\3\2\2\2\u00d7"+
		"\u028f\3\2\2\2\u00d9\u0299\3\2\2\2\u00db\u029d\3\2\2\2\u00dd\u02a3\3\2"+
		"\2\2\u00df\u02a7\3\2\2\2\u00e1\u02a9\3\2\2\2\u00e3\u00e4\7=\2\2\u00e4"+
		"\4\3\2\2\2\u00e5\u00e9\7$\2\2\u00e6\u00e8\13\2\2\2\u00e7\u00e6\3\2\2\2"+
		"\u00e8\u00eb\3\2\2\2\u00e9\u00ea\3\2\2\2\u00e9\u00e7\3\2\2\2\u00ea\u00ec"+
		"\3\2\2\2\u00eb\u00e9\3\2\2\2\u00ec\u00ed\7$\2\2\u00ed\6\3\2\2\2\u00ee"+
		"\u00f0\t\2\2\2\u00ef\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00ef\3\2"+
		"\2\2\u00f1\u00f2\3\2\2\2\u00f2\b\3\2\2\2\u00f3\u00f5\4\62;\2\u00f4\u00f3"+
		"\3\2\2\2\u00f5\u00f6\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7"+
		"\u00fe\3\2\2\2\u00f8\u00fa\7\60\2\2\u00f9\u00fb\4\62;\2\u00fa\u00f9\3"+
		"\2\2\2\u00fb\u00fc\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd"+
		"\u00ff\3\2\2\2\u00fe\u00f8\3\2\2\2\u00fe\u00ff\3\2\2\2\u00ff\n\3\2\2\2"+
		"\u0100\u0102\t\3\2\2\u0101\u0100\3\2\2\2\u0102\u0103\3\2\2\2\u0103\u0101"+
		"\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0105\3\2\2\2\u0105\u0106\b\6\2\2\u0106"+
		"\f\3\2\2\2\u0107\u0109\7\17\2\2\u0108\u0107\3\2\2\2\u0108\u0109\3\2\2"+
		"\2\u0109\u010a\3\2\2\2\u010a\u010d\7\f\2\2\u010b\u010d\7\17\2\2\u010c"+
		"\u0108\3\2\2\2\u010c\u010b\3\2\2\2\u010d\u010e\3\2\2\2\u010e\u010c\3\2"+
		"\2\2\u010e\u010f\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u0111\b\7\2\2\u0111"+
		"\16\3\2\2\2\u0112\u0113\7\'\2\2\u0113\u0114\7\'\2\2\u0114\u0115\7\'\2"+
		"\2\u0115\u0119\3\2\2\2\u0116\u0118\13\2\2\2\u0117\u0116\3\2\2\2\u0118"+
		"\u011b\3\2\2\2\u0119\u011a\3\2\2\2\u0119\u0117\3\2\2\2\u011a\u011c\3\2"+
		"\2\2\u011b\u0119\3\2\2\2\u011c\u011d\7\'\2\2\u011d\u011e\7\'\2\2\u011e"+
		"\u011f\7\'\2\2\u011f\u0120\3\2\2\2\u0120\u0121\b\b\2\2\u0121\20\3\2\2"+
		"\2\u0122\u0123\7W\2\2\u0123\u0124\7u\2\2\u0124\u0125\7k\2\2\u0125\u0126"+
		"\7p\2\2\u0126\u0127\7i\2\2\u0127\22\3\2\2\2\u0128\u0129\7G\2\2\u0129\u012a"+
		"\7z\2\2\u012a\u012b\7r\2\2\u012b\u012c\7q\2\2\u012c\u012d\7u\2\2\u012d"+
		"\u012e\7k\2\2\u012e\u012f\7p\2\2\u012f\u0130\7i\2\2\u0130\24\3\2\2\2\u0131"+
		"\u0132\7Y\2\2\u0132\u0133\7k\2\2\u0133\u0134\7v\2\2\u0134\u0135\7j\2\2"+
		"\u0135\26\3\2\2\2\u0136\u0137\7C\2\2\u0137\u0138\7u\2\2\u0138\30\3\2\2"+
		"\2\u0139\u013a\7O\2\2\u013a\u013b\7c\2\2\u013b\u013c\7e\2\2\u013c\u013d"+
		"\7t\2\2\u013d\u013e\7q\2\2\u013e\32\3\2\2\2\u013f\u0140\7V\2\2\u0140\u0141"+
		"\7g\2\2\u0141\u0142\7o\2\2\u0142\u0143\7r\2\2\u0143\u0144\7n\2\2\u0144"+
		"\u0145\7c\2\2\u0145\u0146\7v\2\2\u0146\u0147\7g\2\2\u0147\34\3\2\2\2\u0148"+
		"\u0149\7K\2\2\u0149\u014a\7p\2\2\u014a\u014b\7v\2\2\u014b\u014c\7g\2\2"+
		"\u014c\u014d\7t\2\2\u014d\u014e\7h\2\2\u014e\u014f\7c\2\2\u014f\u0150"+
		"\7e\2\2\u0150\u0151\7g\2\2\u0151\36\3\2\2\2\u0152\u0153\7E\2\2\u0153\u0154"+
		"\7n\2\2\u0154\u0155\7c\2\2\u0155\u0156\7u\2\2\u0156\u0157\7u\2\2\u0157"+
		" \3\2\2\2\u0158\u0159\7G\2\2\u0159\u015a\7z\2\2\u015a\u015b\7v\2\2\u015b"+
		"\u015c\7g\2\2\u015c\u015d\7p\2\2\u015d\u015e\7f\2\2\u015e\u015f\7u\2\2"+
		"\u015f\"\3\2\2\2\u0160\u0161\7O\2\2\u0161\u0162\7k\2\2\u0162\u0163\7z"+
		"\2\2\u0163\u0164\7k\2\2\u0164\u0165\7p\2\2\u0165$\3\2\2\2\u0166\u0167"+
		"\7U\2\2\u0167\u0168\7g\2\2\u0168\u0169\7v\2\2\u0169\u016a\7v\2\2\u016a"+
		"\u016b\7g\2\2\u016b\u016c\7t\2\2\u016c&\3\2\2\2\u016d\u016e\7I\2\2\u016e"+
		"\u016f\7g\2\2\u016f\u0170\7v\2\2\u0170\u0171\7v\2\2\u0171\u0172\7g\2\2"+
		"\u0172\u0173\7t\2\2\u0173(\3\2\2\2\u0174\u0175\7R\2\2\u0175\u0176\7w\2"+
		"\2\u0176\u0177\7d\2\2\u0177\u0178\7n\2\2\u0178\u0179\7k\2\2\u0179\u017a"+
		"\7e\2\2\u017a*\3\2\2\2\u017b\u017c\7R\2\2\u017c\u017d\7t\2\2\u017d\u017e"+
		"\7k\2\2\u017e\u017f\7x\2\2\u017f\u0180\7c\2\2\u0180\u0181\7v\2\2\u0181"+
		"\u0182\7g\2\2\u0182,\3\2\2\2\u0183\u0184\7R\2\2\u0184\u0185\7t\2\2\u0185"+
		"\u0186\7q\2\2\u0186\u0187\7v\2\2\u0187\u0188\7g\2\2\u0188\u0189\7e\2\2"+
		"\u0189\u018a\7v\2\2\u018a\u018b\7g\2\2\u018b\u018c\7f\2\2\u018c.\3\2\2"+
		"\2\u018d\u018e\7H\2\2\u018e\u018f\7k\2\2\u018f\u0190\7p\2\2\u0190\u0191"+
		"\7c\2\2\u0191\u0192\7n\2\2\u0192\60\3\2\2\2\u0193\u0194\7V\2\2\u0194\u0195"+
		"\7t\2\2\u0195\u0196\7{\2\2\u0196\62\3\2\2\2\u0197\u0198\7E\2\2\u0198\u0199"+
		"\7c\2\2\u0199\u019a\7v\2\2\u019a\u019b\7e\2\2\u019b\u019c\7j\2\2\u019c"+
		"\64\3\2\2\2\u019d\u019e\7H\2\2\u019e\u019f\7q\2\2\u019f\u01a0\7t\2\2\u01a0"+
		"\66\3\2\2\2\u01a1\u01a2\7K\2\2\u01a2\u01a3\7p\2\2\u01a38\3\2\2\2\u01a4"+
		"\u01a8\5A!\2\u01a5\u01a7\5? \2\u01a6\u01a5\3\2\2\2\u01a7\u01aa\3\2\2\2"+
		"\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9:\3\2\2\2\u01aa\u01a8\3"+
		"\2\2\2\u01ab\u01ac\t\2\2\2\u01ac<\3\2\2\2\u01ad\u01ae\t\4\2\2\u01ae>\3"+
		"\2\2\2\u01af\u01b3\5A!\2\u01b0\u01b3\5;\36\2\u01b1\u01b3\t\5\2\2\u01b2"+
		"\u01af\3\2\2\2\u01b2\u01b0\3\2\2\2\u01b2\u01b1\3\2\2\2\u01b3@\3\2\2\2"+
		"\u01b4\u01b6\t\6\2\2\u01b5\u01b4\3\2\2\2\u01b6B\3\2\2\2\u01b7\u01b8\7"+
		"*\2\2\u01b8D\3\2\2\2\u01b9\u01ba\7+\2\2\u01baF\3\2\2\2\u01bb\u01bc\7]"+
		"\2\2\u01bcH\3\2\2\2\u01bd\u01be\7_\2\2\u01beJ\3\2\2\2\u01bf\u01c0\7}\2"+
		"\2\u01c0L\3\2\2\2\u01c1\u01c2\7\177\2\2\u01c2N\3\2\2\2\u01c3\u01c4\7@"+
		"\2\2\u01c4\u01c5\7@\2\2\u01c5\u01c6\7@\2\2\u01c6P\3\2\2\2\u01c7\u01c8"+
		"\7@\2\2\u01c8\u01c9\7@\2\2\u01c9R\3\2\2\2\u01ca\u01cb\7@\2\2\u01cbT\3"+
		"\2\2\2\u01cc\u01cd\7>\2\2\u01cd\u01ce\7>\2\2\u01ce\u01cf\7>\2\2\u01cf"+
		"V\3\2\2\2\u01d0\u01d1\7>\2\2\u01d1\u01d2\7>\2\2\u01d2X\3\2\2\2\u01d3\u01d4"+
		"\7>\2\2\u01d4Z\3\2\2\2\u01d5\u01d6\7-\2\2\u01d6\u01d7\7-\2\2\u01d7\u01d8"+
		"\7-\2\2\u01d8\\\3\2\2\2\u01d9\u01da\7-\2\2\u01da\u01db\7-\2\2\u01db^\3"+
		"\2\2\2\u01dc\u01dd\7-\2\2\u01dd`\3\2\2\2\u01de\u01df\7\u2297\2\2\u01df"+
		"b\3\2\2\2\u01e0\u01e1\7/\2\2\u01e1\u01e2\7/\2\2\u01e2\u01e3\7/\2\2\u01e3"+
		"d\3\2\2\2\u01e4\u01e5\7/\2\2\u01e5\u01e6\7/\2\2\u01e6f\3\2\2\2\u01e7\u01e8"+
		"\7/\2\2\u01e8h\3\2\2\2\u01e9\u01ea\7\u2298\2\2\u01eaj\3\2\2\2\u01eb\u01ec"+
		"\7,\2\2\u01ec\u01ed\7,\2\2\u01ed\u01ee\7,\2\2\u01eel\3\2\2\2\u01ef\u01f0"+
		"\7,\2\2\u01f0\u01f1\7,\2\2\u01f1n\3\2\2\2\u01f2\u01f3\7,\2\2\u01f3p\3"+
		"\2\2\2\u01f4\u01f5\7\u00d9\2\2\u01f5r\3\2\2\2\u01f6\u01f7\7\u2299\2\2"+
		"\u01f7t\3\2\2\2\u01f8\u01f9\7\u229b\2\2\u01f9v\3\2\2\2\u01fa\u01fb\7\61"+
		"\2\2\u01fb\u01fc\7\61\2\2\u01fcx\3\2\2\2\u01fd\u01fe\7\61\2\2\u01fez\3"+
		"\2\2\2\u01ff\u0200\7\u229a\2\2\u0200|\3\2\2\2\u0201\u0202\7\u00f9\2\2"+
		"\u0202~\3\2\2\2\u0203\u0204\7\'\2\2\u0204\u0205\7\'\2\2\u0205\u0080\3"+
		"\2\2\2\u0206\u0207\7\'\2\2\u0207\u0082\3\2\2\2\u0208\u0209\7`\2\2\u0209"+
		"\u020a\7`\2\2\u020a\u0084\3\2\2\2\u020b\u020c\7`\2\2\u020c\u0086\3\2\2"+
		"\2\u020d\u020e\7\u221c\2\2\u020e\u0088\3\2\2\2\u020f\u0210\7?\2\2\u0210"+
		"\u0211\7?\2\2\u0211\u0212\7?\2\2\u0212\u008a\3\2\2\2\u0213\u0214\7?\2"+
		"\2\u0214\u0215\7?\2\2\u0215\u008c\3\2\2\2\u0216\u0217\7?\2\2\u0217\u008e"+
		"\3\2\2\2\u0218\u0219\7#\2\2\u0219\u021c\7?\2\2\u021a\u021c\7\u2262\2\2"+
		"\u021b\u0218\3\2\2\2\u021b\u021a\3\2\2\2\u021c\u0090\3\2\2\2\u021d\u021e"+
		"\7?\2\2\u021e\u021f\7#\2\2\u021f\u0220\7?\2\2\u0220\u0092\3\2\2\2\u0221"+
		"\u0222\7@\2\2\u0222\u0223\7?\2\2\u0223\u0094\3\2\2\2\u0224\u0225\7>\2"+
		"\2\u0225\u0226\7?\2\2\u0226\u0096\3\2\2\2\u0227\u0228\7~\2\2\u0228\u0229"+
		"\7~\2\2\u0229\u022a\7~\2\2\u022a\u0098\3\2\2\2\u022b\u022c\7~\2\2\u022c"+
		"\u022d\7~\2\2\u022d\u009a\3\2\2\2\u022e\u022f\7~\2\2\u022f\u009c\3\2\2"+
		"\2\u0230\u0231\7%\2\2\u0231\u0232\7%\2\2\u0232\u009e\3\2\2\2\u0233\u0234"+
		"\7%\2\2\u0234\u00a0\3\2\2\2\u0235\u0236\7&\2\2\u0236\u0237\7&\2\2\u0237"+
		"\u00a2\3\2\2\2\u0238\u0239\7&\2\2\u0239\u00a4\3\2\2\2\u023a\u023b\7B\2"+
		"\2\u023b\u023c\7B\2\2\u023c\u023d\7B\2\2\u023d\u00a6\3\2\2\2\u023e\u023f"+
		"\7B\2\2\u023f\u0240\7B\2\2\u0240\u00a8\3\2\2\2\u0241\u0242\7B\2\2\u0242"+
		"\u00aa\3\2\2\2\u0243\u0244\7<\2\2\u0244\u0245\7<\2\2\u0245\u00ac\3\2\2"+
		"\2\u0246\u0247\7<\2\2\u0247\u00ae\3\2\2\2\u0248\u0249\7b\2\2\u0249\u024a"+
		"\7b\2\2\u024a\u00b0\3\2\2\2\u024b\u024c\7b\2\2\u024c\u00b2\3\2\2\2\u024d"+
		"\u024e\7#\2\2\u024e\u024f\7#\2\2\u024f\u00b4\3\2\2\2\u0250\u0251\7#\2"+
		"\2\u0251\u00b6\3\2\2\2\u0252\u0253\7\60\2\2\u0253\u00b8\3\2\2\2\u0254"+
		"\u0255\7.\2\2\u0255\u00ba\3\2\2\2\u0256\u0257\7)\2\2\u0257\u00bc\3\2\2"+
		"\2\u0258\u0259\7?\2\2\u0259\u025a\7>\2\2\u025a\u00be\3\2\2\2\u025b\u025c"+
		"\7<\2\2\u025c\u025d\7?\2\2\u025d\u00c0\3\2\2\2\u025e\u025f\7`\2\2\u025f"+
		"\u0260\7?\2\2\u0260\u00c2\3\2\2\2\u0261\u0262\7-\2\2\u0262\u0263\7?\2"+
		"\2\u0263\u00c4\3\2\2\2\u0264\u0265\7/\2\2\u0265\u0266\7?\2\2\u0266\u00c6"+
		"\3\2\2\2\u0267\u0268\7\61\2\2\u0268\u0269\7B\2\2\u0269\u00c8\3\2\2\2\u026a"+
		"\u026b\7\61\2\2\u026b\u026c\7\61\2\2\u026c\u026d\7B\2\2\u026d\u00ca\3"+
		"\2\2\2\u026e\u026f\7/\2\2\u026f\u0272\7@\2\2\u0270\u0272\7\u2194\2\2\u0271"+
		"\u026e\3\2\2\2\u0271\u0270\3\2\2\2\u0272\u00cc\3\2\2\2\u0273\u0274\7?"+
		"\2\2\u0274\u0277\7@\2\2\u0275\u0277\7\u27fb\2\2\u0276\u0273\3\2\2\2\u0276"+
		"\u0275\3\2\2\2\u0277\u00ce\3\2\2\2\u0278\u0279\7>\2\2\u0279\u027a\7@\2"+
		"\2\u027a\u00d0\3\2\2\2\u027b\u027c\7>\2\2\u027c\u027d\7/\2\2\u027d\u027e"+
		"\7@\2\2\u027e\u00d2\3\2\2\2\u027f\u0280\7>\2\2\u0280\u0281\7?\2\2\u0281"+
		"\u0284\7@\2\2\u0282\u0284\7\u27fc\2\2\u0283\u027f\3\2\2\2\u0283\u0282"+
		"\3\2\2\2\u0284\u00d4\3\2\2\2\u0285\u028c\5\u008dG\2\u0286\u028c\5\u00bd"+
		"_\2\u0287\u028c\5\u00bf`\2\u0288\u028c\5\u00c1a\2\u0289\u028c\5\u00c3"+
		"b\2\u028a\u028c\5\u00c5c\2\u028b\u0285\3\2\2\2\u028b\u0286\3\2\2\2\u028b"+
		"\u0287\3\2\2\2\u028b\u0288\3\2\2\2\u028b\u0289\3\2\2\2\u028b\u028a\3\2"+
		"\2\2\u028c\u00d6\3\2\2\2\u028d\u0290\5W,\2\u028e\u0290\5Q)\2\u028f\u028d"+
		"\3\2\2\2\u028f\u028e\3\2\2\2\u0290\u00d8\3\2\2\2\u0291\u029a\5\u008bF"+
		"\2\u0292\u029a\5\u008fH\2\u0293\u029a\5\u0089E\2\u0294\u029a\5\u0091I"+
		"\2\u0295\u029a\5S*\2\u0296\u029a\5\u0093J\2\u0297\u029a\5Y-\2\u0298\u029a"+
		"\5\u0095K\2\u0299\u0291\3\2\2\2\u0299\u0292\3\2\2\2\u0299\u0293\3\2\2"+
		"\2\u0299\u0294\3\2\2\2\u0299\u0295\3\2\2\2\u0299\u0296\3\2\2\2\u0299\u0297"+
		"\3\2\2\2\u0299\u0298\3\2\2\2\u029a\u00da\3\2\2\2\u029b\u029e\5\u0085C"+
		"\2\u029c\u029e\5\u0087D\2\u029d\u029b\3\2\2\2\u029d\u029c\3\2\2\2\u029e"+
		"\u00dc\3\2\2\2\u029f\u02a4\5q9\2\u02a0\u02a4\5y=\2\u02a1\u02a4\5o8\2\u02a2"+
		"\u02a4\5s:\2\u02a3\u029f\3\2\2\2\u02a3\u02a0\3\2\2\2\u02a3\u02a1\3\2\2"+
		"\2\u02a3\u02a2\3\2\2\2\u02a4\u00de\3\2\2\2\u02a5\u02a8\5_\60\2\u02a6\u02a8"+
		"\5g\64\2\u02a7\u02a5\3\2\2\2\u02a7\u02a6\3\2\2\2\u02a8\u00e0\3\2\2\2\u02a9"+
		"\u02aa\5\u00cfh\2\u02aa\u00e2\3\2\2\2\32\2\u00e9\u00f1\u00f6\u00fc\u00fe"+
		"\u0103\u0108\u010c\u010e\u0119\u01a8\u01b2\u01b5\u021b\u0271\u0276\u0283"+
		"\u028b\u028f\u0299\u029d\u02a3\u02a7\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}