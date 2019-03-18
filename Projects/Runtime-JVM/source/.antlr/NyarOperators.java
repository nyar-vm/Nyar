// Generated from d:\Hybrid\Nyar\Projects\Antlr4/NyarOperators.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NyarOperators extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Output=1, Exposing=2, RightShift=3, Grater=4, Import=5, Using=6, Less=7, 
		Plus3=8, Plus2=9, Plus=10, Minus3=11, Minus2=12, Minus=13, BlankNullSequence=14, 
		BlankSequence=15, Blank=16, Multiply=17, Div=18, DIVIDE=19, Mod=20, SlotSequence=21, 
		Slot=22, Equivalent=23, Equal=24, Set=25, Bar3=26, Bar2=27, Bar=28, Colon3=29, 
		Colon2=30, Colon=31, Quote3=32, Quote2=33, Quote=34, Caret3=35, Caret2=36, 
		Caret=37, At3=38, At2=39, At=40, Bang3=41, Bang2=42, BANG=43, Dot=44, 
		Comma=45, Quotation=46, SetConstant=47, DelayedSet=48, UpSet=49, SetAddTo=50, 
		SetMinusFrom=51, AssignmentOperator=52, NotEqual=53, NotEquivalent=54, 
		Map=55, To=56, Infer=57, Link=58, Linka=59, Linki=60;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"Output", "Exposing", "RightShift", "Grater", "Import", "Using", "Less", 
		"Plus3", "Plus2", "Plus", "Minus3", "Minus2", "Minus", "BlankNullSequence", 
		"BlankSequence", "Blank", "Multiply", "Div", "DIVIDE", "Mod", "SlotSequence", 
		"Slot", "Equivalent", "Equal", "Set", "Bar3", "Bar2", "Bar", "Colon3", 
		"Colon2", "Colon", "Quote3", "Quote2", "Quote", "Caret3", "Caret2", "Caret", 
		"At3", "At2", "At", "Bang3", "Bang2", "BANG", "Dot", "Comma", "Quotation", 
		"SetConstant", "DelayedSet", "UpSet", "SetAddTo", "SetMinusFrom", "AssignmentOperator", 
		"NotEqual", "NotEquivalent", "Map", "To", "Infer", "Link", "Linka", "Linki"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'>>>'", null, null, "'>'", "'<<<'", "'<<'", "'<'", "'+++'", "'++'", 
		"'+'", "'---'", "'--'", "'-'", "'***'", "'**'", "'*'", "'\u00D7'", "'//'", 
		"'\u00F7'", "'%'", "'##'", "'#'", "'==='", "'=='", "'='", "'|||'", "'||'", 
		"'|'", "':::'", "'::'", "':'", "'```'", "'``'", "'`'", "'^^^'", "'^^'", 
		"'^'", "'@@@'", "'@@'", "'@'", "'!!!'", "'!!'", "'!'", "'.'", "','", "'''", 
		"'=<'", "':='", "'^='", "'+='", "'-='", null, null, "'=!='", "'/@'", null, 
		"'=>'", "'<>'", "'<->'", "'<=>'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "Output", "Exposing", "RightShift", "Grater", "Import", "Using", 
		"Less", "Plus3", "Plus2", "Plus", "Minus3", "Minus2", "Minus", "BlankNullSequence", 
		"BlankSequence", "Blank", "Multiply", "Div", "DIVIDE", "Mod", "SlotSequence", 
		"Slot", "Equivalent", "Equal", "Set", "Bar3", "Bar2", "Bar", "Colon3", 
		"Colon2", "Colon", "Quote3", "Quote2", "Quote", "Caret3", "Caret2", "Caret", 
		"At3", "At2", "At", "Bang3", "Bang2", "BANG", "Dot", "Comma", "Quotation", 
		"SetConstant", "DelayedSet", "UpSet", "SetAddTo", "SetMinusFrom", "AssignmentOperator", 
		"NotEqual", "NotEquivalent", "Map", "To", "Infer", "Link", "Linka", "Linki"
	};
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


	public NyarOperators(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "NyarOperators.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2>\u0135\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\4\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3"+
		"\7\3\7\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\f\3\f\3\f\3\f\3"+
		"\r\3\r\3\r\3\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\22"+
		"\3\22\3\23\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\30"+
		"\3\30\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34"+
		"\3\34\3\35\3\35\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3 \3 \3!\3!\3!\3!\3"+
		"\"\3\"\3\"\3#\3#\3$\3$\3$\3$\3%\3%\3%\3&\3&\3\'\3\'\3\'\3\'\3(\3(\3(\3"+
		")\3)\3*\3*\3*\3*\3+\3+\3+\3,\3,\3-\3-\3.\3.\3/\3/\3\60\3\60\3\60\3\61"+
		"\3\61\3\61\3\62\3\62\3\62\3\63\3\63\3\63\3\64\3\64\3\64\3\65\3\65\3\65"+
		"\3\65\3\65\3\65\5\65\u0114\n\65\3\66\3\66\3\66\5\66\u0119\n\66\3\67\3"+
		"\67\3\67\3\67\38\38\38\39\39\39\39\59\u0126\n9\3:\3:\3:\3;\3;\3;\3<\3"+
		"<\3<\3<\3=\3=\3=\3=\2\2>\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f"+
		"\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63"+
		"\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62"+
		"c\63e\64g\65i\66k\67m8o9q:s;u<w=y>\3\2\2\2\u013b\2\3\3\2\2\2\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3"+
		"\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3"+
		"\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3"+
		"\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2"+
		"\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2"+
		"Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3"+
		"\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2"+
		"\2\2s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\3{\3\2\2\2\5\177\3\2\2"+
		"\2\7\u0082\3\2\2\2\t\u0085\3\2\2\2\13\u0087\3\2\2\2\r\u008b\3\2\2\2\17"+
		"\u008e\3\2\2\2\21\u0090\3\2\2\2\23\u0094\3\2\2\2\25\u0097\3\2\2\2\27\u0099"+
		"\3\2\2\2\31\u009d\3\2\2\2\33\u00a0\3\2\2\2\35\u00a2\3\2\2\2\37\u00a6\3"+
		"\2\2\2!\u00a9\3\2\2\2#\u00ab\3\2\2\2%\u00ad\3\2\2\2\'\u00b0\3\2\2\2)\u00b2"+
		"\3\2\2\2+\u00b4\3\2\2\2-\u00b7\3\2\2\2/\u00b9\3\2\2\2\61\u00bd\3\2\2\2"+
		"\63\u00c0\3\2\2\2\65\u00c2\3\2\2\2\67\u00c6\3\2\2\29\u00c9\3\2\2\2;\u00cb"+
		"\3\2\2\2=\u00cf\3\2\2\2?\u00d2\3\2\2\2A\u00d4\3\2\2\2C\u00d8\3\2\2\2E"+
		"\u00db\3\2\2\2G\u00dd\3\2\2\2I\u00e1\3\2\2\2K\u00e4\3\2\2\2M\u00e6\3\2"+
		"\2\2O\u00ea\3\2\2\2Q\u00ed\3\2\2\2S\u00ef\3\2\2\2U\u00f3\3\2\2\2W\u00f6"+
		"\3\2\2\2Y\u00f8\3\2\2\2[\u00fa\3\2\2\2]\u00fc\3\2\2\2_\u00fe\3\2\2\2a"+
		"\u0101\3\2\2\2c\u0104\3\2\2\2e\u0107\3\2\2\2g\u010a\3\2\2\2i\u0113\3\2"+
		"\2\2k\u0118\3\2\2\2m\u011a\3\2\2\2o\u011e\3\2\2\2q\u0125\3\2\2\2s\u0127"+
		"\3\2\2\2u\u012a\3\2\2\2w\u012d\3\2\2\2y\u0131\3\2\2\2{|\7@\2\2|}\7@\2"+
		"\2}~\7@\2\2~\4\3\2\2\2\177\u0080\7@\2\2\u0080\u0081\7@\2\2\u0081\6\3\2"+
		"\2\2\u0082\u0083\7@\2\2\u0083\u0084\7@\2\2\u0084\b\3\2\2\2\u0085\u0086"+
		"\7@\2\2\u0086\n\3\2\2\2\u0087\u0088\7>\2\2\u0088\u0089\7>\2\2\u0089\u008a"+
		"\7>\2\2\u008a\f\3\2\2\2\u008b\u008c\7>\2\2\u008c\u008d\7>\2\2\u008d\16"+
		"\3\2\2\2\u008e\u008f\7>\2\2\u008f\20\3\2\2\2\u0090\u0091\7-\2\2\u0091"+
		"\u0092\7-\2\2\u0092\u0093\7-\2\2\u0093\22\3\2\2\2\u0094\u0095\7-\2\2\u0095"+
		"\u0096\7-\2\2\u0096\24\3\2\2\2\u0097\u0098\7-\2\2\u0098\26\3\2\2\2\u0099"+
		"\u009a\7/\2\2\u009a\u009b\7/\2\2\u009b\u009c\7/\2\2\u009c\30\3\2\2\2\u009d"+
		"\u009e\7/\2\2\u009e\u009f\7/\2\2\u009f\32\3\2\2\2\u00a0\u00a1\7/\2\2\u00a1"+
		"\34\3\2\2\2\u00a2\u00a3\7,\2\2\u00a3\u00a4\7,\2\2\u00a4\u00a5\7,\2\2\u00a5"+
		"\36\3\2\2\2\u00a6\u00a7\7,\2\2\u00a7\u00a8\7,\2\2\u00a8 \3\2\2\2\u00a9"+
		"\u00aa\7,\2\2\u00aa\"\3\2\2\2\u00ab\u00ac\7\u00d9\2\2\u00ac$\3\2\2\2\u00ad"+
		"\u00ae\7\61\2\2\u00ae\u00af\7\61\2\2\u00af&\3\2\2\2\u00b0\u00b1\7\u00f9"+
		"\2\2\u00b1(\3\2\2\2\u00b2\u00b3\7\'\2\2\u00b3*\3\2\2\2\u00b4\u00b5\7%"+
		"\2\2\u00b5\u00b6\7%\2\2\u00b6,\3\2\2\2\u00b7\u00b8\7%\2\2\u00b8.\3\2\2"+
		"\2\u00b9\u00ba\7?\2\2\u00ba\u00bb\7?\2\2\u00bb\u00bc\7?\2\2\u00bc\60\3"+
		"\2\2\2\u00bd\u00be\7?\2\2\u00be\u00bf\7?\2\2\u00bf\62\3\2\2\2\u00c0\u00c1"+
		"\7?\2\2\u00c1\64\3\2\2\2\u00c2\u00c3\7~\2\2\u00c3\u00c4\7~\2\2\u00c4\u00c5"+
		"\7~\2\2\u00c5\66\3\2\2\2\u00c6\u00c7\7~\2\2\u00c7\u00c8\7~\2\2\u00c88"+
		"\3\2\2\2\u00c9\u00ca\7~\2\2\u00ca:\3\2\2\2\u00cb\u00cc\7<\2\2\u00cc\u00cd"+
		"\7<\2\2\u00cd\u00ce\7<\2\2\u00ce<\3\2\2\2\u00cf\u00d0\7<\2\2\u00d0\u00d1"+
		"\7<\2\2\u00d1>\3\2\2\2\u00d2\u00d3\7<\2\2\u00d3@\3\2\2\2\u00d4\u00d5\7"+
		"b\2\2\u00d5\u00d6\7b\2\2\u00d6\u00d7\7b\2\2\u00d7B\3\2\2\2\u00d8\u00d9"+
		"\7b\2\2\u00d9\u00da\7b\2\2\u00daD\3\2\2\2\u00db\u00dc\7b\2\2\u00dcF\3"+
		"\2\2\2\u00dd\u00de\7`\2\2\u00de\u00df\7`\2\2\u00df\u00e0\7`\2\2\u00e0"+
		"H\3\2\2\2\u00e1\u00e2\7`\2\2\u00e2\u00e3\7`\2\2\u00e3J\3\2\2\2\u00e4\u00e5"+
		"\7`\2\2\u00e5L\3\2\2\2\u00e6\u00e7\7B\2\2\u00e7\u00e8\7B\2\2\u00e8\u00e9"+
		"\7B\2\2\u00e9N\3\2\2\2\u00ea\u00eb\7B\2\2\u00eb\u00ec\7B\2\2\u00ecP\3"+
		"\2\2\2\u00ed\u00ee\7B\2\2\u00eeR\3\2\2\2\u00ef\u00f0\7#\2\2\u00f0\u00f1"+
		"\7#\2\2\u00f1\u00f2\7#\2\2\u00f2T\3\2\2\2\u00f3\u00f4\7#\2\2\u00f4\u00f5"+
		"\7#\2\2\u00f5V\3\2\2\2\u00f6\u00f7\7#\2\2\u00f7X\3\2\2\2\u00f8\u00f9\7"+
		"\60\2\2\u00f9Z\3\2\2\2\u00fa\u00fb\7.\2\2\u00fb\\\3\2\2\2\u00fc\u00fd"+
		"\7)\2\2\u00fd^\3\2\2\2\u00fe\u00ff\7?\2\2\u00ff\u0100\7>\2\2\u0100`\3"+
		"\2\2\2\u0101\u0102\7<\2\2\u0102\u0103\7?\2\2\u0103b\3\2\2\2\u0104\u0105"+
		"\7`\2\2\u0105\u0106\7?\2\2\u0106d\3\2\2\2\u0107\u0108\7-\2\2\u0108\u0109"+
		"\7?\2\2\u0109f\3\2\2\2\u010a\u010b\7/\2\2\u010b\u010c\7?\2\2\u010ch\3"+
		"\2\2\2\u010d\u0114\5\63\32\2\u010e\u0114\5_\60\2\u010f\u0114\5a\61\2\u0110"+
		"\u0114\5c\62\2\u0111\u0114\5e\63\2\u0112\u0114\5g\64\2\u0113\u010d\3\2"+
		"\2\2\u0113\u010e\3\2\2\2\u0113\u010f\3\2\2\2\u0113\u0110\3\2\2\2\u0113"+
		"\u0111\3\2\2\2\u0113\u0112\3\2\2\2\u0114j\3\2\2\2\u0115\u0116\7#\2\2\u0116"+
		"\u0119\7?\2\2\u0117\u0119\7\u2262\2\2\u0118\u0115\3\2\2\2\u0118\u0117"+
		"\3\2\2\2\u0119l\3\2\2\2\u011a\u011b\7?\2\2\u011b\u011c\7#\2\2\u011c\u011d"+
		"\7?\2\2\u011dn\3\2\2\2\u011e\u011f\7\61\2\2\u011f\u0120\7B\2\2\u0120p"+
		"\3\2\2\2\u0121\u0122\7/\2\2\u0122\u0126\7@\2\2\u0123\u0124\7\u922d\2\2"+
		"\u0124\u0126\7\uffff\2\2\u0125\u0121\3\2\2\2\u0125\u0123\3\2\2\2\u0126"+
		"r\3\2\2\2\u0127\u0128\7?\2\2\u0128\u0129\7@\2\2\u0129t\3\2\2\2\u012a\u012b"+
		"\7>\2\2\u012b\u012c\7@\2\2\u012cv\3\2\2\2\u012d\u012e\7>\2\2\u012e\u012f"+
		"\7/\2\2\u012f\u0130\7@\2\2\u0130x\3\2\2\2\u0131\u0132\7>\2\2\u0132\u0133"+
		"\7?\2\2\u0133\u0134\7@\2\2\u0134z\3\2\2\2\6\2\u0113\u0118\u0125\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}