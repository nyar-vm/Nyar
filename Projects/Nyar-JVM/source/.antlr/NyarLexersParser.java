// Generated from d:\Hybrid\Nyar\Projects\Antlr4/NyarLexers.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NyarLexersParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		STRING=1, INTEGER=2, REAL=3, WhiteSpace=4, NewLine=5, Comment=6, Using=7, 
		Exposing=8, With=9, As=10, Macro=11, Template=12, Interface=13, Class=14, 
		Extends=15, Mixin=16, Setter=17, Getter=18, Public=19, Private=20, Protected=21, 
		Final=22, Try=23, Catch=24, For=25, In=26, SYMBOL=27, LS=28, RS=29, LM=30, 
		RM=31, LL=32, RL=33, Export=34, RightShift=35, Grater=36, Import=37, LeftShift=38, 
		Less=39, Plus3=40, Increase=41, Add=42, Unknow1=43, Minus3=44, Decrease=45, 
		Subtract=46, Unknow2=47, NullSequence=48, Sequence=49, Times=50, Multiply=51, 
		Kronecker=52, Unknow3=53, Remainder=54, Divide=55, Unknow4=56, Quotient=57, 
		Output=58, Mod=59, BaseInput=60, Power=61, Root=62, Equivalent=63, Equal=64, 
		Set=65, NotEqual=66, NotEquivalent=67, GraterEqual=68, LessEqual=69, Bar3=70, 
		Bar2=71, Bar=72, SlotSequence=73, Slot=74, PostfixFunction=75, AnonymousFunction=76, 
		Curry=77, Apply=78, At=79, Type=80, Colon=81, Accuracy=82, Quote=83, Bang2=84, 
		Bang=85, Dot=86, Comma=87, Quotation=88, SetConstant=89, DelayedSet=90, 
		UpSet=91, SetAddTo=92, SetMinusFrom=93, Map=94, MapAll=95, To=96, Infer=97, 
		Concat=98, Unknow5=99, Unknow6=100, AssignmentOperator=101, LogicOperator=102, 
		PowerLike=103, MultiplyLike=104, AddLike=105, BinaryOperator=106;
	public static final int
		RULE_expression = 0, RULE_list = 1, RULE_record = 2, RULE_keyValue = 3;
	public static final String[] ruleNames = {
		"expression", "list", "record", "keyValue"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, null, "'Using'", "'Exposing'", "'With'", 
		"'As'", "'Macro'", "'Template'", "'Interface'", "'Class'", "'Extends'", 
		"'Mixin'", "'Setter'", "'Getter'", "'Public'", "'Private'", "'Protected'", 
		"'Final'", "'Try'", "'Catch'", "'For'", "'In'", null, "'('", "')'", "'['", 
		"']'", "'{'", "'}'", "'>>>'", "'>>'", "'>'", "'<<<'", "'<<'", "'<'", "'+++'", 
		"'++'", "'+'", "'\u2295'", "'---'", "'--'", "'-'", "'\u2296'", "'***'", 
		"'**'", "'*'", "'\u00D7'", "'\u2297'", "'\u2299'", "'//'", "'/'", "'\u2298'", 
		"'\u00F7'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", "'=='", 
		"'='", null, "'=!='", "'>='", "'<='", "'|||'", "'||'", "'|'", "'##'", 
		"'#'", "'$$'", "'$'", "'@@@'", "'@@'", "'@'", "'::'", "':'", "'``'", "'`'", 
		"'!!'", "'!'", "'.'", "','", "'''", "'=<'", "':='", "'^='", "'+='", "'-='", 
		"'/@'", "'//@'", null, null, "'<>'", "'<->'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", "Comment", 
		"Using", "Exposing", "With", "As", "Macro", "Template", "Interface", "Class", 
		"Extends", "Mixin", "Setter", "Getter", "Public", "Private", "Protected", 
		"Final", "Try", "Catch", "For", "In", "SYMBOL", "LS", "RS", "LM", "RM", 
		"LL", "RL", "Export", "RightShift", "Grater", "Import", "LeftShift", "Less", 
		"Plus3", "Increase", "Add", "Unknow1", "Minus3", "Decrease", "Subtract", 
		"Unknow2", "NullSequence", "Sequence", "Times", "Multiply", "Kronecker", 
		"Unknow3", "Remainder", "Divide", "Unknow4", "Quotient", "Output", "Mod", 
		"BaseInput", "Power", "Root", "Equivalent", "Equal", "Set", "NotEqual", 
		"NotEquivalent", "GraterEqual", "LessEqual", "Bar3", "Bar2", "Bar", "SlotSequence", 
		"Slot", "PostfixFunction", "AnonymousFunction", "Curry", "Apply", "At", 
		"Type", "Colon", "Accuracy", "Quote", "Bang2", "Bang", "Dot", "Comma", 
		"Quotation", "SetConstant", "DelayedSet", "UpSet", "SetAddTo", "SetMinusFrom", 
		"Map", "MapAll", "To", "Infer", "Concat", "Unknow5", "Unknow6", "AssignmentOperator", 
		"LogicOperator", "PowerLike", "MultiplyLike", "AddLike", "BinaryOperator"
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

	@Override
	public String getGrammarFileName() { return "NyarLexers.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NyarLexersParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IntegerContext extends ExpressionContext {
		public Token atom;
		public TerminalNode INTEGER() { return getToken(NyarLexersParser.INTEGER, 0); }
		public IntegerContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class Multiply_Divide_Context extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode MultiplyLike() { return getToken(NyarLexersParser.MultiplyLike, 0); }
		public Multiply_Divide_Context(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class SymbolContext extends ExpressionContext {
		public Token atom;
		public TerminalNode SYMBOL() { return getToken(NyarLexersParser.SYMBOL, 0); }
		public SymbolContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class RealContext extends ExpressionContext {
		public Token atom;
		public TerminalNode REAL() { return getToken(NyarLexersParser.REAL, 0); }
		public RealContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class Binary_Context extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode BinaryOperator() { return getToken(NyarLexersParser.BinaryOperator, 0); }
		public Binary_Context(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class StringContext extends ExpressionContext {
		public Token atom;
		public TerminalNode STRING() { return getToken(NyarLexersParser.STRING, 0); }
		public StringContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class Logic_Context extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode LogicOperator() { return getToken(NyarLexersParser.LogicOperator, 0); }
		public Logic_Context(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class Power_Context extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode PowerLike() { return getToken(NyarLexersParser.PowerLike, 0); }
		public Power_Context(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class PriorityOperationContext extends ExpressionContext {
		public TerminalNode LS() { return getToken(NyarLexersParser.LS, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RS() { return getToken(NyarLexersParser.RS, 0); }
		public PriorityOperationContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class Add_Subtract_Context extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode AddLike() { return getToken(NyarLexersParser.AddLike, 0); }
		public Add_Subtract_Context(ExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 0;
		enterRecursionRule(_localctx, 0, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(17);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING:
				{
				_localctx = new StringContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(9);
				((StringContext)_localctx).atom = match(STRING);
				}
				break;
			case REAL:
				{
				_localctx = new RealContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(10);
				((RealContext)_localctx).atom = match(REAL);
				}
				break;
			case INTEGER:
				{
				_localctx = new IntegerContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(11);
				((IntegerContext)_localctx).atom = match(INTEGER);
				}
				break;
			case SYMBOL:
				{
				_localctx = new SymbolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(12);
				((SymbolContext)_localctx).atom = match(SYMBOL);
				}
				break;
			case LS:
				{
				_localctx = new PriorityOperationContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(13);
				match(LS);
				setState(14);
				expression(0);
				setState(15);
				match(RS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(36);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(34);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
					case 1:
						{
						_localctx = new Logic_Context(new ExpressionContext(_parentctx, _parentState));
						((Logic_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(19);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(20);
						((Logic_Context)_localctx).op = match(LogicOperator);
						setState(21);
						((Logic_Context)_localctx).right = expression(11);
						}
						break;
					case 2:
						{
						_localctx = new Power_Context(new ExpressionContext(_parentctx, _parentState));
						((Power_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(22);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(23);
						((Power_Context)_localctx).op = match(PowerLike);
						setState(24);
						((Power_Context)_localctx).right = expression(9);
						}
						break;
					case 3:
						{
						_localctx = new Multiply_Divide_Context(new ExpressionContext(_parentctx, _parentState));
						((Multiply_Divide_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(25);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(26);
						((Multiply_Divide_Context)_localctx).op = match(MultiplyLike);
						setState(27);
						((Multiply_Divide_Context)_localctx).right = expression(9);
						}
						break;
					case 4:
						{
						_localctx = new Add_Subtract_Context(new ExpressionContext(_parentctx, _parentState));
						((Add_Subtract_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(28);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(29);
						((Add_Subtract_Context)_localctx).op = match(AddLike);
						setState(30);
						((Add_Subtract_Context)_localctx).right = expression(8);
						}
						break;
					case 5:
						{
						_localctx = new Binary_Context(new ExpressionContext(_parentctx, _parentState));
						((Binary_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(31);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(32);
						((Binary_Context)_localctx).op = match(BinaryOperator);
						setState(33);
						((Binary_Context)_localctx).right = expression(7);
						}
						break;
					}
					} 
				}
				setState(38);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ListContext extends ParserRuleContext {
		public TerminalNode LM() { return getToken(NyarLexersParser.LM, 0); }
		public TerminalNode RM() { return getToken(NyarLexersParser.RM, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(NyarLexersParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(NyarLexersParser.Comma, i);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(39);
			match(LM);
			setState(46);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << INTEGER) | (1L << REAL) | (1L << SYMBOL) | (1L << LS))) != 0)) {
				{
				{
				setState(40);
				expression(0);
				setState(42);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(41);
					match(Comma);
					}
				}

				}
				}
				setState(48);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(49);
			match(RM);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RecordContext extends ParserRuleContext {
		public TerminalNode LL() { return getToken(NyarLexersParser.LL, 0); }
		public TerminalNode RL() { return getToken(NyarLexersParser.RL, 0); }
		public List<KeyValueContext> keyValue() {
			return getRuleContexts(KeyValueContext.class);
		}
		public KeyValueContext keyValue(int i) {
			return getRuleContext(KeyValueContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(NyarLexersParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(NyarLexersParser.Comma, i);
		}
		public RecordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_record; }
	}

	public final RecordContext record() throws RecognitionException {
		RecordContext _localctx = new RecordContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_record);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(51);
			match(LL);
			setState(58);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SYMBOL) {
				{
				{
				setState(52);
				keyValue();
				setState(54);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(53);
					match(Comma);
					}
				}

				}
				}
				setState(60);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(61);
			match(RL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KeyValueContext extends ParserRuleContext {
		public Token key;
		public ExpressionContext value;
		public TerminalNode Colon() { return getToken(NyarLexersParser.Colon, 0); }
		public TerminalNode SYMBOL() { return getToken(NyarLexersParser.SYMBOL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public KeyValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyValue; }
	}

	public final KeyValueContext keyValue() throws RecognitionException {
		KeyValueContext _localctx = new KeyValueContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_keyValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			((KeyValueContext)_localctx).key = match(SYMBOL);
			setState(64);
			match(Colon);
			setState(65);
			((KeyValueContext)_localctx).value = expression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 0:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 10);
		case 1:
			return precpred(_ctx, 9);
		case 2:
			return precpred(_ctx, 8);
		case 3:
			return precpred(_ctx, 7);
		case 4:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3lF\4\2\t\2\4\3\t\3"+
		"\4\4\t\4\4\5\t\5\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\5\2\24\n\2\3\2\3"+
		"\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\7\2%\n\2\f\2\16"+
		"\2(\13\2\3\3\3\3\3\3\5\3-\n\3\7\3/\n\3\f\3\16\3\62\13\3\3\3\3\3\3\4\3"+
		"\4\3\4\5\49\n\4\7\4;\n\4\f\4\16\4>\13\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\2"+
		"\3\2\6\2\4\6\b\2\2\2N\2\23\3\2\2\2\4)\3\2\2\2\6\65\3\2\2\2\bA\3\2\2\2"+
		"\n\13\b\2\1\2\13\24\7\3\2\2\f\24\7\5\2\2\r\24\7\4\2\2\16\24\7\35\2\2\17"+
		"\20\7\36\2\2\20\21\5\2\2\2\21\22\7\37\2\2\22\24\3\2\2\2\23\n\3\2\2\2\23"+
		"\f\3\2\2\2\23\r\3\2\2\2\23\16\3\2\2\2\23\17\3\2\2\2\24&\3\2\2\2\25\26"+
		"\f\f\2\2\26\27\7h\2\2\27%\5\2\2\r\30\31\f\13\2\2\31\32\7i\2\2\32%\5\2"+
		"\2\13\33\34\f\n\2\2\34\35\7j\2\2\35%\5\2\2\13\36\37\f\t\2\2\37 \7k\2\2"+
		" %\5\2\2\n!\"\f\b\2\2\"#\7l\2\2#%\5\2\2\t$\25\3\2\2\2$\30\3\2\2\2$\33"+
		"\3\2\2\2$\36\3\2\2\2$!\3\2\2\2%(\3\2\2\2&$\3\2\2\2&\'\3\2\2\2\'\3\3\2"+
		"\2\2(&\3\2\2\2)\60\7 \2\2*,\5\2\2\2+-\7Y\2\2,+\3\2\2\2,-\3\2\2\2-/\3\2"+
		"\2\2.*\3\2\2\2/\62\3\2\2\2\60.\3\2\2\2\60\61\3\2\2\2\61\63\3\2\2\2\62"+
		"\60\3\2\2\2\63\64\7!\2\2\64\5\3\2\2\2\65<\7\"\2\2\668\5\b\5\2\679\7Y\2"+
		"\28\67\3\2\2\289\3\2\2\29;\3\2\2\2:\66\3\2\2\2;>\3\2\2\2<:\3\2\2\2<=\3"+
		"\2\2\2=?\3\2\2\2><\3\2\2\2?@\7#\2\2@\7\3\2\2\2AB\7\35\2\2BC\7S\2\2CD\5"+
		"\2\2\2D\t\3\2\2\2\t\23$&,\608<";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}