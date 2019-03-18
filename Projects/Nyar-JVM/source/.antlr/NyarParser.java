// Generated from D:/Hybrid/Nyar/Projects/Antlr4\Nyar.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NyarParser extends Parser {
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
	public static final int
		RULE_program = 0, RULE_statement = 1, RULE_expressionStatement = 2, RULE_moduleStatement = 3, 
		RULE_assignStatement = 4, RULE_macroStatement = 5, RULE_templateStatement = 6, 
		RULE_interfaceStatement = 7, RULE_classStatement = 8, RULE_expression = 9, 
		RULE_list = 10, RULE_record = 11, RULE_keyValue = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "statement", "expressionStatement", "moduleStatement", "assignStatement", 
			"macroStatement", "templateStatement", "interfaceStatement", "classStatement", 
			"expression", "list", "record", "keyValue"
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

	@Override
	public String getGrammarFileName() { return "Nyar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NyarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(NyarParser.EOF, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterProgram(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitProgram(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitProgram(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << INTEGER) | (1L << REAL) | (1L << Using) | (1L << Exposing) | (1L << Macro) | (1L << Template) | (1L << Interface) | (1L << Class) | (1L << SYMBOL) | (1L << LS))) != 0)) {
				{
				{
				setState(26);
				statement();
				}
				}
				setState(31);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(32);
			match(EOF);
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

	public static class StatementContext extends ParserRuleContext {
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public ModuleStatementContext moduleStatement() {
			return getRuleContext(ModuleStatementContext.class,0);
		}
		public AssignStatementContext assignStatement() {
			return getRuleContext(AssignStatementContext.class,0);
		}
		public MacroStatementContext macroStatement() {
			return getRuleContext(MacroStatementContext.class,0);
		}
		public TemplateStatementContext templateStatement() {
			return getRuleContext(TemplateStatementContext.class,0);
		}
		public InterfaceStatementContext interfaceStatement() {
			return getRuleContext(InterfaceStatementContext.class,0);
		}
		public ClassStatementContext classStatement() {
			return getRuleContext(ClassStatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(41);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(34);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(35);
				moduleStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(36);
				assignStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(37);
				macroStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(38);
				templateStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(39);
				interfaceStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(40);
				classStatement();
				}
				break;
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

	public static class ExpressionStatementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterExpressionStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitExpressionStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitExpressionStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionStatementContext expressionStatement() throws RecognitionException {
		ExpressionStatementContext _localctx = new ExpressionStatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_expressionStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(43);
			expression(0);
			setState(44);
			match(T__0);
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

	public static class ModuleStatementContext extends ParserRuleContext {
		public Token core;
		public Token source;
		public Token name;
		public TerminalNode Using() { return getToken(NyarParser.Using, 0); }
		public TerminalNode SYMBOL() { return getToken(NyarParser.SYMBOL, 0); }
		public TerminalNode As() { return getToken(NyarParser.As, 0); }
		public TerminalNode STRING() { return getToken(NyarParser.STRING, 0); }
		public TerminalNode With() { return getToken(NyarParser.With, 0); }
		public TerminalNode Exposing() { return getToken(NyarParser.Exposing, 0); }
		public ModuleStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterModuleStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitModuleStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitModuleStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ModuleStatementContext moduleStatement() throws RecognitionException {
		ModuleStatementContext _localctx = new ModuleStatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_moduleStatement);
		try {
			setState(58);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(46);
				match(Using);
				setState(47);
				((ModuleStatementContext)_localctx).core = match(SYMBOL);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(48);
				match(Using);
				setState(49);
				((ModuleStatementContext)_localctx).source = match(STRING);
				setState(50);
				match(As);
				setState(51);
				((ModuleStatementContext)_localctx).name = match(SYMBOL);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(52);
				match(Using);
				setState(53);
				((ModuleStatementContext)_localctx).source = match(STRING);
				setState(54);
				match(With);
				setState(55);
				((ModuleStatementContext)_localctx).name = match(SYMBOL);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(56);
				match(Exposing);
				setState(57);
				((ModuleStatementContext)_localctx).source = match(STRING);
				}
				break;
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

	public static class AssignStatementContext extends ParserRuleContext {
		public TerminalNode SYMBOL() { return getToken(NyarParser.SYMBOL, 0); }
		public TerminalNode AssignmentOperator() { return getToken(NyarParser.AssignmentOperator, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AssignStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AssignStatementContext assignStatement() throws RecognitionException {
		AssignStatementContext _localctx = new AssignStatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_assignStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			match(SYMBOL);
			setState(61);
			match(AssignmentOperator);
			setState(62);
			expression(0);
			setState(63);
			match(T__0);
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

	public static class MacroStatementContext extends ParserRuleContext {
		public TerminalNode Macro() { return getToken(NyarParser.Macro, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public MacroStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macroStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMacroStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMacroStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMacroStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final MacroStatementContext macroStatement() throws RecognitionException {
		MacroStatementContext _localctx = new MacroStatementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_macroStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			match(Macro);
			setState(66);
			expression(0);
			setState(67);
			match(T__0);
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

	public static class TemplateStatementContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(NyarParser.Template, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TemplateStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterTemplateStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitTemplateStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitTemplateStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TemplateStatementContext templateStatement() throws RecognitionException {
		TemplateStatementContext _localctx = new TemplateStatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_templateStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			match(Template);
			setState(70);
			expression(0);
			setState(71);
			match(T__0);
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

	public static class InterfaceStatementContext extends ParserRuleContext {
		public TerminalNode Interface() { return getToken(NyarParser.Interface, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public InterfaceStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interfaceStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterInterfaceStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitInterfaceStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitInterfaceStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InterfaceStatementContext interfaceStatement() throws RecognitionException {
		InterfaceStatementContext _localctx = new InterfaceStatementContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_interfaceStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			match(Interface);
			setState(74);
			expression(0);
			setState(75);
			match(T__0);
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

	public static class ClassStatementContext extends ParserRuleContext {
		public TerminalNode Class() { return getToken(NyarParser.Class, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ClassStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ClassStatementContext classStatement() throws RecognitionException {
		ClassStatementContext _localctx = new ClassStatementContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_classStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(Class);
			setState(78);
			expression(0);
			setState(79);
			match(T__0);
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
		public TerminalNode INTEGER() { return getToken(NyarParser.INTEGER, 0); }
		public IntegerContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitInteger(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitInteger(this);
			else return visitor.visitChildren(this);
		}
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
		public TerminalNode MultiplyLike() { return getToken(NyarParser.MultiplyLike, 0); }
		public Multiply_Divide_Context(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMultiply_Divide_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMultiply_Divide_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMultiply_Divide_(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class List_Context extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode ListOperator() { return getToken(NyarParser.ListOperator, 0); }
		public List_Context(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterList_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitList_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitList_(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class SymbolContext extends ExpressionContext {
		public Token atom;
		public TerminalNode SYMBOL() { return getToken(NyarParser.SYMBOL, 0); }
		public SymbolContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterSymbol(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitSymbol(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitSymbol(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class RealContext extends ExpressionContext {
		public Token atom;
		public TerminalNode REAL() { return getToken(NyarParser.REAL, 0); }
		public RealContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterReal(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitReal(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitReal(this);
			else return visitor.visitChildren(this);
		}
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
		public TerminalNode BinaryOperator() { return getToken(NyarParser.BinaryOperator, 0); }
		public Binary_Context(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterBinary_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitBinary_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitBinary_(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StringContext extends ExpressionContext {
		public Token atom;
		public TerminalNode STRING() { return getToken(NyarParser.STRING, 0); }
		public StringContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitString(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitString(this);
			else return visitor.visitChildren(this);
		}
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
		public TerminalNode LogicOperator() { return getToken(NyarParser.LogicOperator, 0); }
		public Logic_Context(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterLogic_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitLogic_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitLogic_(this);
			else return visitor.visitChildren(this);
		}
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
		public TerminalNode PowerLike() { return getToken(NyarParser.PowerLike, 0); }
		public Power_Context(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPower_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPower_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPower_(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PriorityOperationContext extends ExpressionContext {
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public PriorityOperationContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPriorityOperation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPriorityOperation(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPriorityOperation(this);
			else return visitor.visitChildren(this);
		}
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
		public TerminalNode AddLike() { return getToken(NyarParser.AddLike, 0); }
		public Add_Subtract_Context(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAdd_Subtract_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAdd_Subtract_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAdd_Subtract_(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING:
				{
				_localctx = new StringContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(82);
				((StringContext)_localctx).atom = match(STRING);
				}
				break;
			case REAL:
				{
				_localctx = new RealContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(83);
				((RealContext)_localctx).atom = match(REAL);
				}
				break;
			case INTEGER:
				{
				_localctx = new IntegerContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(84);
				((IntegerContext)_localctx).atom = match(INTEGER);
				}
				break;
			case SYMBOL:
				{
				_localctx = new SymbolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(85);
				((SymbolContext)_localctx).atom = match(SYMBOL);
				}
				break;
			case LS:
				{
				_localctx = new PriorityOperationContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(86);
				match(LS);
				setState(87);
				expression(0);
				setState(88);
				match(RS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(112);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(110);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new Binary_Context(new ExpressionContext(_parentctx, _parentState));
						((Binary_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(92);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(93);
						((Binary_Context)_localctx).op = match(BinaryOperator);
						setState(94);
						((Binary_Context)_localctx).right = expression(12);
						}
						break;
					case 2:
						{
						_localctx = new Logic_Context(new ExpressionContext(_parentctx, _parentState));
						((Logic_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(95);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(96);
						((Logic_Context)_localctx).op = match(LogicOperator);
						setState(97);
						((Logic_Context)_localctx).right = expression(11);
						}
						break;
					case 3:
						{
						_localctx = new Power_Context(new ExpressionContext(_parentctx, _parentState));
						((Power_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(98);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(99);
						((Power_Context)_localctx).op = match(PowerLike);
						setState(100);
						((Power_Context)_localctx).right = expression(9);
						}
						break;
					case 4:
						{
						_localctx = new Multiply_Divide_Context(new ExpressionContext(_parentctx, _parentState));
						((Multiply_Divide_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(101);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(102);
						((Multiply_Divide_Context)_localctx).op = match(MultiplyLike);
						setState(103);
						((Multiply_Divide_Context)_localctx).right = expression(9);
						}
						break;
					case 5:
						{
						_localctx = new Add_Subtract_Context(new ExpressionContext(_parentctx, _parentState));
						((Add_Subtract_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(104);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(105);
						((Add_Subtract_Context)_localctx).op = match(AddLike);
						setState(106);
						((Add_Subtract_Context)_localctx).right = expression(8);
						}
						break;
					case 6:
						{
						_localctx = new List_Context(new ExpressionContext(_parentctx, _parentState));
						((List_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(107);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(108);
						((List_Context)_localctx).op = match(ListOperator);
						setState(109);
						((List_Context)_localctx).right = expression(7);
						}
						break;
					}
					} 
				}
				setState(114);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
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
		public TerminalNode LM() { return getToken(NyarParser.LM, 0); }
		public TerminalNode RM() { return getToken(NyarParser.RM, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(NyarParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(NyarParser.Comma, i);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(LM);
			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << INTEGER) | (1L << REAL) | (1L << SYMBOL) | (1L << LS))) != 0)) {
				{
				{
				setState(116);
				expression(0);
				setState(118);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(117);
					match(Comma);
					}
				}

				}
				}
				setState(124);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(125);
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
		public TerminalNode LL() { return getToken(NyarParser.LL, 0); }
		public TerminalNode RL() { return getToken(NyarParser.RL, 0); }
		public List<KeyValueContext> keyValue() {
			return getRuleContexts(KeyValueContext.class);
		}
		public KeyValueContext keyValue(int i) {
			return getRuleContext(KeyValueContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(NyarParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(NyarParser.Comma, i);
		}
		public RecordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_record; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterRecord(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitRecord(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitRecord(this);
			else return visitor.visitChildren(this);
		}
	}

	public final RecordContext record() throws RecognitionException {
		RecordContext _localctx = new RecordContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_record);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			match(LL);
			setState(134);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SYMBOL) {
				{
				{
				setState(128);
				keyValue();
				setState(130);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(129);
					match(Comma);
					}
				}

				}
				}
				setState(136);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(137);
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
		public TerminalNode Colon() { return getToken(NyarParser.Colon, 0); }
		public TerminalNode SYMBOL() { return getToken(NyarParser.SYMBOL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public KeyValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyValue; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterKeyValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitKeyValue(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitKeyValue(this);
			else return visitor.visitChildren(this);
		}
	}

	public final KeyValueContext keyValue() throws RecognitionException {
		KeyValueContext _localctx = new KeyValueContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_keyValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(139);
			((KeyValueContext)_localctx).key = match(SYMBOL);
			setState(140);
			match(Colon);
			setState(141);
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
		case 9:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 11);
		case 1:
			return precpred(_ctx, 10);
		case 2:
			return precpred(_ctx, 9);
		case 3:
			return precpred(_ctx, 8);
		case 4:
			return precpred(_ctx, 7);
		case 5:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3n\u0092\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\3\2\7\2\36\n\2\f\2\16\2!\13\2\3\2\3\2\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3,\n\3\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5=\n\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3"+
		"\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\5\13]\n\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13q\n\13\f\13"+
		"\16\13t\13\13\3\f\3\f\3\f\5\fy\n\f\7\f{\n\f\f\f\16\f~\13\f\3\f\3\f\3\r"+
		"\3\r\3\r\5\r\u0085\n\r\7\r\u0087\n\r\f\r\16\r\u008a\13\r\3\r\3\r\3\16"+
		"\3\16\3\16\3\16\3\16\2\3\24\17\2\4\6\b\n\f\16\20\22\24\26\30\32\2\2\2"+
		"\u009c\2\37\3\2\2\2\4+\3\2\2\2\6-\3\2\2\2\b<\3\2\2\2\n>\3\2\2\2\fC\3\2"+
		"\2\2\16G\3\2\2\2\20K\3\2\2\2\22O\3\2\2\2\24\\\3\2\2\2\26u\3\2\2\2\30\u0081"+
		"\3\2\2\2\32\u008d\3\2\2\2\34\36\5\4\3\2\35\34\3\2\2\2\36!\3\2\2\2\37\35"+
		"\3\2\2\2\37 \3\2\2\2 \"\3\2\2\2!\37\3\2\2\2\"#\7\2\2\3#\3\3\2\2\2$,\5"+
		"\6\4\2%,\5\b\5\2&,\5\n\6\2\',\5\f\7\2(,\5\16\b\2),\5\20\t\2*,\5\22\n\2"+
		"+$\3\2\2\2+%\3\2\2\2+&\3\2\2\2+\'\3\2\2\2+(\3\2\2\2+)\3\2\2\2+*\3\2\2"+
		"\2,\5\3\2\2\2-.\5\24\13\2./\7\3\2\2/\7\3\2\2\2\60\61\7\n\2\2\61=\7\36"+
		"\2\2\62\63\7\n\2\2\63\64\7\4\2\2\64\65\7\r\2\2\65=\7\36\2\2\66\67\7\n"+
		"\2\2\678\7\4\2\289\7\f\2\29=\7\36\2\2:;\7\13\2\2;=\7\4\2\2<\60\3\2\2\2"+
		"<\62\3\2\2\2<\66\3\2\2\2<:\3\2\2\2=\t\3\2\2\2>?\7\36\2\2?@\7h\2\2@A\5"+
		"\24\13\2AB\7\3\2\2B\13\3\2\2\2CD\7\16\2\2DE\5\24\13\2EF\7\3\2\2F\r\3\2"+
		"\2\2GH\7\17\2\2HI\5\24\13\2IJ\7\3\2\2J\17\3\2\2\2KL\7\20\2\2LM\5\24\13"+
		"\2MN\7\3\2\2N\21\3\2\2\2OP\7\21\2\2PQ\5\24\13\2QR\7\3\2\2R\23\3\2\2\2"+
		"ST\b\13\1\2T]\7\4\2\2U]\7\6\2\2V]\7\5\2\2W]\7\36\2\2XY\7\37\2\2YZ\5\24"+
		"\13\2Z[\7 \2\2[]\3\2\2\2\\S\3\2\2\2\\U\3\2\2\2\\V\3\2\2\2\\W\3\2\2\2\\"+
		"X\3\2\2\2]r\3\2\2\2^_\f\r\2\2_`\7i\2\2`q\5\24\13\16ab\f\f\2\2bc\7j\2\2"+
		"cq\5\24\13\rde\f\13\2\2ef\7k\2\2fq\5\24\13\13gh\f\n\2\2hi\7l\2\2iq\5\24"+
		"\13\13jk\f\t\2\2kl\7m\2\2lq\5\24\13\nmn\f\b\2\2no\7n\2\2oq\5\24\13\tp"+
		"^\3\2\2\2pa\3\2\2\2pd\3\2\2\2pg\3\2\2\2pj\3\2\2\2pm\3\2\2\2qt\3\2\2\2"+
		"rp\3\2\2\2rs\3\2\2\2s\25\3\2\2\2tr\3\2\2\2u|\7!\2\2vx\5\24\13\2wy\7Z\2"+
		"\2xw\3\2\2\2xy\3\2\2\2y{\3\2\2\2zv\3\2\2\2{~\3\2\2\2|z\3\2\2\2|}\3\2\2"+
		"\2}\177\3\2\2\2~|\3\2\2\2\177\u0080\7\"\2\2\u0080\27\3\2\2\2\u0081\u0088"+
		"\7#\2\2\u0082\u0084\5\32\16\2\u0083\u0085\7Z\2\2\u0084\u0083\3\2\2\2\u0084"+
		"\u0085\3\2\2\2\u0085\u0087\3\2\2\2\u0086\u0082\3\2\2\2\u0087\u008a\3\2"+
		"\2\2\u0088\u0086\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008b\3\2\2\2\u008a"+
		"\u0088\3\2\2\2\u008b\u008c\7$\2\2\u008c\31\3\2\2\2\u008d\u008e\7\36\2"+
		"\2\u008e\u008f\7T\2\2\u008f\u0090\5\24\13\2\u0090\33\3\2\2\2\f\37+<\\"+
		"prx|\u0084\u0088";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}