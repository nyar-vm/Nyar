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
		LS=1, RS=2, LM=3, RM=4, LL=5, RL=6, Export=7, RightShift=8, Grater=9, 
		Import=10, LeftShift=11, Less=12, Plus3=13, Increase=14, Add=15, Unknow1=16, 
		Minus3=17, Decrease=18, Subtract=19, Unknow2=20, NullSequence=21, Sequence=22, 
		Times=23, Multiply=24, Kronecker=25, Unknow3=26, Remainder=27, Divide=28, 
		Unknow4=29, Quotient=30, Output=31, Mod=32, BaseInput=33, Power=34, Root=35, 
		Equivalent=36, Equal=37, Set=38, NotEqual=39, NotEquivalent=40, GraterEqual=41, 
		LessEqual=42, Bar3=43, Bar2=44, Bar=45, SlotSequence=46, Slot=47, PostfixFunction=48, 
		AnonymousFunction=49, Curry=50, Apply=51, At=52, Type=53, Colon=54, Accuracy=55, 
		Quote=56, Bang2=57, Bang=58, Dot=59, Comma=60, Quotation=61, SetConstant=62, 
		DelayedSet=63, UpSet=64, SetAddTo=65, SetMinusFrom=66, Map=67, MapAll=68, 
		To=69, Infer=70, Concat=71, Unknow5=72, Unknow6=73, AssignmentOperator=74, 
		LogicOperator=75, PowerLike=76, MultiplyLike=77, AddLike=78, BinaryOperator=79;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"LS", "RS", "LM", "RM", "LL", "RL", "Export", "RightShift", "Grater", 
		"Import", "LeftShift", "Less", "Plus3", "Increase", "Add", "Unknow1", 
		"Minus3", "Decrease", "Subtract", "Unknow2", "NullSequence", "Sequence", 
		"Times", "Multiply", "Kronecker", "Unknow3", "Remainder", "Divide", "Unknow4", 
		"Quotient", "Output", "Mod", "BaseInput", "Power", "Root", "Equivalent", 
		"Equal", "Set", "NotEqual", "NotEquivalent", "GraterEqual", "LessEqual", 
		"Bar3", "Bar2", "Bar", "SlotSequence", "Slot", "PostfixFunction", "AnonymousFunction", 
		"Curry", "Apply", "At", "Type", "Colon", "Accuracy", "Quote", "Bang2", 
		"Bang", "Dot", "Comma", "Quotation", "SetConstant", "DelayedSet", "UpSet", 
		"SetAddTo", "SetMinusFrom", "Map", "MapAll", "To", "Infer", "Concat", 
		"Unknow5", "Unknow6", "AssignmentOperator", "LogicOperator", "PowerLike", 
		"MultiplyLike", "AddLike", "BinaryOperator"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "'['", "']'", "'{'", "'}'", "'>>>'", "'>>'", "'>'", 
		"'<<<'", "'<<'", "'<'", "'+++'", "'++'", "'+'", "'\u2295'", "'---'", "'--'", 
		"'-'", "'\u2296'", "'***'", "'**'", "'*'", "'\u00D7'", "'\u2297'", "'\u2299'", 
		"'//'", "'/'", "'\u2298'", "'\u00F7'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", 
		"'==='", "'=='", "'='", null, "'=!='", "'>='", "'<='", "'|||'", "'||'", 
		"'|'", "'##'", "'#'", "'$$'", "'$'", "'@@@'", "'@@'", "'@'", "'::'", "':'", 
		"'``'", "'`'", "'!!'", "'!'", "'.'", "','", "'''", "'=<'", "':='", "'^='", 
		"'+='", "'-='", "'/@'", "'//@'", null, null, "'<>'", "'<->'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "LS", "RS", "LM", "RM", "LL", "RL", "Export", "RightShift", "Grater", 
		"Import", "LeftShift", "Less", "Plus3", "Increase", "Add", "Unknow1", 
		"Minus3", "Decrease", "Subtract", "Unknow2", "NullSequence", "Sequence", 
		"Times", "Multiply", "Kronecker", "Unknow3", "Remainder", "Divide", "Unknow4", 
		"Quotient", "Output", "Mod", "BaseInput", "Power", "Root", "Equivalent", 
		"Equal", "Set", "NotEqual", "NotEquivalent", "GraterEqual", "LessEqual", 
		"Bar3", "Bar2", "Bar", "SlotSequence", "Slot", "PostfixFunction", "AnonymousFunction", 
		"Curry", "Apply", "At", "Type", "Colon", "Accuracy", "Quote", "Bang2", 
		"Bang", "Dot", "Comma", "Quotation", "SetConstant", "DelayedSet", "UpSet", 
		"SetAddTo", "SetMinusFrom", "Map", "MapAll", "To", "Infer", "Concat", 
		"Unknow5", "Unknow6", "AssignmentOperator", "LogicOperator", "PowerLike", 
		"MultiplyLike", "AddLike", "BinaryOperator"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2Q\u0193\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\3\2\3\2\3\3\3\3\3\4\3\4"+
		"\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\n\3\n\3\13\3\13"+
		"\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\20"+
		"\3\20\3\21\3\21\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\24\3\24\3\25\3\25"+
		"\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3\32\3\33"+
		"\3\33\3\34\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3 \3 \3 \3!\3!\3\""+
		"\3\"\3\"\3#\3#\3$\3$\3%\3%\3%\3%\3&\3&\3&\3\'\3\'\3(\3(\3(\5(\u0106\n"+
		"(\3)\3)\3)\3)\3*\3*\3*\3+\3+\3+\3,\3,\3,\3,\3-\3-\3-\3.\3.\3/\3/\3/\3"+
		"\60\3\60\3\61\3\61\3\61\3\62\3\62\3\63\3\63\3\63\3\63\3\64\3\64\3\64\3"+
		"\65\3\65\3\66\3\66\3\66\3\67\3\67\38\38\38\39\39\3:\3:\3:\3;\3;\3<\3<"+
		"\3=\3=\3>\3>\3?\3?\3?\3@\3@\3@\3A\3A\3A\3B\3B\3B\3C\3C\3C\3D\3D\3D\3E"+
		"\3E\3E\3E\3F\3F\3F\5F\u015c\nF\3G\3G\3G\5G\u0161\nG\3H\3H\3H\3I\3I\3I"+
		"\3I\3J\3J\3J\3J\5J\u016e\nJ\3K\3K\3K\3K\3K\3K\5K\u0176\nK\3L\3L\3L\3L"+
		"\3L\3L\3L\3L\5L\u0180\nL\3M\3M\5M\u0184\nM\3N\3N\3N\3N\5N\u018a\nN\3O"+
		"\3O\5O\u018e\nO\3P\3P\5P\u0192\nP\2\2Q\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21"+
		"\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30"+
		"/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.["+
		"/]\60_\61a\62c\63e\64g\65i\66k\67m8o9q:s;u<w=y>{?}@\177A\u0081B\u0083"+
		"C\u0085D\u0087E\u0089F\u008bG\u008dH\u008fI\u0091J\u0093K\u0095L\u0097"+
		"M\u0099N\u009bO\u009dP\u009fQ\3\2\2\2\u01a8\2\3\3\2\2\2\2\5\3\2\2\2\2"+
		"\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2"+
		"\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2"+
		"\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2"+
		"\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2"+
		"\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2"+
		"\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2"+
		"M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3"+
		"\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2"+
		"\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2"+
		"s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2\177"+
		"\3\2\2\2\2\u0081\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u0087\3\2\2"+
		"\2\2\u0089\3\2\2\2\2\u008b\3\2\2\2\2\u008d\3\2\2\2\2\u008f\3\2\2\2\2\u0091"+
		"\3\2\2\2\2\u0093\3\2\2\2\2\u0095\3\2\2\2\2\u0097\3\2\2\2\2\u0099\3\2\2"+
		"\2\2\u009b\3\2\2\2\2\u009d\3\2\2\2\2\u009f\3\2\2\2\3\u00a1\3\2\2\2\5\u00a3"+
		"\3\2\2\2\7\u00a5\3\2\2\2\t\u00a7\3\2\2\2\13\u00a9\3\2\2\2\r\u00ab\3\2"+
		"\2\2\17\u00ad\3\2\2\2\21\u00b1\3\2\2\2\23\u00b4\3\2\2\2\25\u00b6\3\2\2"+
		"\2\27\u00ba\3\2\2\2\31\u00bd\3\2\2\2\33\u00bf\3\2\2\2\35\u00c3\3\2\2\2"+
		"\37\u00c6\3\2\2\2!\u00c8\3\2\2\2#\u00ca\3\2\2\2%\u00ce\3\2\2\2\'\u00d1"+
		"\3\2\2\2)\u00d3\3\2\2\2+\u00d5\3\2\2\2-\u00d9\3\2\2\2/\u00dc\3\2\2\2\61"+
		"\u00de\3\2\2\2\63\u00e0\3\2\2\2\65\u00e2\3\2\2\2\67\u00e4\3\2\2\29\u00e7"+
		"\3\2\2\2;\u00e9\3\2\2\2=\u00eb\3\2\2\2?\u00ed\3\2\2\2A\u00f0\3\2\2\2C"+
		"\u00f2\3\2\2\2E\u00f5\3\2\2\2G\u00f7\3\2\2\2I\u00f9\3\2\2\2K\u00fd\3\2"+
		"\2\2M\u0100\3\2\2\2O\u0105\3\2\2\2Q\u0107\3\2\2\2S\u010b\3\2\2\2U\u010e"+
		"\3\2\2\2W\u0111\3\2\2\2Y\u0115\3\2\2\2[\u0118\3\2\2\2]\u011a\3\2\2\2_"+
		"\u011d\3\2\2\2a\u011f\3\2\2\2c\u0122\3\2\2\2e\u0124\3\2\2\2g\u0128\3\2"+
		"\2\2i\u012b\3\2\2\2k\u012d\3\2\2\2m\u0130\3\2\2\2o\u0132\3\2\2\2q\u0135"+
		"\3\2\2\2s\u0137\3\2\2\2u\u013a\3\2\2\2w\u013c\3\2\2\2y\u013e\3\2\2\2{"+
		"\u0140\3\2\2\2}\u0142\3\2\2\2\177\u0145\3\2\2\2\u0081\u0148\3\2\2\2\u0083"+
		"\u014b\3\2\2\2\u0085\u014e\3\2\2\2\u0087\u0151\3\2\2\2\u0089\u0154\3\2"+
		"\2\2\u008b\u015b\3\2\2\2\u008d\u0160\3\2\2\2\u008f\u0162\3\2\2\2\u0091"+
		"\u0165\3\2\2\2\u0093\u016d\3\2\2\2\u0095\u0175\3\2\2\2\u0097\u017f\3\2"+
		"\2\2\u0099\u0183\3\2\2\2\u009b\u0189\3\2\2\2\u009d\u018d\3\2\2\2\u009f"+
		"\u0191\3\2\2\2\u00a1\u00a2\7*\2\2\u00a2\4\3\2\2\2\u00a3\u00a4\7+\2\2\u00a4"+
		"\6\3\2\2\2\u00a5\u00a6\7]\2\2\u00a6\b\3\2\2\2\u00a7\u00a8\7_\2\2\u00a8"+
		"\n\3\2\2\2\u00a9\u00aa\7}\2\2\u00aa\f\3\2\2\2\u00ab\u00ac\7\177\2\2\u00ac"+
		"\16\3\2\2\2\u00ad\u00ae\7@\2\2\u00ae\u00af\7@\2\2\u00af\u00b0\7@\2\2\u00b0"+
		"\20\3\2\2\2\u00b1\u00b2\7@\2\2\u00b2\u00b3\7@\2\2\u00b3\22\3\2\2\2\u00b4"+
		"\u00b5\7@\2\2\u00b5\24\3\2\2\2\u00b6\u00b7\7>\2\2\u00b7\u00b8\7>\2\2\u00b8"+
		"\u00b9\7>\2\2\u00b9\26\3\2\2\2\u00ba\u00bb\7>\2\2\u00bb\u00bc\7>\2\2\u00bc"+
		"\30\3\2\2\2\u00bd\u00be\7>\2\2\u00be\32\3\2\2\2\u00bf\u00c0\7-\2\2\u00c0"+
		"\u00c1\7-\2\2\u00c1\u00c2\7-\2\2\u00c2\34\3\2\2\2\u00c3\u00c4\7-\2\2\u00c4"+
		"\u00c5\7-\2\2\u00c5\36\3\2\2\2\u00c6\u00c7\7-\2\2\u00c7 \3\2\2\2\u00c8"+
		"\u00c9\7\u2297\2\2\u00c9\"\3\2\2\2\u00ca\u00cb\7/\2\2\u00cb\u00cc\7/\2"+
		"\2\u00cc\u00cd\7/\2\2\u00cd$\3\2\2\2\u00ce\u00cf\7/\2\2\u00cf\u00d0\7"+
		"/\2\2\u00d0&\3\2\2\2\u00d1\u00d2\7/\2\2\u00d2(\3\2\2\2\u00d3\u00d4\7\u2298"+
		"\2\2\u00d4*\3\2\2\2\u00d5\u00d6\7,\2\2\u00d6\u00d7\7,\2\2\u00d7\u00d8"+
		"\7,\2\2\u00d8,\3\2\2\2\u00d9\u00da\7,\2\2\u00da\u00db\7,\2\2\u00db.\3"+
		"\2\2\2\u00dc\u00dd\7,\2\2\u00dd\60\3\2\2\2\u00de\u00df\7\u00d9\2\2\u00df"+
		"\62\3\2\2\2\u00e0\u00e1\7\u2299\2\2\u00e1\64\3\2\2\2\u00e2\u00e3\7\u229b"+
		"\2\2\u00e3\66\3\2\2\2\u00e4\u00e5\7\61\2\2\u00e5\u00e6\7\61\2\2\u00e6"+
		"8\3\2\2\2\u00e7\u00e8\7\61\2\2\u00e8:\3\2\2\2\u00e9\u00ea\7\u229a\2\2"+
		"\u00ea<\3\2\2\2\u00eb\u00ec\7\u00f9\2\2\u00ec>\3\2\2\2\u00ed\u00ee\7\'"+
		"\2\2\u00ee\u00ef\7\'\2\2\u00ef@\3\2\2\2\u00f0\u00f1\7\'\2\2\u00f1B\3\2"+
		"\2\2\u00f2\u00f3\7`\2\2\u00f3\u00f4\7`\2\2\u00f4D\3\2\2\2\u00f5\u00f6"+
		"\7`\2\2\u00f6F\3\2\2\2\u00f7\u00f8\7\u221c\2\2\u00f8H\3\2\2\2\u00f9\u00fa"+
		"\7?\2\2\u00fa\u00fb\7?\2\2\u00fb\u00fc\7?\2\2\u00fcJ\3\2\2\2\u00fd\u00fe"+
		"\7?\2\2\u00fe\u00ff\7?\2\2\u00ffL\3\2\2\2\u0100\u0101\7?\2\2\u0101N\3"+
		"\2\2\2\u0102\u0103\7#\2\2\u0103\u0106\7?\2\2\u0104\u0106\7\u2262\2\2\u0105"+
		"\u0102\3\2\2\2\u0105\u0104\3\2\2\2\u0106P\3\2\2\2\u0107\u0108\7?\2\2\u0108"+
		"\u0109\7#\2\2\u0109\u010a\7?\2\2\u010aR\3\2\2\2\u010b\u010c\7@\2\2\u010c"+
		"\u010d\7?\2\2\u010dT\3\2\2\2\u010e\u010f\7>\2\2\u010f\u0110\7?\2\2\u0110"+
		"V\3\2\2\2\u0111\u0112\7~\2\2\u0112\u0113\7~\2\2\u0113\u0114\7~\2\2\u0114"+
		"X\3\2\2\2\u0115\u0116\7~\2\2\u0116\u0117\7~\2\2\u0117Z\3\2\2\2\u0118\u0119"+
		"\7~\2\2\u0119\\\3\2\2\2\u011a\u011b\7%\2\2\u011b\u011c\7%\2\2\u011c^\3"+
		"\2\2\2\u011d\u011e\7%\2\2\u011e`\3\2\2\2\u011f\u0120\7&\2\2\u0120\u0121"+
		"\7&\2\2\u0121b\3\2\2\2\u0122\u0123\7&\2\2\u0123d\3\2\2\2\u0124\u0125\7"+
		"B\2\2\u0125\u0126\7B\2\2\u0126\u0127\7B\2\2\u0127f\3\2\2\2\u0128\u0129"+
		"\7B\2\2\u0129\u012a\7B\2\2\u012ah\3\2\2\2\u012b\u012c\7B\2\2\u012cj\3"+
		"\2\2\2\u012d\u012e\7<\2\2\u012e\u012f\7<\2\2\u012fl\3\2\2\2\u0130\u0131"+
		"\7<\2\2\u0131n\3\2\2\2\u0132\u0133\7b\2\2\u0133\u0134\7b\2\2\u0134p\3"+
		"\2\2\2\u0135\u0136\7b\2\2\u0136r\3\2\2\2\u0137\u0138\7#\2\2\u0138\u0139"+
		"\7#\2\2\u0139t\3\2\2\2\u013a\u013b\7#\2\2\u013bv\3\2\2\2\u013c\u013d\7"+
		"\60\2\2\u013dx\3\2\2\2\u013e\u013f\7.\2\2\u013fz\3\2\2\2\u0140\u0141\7"+
		")\2\2\u0141|\3\2\2\2\u0142\u0143\7?\2\2\u0143\u0144\7>\2\2\u0144~\3\2"+
		"\2\2\u0145\u0146\7<\2\2\u0146\u0147\7?\2\2\u0147\u0080\3\2\2\2\u0148\u0149"+
		"\7`\2\2\u0149\u014a\7?\2\2\u014a\u0082\3\2\2\2\u014b\u014c\7-\2\2\u014c"+
		"\u014d\7?\2\2\u014d\u0084\3\2\2\2\u014e\u014f\7/\2\2\u014f\u0150\7?\2"+
		"\2\u0150\u0086\3\2\2\2\u0151\u0152\7\61\2\2\u0152\u0153\7B\2\2\u0153\u0088"+
		"\3\2\2\2\u0154\u0155\7\61\2\2\u0155\u0156\7\61\2\2\u0156\u0157\7B\2\2"+
		"\u0157\u008a\3\2\2\2\u0158\u0159\7/\2\2\u0159\u015c\7@\2\2\u015a\u015c"+
		"\7\u2194\2\2\u015b\u0158\3\2\2\2\u015b\u015a\3\2\2\2\u015c\u008c\3\2\2"+
		"\2\u015d\u015e\7?\2\2\u015e\u0161\7@\2\2\u015f\u0161\7\u27fb\2\2\u0160"+
		"\u015d\3\2\2\2\u0160\u015f\3\2\2\2\u0161\u008e\3\2\2\2\u0162\u0163\7>"+
		"\2\2\u0163\u0164\7@\2\2\u0164\u0090\3\2\2\2\u0165\u0166\7>\2\2\u0166\u0167"+
		"\7/\2\2\u0167\u0168\7@\2\2\u0168\u0092\3\2\2\2\u0169\u016a\7>\2\2\u016a"+
		"\u016b\7?\2\2\u016b\u016e\7@\2\2\u016c\u016e\7\u27fc\2\2\u016d\u0169\3"+
		"\2\2\2\u016d\u016c\3\2\2\2\u016e\u0094\3\2\2\2\u016f\u0176\5M\'\2\u0170"+
		"\u0176\5}?\2\u0171\u0176\5\177@\2\u0172\u0176\5\u0081A\2\u0173\u0176\5"+
		"\u0083B\2\u0174\u0176\5\u0085C\2\u0175\u016f\3\2\2\2\u0175\u0170\3\2\2"+
		"\2\u0175\u0171\3\2\2\2\u0175\u0172\3\2\2\2\u0175\u0173\3\2\2\2\u0175\u0174"+
		"\3\2\2\2\u0176\u0096\3\2\2\2\u0177\u0180\5K&\2\u0178\u0180\5O(\2\u0179"+
		"\u0180\5I%\2\u017a\u0180\5Q)\2\u017b\u0180\5\23\n\2\u017c\u0180\5S*\2"+
		"\u017d\u0180\5\31\r\2\u017e\u0180\5U+\2\u017f\u0177\3\2\2\2\u017f\u0178"+
		"\3\2\2\2\u017f\u0179\3\2\2\2\u017f\u017a\3\2\2\2\u017f\u017b\3\2\2\2\u017f"+
		"\u017c\3\2\2\2\u017f\u017d\3\2\2\2\u017f\u017e\3\2\2\2\u0180\u0098\3\2"+
		"\2\2\u0181\u0184\5E#\2\u0182\u0184\5G$\2\u0183\u0181\3\2\2\2\u0183\u0182"+
		"\3\2\2\2\u0184\u009a\3\2\2\2\u0185\u018a\5\61\31\2\u0186\u018a\59\35\2"+
		"\u0187\u018a\5/\30\2\u0188\u018a\5\63\32\2\u0189\u0185\3\2\2\2\u0189\u0186"+
		"\3\2\2\2\u0189\u0187\3\2\2\2\u0189\u0188\3\2\2\2\u018a\u009c\3\2\2\2\u018b"+
		"\u018e\5\37\20\2\u018c\u018e\5\'\24\2\u018d\u018b\3\2\2\2\u018d\u018c"+
		"\3\2\2\2\u018e\u009e\3\2\2\2\u018f\u0192\5\27\f\2\u0190\u0192\5\21\t\2"+
		"\u0191\u018f\3\2\2\2\u0191\u0190\3\2\2\2\u0192\u00a0\3\2\2\2\r\2\u0105"+
		"\u015b\u0160\u016d\u0175\u017f\u0183\u0189\u018d\u0191\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}