// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2
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
		Using=8, Exposing=9, With=10, As=11, Macro=12, MacroApply=13, Template=14, 
		TemplayeApply=15, Interface=16, Class=17, Extends=18, Mixin=19, Setter=20, 
		Getter=21, Public=22, Private=23, Protected=24, Final=25, Try=26, Catch=27, 
		For=28, In=29, Pi=30, E=31, I=32, EulerGamma=33, Plank=34, Reciprocal=35, 
		Derivative=36, IntegerField=37, RealField=38, ComplexField=39, SYMBOL=40, 
		Math=41, LS=42, RS=43, LM=44, RM=45, LL=46, RL=47, LCeil=48, RCeil=49, 
		LFloor=50, RFloor=51, LAngle=52, RAngle=53, Import=54, Export=55, LeftShift=56, 
		RightShift=57, Less=58, Grater=59, Plus3=60, Increase=61, Add=62, Minus3=63, 
		Decrease=64, Subtract=65, NullSequence=66, Sequence=67, Times=68, Remainder=69, 
		Divide=70, Quotient=71, Output=72, Mod=73, BaseInput=74, Power=75, Root=76, 
		Equivalent=77, Equal=78, Set=79, NotEqual=80, NotEquivalent=81, GraterEqual=82, 
		LessEqual=83, Bar3=84, Bar2=85, Bar=86, SlotSequence=87, Slot=88, PostfixFunction=89, 
		AnonymousFunction=90, Curry=91, Apply=92, At=93, Type=94, Colon=95, Quote=96, 
		Bang=97, Dot=98, Comma=99, Quotation=100, SetConstant=101, DelayedSet=102, 
		SetAddTo=103, SetMinusFrom=104, SetTimesTo=105, SetDivideFrom=106, SetModTo=107, 
		SetPowerTo=108, Clean=109, Map=110, MapAll=111, To=112, Infer=113, Concat=114, 
		Unknow5=115, Unknow6=116, Multiply=117, Kronecker=118, TensorProduct=119, 
		AssignmentOperator=120, BinaryOperator=121, LogicOperator=122, PowerLike=123, 
		MultiplyLike=124, AddLike=125, ListOperator=126;
	public static final int
		RULE_program = 0, RULE_statement = 1, RULE_expressionStatement = 2, RULE_moduleStatement = 3, 
		RULE_assignStatement = 4, RULE_macroStatement = 5, RULE_templateStatement = 6, 
		RULE_interfaceStatement = 7, RULE_classStatement = 8, RULE_expression = 9, 
		RULE_list = 10, RULE_record = 11, RULE_keyValue = 12, RULE_mathAlias = 13;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "statement", "expressionStatement", "moduleStatement", "assignStatement", 
			"macroStatement", "templateStatement", "interfaceStatement", "classStatement", 
			"expression", "list", "record", "keyValue", "mathAlias"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", null, null, null, null, null, null, "'Using'", "'Exposing'", 
			"'With'", "'As'", "'Macro'", "'\u00A7'", "'Template'", "'\u00B6'", "'Interface'", 
			"'Class'", "'Extends'", "'Mixin'", "'Setter'", "'Getter'", "'Public'", 
			"'Private'", "'Protected'", "'Final'", "'Try'", "'Catch'", "'For'", "'In'", 
			"'\u213C'", "'\u2147'", "'\u2148'", "'\u213D'", "'\u210E'", "'\u215F'", 
			"'\u2146'", "'\u2124'", "'\u211D'", "'\u2102'", null, null, "'('", "')'", 
			"'['", "']'", "'{'", "'}'", "'\u2308'", "'\u2309'", "'\u230A'", "'\u230B'", 
			"'\u27E8'", "'\u27E9'", null, null, null, null, "'<'", "'>'", "'+++'", 
			"'++'", "'+'", "'---'", "'--'", "'-'", "'***'", "'**'", "'*'", "'//'", 
			"'/'", "'\u00F7'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", 
			"'=='", "'='", null, "'=!='", "'>='", "'<='", "'|||'", "'||'", "'|'", 
			"'##'", "'#'", "'$$'", "'$'", "'@@@'", "'@@'", "'@'", null, "':'", "'`'", 
			"'!'", "'.'", "','", "'''", "'=<'", null, "'+='", "'-='", "'*='", "'/='", 
			"'%='", "'^='", "'=.'", "'/@'", "'//@'", null, null, "'<>'", "'<->'", 
			null, "'\u00D7'", "'\u2297'", "'\u2299'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", "Comment", 
			"Using", "Exposing", "With", "As", "Macro", "MacroApply", "Template", 
			"TemplayeApply", "Interface", "Class", "Extends", "Mixin", "Setter", 
			"Getter", "Public", "Private", "Protected", "Final", "Try", "Catch", 
			"For", "In", "Pi", "E", "I", "EulerGamma", "Plank", "Reciprocal", "Derivative", 
			"IntegerField", "RealField", "ComplexField", "SYMBOL", "Math", "LS", 
			"RS", "LM", "RM", "LL", "RL", "LCeil", "RCeil", "LFloor", "RFloor", "LAngle", 
			"RAngle", "Import", "Export", "LeftShift", "RightShift", "Less", "Grater", 
			"Plus3", "Increase", "Add", "Minus3", "Decrease", "Subtract", "NullSequence", 
			"Sequence", "Times", "Remainder", "Divide", "Quotient", "Output", "Mod", 
			"BaseInput", "Power", "Root", "Equivalent", "Equal", "Set", "NotEqual", 
			"NotEquivalent", "GraterEqual", "LessEqual", "Bar3", "Bar2", "Bar", "SlotSequence", 
			"Slot", "PostfixFunction", "AnonymousFunction", "Curry", "Apply", "At", 
			"Type", "Colon", "Quote", "Bang", "Dot", "Comma", "Quotation", "SetConstant", 
			"DelayedSet", "SetAddTo", "SetMinusFrom", "SetTimesTo", "SetDivideFrom", 
			"SetModTo", "SetPowerTo", "Clean", "Map", "MapAll", "To", "Infer", "Concat", 
			"Unknow5", "Unknow6", "Multiply", "Kronecker", "TensorProduct", "AssignmentOperator", 
			"BinaryOperator", "LogicOperator", "PowerLike", "MultiplyLike", "AddLike", 
			"ListOperator"
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
			setState(31);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << INTEGER) | (1L << REAL) | (1L << Using) | (1L << Exposing) | (1L << Macro) | (1L << Template) | (1L << Interface) | (1L << Class) | (1L << SYMBOL) | (1L << LS))) != 0)) {
				{
				{
				setState(28);
				statement();
				}
				}
				setState(33);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(34);
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
			setState(43);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(36);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(37);
				moduleStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(38);
				assignStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(39);
				macroStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(40);
				templateStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(41);
				interfaceStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(42);
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
			setState(45);
			expression(0);
			setState(46);
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
			setState(60);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(48);
				match(Using);
				setState(49);
				((ModuleStatementContext)_localctx).core = match(SYMBOL);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(50);
				match(Using);
				setState(51);
				((ModuleStatementContext)_localctx).source = match(STRING);
				setState(52);
				match(As);
				setState(53);
				((ModuleStatementContext)_localctx).name = match(SYMBOL);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(54);
				match(Using);
				setState(55);
				((ModuleStatementContext)_localctx).source = match(STRING);
				setState(56);
				match(With);
				setState(57);
				((ModuleStatementContext)_localctx).name = match(SYMBOL);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(58);
				match(Exposing);
				setState(59);
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
			setState(62);
			match(SYMBOL);
			setState(63);
			match(AssignmentOperator);
			setState(64);
			expression(0);
			setState(65);
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
			setState(67);
			match(Macro);
			setState(68);
			expression(0);
			setState(69);
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
			setState(71);
			match(Template);
			setState(72);
			expression(0);
			setState(73);
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
			setState(75);
			match(Interface);
			setState(76);
			expression(0);
			setState(77);
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
			setState(79);
			match(Class);
			setState(80);
			expression(0);
			setState(81);
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
			setState(92);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING:
				{
				_localctx = new StringContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(84);
				((StringContext)_localctx).atom = match(STRING);
				}
				break;
			case REAL:
				{
				_localctx = new RealContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(85);
				((RealContext)_localctx).atom = match(REAL);
				}
				break;
			case INTEGER:
				{
				_localctx = new IntegerContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(86);
				((IntegerContext)_localctx).atom = match(INTEGER);
				}
				break;
			case SYMBOL:
				{
				_localctx = new SymbolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(87);
				((SymbolContext)_localctx).atom = match(SYMBOL);
				}
				break;
			case LS:
				{
				_localctx = new PriorityOperationContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(88);
				match(LS);
				setState(89);
				expression(0);
				setState(90);
				match(RS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(114);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(112);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new Binary_Context(new ExpressionContext(_parentctx, _parentState));
						((Binary_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(94);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(95);
						((Binary_Context)_localctx).op = match(BinaryOperator);
						setState(96);
						((Binary_Context)_localctx).right = expression(12);
						}
						break;
					case 2:
						{
						_localctx = new Logic_Context(new ExpressionContext(_parentctx, _parentState));
						((Logic_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(97);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(98);
						((Logic_Context)_localctx).op = match(LogicOperator);
						setState(99);
						((Logic_Context)_localctx).right = expression(11);
						}
						break;
					case 3:
						{
						_localctx = new Power_Context(new ExpressionContext(_parentctx, _parentState));
						((Power_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(100);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(101);
						((Power_Context)_localctx).op = match(PowerLike);
						setState(102);
						((Power_Context)_localctx).right = expression(9);
						}
						break;
					case 4:
						{
						_localctx = new Multiply_Divide_Context(new ExpressionContext(_parentctx, _parentState));
						((Multiply_Divide_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(103);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(104);
						((Multiply_Divide_Context)_localctx).op = match(MultiplyLike);
						setState(105);
						((Multiply_Divide_Context)_localctx).right = expression(9);
						}
						break;
					case 5:
						{
						_localctx = new Add_Subtract_Context(new ExpressionContext(_parentctx, _parentState));
						((Add_Subtract_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(106);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(107);
						((Add_Subtract_Context)_localctx).op = match(AddLike);
						setState(108);
						((Add_Subtract_Context)_localctx).right = expression(8);
						}
						break;
					case 6:
						{
						_localctx = new List_Context(new ExpressionContext(_parentctx, _parentState));
						((List_Context)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(109);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(110);
						((List_Context)_localctx).op = match(ListOperator);
						setState(111);
						((List_Context)_localctx).right = expression(7);
						}
						break;
					}
					} 
				}
				setState(116);
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
			setState(117);
			match(LM);
			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << INTEGER) | (1L << REAL) | (1L << SYMBOL) | (1L << LS))) != 0)) {
				{
				{
				setState(118);
				expression(0);
				setState(120);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(119);
					match(Comma);
					}
				}

				}
				}
				setState(126);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(127);
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
			setState(129);
			match(LL);
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SYMBOL) {
				{
				{
				setState(130);
				keyValue();
				setState(132);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(131);
					match(Comma);
					}
				}

				}
				}
				setState(138);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(139);
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
			setState(141);
			((KeyValueContext)_localctx).key = match(SYMBOL);
			setState(142);
			match(Colon);
			setState(143);
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

	public static class MathAliasContext extends ParserRuleContext {
		public Token alias;
		public TerminalNode Math() { return getToken(NyarParser.Math, 0); }
		public MathAliasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mathAlias; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMathAlias(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMathAlias(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMathAlias(this);
			else return visitor.visitChildren(this);
		}
	}

	public final MathAliasContext mathAlias() throws RecognitionException {
		MathAliasContext _localctx = new MathAliasContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_mathAlias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(145);
			((MathAliasContext)_localctx).alias = match(Math);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u0080\u0096\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\3\2\7\2 \n\2\f\2\16\2#\13\2"+
		"\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3.\n\3\3\4\3\4\3\4\3\5\3\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5?\n\5\3\6\3\6\3\6\3\6\3\6\3\7"+
		"\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13_\n\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13"+
		"s\n\13\f\13\16\13v\13\13\3\f\3\f\3\f\5\f{\n\f\7\f}\n\f\f\f\16\f\u0080"+
		"\13\f\3\f\3\f\3\r\3\r\3\r\5\r\u0087\n\r\7\r\u0089\n\r\f\r\16\r\u008c\13"+
		"\r\3\r\3\r\3\16\3\16\3\16\3\16\3\17\3\17\3\17\2\3\24\20\2\4\6\b\n\f\16"+
		"\20\22\24\26\30\32\34\2\2\2\u009f\2!\3\2\2\2\4-\3\2\2\2\6/\3\2\2\2\b>"+
		"\3\2\2\2\n@\3\2\2\2\fE\3\2\2\2\16I\3\2\2\2\20M\3\2\2\2\22Q\3\2\2\2\24"+
		"^\3\2\2\2\26w\3\2\2\2\30\u0083\3\2\2\2\32\u008f\3\2\2\2\34\u0093\3\2\2"+
		"\2\36 \5\4\3\2\37\36\3\2\2\2 #\3\2\2\2!\37\3\2\2\2!\"\3\2\2\2\"$\3\2\2"+
		"\2#!\3\2\2\2$%\7\2\2\3%\3\3\2\2\2&.\5\6\4\2\'.\5\b\5\2(.\5\n\6\2).\5\f"+
		"\7\2*.\5\16\b\2+.\5\20\t\2,.\5\22\n\2-&\3\2\2\2-\'\3\2\2\2-(\3\2\2\2-"+
		")\3\2\2\2-*\3\2\2\2-+\3\2\2\2-,\3\2\2\2.\5\3\2\2\2/\60\5\24\13\2\60\61"+
		"\7\3\2\2\61\7\3\2\2\2\62\63\7\n\2\2\63?\7*\2\2\64\65\7\n\2\2\65\66\7\4"+
		"\2\2\66\67\7\r\2\2\67?\7*\2\289\7\n\2\29:\7\4\2\2:;\7\f\2\2;?\7*\2\2<"+
		"=\7\13\2\2=?\7\4\2\2>\62\3\2\2\2>\64\3\2\2\2>8\3\2\2\2><\3\2\2\2?\t\3"+
		"\2\2\2@A\7*\2\2AB\7z\2\2BC\5\24\13\2CD\7\3\2\2D\13\3\2\2\2EF\7\16\2\2"+
		"FG\5\24\13\2GH\7\3\2\2H\r\3\2\2\2IJ\7\20\2\2JK\5\24\13\2KL\7\3\2\2L\17"+
		"\3\2\2\2MN\7\22\2\2NO\5\24\13\2OP\7\3\2\2P\21\3\2\2\2QR\7\23\2\2RS\5\24"+
		"\13\2ST\7\3\2\2T\23\3\2\2\2UV\b\13\1\2V_\7\4\2\2W_\7\6\2\2X_\7\5\2\2Y"+
		"_\7*\2\2Z[\7,\2\2[\\\5\24\13\2\\]\7-\2\2]_\3\2\2\2^U\3\2\2\2^W\3\2\2\2"+
		"^X\3\2\2\2^Y\3\2\2\2^Z\3\2\2\2_t\3\2\2\2`a\f\r\2\2ab\7{\2\2bs\5\24\13"+
		"\16cd\f\f\2\2de\7|\2\2es\5\24\13\rfg\f\13\2\2gh\7}\2\2hs\5\24\13\13ij"+
		"\f\n\2\2jk\7~\2\2ks\5\24\13\13lm\f\t\2\2mn\7\177\2\2ns\5\24\13\nop\f\b"+
		"\2\2pq\7\u0080\2\2qs\5\24\13\tr`\3\2\2\2rc\3\2\2\2rf\3\2\2\2ri\3\2\2\2"+
		"rl\3\2\2\2ro\3\2\2\2sv\3\2\2\2tr\3\2\2\2tu\3\2\2\2u\25\3\2\2\2vt\3\2\2"+
		"\2w~\7.\2\2xz\5\24\13\2y{\7e\2\2zy\3\2\2\2z{\3\2\2\2{}\3\2\2\2|x\3\2\2"+
		"\2}\u0080\3\2\2\2~|\3\2\2\2~\177\3\2\2\2\177\u0081\3\2\2\2\u0080~\3\2"+
		"\2\2\u0081\u0082\7/\2\2\u0082\27\3\2\2\2\u0083\u008a\7\60\2\2\u0084\u0086"+
		"\5\32\16\2\u0085\u0087\7e\2\2\u0086\u0085\3\2\2\2\u0086\u0087\3\2\2\2"+
		"\u0087\u0089\3\2\2\2\u0088\u0084\3\2\2\2\u0089\u008c\3\2\2\2\u008a\u0088"+
		"\3\2\2\2\u008a\u008b\3\2\2\2\u008b\u008d\3\2\2\2\u008c\u008a\3\2\2\2\u008d"+
		"\u008e\7\61\2\2\u008e\31\3\2\2\2\u008f\u0090\7*\2\2\u0090\u0091\7a\2\2"+
		"\u0091\u0092\5\24\13\2\u0092\33\3\2\2\2\u0093\u0094\7+\2\2\u0094\35\3"+
		"\2\2\2\f!->^rtz~\u0086\u008a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}