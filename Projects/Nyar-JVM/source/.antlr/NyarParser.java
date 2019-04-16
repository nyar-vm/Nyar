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
		LineComment=1, PartComment=2, WhiteSpace=3, NewLine=4, Using=5, Expose=6, 
		As=7, With=8, Macro=9, End=10, Template=11, Interface=12, Enumerate=13, 
		Structure=14, Class=15, Extend=16, Implement=17, Setter=18, Getter=19, 
		Public=20, Private=21, Protect=22, Final=23, Let=24, Type=25, If=26, Then=27, 
		Else=28, Match=29, Switch=30, Case=31, For=32, In=33, Try=34, Catch=35, 
		While=36, Do=37, True=38, False=39, BOOL=40, STRING=41, Identifier=42, 
		NUMBER=43, Float=44, Integer=45, LS=46, RS=47, LM=48, RM=49, LL=50, RL=51, 
		LCeil=52, RCeil=53, LFloor=54, RFloor=55, LAngle=56, RAngle=57, LQuote=58, 
		RQuote=59, Import=60, LeftShift=61, LessEqual=62, Less=63, Export=64, 
		RightShift=65, GraterEqual=66, Grater=67, Increase=68, PlusTo=69, Plus=70, 
		LogicXor=71, Decrease=72, MinusFrom=73, To=74, Minus=75, NullSequence=76, 
		Sequence=77, Times=78, Multiply=79, Kronecker=80, TensorProduct=81, MapAll=82, 
		Remainder=83, Map=84, Divide=85, Quotient=86, Comment=87, Output=88, Mod=89, 
		BaseInput=90, Power=91, Surd=92, Equivalent=93, NotEquivalent=94, Equal=95, 
		Infer=96, Assign=97, Concat=98, Destruct=99, Tilde=100, LogicOr=101, BitOr=102, 
		LogicAnd=103, BitAnd=104, DoubleBang=105, NotEqual=106, BitNot=107, LogicNot=108, 
		Shebang=109, PostfixFunction=110, Curry=111, Apply=112, LetAssign=113, 
		At=114, TypeAnnotation=115, DelayedAssign=116, Colon=117, Semicolon=118, 
		Quote=119, Acute=120, DoubleQuotation=121, Quotation=122, Underline=123, 
		Ellipsis=124, FinalAssign=125, DOT=126, Dot=127, COMMA=128, Reciprocal=129, 
		Degree=130, Transpose=131, Hermitian=132, FieldComplex=133, FieldReal=134, 
		FieldUnsigned=135, FieldBool=136, FieldInteger=137, FieldString=138, Section=139, 
		Pilcrow=140, Currency=141, Element=142;
	public static final int
		RULE_program = 0, RULE_statement = 1, RULE_block_statement = 2, RULE_expr_or_block = 3, 
		RULE_empty_statement = 4, RULE_eos = 5, RULE_symbol = 6, RULE_global = 7, 
		RULE_expression_statement = 8, RULE_type_statement = 9, RULE_function_apply = 10, 
		RULE_function_params = 11, RULE_expression = 12, RULE_pst_ops = 13, RULE_assign_statement = 14, 
		RULE_assignable = 15, RULE_assign_lhs = 16, RULE_assign_pass = 17, RULE_module_statement = 18, 
		RULE_id_tuples = 19, RULE_class_statement = 20, RULE_class_fathers = 21, 
		RULE_class_implement = 22, RULE_class_define = 23, RULE_interface_Statement = 24, 
		RULE_template_Statement = 25, RULE_macro_Statement = 26, RULE_branch_statement = 27, 
		RULE_condition_statement = 28, RULE_if_else = 29, RULE_if_elseif = 30, 
		RULE_try_statement = 31, RULE_catchProduction = 32, RULE_finalProduction = 33, 
		RULE_loop_statement = 34, RULE_dictLiteral = 35, RULE_keyvalue = 36, RULE_key_valid = 37, 
		RULE_listLiteral = 38, RULE_element = 39, RULE_indexLiteral = 40, RULE_index_valid = 41, 
		RULE_signedInteger = 42;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "statement", "block_statement", "expr_or_block", "empty_statement", 
			"eos", "symbol", "global", "expression_statement", "type_statement", 
			"function_apply", "function_params", "expression", "pst_ops", "assign_statement", 
			"assignable", "assign_lhs", "assign_pass", "module_statement", "id_tuples", 
			"class_statement", "class_fathers", "class_implement", "class_define", 
			"interface_Statement", "template_Statement", "macro_Statement", "branch_statement", 
			"condition_statement", "if_else", "if_elseif", "try_statement", "catchProduction", 
			"finalProduction", "loop_statement", "dictLiteral", "keyvalue", "key_valid", 
			"listLiteral", "element", "indexLiteral", "index_valid", "signedInteger"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, "'using'", "'expose'", "'as'", "'with'", 
			"'macro'", "'end'", "'template'", "'interface'", "'enumerate'", "'structure'", 
			"'class'", "'extend'", "'implement'", "'setter'", "'getter'", "'public'", 
			"'private'", "'protect'", "'final'", "'let'", "'type'", "'if'", "'then'", 
			"'else'", "'match'", "'switch'", "'case'", "'for'", "'in'", "'try'", 
			"'catch'", "'while'", "'do'", "'true'", "'false'", null, null, null, 
			null, null, null, "'('", "')'", "'['", "']'", "'{'", "'}'", "'\u2308'", 
			"'\u2309'", "'\u230A'", "'\u230B'", null, null, "'\u201C'", "'\u201D'", 
			null, null, "'<='", "'<'", null, null, "'>='", "'>'", "'++'", "'+='", 
			"'+'", "'\u2295'", "'--'", "'-='", null, "'-'", "'***'", "'**'", "'*'", 
			"'\u00D7'", "'\u2297'", "'\u2299'", "'//@'", "'//'", "'/@'", "'/'", "'\u00F7'", 
			"'%%%'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", "'=!='", 
			"'=='", null, "'='", "'~~'", "'~='", "'~'", null, "'|'", null, "'&'", 
			"'!!'", null, null, null, "'#!'", "'$'", "'@@@'", "'@@'", "'@='", "'@'", 
			null, null, null, null, "'`'", "'\u00B4'", "'\"'", "'''", "'_'", "'...'", 
			null, null, "'\u22C5'", null, "'\u215F'", "'\u00B0'", "'\u1D40'", "'\u1D34'", 
			"'\u2102'", "'\u211D'", "'\u2124'", "'\uD835\uDD39'", "'\uD835\uDD40'", 
			"'\uD835\uDD4A'", "'\u00A7'", "'\u00B6'", "'\u00A4'", "'\u2208'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "LineComment", "PartComment", "WhiteSpace", "NewLine", "Using", 
			"Expose", "As", "With", "Macro", "End", "Template", "Interface", "Enumerate", 
			"Structure", "Class", "Extend", "Implement", "Setter", "Getter", "Public", 
			"Private", "Protect", "Final", "Let", "Type", "If", "Then", "Else", "Match", 
			"Switch", "Case", "For", "In", "Try", "Catch", "While", "Do", "True", 
			"False", "BOOL", "STRING", "Identifier", "NUMBER", "Float", "Integer", 
			"LS", "RS", "LM", "RM", "LL", "RL", "LCeil", "RCeil", "LFloor", "RFloor", 
			"LAngle", "RAngle", "LQuote", "RQuote", "Import", "LeftShift", "LessEqual", 
			"Less", "Export", "RightShift", "GraterEqual", "Grater", "Increase", 
			"PlusTo", "Plus", "LogicXor", "Decrease", "MinusFrom", "To", "Minus", 
			"NullSequence", "Sequence", "Times", "Multiply", "Kronecker", "TensorProduct", 
			"MapAll", "Remainder", "Map", "Divide", "Quotient", "Comment", "Output", 
			"Mod", "BaseInput", "Power", "Surd", "Equivalent", "NotEquivalent", "Equal", 
			"Infer", "Assign", "Concat", "Destruct", "Tilde", "LogicOr", "BitOr", 
			"LogicAnd", "BitAnd", "DoubleBang", "NotEqual", "BitNot", "LogicNot", 
			"Shebang", "PostfixFunction", "Curry", "Apply", "LetAssign", "At", "TypeAnnotation", 
			"DelayedAssign", "Colon", "Semicolon", "Quote", "Acute", "DoubleQuotation", 
			"Quotation", "Underline", "Ellipsis", "FinalAssign", "DOT", "Dot", "COMMA", 
			"Reciprocal", "Degree", "Transpose", "Hermitian", "FieldComplex", "FieldReal", 
			"FieldUnsigned", "FieldBool", "FieldInteger", "FieldString", "Section", 
			"Pilcrow", "Currency", "Element"
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
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Using) | (1L << Class) | (1L << Final) | (1L << Let) | (1L << Type) | (1L << If) | (1L << Match) | (1L << Switch) | (1L << For) | (1L << Try) | (1L << While) | (1L << Do) | (1L << STRING) | (1L << Identifier) | (1L << NUMBER) | (1L << LS) | (1L << LM) | (1L << LL))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Colon - 68)) | (1L << (Semicolon - 68)) | (1L << (Reciprocal - 68)))) != 0)) {
				{
				{
				setState(86);
				statement();
				}
				}
				setState(91);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(92);
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
		public Empty_statementContext empty_statement() {
			return getRuleContext(Empty_statementContext.class,0);
		}
		public Block_statementContext block_statement() {
			return getRuleContext(Block_statementContext.class,0);
		}
		public EosContext eos() {
			return getRuleContext(EosContext.class,0);
		}
		public Expression_statementContext expression_statement() {
			return getRuleContext(Expression_statementContext.class,0);
		}
		public Assign_statementContext assign_statement() {
			return getRuleContext(Assign_statementContext.class,0);
		}
		public Branch_statementContext branch_statement() {
			return getRuleContext(Branch_statementContext.class,0);
		}
		public Try_statementContext try_statement() {
			return getRuleContext(Try_statementContext.class,0);
		}
		public Module_statementContext module_statement() {
			return getRuleContext(Module_statementContext.class,0);
		}
		public Class_statementContext class_statement() {
			return getRuleContext(Class_statementContext.class,0);
		}
		public Loop_statementContext loop_statement() {
			return getRuleContext(Loop_statementContext.class,0);
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
			setState(127);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(94);
				empty_statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(95);
				block_statement();
				setState(97);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
				case 1:
					{
					setState(96);
					eos();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(99);
				expression_statement();
				setState(101);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
				case 1:
					{
					setState(100);
					eos();
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(103);
				assign_statement();
				setState(105);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
				case 1:
					{
					setState(104);
					eos();
					}
					break;
				}
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(107);
				branch_statement();
				setState(109);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
				case 1:
					{
					setState(108);
					eos();
					}
					break;
				}
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(111);
				try_statement();
				setState(113);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
				case 1:
					{
					setState(112);
					eos();
					}
					break;
				}
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(115);
				module_statement();
				setState(117);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
				case 1:
					{
					setState(116);
					eos();
					}
					break;
				}
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(119);
				class_statement();
				setState(121);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(120);
					eos();
					}
					break;
				}
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(123);
				loop_statement();
				setState(125);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(124);
					eos();
					}
					break;
				}
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

	public static class Block_statementContext extends ParserRuleContext {
		public Block_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block_statement; }
	 
		public Block_statementContext() { }
		public void copyFrom(Block_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class BlockStatementContext extends Block_statementContext {
		public TerminalNode LL() { return getToken(NyarParser.LL, 0); }
		public TerminalNode RL() { return getToken(NyarParser.RL, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode Colon() { return getToken(NyarParser.Colon, 0); }
		public TerminalNode End() { return getToken(NyarParser.End, 0); }
		public BlockStatementContext(Block_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterBlockStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitBlockStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitBlockStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Block_statementContext block_statement() throws RecognitionException {
		Block_statementContext _localctx = new Block_statementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_block_statement);
		int _la;
		try {
			setState(145);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LL:
				_localctx = new BlockStatementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(129);
				match(LL);
				setState(131); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(130);
					statement();
					}
					}
					setState(133); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Using) | (1L << Class) | (1L << Final) | (1L << Let) | (1L << Type) | (1L << If) | (1L << Match) | (1L << Switch) | (1L << For) | (1L << Try) | (1L << While) | (1L << Do) | (1L << STRING) | (1L << Identifier) | (1L << NUMBER) | (1L << LS) | (1L << LM) | (1L << LL))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Colon - 68)) | (1L << (Semicolon - 68)) | (1L << (Reciprocal - 68)))) != 0) );
				setState(135);
				match(RL);
				}
				break;
			case Colon:
				_localctx = new BlockStatementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
				match(Colon);
				setState(139); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(138);
					statement();
					}
					}
					setState(141); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Using) | (1L << Class) | (1L << Final) | (1L << Let) | (1L << Type) | (1L << If) | (1L << Match) | (1L << Switch) | (1L << For) | (1L << Try) | (1L << While) | (1L << Do) | (1L << STRING) | (1L << Identifier) | (1L << NUMBER) | (1L << LS) | (1L << LM) | (1L << LL))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Colon - 68)) | (1L << (Semicolon - 68)) | (1L << (Reciprocal - 68)))) != 0) );
				setState(143);
				match(End);
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class Expr_or_blockContext extends ParserRuleContext {
		public Block_statementContext block_statement() {
			return getRuleContext(Block_statementContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Expr_or_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_or_block; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterExpr_or_block(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitExpr_or_block(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitExpr_or_block(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expr_or_blockContext expr_or_block() throws RecognitionException {
		Expr_or_blockContext _localctx = new Expr_or_blockContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_expr_or_block);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(147);
				block_statement();
				}
				break;
			case 2:
				{
				setState(148);
				expression(0);
				}
				break;
			}
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

	public static class Empty_statementContext extends ParserRuleContext {
		public Empty_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_empty_statement; }
	 
		public Empty_statementContext() { }
		public void copyFrom(Empty_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class EmptyStatementContext extends Empty_statementContext {
		public EosContext eos() {
			return getRuleContext(EosContext.class,0);
		}
		public EmptyStatementContext(Empty_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterEmptyStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitEmptyStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitEmptyStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Empty_statementContext empty_statement() throws RecognitionException {
		Empty_statementContext _localctx = new Empty_statementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_empty_statement);
		try {
			_localctx = new EmptyStatementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(151);
			eos();
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

	public static class EosContext extends ParserRuleContext {
		public TerminalNode Semicolon() { return getToken(NyarParser.Semicolon, 0); }
		public EosContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_eos; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterEos(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitEos(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitEos(this);
			else return visitor.visitChildren(this);
		}
	}

	public final EosContext eos() throws RecognitionException {
		EosContext _localctx = new EosContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_eos);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(153);
			match(Semicolon);
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

	public static class SymbolContext extends ParserRuleContext {
		public List<TerminalNode> Identifier() { return getTokens(NyarParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(NyarParser.Identifier, i);
		}
		public List<TerminalNode> DOT() { return getTokens(NyarParser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(NyarParser.DOT, i);
		}
		public SymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbol; }
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

	public final SymbolContext symbol() throws RecognitionException {
		SymbolContext _localctx = new SymbolContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_symbol);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			match(Identifier);
			setState(160);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(156);
					match(DOT);
					setState(157);
					match(Identifier);
					}
					} 
				}
				setState(162);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			}
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

	public static class GlobalContext extends ParserRuleContext {
		public TerminalNode Section() { return getToken(NyarParser.Section, 0); }
		public List<TerminalNode> Identifier() { return getTokens(NyarParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(NyarParser.Identifier, i);
		}
		public List<TerminalNode> DOT() { return getTokens(NyarParser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(NyarParser.DOT, i);
		}
		public GlobalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_global; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterGlobal(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitGlobal(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitGlobal(this);
			else return visitor.visitChildren(this);
		}
	}

	public final GlobalContext global() throws RecognitionException {
		GlobalContext _localctx = new GlobalContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_global);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			match(Section);
			setState(164);
			match(Identifier);
			setState(169);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(165);
				match(DOT);
				setState(166);
				match(Identifier);
				}
				}
				setState(171);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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

	public static class Expression_statementContext extends ParserRuleContext {
		public Expression_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_statement; }
	 
		public Expression_statementContext() { }
		public void copyFrom(Expression_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ExpressionStatementContext extends Expression_statementContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public ExpressionStatementContext(Expression_statementContext ctx) { copyFrom(ctx); }
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

	public final Expression_statementContext expression_statement() throws RecognitionException {
		Expression_statementContext _localctx = new Expression_statementContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_expression_statement);
		int _la;
		try {
			_localctx = new ExpressionStatementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			expression(0);
			setState(177);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(173);
				match(COMMA);
				setState(174);
				expression(0);
				}
				}
				setState(179);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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

	public static class Type_statementContext extends ParserRuleContext {
		public Type_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_statement; }
	 
		public Type_statementContext() { }
		public void copyFrom(Type_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TypeAssignContext extends Type_statementContext {
		public Token left;
		public ExpressionContext right;
		public TerminalNode TypeAnnotation() { return getToken(NyarParser.TypeAnnotation, 0); }
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Type() { return getToken(NyarParser.Type, 0); }
		public TypeAssignContext(Type_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterTypeAssign(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitTypeAssign(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitTypeAssign(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_statementContext type_statement() throws RecognitionException {
		Type_statementContext _localctx = new Type_statementContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_type_statement);
		try {
			setState(186);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				_localctx = new TypeAssignContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(180);
				((TypeAssignContext)_localctx).left = match(Identifier);
				setState(181);
				match(TypeAnnotation);
				setState(182);
				((TypeAssignContext)_localctx).right = expression(0);
				}
				break;
			case Type:
				_localctx = new TypeAssignContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(183);
				match(Type);
				setState(184);
				((TypeAssignContext)_localctx).left = match(Identifier);
				setState(185);
				((TypeAssignContext)_localctx).right = expression(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class Function_applyContext extends ParserRuleContext {
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public Function_paramsContext function_params() {
			return getRuleContext(Function_paramsContext.class,0);
		}
		public Function_applyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_apply; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterFunction_apply(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitFunction_apply(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitFunction_apply(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Function_applyContext function_apply() throws RecognitionException {
		Function_applyContext _localctx = new Function_applyContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_function_apply);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			symbol();
			setState(189);
			match(LS);
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Type) | (1L << STRING) | (1L << Identifier) | (1L << NUMBER) | (1L << LS) | (1L << LM) | (1L << LL))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Reciprocal - 68)))) != 0)) {
				{
				setState(190);
				function_params();
				}
			}

			setState(193);
			match(RS);
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

	public static class Function_paramsContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public Function_paramsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_params; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterFunction_params(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitFunction_params(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitFunction_params(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Function_paramsContext function_params() throws RecognitionException {
		Function_paramsContext _localctx = new Function_paramsContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_function_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			expression(0);
			setState(200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(196);
				match(COMMA);
				setState(197);
				expression(0);
				}
				}
				setState(202);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
	public static class PriorityExpressionContext extends ExpressionContext {
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public PriorityExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPriorityExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPriorityExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPriorityExpression(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class FunctionApplyContext extends ExpressionContext {
		public Function_applyContext function_apply() {
			return getRuleContext(Function_applyContext.class,0);
		}
		public FunctionApplyContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterFunctionApply(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitFunctionApply(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitFunctionApply(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class IndexContext extends ExpressionContext {
		public ExpressionContext left;
		public IndexLiteralContext data;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IndexLiteralContext indexLiteral() {
			return getRuleContext(IndexLiteralContext.class,0);
		}
		public IndexContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterIndex(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitIndex(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitIndex(this);
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
	public static class BinaryLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode LeftShift() { return getToken(NyarParser.LeftShift, 0); }
		public TerminalNode RightShift() { return getToken(NyarParser.RightShift, 0); }
		public BinaryLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterBinaryLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitBinaryLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitBinaryLike(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class LogicLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Equal() { return getToken(NyarParser.Equal, 0); }
		public TerminalNode NotEqual() { return getToken(NyarParser.NotEqual, 0); }
		public TerminalNode Equivalent() { return getToken(NyarParser.Equivalent, 0); }
		public TerminalNode NotEquivalent() { return getToken(NyarParser.NotEquivalent, 0); }
		public TerminalNode Grater() { return getToken(NyarParser.Grater, 0); }
		public TerminalNode GraterEqual() { return getToken(NyarParser.GraterEqual, 0); }
		public TerminalNode Less() { return getToken(NyarParser.Less, 0); }
		public TerminalNode LessEqual() { return getToken(NyarParser.LessEqual, 0); }
		public TerminalNode LogicAnd() { return getToken(NyarParser.LogicAnd, 0); }
		public TerminalNode LogicOr() { return getToken(NyarParser.LogicOr, 0); }
		public LogicLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterLogicLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitLogicLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitLogicLike(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class MethodApplyContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode DOT() { return getToken(NyarParser.DOT, 0); }
		public MethodApplyContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMethodApply(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMethodApply(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMethodApply(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CompareLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Equal() { return getToken(NyarParser.Equal, 0); }
		public TerminalNode NotEqual() { return getToken(NyarParser.NotEqual, 0); }
		public TerminalNode Equivalent() { return getToken(NyarParser.Equivalent, 0); }
		public TerminalNode NotEquivalent() { return getToken(NyarParser.NotEquivalent, 0); }
		public TerminalNode Grater() { return getToken(NyarParser.Grater, 0); }
		public TerminalNode GraterEqual() { return getToken(NyarParser.GraterEqual, 0); }
		public TerminalNode Less() { return getToken(NyarParser.Less, 0); }
		public TerminalNode LessEqual() { return getToken(NyarParser.LessEqual, 0); }
		public TerminalNode LogicAnd() { return getToken(NyarParser.LogicAnd, 0); }
		public TerminalNode LogicOr() { return getToken(NyarParser.LogicOr, 0); }
		public CompareLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterCompareLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitCompareLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitCompareLike(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PlusLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Plus() { return getToken(NyarParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(NyarParser.Minus, 0); }
		public PlusLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPlusLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPlusLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPlusLike(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class LazyAssignContext extends ExpressionContext {
		public Function_applyContext id;
		public Token op;
		public AssignableContext expr;
		public Function_applyContext function_apply() {
			return getRuleContext(Function_applyContext.class,0);
		}
		public TerminalNode DelayedAssign() { return getToken(NyarParser.DelayedAssign, 0); }
		public AssignableContext assignable() {
			return getRuleContext(AssignableContext.class,0);
		}
		public LazyAssignContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterLazyAssign(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitLazyAssign(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitLazyAssign(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PowerLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Power() { return getToken(NyarParser.Power, 0); }
		public TerminalNode Surd() { return getToken(NyarParser.Surd, 0); }
		public PowerLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPowerLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPowerLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPowerLike(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class TypeStatementContext extends ExpressionContext {
		public Type_statementContext type_statement() {
			return getRuleContext(Type_statementContext.class,0);
		}
		public TypeStatementContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterTypeStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitTypeStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitTypeStatement(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumberContext extends ExpressionContext {
		public Token atom;
		public TerminalNode NUMBER() { return getToken(NyarParser.NUMBER, 0); }
		public NumberContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitNumber(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitNumber(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class OperatorAssignContext extends ExpressionContext {
		public Assign_lhsContext id;
		public Token op;
		public AssignableContext expr;
		public Assign_lhsContext assign_lhs() {
			return getRuleContext(Assign_lhsContext.class,0);
		}
		public AssignableContext assignable() {
			return getRuleContext(AssignableContext.class,0);
		}
		public TerminalNode Assign() { return getToken(NyarParser.Assign, 0); }
		public TerminalNode PlusTo() { return getToken(NyarParser.PlusTo, 0); }
		public TerminalNode MinusFrom() { return getToken(NyarParser.MinusFrom, 0); }
		public TerminalNode LetAssign() { return getToken(NyarParser.LetAssign, 0); }
		public TerminalNode FinalAssign() { return getToken(NyarParser.FinalAssign, 0); }
		public OperatorAssignContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterOperatorAssign(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitOperatorAssign(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitOperatorAssign(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class DictContext extends ExpressionContext {
		public DictLiteralContext data;
		public DictLiteralContext dictLiteral() {
			return getRuleContext(DictLiteralContext.class,0);
		}
		public DictContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterDict(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitDict(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitDict(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PrefixExpressionContext extends ExpressionContext {
		public Token op;
		public ExpressionContext right;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Plus() { return getToken(NyarParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(NyarParser.Minus, 0); }
		public TerminalNode BitNot() { return getToken(NyarParser.BitNot, 0); }
		public TerminalNode LogicNot() { return getToken(NyarParser.LogicNot, 0); }
		public TerminalNode Reciprocal() { return getToken(NyarParser.Reciprocal, 0); }
		public TerminalNode Increase() { return getToken(NyarParser.Increase, 0); }
		public PrefixExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPrefixExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPrefixExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPrefixExpression(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class SymbolExpressionContext extends ExpressionContext {
		public SymbolContext atom;
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public SymbolExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterSymbolExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitSymbolExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitSymbolExpression(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ListContext extends ExpressionContext {
		public ListLiteralContext data;
		public ListLiteralContext listLiteral() {
			return getRuleContext(ListLiteralContext.class,0);
		}
		public ListContext(ExpressionContext ctx) { copyFrom(ctx); }
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
	public static class PostfixExpressionContext extends ExpressionContext {
		public ExpressionContext left;
		public Pst_opsContext op;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Pst_opsContext pst_ops() {
			return getRuleContext(Pst_opsContext.class,0);
		}
		public PostfixExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPostfixExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPostfixExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPostfixExpression(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class MultiplyLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Divide() { return getToken(NyarParser.Divide, 0); }
		public TerminalNode Times() { return getToken(NyarParser.Times, 0); }
		public TerminalNode Multiply() { return getToken(NyarParser.Multiply, 0); }
		public TerminalNode Kronecker() { return getToken(NyarParser.Kronecker, 0); }
		public TerminalNode TensorProduct() { return getToken(NyarParser.TensorProduct, 0); }
		public MultiplyLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMultiplyLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMultiplyLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMultiplyLike(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ListLikeContext extends ExpressionContext {
		public ExpressionContext left;
		public Token op;
		public ExpressionContext right;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode Concat() { return getToken(NyarParser.Concat, 0); }
		public TerminalNode LeftShift() { return getToken(NyarParser.LeftShift, 0); }
		public TerminalNode RightShift() { return getToken(NyarParser.RightShift, 0); }
		public ListLikeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterListLike(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitListLike(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitListLike(this);
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
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(225);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				{
				_localctx = new TypeStatementContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(204);
				type_statement();
				}
				break;
			case 2:
				{
				_localctx = new FunctionApplyContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(205);
				function_apply();
				}
				break;
			case 3:
				{
				_localctx = new PrefixExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(206);
				((PrefixExpressionContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Reciprocal - 68)))) != 0)) ) {
					((PrefixExpressionContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(207);
				((PrefixExpressionContext)_localctx).right = expression(19);
				}
				break;
			case 4:
				{
				_localctx = new LazyAssignContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(208);
				((LazyAssignContext)_localctx).id = function_apply();
				setState(209);
				((LazyAssignContext)_localctx).op = match(DelayedAssign);
				setState(210);
				((LazyAssignContext)_localctx).expr = assignable();
				}
				break;
			case 5:
				{
				_localctx = new OperatorAssignContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(212);
				((OperatorAssignContext)_localctx).id = assign_lhs();
				setState(213);
				((OperatorAssignContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 69)) & ~0x3f) == 0 && ((1L << (_la - 69)) & ((1L << (PlusTo - 69)) | (1L << (MinusFrom - 69)) | (1L << (Assign - 69)) | (1L << (LetAssign - 69)) | (1L << (FinalAssign - 69)))) != 0)) ) {
					((OperatorAssignContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(214);
				((OperatorAssignContext)_localctx).expr = assignable();
				}
				break;
			case 6:
				{
				_localctx = new ListContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(216);
				((ListContext)_localctx).data = listLiteral();
				}
				break;
			case 7:
				{
				_localctx = new DictContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(217);
				((DictContext)_localctx).data = dictLiteral();
				}
				break;
			case 8:
				{
				_localctx = new StringContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(218);
				((StringContext)_localctx).atom = match(STRING);
				}
				break;
			case 9:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(219);
				((NumberContext)_localctx).atom = match(NUMBER);
				}
				break;
			case 10:
				{
				_localctx = new SymbolExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(220);
				((SymbolExpressionContext)_localctx).atom = symbol();
				}
				break;
			case 11:
				{
				_localctx = new PriorityExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(221);
				match(LS);
				setState(222);
				expression(0);
				setState(223);
				match(RS);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(257);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(255);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
					case 1:
						{
						_localctx = new MethodApplyContext(new ExpressionContext(_parentctx, _parentState));
						((MethodApplyContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(227);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(228);
						((MethodApplyContext)_localctx).op = match(DOT);
						setState(229);
						((MethodApplyContext)_localctx).right = expression(18);
						}
						break;
					case 2:
						{
						_localctx = new BinaryLikeContext(new ExpressionContext(_parentctx, _parentState));
						((BinaryLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(230);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(231);
						((BinaryLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==LeftShift || _la==RightShift) ) {
							((BinaryLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(232);
						((BinaryLikeContext)_localctx).right = expression(17);
						}
						break;
					case 3:
						{
						_localctx = new LogicLikeContext(new ExpressionContext(_parentctx, _parentState));
						((LogicLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(233);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(234);
						((LogicLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (LessEqual - 62)) | (1L << (Less - 62)) | (1L << (GraterEqual - 62)) | (1L << (Grater - 62)) | (1L << (Equivalent - 62)) | (1L << (NotEquivalent - 62)) | (1L << (Equal - 62)) | (1L << (LogicOr - 62)) | (1L << (LogicAnd - 62)) | (1L << (NotEqual - 62)))) != 0)) ) {
							((LogicLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(235);
						((LogicLikeContext)_localctx).right = expression(16);
						}
						break;
					case 4:
						{
						_localctx = new CompareLikeContext(new ExpressionContext(_parentctx, _parentState));
						((CompareLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(236);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(237);
						((CompareLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(((((_la - 62)) & ~0x3f) == 0 && ((1L << (_la - 62)) & ((1L << (LessEqual - 62)) | (1L << (Less - 62)) | (1L << (GraterEqual - 62)) | (1L << (Grater - 62)) | (1L << (Equivalent - 62)) | (1L << (NotEquivalent - 62)) | (1L << (Equal - 62)) | (1L << (LogicOr - 62)) | (1L << (LogicAnd - 62)) | (1L << (NotEqual - 62)))) != 0)) ) {
							((CompareLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(238);
						((CompareLikeContext)_localctx).right = expression(15);
						}
						break;
					case 5:
						{
						_localctx = new PowerLikeContext(new ExpressionContext(_parentctx, _parentState));
						((PowerLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(239);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(240);
						((PowerLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==Power || _la==Surd) ) {
							((PowerLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(241);
						((PowerLikeContext)_localctx).right = expression(13);
						}
						break;
					case 6:
						{
						_localctx = new MultiplyLikeContext(new ExpressionContext(_parentctx, _parentState));
						((MultiplyLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(242);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(243);
						((MultiplyLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (Times - 78)) | (1L << (Multiply - 78)) | (1L << (Kronecker - 78)) | (1L << (TensorProduct - 78)) | (1L << (Divide - 78)))) != 0)) ) {
							((MultiplyLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(244);
						((MultiplyLikeContext)_localctx).right = expression(13);
						}
						break;
					case 7:
						{
						_localctx = new PlusLikeContext(new ExpressionContext(_parentctx, _parentState));
						((PlusLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(245);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(246);
						((PlusLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
							((PlusLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(247);
						((PlusLikeContext)_localctx).right = expression(12);
						}
						break;
					case 8:
						{
						_localctx = new ListLikeContext(new ExpressionContext(_parentctx, _parentState));
						((ListLikeContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(248);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(249);
						((ListLikeContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(((((_la - 61)) & ~0x3f) == 0 && ((1L << (_la - 61)) & ((1L << (LeftShift - 61)) | (1L << (RightShift - 61)) | (1L << (Concat - 61)))) != 0)) ) {
							((ListLikeContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(250);
						((ListLikeContext)_localctx).right = expression(11);
						}
						break;
					case 9:
						{
						_localctx = new PostfixExpressionContext(new ExpressionContext(_parentctx, _parentState));
						((PostfixExpressionContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(251);
						if (!(precpred(_ctx, 18))) throw new FailedPredicateException(this, "precpred(_ctx, 18)");
						setState(252);
						((PostfixExpressionContext)_localctx).op = pst_ops();
						}
						break;
					case 10:
						{
						_localctx = new IndexContext(new ExpressionContext(_parentctx, _parentState));
						((IndexContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(253);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(254);
						((IndexContext)_localctx).data = indexLiteral();
						}
						break;
					}
					} 
				}
				setState(259);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
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

	public static class Pst_opsContext extends ParserRuleContext {
		public TerminalNode Increase() { return getToken(NyarParser.Increase, 0); }
		public Pst_opsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pst_ops; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterPst_ops(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitPst_ops(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitPst_ops(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Pst_opsContext pst_ops() throws RecognitionException {
		Pst_opsContext _localctx = new Pst_opsContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_pst_ops);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(260);
			match(Increase);
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

	public static class Assign_statementContext extends ParserRuleContext {
		public Assign_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign_statement; }
	 
		public Assign_statementContext() { }
		public void copyFrom(Assign_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AssignStatementContext extends Assign_statementContext {
		public Token op;
		public Assign_lhsContext id;
		public AssignableContext expr;
		public Assign_lhsContext assign_lhs() {
			return getRuleContext(Assign_lhsContext.class,0);
		}
		public AssignableContext assignable() {
			return getRuleContext(AssignableContext.class,0);
		}
		public TerminalNode Let() { return getToken(NyarParser.Let, 0); }
		public TerminalNode Final() { return getToken(NyarParser.Final, 0); }
		public AssignStatementContext(Assign_statementContext ctx) { copyFrom(ctx); }
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

	public final Assign_statementContext assign_statement() throws RecognitionException {
		Assign_statementContext _localctx = new Assign_statementContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_assign_statement);
		int _la;
		try {
			_localctx = new AssignStatementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			((AssignStatementContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !(_la==Final || _la==Let) ) {
				((AssignStatementContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(263);
			((AssignStatementContext)_localctx).id = assign_lhs();
			setState(264);
			((AssignStatementContext)_localctx).expr = assignable();
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

	public static class AssignableContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode LL() { return getToken(NyarParser.LL, 0); }
		public TerminalNode RL() { return getToken(NyarParser.RL, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public AssignableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignable; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignable(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignable(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AssignableContext assignable() throws RecognitionException {
		AssignableContext _localctx = new AssignableContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_assignable);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(275);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				{
				setState(266);
				expression(0);
				}
				break;
			case 2:
				{
				setState(267);
				match(LL);
				setState(269); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(268);
					statement();
					}
					}
					setState(271); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Using) | (1L << Class) | (1L << Final) | (1L << Let) | (1L << Type) | (1L << If) | (1L << Match) | (1L << Switch) | (1L << For) | (1L << Try) | (1L << While) | (1L << Do) | (1L << STRING) | (1L << Identifier) | (1L << NUMBER) | (1L << LS) | (1L << LM) | (1L << LL))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Colon - 68)) | (1L << (Semicolon - 68)) | (1L << (Reciprocal - 68)))) != 0) );
				setState(273);
				match(RL);
				}
				break;
			}
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

	public static class Assign_lhsContext extends ParserRuleContext {
		public Assign_lhsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign_lhs; }
	 
		public Assign_lhsContext() { }
		public void copyFrom(Assign_lhsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AssignAttributeContext extends Assign_lhsContext {
		public List<TerminalNode> Identifier() { return getTokens(NyarParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(NyarParser.Identifier, i);
		}
		public List<TerminalNode> DOT() { return getTokens(NyarParser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(NyarParser.DOT, i);
		}
		public AssignAttributeContext(Assign_lhsContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignAttribute(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignAttribute(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignAttribute(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class AssignFunctionContext extends Assign_lhsContext {
		public List<TerminalNode> Identifier() { return getTokens(NyarParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(NyarParser.Identifier, i);
		}
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public AssignFunctionContext(Assign_lhsContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignFunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignFunction(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignFunction(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class AssignPairContext extends Assign_lhsContext {
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public List<Assign_passContext> assign_pass() {
			return getRuleContexts(Assign_passContext.class);
		}
		public Assign_passContext assign_pass(int i) {
			return getRuleContext(Assign_passContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public AssignPairContext(Assign_lhsContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignPair(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignPair(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignPair(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class AssignValueContext extends Assign_lhsContext {
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public AssignValueContext(Assign_lhsContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignValue(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignValue(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class AssignWithListContext extends Assign_lhsContext {
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public TerminalNode LM() { return getToken(NyarParser.LM, 0); }
		public TerminalNode Integer() { return getToken(NyarParser.Integer, 0); }
		public TerminalNode RM() { return getToken(NyarParser.RM, 0); }
		public AssignWithListContext(Assign_lhsContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssignWithList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssignWithList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssignWithList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Assign_lhsContext assign_lhs() throws RecognitionException {
		Assign_lhsContext _localctx = new Assign_lhsContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_assign_lhs);
		int _la;
		try {
			int _alt;
			setState(308);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				_localctx = new AssignValueContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(277);
				match(Identifier);
				}
				break;
			case 2:
				_localctx = new AssignAttributeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(278);
				match(Identifier);
				setState(281); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(279);
					match(DOT);
					setState(280);
					match(Identifier);
					}
					}
					setState(283); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==DOT );
				}
				break;
			case 3:
				_localctx = new AssignFunctionContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(285);
				match(Identifier);
				setState(286);
				match(LS);
				setState(287);
				match(Identifier);
				setState(288);
				match(RS);
				}
				break;
			case 4:
				_localctx = new AssignPairContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(289);
				match(LS);
				setState(298);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier || _la==Tilde) {
					{
					setState(290);
					assign_pass();
					setState(295);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(291);
							match(COMMA);
							setState(292);
							assign_pass();
							}
							} 
						}
						setState(297);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
					}
					}
				}

				setState(301);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(300);
					match(COMMA);
					}
				}

				setState(303);
				match(RS);
				}
				break;
			case 5:
				_localctx = new AssignWithListContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(304);
				match(Identifier);
				setState(305);
				match(LM);
				setState(306);
				match(Integer);
				setState(307);
				match(RM);
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

	public static class Assign_passContext extends ParserRuleContext {
		public TerminalNode Tilde() { return getToken(NyarParser.Tilde, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public Assign_passContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign_pass; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterAssign_pass(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitAssign_pass(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitAssign_pass(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Assign_passContext assign_pass() throws RecognitionException {
		Assign_passContext _localctx = new Assign_passContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_assign_pass);
		try {
			setState(312);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Tilde:
				enterOuterAlt(_localctx, 1);
				{
				setState(310);
				match(Tilde);
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(311);
				symbol();
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class Module_statementContext extends ParserRuleContext {
		public Module_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_module_statement; }
	 
		public Module_statementContext() { }
		public void copyFrom(Module_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ModuleIncludeContext extends Module_statementContext {
		public SymbolContext module;
		public TerminalNode Using() { return getToken(NyarParser.Using, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode Times() { return getToken(NyarParser.Times, 0); }
		public TerminalNode Power() { return getToken(NyarParser.Power, 0); }
		public ModuleIncludeContext(Module_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterModuleInclude(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitModuleInclude(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitModuleInclude(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ModuleAliasContext extends Module_statementContext {
		public SymbolContext module;
		public Token alias;
		public TerminalNode Using() { return getToken(NyarParser.Using, 0); }
		public TerminalNode As() { return getToken(NyarParser.As, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public ModuleAliasContext(Module_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterModuleAlias(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitModuleAlias(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitModuleAlias(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ModuleSymbolContext extends Module_statementContext {
		public SymbolContext source;
		public Token name;
		public TerminalNode Using() { return getToken(NyarParser.Using, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public TerminalNode With() { return getToken(NyarParser.With, 0); }
		public ModuleSymbolContext(Module_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterModuleSymbol(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitModuleSymbol(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitModuleSymbol(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ModuleSymbolsContext extends Module_statementContext {
		public SymbolContext source;
		public TerminalNode Using() { return getToken(NyarParser.Using, 0); }
		public Id_tuplesContext id_tuples() {
			return getRuleContext(Id_tuplesContext.class,0);
		}
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode With() { return getToken(NyarParser.With, 0); }
		public ModuleSymbolsContext(Module_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterModuleSymbols(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitModuleSymbols(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitModuleSymbols(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ModuleResolveContext extends Module_statementContext {
		public TerminalNode Using() { return getToken(NyarParser.Using, 0); }
		public DictLiteralContext dictLiteral() {
			return getRuleContext(DictLiteralContext.class,0);
		}
		public ModuleResolveContext(Module_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterModuleResolve(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitModuleResolve(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitModuleResolve(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Module_statementContext module_statement() throws RecognitionException {
		Module_statementContext _localctx = new Module_statementContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_module_statement);
		int _la;
		try {
			setState(340);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				_localctx = new ModuleIncludeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(314);
				match(Using);
				setState(315);
				((ModuleIncludeContext)_localctx).module = symbol();
				setState(317);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Times || _la==Power) {
					{
					setState(316);
					_la = _input.LA(1);
					if ( !(_la==Times || _la==Power) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				}
				break;
			case 2:
				_localctx = new ModuleAliasContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(319);
				match(Using);
				setState(320);
				((ModuleAliasContext)_localctx).module = symbol();
				setState(321);
				match(As);
				setState(322);
				((ModuleAliasContext)_localctx).alias = match(Identifier);
				}
				break;
			case 3:
				_localctx = new ModuleSymbolContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(324);
				match(Using);
				setState(325);
				((ModuleSymbolContext)_localctx).source = symbol();
				setState(327);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==With) {
					{
					setState(326);
					match(With);
					}
				}

				setState(329);
				((ModuleSymbolContext)_localctx).name = match(Identifier);
				}
				break;
			case 4:
				_localctx = new ModuleSymbolsContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(331);
				match(Using);
				setState(332);
				((ModuleSymbolsContext)_localctx).source = symbol();
				setState(334);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==With) {
					{
					setState(333);
					match(With);
					}
				}

				setState(336);
				id_tuples();
				}
				break;
			case 5:
				_localctx = new ModuleResolveContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(338);
				match(Using);
				setState(339);
				dictLiteral();
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

	public static class Id_tuplesContext extends ParserRuleContext {
		public TerminalNode LL() { return getToken(NyarParser.LL, 0); }
		public List<TerminalNode> Identifier() { return getTokens(NyarParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(NyarParser.Identifier, i);
		}
		public TerminalNode RL() { return getToken(NyarParser.RL, 0); }
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public Id_tuplesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id_tuples; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterId_tuples(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitId_tuples(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitId_tuples(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Id_tuplesContext id_tuples() throws RecognitionException {
		Id_tuplesContext _localctx = new Id_tuplesContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_id_tuples);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(342);
			match(LL);
			setState(343);
			match(Identifier);
			setState(348);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(344);
				match(COMMA);
				setState(345);
				match(Identifier);
				}
				}
				setState(350);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(351);
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

	public static class Class_statementContext extends ParserRuleContext {
		public Class_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_statement; }
	 
		public Class_statementContext() { }
		public void copyFrom(Class_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ClassBaseContext extends Class_statementContext {
		public Token id;
		public TerminalNode Class() { return getToken(NyarParser.Class, 0); }
		public Class_defineContext class_define() {
			return getRuleContext(Class_defineContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public Class_implementContext class_implement() {
			return getRuleContext(Class_implementContext.class,0);
		}
		public ClassBaseContext(Class_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassBase(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassBase(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassBase(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ClassWithFatherContext extends Class_statementContext {
		public Token id;
		public TerminalNode Class() { return getToken(NyarParser.Class, 0); }
		public Class_fathersContext class_fathers() {
			return getRuleContext(Class_fathersContext.class,0);
		}
		public Class_defineContext class_define() {
			return getRuleContext(Class_defineContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public Class_implementContext class_implement() {
			return getRuleContext(Class_implementContext.class,0);
		}
		public ClassWithFatherContext(Class_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassWithFather(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassWithFather(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassWithFather(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Class_statementContext class_statement() throws RecognitionException {
		Class_statementContext _localctx = new Class_statementContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_class_statement);
		int _la;
		try {
			setState(367);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				_localctx = new ClassBaseContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(353);
				match(Class);
				setState(354);
				((ClassBaseContext)_localctx).id = match(Identifier);
				setState(356);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Implement || _la==Colon) {
					{
					setState(355);
					class_implement();
					}
				}

				setState(358);
				class_define();
				}
				break;
			case 2:
				_localctx = new ClassWithFatherContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(359);
				match(Class);
				setState(360);
				((ClassWithFatherContext)_localctx).id = match(Identifier);
				setState(361);
				class_fathers();
				setState(363);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Implement || _la==Colon) {
					{
					setState(362);
					class_implement();
					}
				}

				setState(365);
				class_define();
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

	public static class Class_fathersContext extends ParserRuleContext {
		public Class_fathersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_fathers; }
	 
		public Class_fathersContext() { }
		public void copyFrom(Class_fathersContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ClassFatherContext extends Class_fathersContext {
		public SymbolContext father;
		public TerminalNode Extend() { return getToken(NyarParser.Extend, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public ClassFatherContext(Class_fathersContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassFather(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassFather(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassFather(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ClassFathersContext extends Class_fathersContext {
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public List<SymbolContext> symbol() {
			return getRuleContexts(SymbolContext.class);
		}
		public SymbolContext symbol(int i) {
			return getRuleContext(SymbolContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public ClassFathersContext(Class_fathersContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassFathers(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassFathers(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassFathers(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Class_fathersContext class_fathers() throws RecognitionException {
		Class_fathersContext _localctx = new Class_fathersContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_class_fathers);
		int _la;
		try {
			setState(386);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				_localctx = new ClassFatherContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(369);
				match(Extend);
				setState(370);
				((ClassFatherContext)_localctx).father = symbol();
				}
				break;
			case 2:
				_localctx = new ClassFatherContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(371);
				match(LS);
				setState(372);
				((ClassFatherContext)_localctx).father = symbol();
				setState(373);
				match(RS);
				}
				break;
			case 3:
				_localctx = new ClassFathersContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(375);
				match(LS);
				setState(383);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(376);
					symbol();
					setState(379); 
					_errHandler.sync(this);
					_la = _input.LA(1);
					do {
						{
						{
						setState(377);
						match(COMMA);
						setState(378);
						symbol();
						}
						}
						setState(381); 
						_errHandler.sync(this);
						_la = _input.LA(1);
					} while ( _la==COMMA );
					}
				}

				setState(385);
				match(RS);
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

	public static class Class_implementContext extends ParserRuleContext {
		public Class_implementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_implement; }
	 
		public Class_implementContext() { }
		public void copyFrom(Class_implementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ClassImplementContext extends Class_implementContext {
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode Implement() { return getToken(NyarParser.Implement, 0); }
		public TerminalNode Colon() { return getToken(NyarParser.Colon, 0); }
		public ClassImplementContext(Class_implementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassImplement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassImplement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassImplement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Class_implementContext class_implement() throws RecognitionException {
		Class_implementContext _localctx = new Class_implementContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_class_implement);
		int _la;
		try {
			_localctx = new ClassImplementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(388);
			_la = _input.LA(1);
			if ( !(_la==Implement || _la==Colon) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(389);
			symbol();
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

	public static class Class_defineContext extends ParserRuleContext {
		public Class_defineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_class_define; }
	 
		public Class_defineContext() { }
		public void copyFrom(Class_defineContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ClassDefineContext extends Class_defineContext {
		public TerminalNode LL() { return getToken(NyarParser.LL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RL() { return getToken(NyarParser.RL, 0); }
		public ClassDefineContext(Class_defineContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterClassDefine(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitClassDefine(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitClassDefine(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Class_defineContext class_define() throws RecognitionException {
		Class_defineContext _localctx = new Class_defineContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_class_define);
		try {
			_localctx = new ClassDefineContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(391);
			match(LL);
			setState(392);
			expression(0);
			setState(393);
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

	public static class Interface_StatementContext extends ParserRuleContext {
		public TerminalNode Interface() { return getToken(NyarParser.Interface, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public EosContext eos() {
			return getRuleContext(EosContext.class,0);
		}
		public Interface_StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interface_Statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterInterface_Statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitInterface_Statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitInterface_Statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Interface_StatementContext interface_Statement() throws RecognitionException {
		Interface_StatementContext _localctx = new Interface_StatementContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_interface_Statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(395);
			match(Interface);
			setState(396);
			expression(0);
			setState(397);
			eos();
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

	public static class Template_StatementContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(NyarParser.Template, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public EosContext eos() {
			return getRuleContext(EosContext.class,0);
		}
		public Template_StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_template_Statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterTemplate_Statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitTemplate_Statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitTemplate_Statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Template_StatementContext template_Statement() throws RecognitionException {
		Template_StatementContext _localctx = new Template_StatementContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_template_Statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(399);
			match(Template);
			setState(400);
			expression(0);
			setState(401);
			eos();
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

	public static class Macro_StatementContext extends ParserRuleContext {
		public TerminalNode Macro() { return getToken(NyarParser.Macro, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public EosContext eos() {
			return getRuleContext(EosContext.class,0);
		}
		public Macro_StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_macro_Statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMacro_Statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMacro_Statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMacro_Statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Macro_StatementContext macro_Statement() throws RecognitionException {
		Macro_StatementContext _localctx = new Macro_StatementContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_macro_Statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(403);
			match(Macro);
			setState(404);
			expression(0);
			setState(405);
			eos();
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

	public static class Branch_statementContext extends ParserRuleContext {
		public Branch_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_branch_statement; }
	 
		public Branch_statementContext() { }
		public void copyFrom(Branch_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class MatchStatementContext extends Branch_statementContext {
		public TerminalNode Match() { return getToken(NyarParser.Match, 0); }
		public Condition_statementContext condition_statement() {
			return getRuleContext(Condition_statementContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public MatchStatementContext(Branch_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterMatchStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitMatchStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitMatchStatement(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class SwitchStatementContext extends Branch_statementContext {
		public TerminalNode Switch() { return getToken(NyarParser.Switch, 0); }
		public Condition_statementContext condition_statement() {
			return getRuleContext(Condition_statementContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public SwitchStatementContext(Branch_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterSwitchStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitSwitchStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitSwitchStatement(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class IfNestedContext extends Branch_statementContext {
		public TerminalNode If() { return getToken(NyarParser.If, 0); }
		public Condition_statementContext condition_statement() {
			return getRuleContext(Condition_statementContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public List<If_elseifContext> if_elseif() {
			return getRuleContexts(If_elseifContext.class);
		}
		public If_elseifContext if_elseif(int i) {
			return getRuleContext(If_elseifContext.class,i);
		}
		public If_elseContext if_else() {
			return getRuleContext(If_elseContext.class,0);
		}
		public IfNestedContext(Branch_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterIfNested(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitIfNested(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitIfNested(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class IfSingleContext extends Branch_statementContext {
		public TerminalNode If() { return getToken(NyarParser.If, 0); }
		public Condition_statementContext condition_statement() {
			return getRuleContext(Condition_statementContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public If_elseContext if_else() {
			return getRuleContext(If_elseContext.class,0);
		}
		public IfSingleContext(Branch_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterIfSingle(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitIfSingle(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitIfSingle(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Branch_statementContext branch_statement() throws RecognitionException {
		Branch_statementContext _localctx = new Branch_statementContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_branch_statement);
		int _la;
		try {
			int _alt;
			setState(433);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				_localctx = new IfSingleContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(407);
				match(If);
				setState(408);
				condition_statement();
				setState(409);
				expr_or_block();
				setState(411);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Else) {
					{
					setState(410);
					if_else();
					}
				}

				}
				break;
			case 2:
				_localctx = new IfNestedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(413);
				match(If);
				setState(414);
				condition_statement();
				setState(415);
				expr_or_block();
				setState(419);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(416);
						if_elseif();
						}
						} 
					}
					setState(421);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
				}
				setState(423);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Else) {
					{
					setState(422);
					if_else();
					}
				}

				}
				break;
			case 3:
				_localctx = new SwitchStatementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(425);
				match(Switch);
				setState(426);
				condition_statement();
				setState(427);
				expr_or_block();
				}
				break;
			case 4:
				_localctx = new MatchStatementContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(429);
				match(Match);
				setState(430);
				condition_statement();
				setState(431);
				expr_or_block();
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

	public static class Condition_statementContext extends ParserRuleContext {
		public Condition_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition_statement; }
	 
		public Condition_statementContext() { }
		public void copyFrom(Condition_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConditionStatementContext extends Condition_statementContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public ConditionStatementContext(Condition_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterConditionStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitConditionStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitConditionStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Condition_statementContext condition_statement() throws RecognitionException {
		Condition_statementContext _localctx = new Condition_statementContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_condition_statement);
		int _la;
		try {
			_localctx = new ConditionStatementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(436);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				{
				setState(435);
				match(LS);
				}
				break;
			}
			setState(438);
			expression(0);
			setState(440);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RS) {
				{
				setState(439);
				match(RS);
				}
			}

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

	public static class If_elseContext extends ParserRuleContext {
		public If_elseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_else; }
	 
		public If_elseContext() { }
		public void copyFrom(If_elseContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ElseStatementContext extends If_elseContext {
		public TerminalNode Else() { return getToken(NyarParser.Else, 0); }
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public ElseStatementContext(If_elseContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterElseStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitElseStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitElseStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final If_elseContext if_else() throws RecognitionException {
		If_elseContext _localctx = new If_elseContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_if_else);
		try {
			_localctx = new ElseStatementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(442);
			match(Else);
			setState(443);
			expr_or_block();
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

	public static class If_elseifContext extends ParserRuleContext {
		public If_elseifContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_elseif; }
	 
		public If_elseifContext() { }
		public void copyFrom(If_elseifContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ElseIfStatementContext extends If_elseifContext {
		public TerminalNode Else() { return getToken(NyarParser.Else, 0); }
		public TerminalNode If() { return getToken(NyarParser.If, 0); }
		public Condition_statementContext condition_statement() {
			return getRuleContext(Condition_statementContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public TerminalNode Then() { return getToken(NyarParser.Then, 0); }
		public ElseIfStatementContext(If_elseifContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterElseIfStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitElseIfStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitElseIfStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final If_elseifContext if_elseif() throws RecognitionException {
		If_elseifContext _localctx = new If_elseifContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_if_elseif);
		int _la;
		try {
			_localctx = new ElseIfStatementContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(445);
			match(Else);
			setState(446);
			match(If);
			setState(447);
			condition_statement();
			setState(449);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Then) {
				{
				setState(448);
				match(Then);
				}
			}

			setState(451);
			expr_or_block();
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

	public static class Try_statementContext extends ParserRuleContext {
		public TerminalNode Try() { return getToken(NyarParser.Try, 0); }
		public Block_statementContext block_statement() {
			return getRuleContext(Block_statementContext.class,0);
		}
		public FinalProductionContext finalProduction() {
			return getRuleContext(FinalProductionContext.class,0);
		}
		public CatchProductionContext catchProduction() {
			return getRuleContext(CatchProductionContext.class,0);
		}
		public Try_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_try_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterTry_statement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitTry_statement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitTry_statement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Try_statementContext try_statement() throws RecognitionException {
		Try_statementContext _localctx = new Try_statementContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_try_statement);
		try {
			setState(463);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(453);
				match(Try);
				setState(454);
				block_statement();
				setState(455);
				finalProduction();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(457);
				match(Try);
				setState(458);
				block_statement();
				{
				setState(459);
				catchProduction();
				setState(461);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
				case 1:
					{
					setState(460);
					finalProduction();
					}
					break;
				}
				}
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

	public static class CatchProductionContext extends ParserRuleContext {
		public TerminalNode Catch() { return getToken(NyarParser.Catch, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public Block_statementContext block_statement() {
			return getRuleContext(Block_statementContext.class,0);
		}
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public CatchProductionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_catchProduction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterCatchProduction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitCatchProduction(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitCatchProduction(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CatchProductionContext catchProduction() throws RecognitionException {
		CatchProductionContext _localctx = new CatchProductionContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_catchProduction);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(465);
			match(Catch);
			setState(467);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LS) {
				{
				setState(466);
				match(LS);
				}
			}

			setState(469);
			symbol();
			setState(471);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RS) {
				{
				setState(470);
				match(RS);
				}
			}

			setState(473);
			block_statement();
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

	public static class FinalProductionContext extends ParserRuleContext {
		public TerminalNode Final() { return getToken(NyarParser.Final, 0); }
		public Block_statementContext block_statement() {
			return getRuleContext(Block_statementContext.class,0);
		}
		public FinalProductionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_finalProduction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterFinalProduction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitFinalProduction(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitFinalProduction(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FinalProductionContext finalProduction() throws RecognitionException {
		FinalProductionContext _localctx = new FinalProductionContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_finalProduction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(475);
			match(Final);
			setState(476);
			block_statement();
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

	public static class Loop_statementContext extends ParserRuleContext {
		public Loop_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop_statement; }
	 
		public Loop_statementContext() { }
		public void copyFrom(Loop_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ForInLoopContext extends Loop_statementContext {
		public TerminalNode For() { return getToken(NyarParser.For, 0); }
		public TerminalNode Identifier() { return getToken(NyarParser.Identifier, 0); }
		public TerminalNode In() { return getToken(NyarParser.In, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public ForInLoopContext(Loop_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterForInLoop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitForInLoop(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitForInLoop(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ForLoopContext extends Loop_statementContext {
		public ExpressionContext initial;
		public ExpressionContext condition;
		public ExpressionContext increment;
		public TerminalNode For() { return getToken(NyarParser.For, 0); }
		public TerminalNode LS() { return getToken(NyarParser.LS, 0); }
		public TerminalNode RS() { return getToken(NyarParser.RS, 0); }
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ForLoopContext(Loop_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterForLoop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitForLoop(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitForLoop(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class DoLoopContext extends Loop_statementContext {
		public TerminalNode Do() { return getToken(NyarParser.Do, 0); }
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public DoLoopContext(Loop_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterDoLoop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitDoLoop(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitDoLoop(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class WhileLoopContext extends Loop_statementContext {
		public TerminalNode While() { return getToken(NyarParser.While, 0); }
		public Condition_statementContext condition_statement() {
			return getRuleContext(Condition_statementContext.class,0);
		}
		public Expr_or_blockContext expr_or_block() {
			return getRuleContext(Expr_or_blockContext.class,0);
		}
		public WhileLoopContext(Loop_statementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterWhileLoop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitWhileLoop(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitWhileLoop(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Loop_statementContext loop_statement() throws RecognitionException {
		Loop_statementContext _localctx = new Loop_statementContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_loop_statement);
		try {
			setState(501);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,53,_ctx) ) {
			case 1:
				_localctx = new ForLoopContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(478);
				match(For);
				setState(479);
				match(LS);
				{
				setState(480);
				((ForLoopContext)_localctx).initial = expression(0);
				setState(481);
				match(COMMA);
				setState(482);
				((ForLoopContext)_localctx).condition = expression(0);
				setState(483);
				match(COMMA);
				setState(484);
				((ForLoopContext)_localctx).increment = expression(0);
				}
				setState(486);
				match(RS);
				setState(487);
				expr_or_block();
				}
				break;
			case 2:
				_localctx = new ForInLoopContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(489);
				match(For);
				setState(490);
				match(Identifier);
				setState(491);
				match(In);
				setState(492);
				expression(0);
				setState(493);
				expr_or_block();
				}
				break;
			case 3:
				_localctx = new WhileLoopContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(495);
				match(While);
				setState(496);
				condition_statement();
				setState(497);
				expr_or_block();
				}
				break;
			case 4:
				_localctx = new DoLoopContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(499);
				match(Do);
				setState(500);
				expr_or_block();
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

	public static class DictLiteralContext extends ParserRuleContext {
		public TerminalNode LL() { return getToken(NyarParser.LL, 0); }
		public TerminalNode RL() { return getToken(NyarParser.RL, 0); }
		public List<KeyvalueContext> keyvalue() {
			return getRuleContexts(KeyvalueContext.class);
		}
		public KeyvalueContext keyvalue(int i) {
			return getRuleContext(KeyvalueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public DictLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dictLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterDictLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitDictLiteral(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitDictLiteral(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DictLiteralContext dictLiteral() throws RecognitionException {
		DictLiteralContext _localctx = new DictLiteralContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_dictLiteral);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(503);
			match(LL);
			setState(512);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STRING) | (1L << Identifier) | (1L << NUMBER))) != 0)) {
				{
				setState(504);
				keyvalue();
				setState(509);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(505);
						match(COMMA);
						setState(506);
						keyvalue();
						}
						} 
					}
					setState(511);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
				}
				}
			}

			setState(515);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(514);
				match(COMMA);
				}
			}

			setState(517);
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

	public static class KeyvalueContext extends ParserRuleContext {
		public Key_validContext key;
		public ElementContext value;
		public TerminalNode Colon() { return getToken(NyarParser.Colon, 0); }
		public Key_validContext key_valid() {
			return getRuleContext(Key_validContext.class,0);
		}
		public ElementContext element() {
			return getRuleContext(ElementContext.class,0);
		}
		public KeyvalueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyvalue; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterKeyvalue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitKeyvalue(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitKeyvalue(this);
			else return visitor.visitChildren(this);
		}
	}

	public final KeyvalueContext keyvalue() throws RecognitionException {
		KeyvalueContext _localctx = new KeyvalueContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_keyvalue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(519);
			((KeyvalueContext)_localctx).key = key_valid();
			setState(520);
			match(Colon);
			setState(521);
			((KeyvalueContext)_localctx).value = element();
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

	public static class Key_validContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(NyarParser.NUMBER, 0); }
		public TerminalNode STRING() { return getToken(NyarParser.STRING, 0); }
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public Key_validContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key_valid; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterKey_valid(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitKey_valid(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitKey_valid(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Key_validContext key_valid() throws RecognitionException {
		Key_validContext _localctx = new Key_validContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_key_valid);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(526);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUMBER:
				{
				setState(523);
				match(NUMBER);
				}
				break;
			case STRING:
				{
				setState(524);
				match(STRING);
				}
				break;
			case Identifier:
				{
				setState(525);
				symbol();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
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

	public static class ListLiteralContext extends ParserRuleContext {
		public TerminalNode LM() { return getToken(NyarParser.LM, 0); }
		public TerminalNode RM() { return getToken(NyarParser.RM, 0); }
		public List<ElementContext> element() {
			return getRuleContexts(ElementContext.class);
		}
		public ElementContext element(int i) {
			return getRuleContext(ElementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public ListLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_listLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterListLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitListLiteral(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitListLiteral(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ListLiteralContext listLiteral() throws RecognitionException {
		ListLiteralContext _localctx = new ListLiteralContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_listLiteral);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(528);
			match(LM);
			setState(539);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Type) | (1L << STRING) | (1L << Identifier) | (1L << NUMBER) | (1L << LS) | (1L << LM) | (1L << LL))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (Increase - 68)) | (1L << (Plus - 68)) | (1L << (Minus - 68)) | (1L << (BitNot - 68)) | (1L << (LogicNot - 68)) | (1L << (Reciprocal - 68)))) != 0)) {
				{
				setState(529);
				element();
				setState(536);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(531);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(530);
							match(COMMA);
							}
						}

						setState(533);
						element();
						}
						} 
					}
					setState(538);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
				}
				}
			}

			setState(542);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(541);
				match(COMMA);
				}
			}

			setState(544);
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

	public static class ElementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public DictLiteralContext dictLiteral() {
			return getRuleContext(DictLiteralContext.class,0);
		}
		public ListLiteralContext listLiteral() {
			return getRuleContext(ListLiteralContext.class,0);
		}
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterElement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitElement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitElement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(549);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				{
				setState(546);
				expression(0);
				}
				break;
			case 2:
				{
				setState(547);
				dictLiteral();
				}
				break;
			case 3:
				{
				setState(548);
				listLiteral();
				}
				break;
			}
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

	public static class IndexLiteralContext extends ParserRuleContext {
		public TerminalNode LM() { return getToken(NyarParser.LM, 0); }
		public List<Index_validContext> index_valid() {
			return getRuleContexts(Index_validContext.class);
		}
		public Index_validContext index_valid(int i) {
			return getRuleContext(Index_validContext.class,i);
		}
		public TerminalNode RM() { return getToken(NyarParser.RM, 0); }
		public List<TerminalNode> COMMA() { return getTokens(NyarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(NyarParser.COMMA, i);
		}
		public IndexLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterIndexLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitIndexLiteral(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitIndexLiteral(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IndexLiteralContext indexLiteral() throws RecognitionException {
		IndexLiteralContext _localctx = new IndexLiteralContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_indexLiteral);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(551);
			match(LM);
			setState(552);
			index_valid();
			setState(557); 
			_errHandler.sync(this);
			_alt = 1+1;
			do {
				switch (_alt) {
				case 1+1:
					{
					{
					setState(554);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(553);
						match(COMMA);
						}
					}

					setState(556);
					index_valid();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(559); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
			} while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(561);
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

	public static class Index_validContext extends ParserRuleContext {
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public TerminalNode Integer() { return getToken(NyarParser.Integer, 0); }
		public TerminalNode Colon() { return getToken(NyarParser.Colon, 0); }
		public Index_validContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_valid; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterIndex_valid(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitIndex_valid(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitIndex_valid(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Index_validContext index_valid() throws RecognitionException {
		Index_validContext _localctx = new Index_validContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_index_valid);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(565);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Identifier:
				{
				setState(563);
				symbol();
				}
				break;
			case Integer:
				{
				setState(564);
				match(Integer);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(568);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(567);
				match(Colon);
				}
			}

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

	public static class SignedIntegerContext extends ParserRuleContext {
		public TerminalNode Integer() { return getToken(NyarParser.Integer, 0); }
		public TerminalNode Plus() { return getToken(NyarParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(NyarParser.Minus, 0); }
		public SignedIntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signedInteger; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).enterSignedInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NyarListener ) ((NyarListener)listener).exitSignedInteger(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof NyarVisitor ) return ((NyarVisitor<? extends T>)visitor).visitSignedInteger(this);
			else return visitor.visitChildren(this);
		}
	}

	public final SignedIntegerContext signedInteger() throws RecognitionException {
		SignedIntegerContext _localctx = new SignedIntegerContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_signedInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(571);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Plus || _la==Minus) {
				{
				setState(570);
				_la = _input.LA(1);
				if ( !(_la==Plus || _la==Minus) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(573);
			match(Integer);
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
		case 12:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 17);
		case 1:
			return precpred(_ctx, 16);
		case 2:
			return precpred(_ctx, 15);
		case 3:
			return precpred(_ctx, 14);
		case 4:
			return precpred(_ctx, 13);
		case 5:
			return precpred(_ctx, 12);
		case 6:
			return precpred(_ctx, 11);
		case 7:
			return precpred(_ctx, 10);
		case 8:
			return precpred(_ctx, 18);
		case 9:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u0090\u0242\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\3\2\7\2Z\n\2\f\2\16\2]\13\2\3\2\3\2\3\3\3\3\3\3\5\3d\n\3\3\3\3\3"+
		"\5\3h\n\3\3\3\3\3\5\3l\n\3\3\3\3\3\5\3p\n\3\3\3\3\3\5\3t\n\3\3\3\3\3\5"+
		"\3x\n\3\3\3\3\3\5\3|\n\3\3\3\3\3\5\3\u0080\n\3\5\3\u0082\n\3\3\4\3\4\6"+
		"\4\u0086\n\4\r\4\16\4\u0087\3\4\3\4\3\4\3\4\6\4\u008e\n\4\r\4\16\4\u008f"+
		"\3\4\3\4\5\4\u0094\n\4\3\5\3\5\5\5\u0098\n\5\3\6\3\6\3\7\3\7\3\b\3\b\3"+
		"\b\7\b\u00a1\n\b\f\b\16\b\u00a4\13\b\3\t\3\t\3\t\3\t\7\t\u00aa\n\t\f\t"+
		"\16\t\u00ad\13\t\3\n\3\n\3\n\7\n\u00b2\n\n\f\n\16\n\u00b5\13\n\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\5\13\u00bd\n\13\3\f\3\f\3\f\5\f\u00c2\n\f\3\f"+
		"\3\f\3\r\3\r\3\r\7\r\u00c9\n\r\f\r\16\r\u00cc\13\r\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\5\16\u00e4\n\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\7\16\u0102\n\16\f\16\16\16\u0105\13"+
		"\16\3\17\3\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21\6\21\u0110\n\21\r\21"+
		"\16\21\u0111\3\21\3\21\5\21\u0116\n\21\3\22\3\22\3\22\3\22\6\22\u011c"+
		"\n\22\r\22\16\22\u011d\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\7\22\u0128"+
		"\n\22\f\22\16\22\u012b\13\22\5\22\u012d\n\22\3\22\5\22\u0130\n\22\3\22"+
		"\3\22\3\22\3\22\3\22\5\22\u0137\n\22\3\23\3\23\5\23\u013b\n\23\3\24\3"+
		"\24\3\24\5\24\u0140\n\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24"+
		"\u014a\n\24\3\24\3\24\3\24\3\24\3\24\5\24\u0151\n\24\3\24\3\24\3\24\3"+
		"\24\5\24\u0157\n\24\3\25\3\25\3\25\3\25\7\25\u015d\n\25\f\25\16\25\u0160"+
		"\13\25\3\25\3\25\3\26\3\26\3\26\5\26\u0167\n\26\3\26\3\26\3\26\3\26\3"+
		"\26\5\26\u016e\n\26\3\26\3\26\5\26\u0172\n\26\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\3\27\3\27\6\27\u017e\n\27\r\27\16\27\u017f\5\27\u0182"+
		"\n\27\3\27\5\27\u0185\n\27\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\32\3\32"+
		"\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35"+
		"\5\35\u019e\n\35\3\35\3\35\3\35\3\35\7\35\u01a4\n\35\f\35\16\35\u01a7"+
		"\13\35\3\35\5\35\u01aa\n\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5"+
		"\35\u01b4\n\35\3\36\5\36\u01b7\n\36\3\36\3\36\5\36\u01bb\n\36\3\37\3\37"+
		"\3\37\3 \3 \3 \3 \5 \u01c4\n \3 \3 \3!\3!\3!\3!\3!\3!\3!\3!\5!\u01d0\n"+
		"!\5!\u01d2\n!\3\"\3\"\5\"\u01d6\n\"\3\"\3\"\5\"\u01da\n\"\3\"\3\"\3#\3"+
		"#\3#\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3"+
		"$\3$\5$\u01f8\n$\3%\3%\3%\3%\7%\u01fe\n%\f%\16%\u0201\13%\5%\u0203\n%"+
		"\3%\5%\u0206\n%\3%\3%\3&\3&\3&\3&\3\'\3\'\3\'\5\'\u0211\n\'\3(\3(\3(\5"+
		"(\u0216\n(\3(\7(\u0219\n(\f(\16(\u021c\13(\5(\u021e\n(\3(\5(\u0221\n("+
		"\3(\3(\3)\3)\3)\5)\u0228\n)\3*\3*\3*\5*\u022d\n*\3*\6*\u0230\n*\r*\16"+
		"*\u0231\3*\3*\3+\3+\5+\u0238\n+\3+\5+\u023b\n+\3,\5,\u023e\n,\3,\3,\3"+
		",\3\u0231\3\32-\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62"+
		"\64\668:<>@BDFHJLNPRTV\2\r\7\2FFHHMMmn\u0083\u0083\7\2GGKKccss\177\177"+
		"\4\2??CC\b\2@ADE_aggiill\3\2]^\4\2PSWW\4\2HHMM\5\2??CCdd\3\2\31\32\4\2"+
		"PP]]\4\2\23\23ww\2\u027f\2[\3\2\2\2\4\u0081\3\2\2\2\6\u0093\3\2\2\2\b"+
		"\u0097\3\2\2\2\n\u0099\3\2\2\2\f\u009b\3\2\2\2\16\u009d\3\2\2\2\20\u00a5"+
		"\3\2\2\2\22\u00ae\3\2\2\2\24\u00bc\3\2\2\2\26\u00be\3\2\2\2\30\u00c5\3"+
		"\2\2\2\32\u00e3\3\2\2\2\34\u0106\3\2\2\2\36\u0108\3\2\2\2 \u0115\3\2\2"+
		"\2\"\u0136\3\2\2\2$\u013a\3\2\2\2&\u0156\3\2\2\2(\u0158\3\2\2\2*\u0171"+
		"\3\2\2\2,\u0184\3\2\2\2.\u0186\3\2\2\2\60\u0189\3\2\2\2\62\u018d\3\2\2"+
		"\2\64\u0191\3\2\2\2\66\u0195\3\2\2\28\u01b3\3\2\2\2:\u01b6\3\2\2\2<\u01bc"+
		"\3\2\2\2>\u01bf\3\2\2\2@\u01d1\3\2\2\2B\u01d3\3\2\2\2D\u01dd\3\2\2\2F"+
		"\u01f7\3\2\2\2H\u01f9\3\2\2\2J\u0209\3\2\2\2L\u0210\3\2\2\2N\u0212\3\2"+
		"\2\2P\u0227\3\2\2\2R\u0229\3\2\2\2T\u0237\3\2\2\2V\u023d\3\2\2\2XZ\5\4"+
		"\3\2YX\3\2\2\2Z]\3\2\2\2[Y\3\2\2\2[\\\3\2\2\2\\^\3\2\2\2][\3\2\2\2^_\7"+
		"\2\2\3_\3\3\2\2\2`\u0082\5\n\6\2ac\5\6\4\2bd\5\f\7\2cb\3\2\2\2cd\3\2\2"+
		"\2d\u0082\3\2\2\2eg\5\22\n\2fh\5\f\7\2gf\3\2\2\2gh\3\2\2\2h\u0082\3\2"+
		"\2\2ik\5\36\20\2jl\5\f\7\2kj\3\2\2\2kl\3\2\2\2l\u0082\3\2\2\2mo\58\35"+
		"\2np\5\f\7\2on\3\2\2\2op\3\2\2\2p\u0082\3\2\2\2qs\5@!\2rt\5\f\7\2sr\3"+
		"\2\2\2st\3\2\2\2t\u0082\3\2\2\2uw\5&\24\2vx\5\f\7\2wv\3\2\2\2wx\3\2\2"+
		"\2x\u0082\3\2\2\2y{\5*\26\2z|\5\f\7\2{z\3\2\2\2{|\3\2\2\2|\u0082\3\2\2"+
		"\2}\177\5F$\2~\u0080\5\f\7\2\177~\3\2\2\2\177\u0080\3\2\2\2\u0080\u0082"+
		"\3\2\2\2\u0081`\3\2\2\2\u0081a\3\2\2\2\u0081e\3\2\2\2\u0081i\3\2\2\2\u0081"+
		"m\3\2\2\2\u0081q\3\2\2\2\u0081u\3\2\2\2\u0081y\3\2\2\2\u0081}\3\2\2\2"+
		"\u0082\5\3\2\2\2\u0083\u0085\7\64\2\2\u0084\u0086\5\4\3\2\u0085\u0084"+
		"\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2\2\2\u0088"+
		"\u0089\3\2\2\2\u0089\u008a\7\65\2\2\u008a\u0094\3\2\2\2\u008b\u008d\7"+
		"w\2\2\u008c\u008e\5\4\3\2\u008d\u008c\3\2\2\2\u008e\u008f\3\2\2\2\u008f"+
		"\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0092\7\f"+
		"\2\2\u0092\u0094\3\2\2\2\u0093\u0083\3\2\2\2\u0093\u008b\3\2\2\2\u0094"+
		"\7\3\2\2\2\u0095\u0098\5\6\4\2\u0096\u0098\5\32\16\2\u0097\u0095\3\2\2"+
		"\2\u0097\u0096\3\2\2\2\u0098\t\3\2\2\2\u0099\u009a\5\f\7\2\u009a\13\3"+
		"\2\2\2\u009b\u009c\7x\2\2\u009c\r\3\2\2\2\u009d\u00a2\7,\2\2\u009e\u009f"+
		"\7\u0080\2\2\u009f\u00a1\7,\2\2\u00a0\u009e\3\2\2\2\u00a1\u00a4\3\2\2"+
		"\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\17\3\2\2\2\u00a4\u00a2"+
		"\3\2\2\2\u00a5\u00a6\7\u008d\2\2\u00a6\u00ab\7,\2\2\u00a7\u00a8\7\u0080"+
		"\2\2\u00a8\u00aa\7,\2\2\u00a9\u00a7\3\2\2\2\u00aa\u00ad\3\2\2\2\u00ab"+
		"\u00a9\3\2\2\2\u00ab\u00ac\3\2\2\2\u00ac\21\3\2\2\2\u00ad\u00ab\3\2\2"+
		"\2\u00ae\u00b3\5\32\16\2\u00af\u00b0\7\u0082\2\2\u00b0\u00b2\5\32\16\2"+
		"\u00b1\u00af\3\2\2\2\u00b2\u00b5\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b3\u00b4"+
		"\3\2\2\2\u00b4\23\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b6\u00b7\7,\2\2\u00b7"+
		"\u00b8\7u\2\2\u00b8\u00bd\5\32\16\2\u00b9\u00ba\7\33\2\2\u00ba\u00bb\7"+
		",\2\2\u00bb\u00bd\5\32\16\2\u00bc\u00b6\3\2\2\2\u00bc\u00b9\3\2\2\2\u00bd"+
		"\25\3\2\2\2\u00be\u00bf\5\16\b\2\u00bf\u00c1\7\60\2\2\u00c0\u00c2\5\30"+
		"\r\2\u00c1\u00c0\3\2\2\2\u00c1\u00c2\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3"+
		"\u00c4\7\61\2\2\u00c4\27\3\2\2\2\u00c5\u00ca\5\32\16\2\u00c6\u00c7\7\u0082"+
		"\2\2\u00c7\u00c9\5\32\16\2\u00c8\u00c6\3\2\2\2\u00c9\u00cc\3\2\2\2\u00ca"+
		"\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb\31\3\2\2\2\u00cc\u00ca\3\2\2"+
		"\2\u00cd\u00ce\b\16\1\2\u00ce\u00e4\5\24\13\2\u00cf\u00e4\5\26\f\2\u00d0"+
		"\u00d1\t\2\2\2\u00d1\u00e4\5\32\16\25\u00d2\u00d3\5\26\f\2\u00d3\u00d4"+
		"\7v\2\2\u00d4\u00d5\5 \21\2\u00d5\u00e4\3\2\2\2\u00d6\u00d7\5\"\22\2\u00d7"+
		"\u00d8\t\3\2\2\u00d8\u00d9\5 \21\2\u00d9\u00e4\3\2\2\2\u00da\u00e4\5N"+
		"(\2\u00db\u00e4\5H%\2\u00dc\u00e4\7+\2\2\u00dd\u00e4\7-\2\2\u00de\u00e4"+
		"\5\16\b\2\u00df\u00e0\7\60\2\2\u00e0\u00e1\5\32\16\2\u00e1\u00e2\7\61"+
		"\2\2\u00e2\u00e4\3\2\2\2\u00e3\u00cd\3\2\2\2\u00e3\u00cf\3\2\2\2\u00e3"+
		"\u00d0\3\2\2\2\u00e3\u00d2\3\2\2\2\u00e3\u00d6\3\2\2\2\u00e3\u00da\3\2"+
		"\2\2\u00e3\u00db\3\2\2\2\u00e3\u00dc\3\2\2\2\u00e3\u00dd\3\2\2\2\u00e3"+
		"\u00de\3\2\2\2\u00e3\u00df\3\2\2\2\u00e4\u0103\3\2\2\2\u00e5\u00e6\f\23"+
		"\2\2\u00e6\u00e7\7\u0080\2\2\u00e7\u0102\5\32\16\24\u00e8\u00e9\f\22\2"+
		"\2\u00e9\u00ea\t\4\2\2\u00ea\u0102\5\32\16\23\u00eb\u00ec\f\21\2\2\u00ec"+
		"\u00ed\t\5\2\2\u00ed\u0102\5\32\16\22\u00ee\u00ef\f\20\2\2\u00ef\u00f0"+
		"\t\5\2\2\u00f0\u0102\5\32\16\21\u00f1\u00f2\f\17\2\2\u00f2\u00f3\t\6\2"+
		"\2\u00f3\u0102\5\32\16\17\u00f4\u00f5\f\16\2\2\u00f5\u00f6\t\7\2\2\u00f6"+
		"\u0102\5\32\16\17\u00f7\u00f8\f\r\2\2\u00f8\u00f9\t\b\2\2\u00f9\u0102"+
		"\5\32\16\16\u00fa\u00fb\f\f\2\2\u00fb\u00fc\t\t\2\2\u00fc\u0102\5\32\16"+
		"\r\u00fd\u00fe\f\24\2\2\u00fe\u0102\5\34\17\2\u00ff\u0100\f\b\2\2\u0100"+
		"\u0102\5R*\2\u0101\u00e5\3\2\2\2\u0101\u00e8\3\2\2\2\u0101\u00eb\3\2\2"+
		"\2\u0101\u00ee\3\2\2\2\u0101\u00f1\3\2\2\2\u0101\u00f4\3\2\2\2\u0101\u00f7"+
		"\3\2\2\2\u0101\u00fa\3\2\2\2\u0101\u00fd\3\2\2\2\u0101\u00ff\3\2\2\2\u0102"+
		"\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\33\3\2\2"+
		"\2\u0105\u0103\3\2\2\2\u0106\u0107\7F\2\2\u0107\35\3\2\2\2\u0108\u0109"+
		"\t\n\2\2\u0109\u010a\5\"\22\2\u010a\u010b\5 \21\2\u010b\37\3\2\2\2\u010c"+
		"\u0116\5\32\16\2\u010d\u010f\7\64\2\2\u010e\u0110\5\4\3\2\u010f\u010e"+
		"\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u010f\3\2\2\2\u0111\u0112\3\2\2\2\u0112"+
		"\u0113\3\2\2\2\u0113\u0114\7\65\2\2\u0114\u0116\3\2\2\2\u0115\u010c\3"+
		"\2\2\2\u0115\u010d\3\2\2\2\u0116!\3\2\2\2\u0117\u0137\7,\2\2\u0118\u011b"+
		"\7,\2\2\u0119\u011a\7\u0080\2\2\u011a\u011c\7,\2\2\u011b\u0119\3\2\2\2"+
		"\u011c\u011d\3\2\2\2\u011d\u011b\3\2\2\2\u011d\u011e\3\2\2\2\u011e\u0137"+
		"\3\2\2\2\u011f\u0120\7,\2\2\u0120\u0121\7\60\2\2\u0121\u0122\7,\2\2\u0122"+
		"\u0137\7\61\2\2\u0123\u012c\7\60\2\2\u0124\u0129\5$\23\2\u0125\u0126\7"+
		"\u0082\2\2\u0126\u0128\5$\23\2\u0127\u0125\3\2\2\2\u0128\u012b\3\2\2\2"+
		"\u0129\u0127\3\2\2\2\u0129\u012a\3\2\2\2\u012a\u012d\3\2\2\2\u012b\u0129"+
		"\3\2\2\2\u012c\u0124\3\2\2\2\u012c\u012d\3\2\2\2\u012d\u012f\3\2\2\2\u012e"+
		"\u0130\7\u0082\2\2\u012f\u012e\3\2\2\2\u012f\u0130\3\2\2\2\u0130\u0131"+
		"\3\2\2\2\u0131\u0137\7\61\2\2\u0132\u0133\7,\2\2\u0133\u0134\7\62\2\2"+
		"\u0134\u0135\7/\2\2\u0135\u0137\7\63\2\2\u0136\u0117\3\2\2\2\u0136\u0118"+
		"\3\2\2\2\u0136\u011f\3\2\2\2\u0136\u0123\3\2\2\2\u0136\u0132\3\2\2\2\u0137"+
		"#\3\2\2\2\u0138\u013b\7f\2\2\u0139\u013b\5\16\b\2\u013a\u0138\3\2\2\2"+
		"\u013a\u0139\3\2\2\2\u013b%\3\2\2\2\u013c\u013d\7\7\2\2\u013d\u013f\5"+
		"\16\b\2\u013e\u0140\t\13\2\2\u013f\u013e\3\2\2\2\u013f\u0140\3\2\2\2\u0140"+
		"\u0157\3\2\2\2\u0141\u0142\7\7\2\2\u0142\u0143\5\16\b\2\u0143\u0144\7"+
		"\t\2\2\u0144\u0145\7,\2\2\u0145\u0157\3\2\2\2\u0146\u0147\7\7\2\2\u0147"+
		"\u0149\5\16\b\2\u0148\u014a\7\n\2\2\u0149\u0148\3\2\2\2\u0149\u014a\3"+
		"\2\2\2\u014a\u014b\3\2\2\2\u014b\u014c\7,\2\2\u014c\u0157\3\2\2\2\u014d"+
		"\u014e\7\7\2\2\u014e\u0150\5\16\b\2\u014f\u0151\7\n\2\2\u0150\u014f\3"+
		"\2\2\2\u0150\u0151\3\2\2\2\u0151\u0152\3\2\2\2\u0152\u0153\5(\25\2\u0153"+
		"\u0157\3\2\2\2\u0154\u0155\7\7\2\2\u0155\u0157\5H%\2\u0156\u013c\3\2\2"+
		"\2\u0156\u0141\3\2\2\2\u0156\u0146\3\2\2\2\u0156\u014d\3\2\2\2\u0156\u0154"+
		"\3\2\2\2\u0157\'\3\2\2\2\u0158\u0159\7\64\2\2\u0159\u015e\7,\2\2\u015a"+
		"\u015b\7\u0082\2\2\u015b\u015d\7,\2\2\u015c\u015a\3\2\2\2\u015d\u0160"+
		"\3\2\2\2\u015e\u015c\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0161\3\2\2\2\u0160"+
		"\u015e\3\2\2\2\u0161\u0162\7\65\2\2\u0162)\3\2\2\2\u0163\u0164\7\21\2"+
		"\2\u0164\u0166\7,\2\2\u0165\u0167\5.\30\2\u0166\u0165\3\2\2\2\u0166\u0167"+
		"\3\2\2\2\u0167\u0168\3\2\2\2\u0168\u0172\5\60\31\2\u0169\u016a\7\21\2"+
		"\2\u016a\u016b\7,\2\2\u016b\u016d\5,\27\2\u016c\u016e\5.\30\2\u016d\u016c"+
		"\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u016f\3\2\2\2\u016f\u0170\5\60\31\2"+
		"\u0170\u0172\3\2\2\2\u0171\u0163\3\2\2\2\u0171\u0169\3\2\2\2\u0172+\3"+
		"\2\2\2\u0173\u0174\7\22\2\2\u0174\u0185\5\16\b\2\u0175\u0176\7\60\2\2"+
		"\u0176\u0177\5\16\b\2\u0177\u0178\7\61\2\2\u0178\u0185\3\2\2\2\u0179\u0181"+
		"\7\60\2\2\u017a\u017d\5\16\b\2\u017b\u017c\7\u0082\2\2\u017c\u017e\5\16"+
		"\b\2\u017d\u017b\3\2\2\2\u017e\u017f\3\2\2\2\u017f\u017d\3\2\2\2\u017f"+
		"\u0180\3\2\2\2\u0180\u0182\3\2\2\2\u0181\u017a\3\2\2\2\u0181\u0182\3\2"+
		"\2\2\u0182\u0183\3\2\2\2\u0183\u0185\7\61\2\2\u0184\u0173\3\2\2\2\u0184"+
		"\u0175\3\2\2\2\u0184\u0179\3\2\2\2\u0185-\3\2\2\2\u0186\u0187\t\f\2\2"+
		"\u0187\u0188\5\16\b\2\u0188/\3\2\2\2\u0189\u018a\7\64\2\2\u018a\u018b"+
		"\5\32\16\2\u018b\u018c\7\65\2\2\u018c\61\3\2\2\2\u018d\u018e\7\16\2\2"+
		"\u018e\u018f\5\32\16\2\u018f\u0190\5\f\7\2\u0190\63\3\2\2\2\u0191\u0192"+
		"\7\r\2\2\u0192\u0193\5\32\16\2\u0193\u0194\5\f\7\2\u0194\65\3\2\2\2\u0195"+
		"\u0196\7\13\2\2\u0196\u0197\5\32\16\2\u0197\u0198\5\f\7\2\u0198\67\3\2"+
		"\2\2\u0199\u019a\7\34\2\2\u019a\u019b\5:\36\2\u019b\u019d\5\b\5\2\u019c"+
		"\u019e\5<\37\2\u019d\u019c\3\2\2\2\u019d\u019e\3\2\2\2\u019e\u01b4\3\2"+
		"\2\2\u019f\u01a0\7\34\2\2\u01a0\u01a1\5:\36\2\u01a1\u01a5\5\b\5\2\u01a2"+
		"\u01a4\5> \2\u01a3\u01a2\3\2\2\2\u01a4\u01a7\3\2\2\2\u01a5\u01a3\3\2\2"+
		"\2\u01a5\u01a6\3\2\2\2\u01a6\u01a9\3\2\2\2\u01a7\u01a5\3\2\2\2\u01a8\u01aa"+
		"\5<\37\2\u01a9\u01a8\3\2\2\2\u01a9\u01aa\3\2\2\2\u01aa\u01b4\3\2\2\2\u01ab"+
		"\u01ac\7 \2\2\u01ac\u01ad\5:\36\2\u01ad\u01ae\5\b\5\2\u01ae\u01b4\3\2"+
		"\2\2\u01af\u01b0\7\37\2\2\u01b0\u01b1\5:\36\2\u01b1\u01b2\5\b\5\2\u01b2"+
		"\u01b4\3\2\2\2\u01b3\u0199\3\2\2\2\u01b3\u019f\3\2\2\2\u01b3\u01ab\3\2"+
		"\2\2\u01b3\u01af\3\2\2\2\u01b49\3\2\2\2\u01b5\u01b7\7\60\2\2\u01b6\u01b5"+
		"\3\2\2\2\u01b6\u01b7\3\2\2\2\u01b7\u01b8\3\2\2\2\u01b8\u01ba\5\32\16\2"+
		"\u01b9\u01bb\7\61\2\2\u01ba\u01b9\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb;\3"+
		"\2\2\2\u01bc\u01bd\7\36\2\2\u01bd\u01be\5\b\5\2\u01be=\3\2\2\2\u01bf\u01c0"+
		"\7\36\2\2\u01c0\u01c1\7\34\2\2\u01c1\u01c3\5:\36\2\u01c2\u01c4\7\35\2"+
		"\2\u01c3\u01c2\3\2\2\2\u01c3\u01c4\3\2\2\2\u01c4\u01c5\3\2\2\2\u01c5\u01c6"+
		"\5\b\5\2\u01c6?\3\2\2\2\u01c7\u01c8\7$\2\2\u01c8\u01c9\5\6\4\2\u01c9\u01ca"+
		"\5D#\2\u01ca\u01d2\3\2\2\2\u01cb\u01cc\7$\2\2\u01cc\u01cd\5\6\4\2\u01cd"+
		"\u01cf\5B\"\2\u01ce\u01d0\5D#\2\u01cf\u01ce\3\2\2\2\u01cf\u01d0\3\2\2"+
		"\2\u01d0\u01d2\3\2\2\2\u01d1\u01c7\3\2\2\2\u01d1\u01cb\3\2\2\2\u01d2A"+
		"\3\2\2\2\u01d3\u01d5\7%\2\2\u01d4\u01d6\7\60\2\2\u01d5\u01d4\3\2\2\2\u01d5"+
		"\u01d6\3\2\2\2\u01d6\u01d7\3\2\2\2\u01d7\u01d9\5\16\b\2\u01d8\u01da\7"+
		"\61\2\2\u01d9\u01d8\3\2\2\2\u01d9\u01da\3\2\2\2\u01da\u01db\3\2\2\2\u01db"+
		"\u01dc\5\6\4\2\u01dcC\3\2\2\2\u01dd\u01de\7\31\2\2\u01de\u01df\5\6\4\2"+
		"\u01dfE\3\2\2\2\u01e0\u01e1\7\"\2\2\u01e1\u01e2\7\60\2\2\u01e2\u01e3\5"+
		"\32\16\2\u01e3\u01e4\7\u0082\2\2\u01e4\u01e5\5\32\16\2\u01e5\u01e6\7\u0082"+
		"\2\2\u01e6\u01e7\5\32\16\2\u01e7\u01e8\3\2\2\2\u01e8\u01e9\7\61\2\2\u01e9"+
		"\u01ea\5\b\5\2\u01ea\u01f8\3\2\2\2\u01eb\u01ec\7\"\2\2\u01ec\u01ed\7,"+
		"\2\2\u01ed\u01ee\7#\2\2\u01ee\u01ef\5\32\16\2\u01ef\u01f0\5\b\5\2\u01f0"+
		"\u01f8\3\2\2\2\u01f1\u01f2\7&\2\2\u01f2\u01f3\5:\36\2\u01f3\u01f4\5\b"+
		"\5\2\u01f4\u01f8\3\2\2\2\u01f5\u01f6\7\'\2\2\u01f6\u01f8\5\b\5\2\u01f7"+
		"\u01e0\3\2\2\2\u01f7\u01eb\3\2\2\2\u01f7\u01f1\3\2\2\2\u01f7\u01f5\3\2"+
		"\2\2\u01f8G\3\2\2\2\u01f9\u0202\7\64\2\2\u01fa\u01ff\5J&\2\u01fb\u01fc"+
		"\7\u0082\2\2\u01fc\u01fe\5J&\2\u01fd\u01fb\3\2\2\2\u01fe\u0201\3\2\2\2"+
		"\u01ff\u01fd\3\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0203\3\2\2\2\u0201\u01ff"+
		"\3\2\2\2\u0202\u01fa\3\2\2\2\u0202\u0203\3\2\2\2\u0203\u0205\3\2\2\2\u0204"+
		"\u0206\7\u0082\2\2\u0205\u0204\3\2\2\2\u0205\u0206\3\2\2\2\u0206\u0207"+
		"\3\2\2\2\u0207\u0208\7\65\2\2\u0208I\3\2\2\2\u0209\u020a\5L\'\2\u020a"+
		"\u020b\7w\2\2\u020b\u020c\5P)\2\u020cK\3\2\2\2\u020d\u0211\7-\2\2\u020e"+
		"\u0211\7+\2\2\u020f\u0211\5\16\b\2\u0210\u020d\3\2\2\2\u0210\u020e\3\2"+
		"\2\2\u0210\u020f\3\2\2\2\u0211M\3\2\2\2\u0212\u021d\7\62\2\2\u0213\u021a"+
		"\5P)\2\u0214\u0216\7\u0082\2\2\u0215\u0214\3\2\2\2\u0215\u0216\3\2\2\2"+
		"\u0216\u0217\3\2\2\2\u0217\u0219\5P)\2\u0218\u0215\3\2\2\2\u0219\u021c"+
		"\3\2\2\2\u021a\u0218\3\2\2\2\u021a\u021b\3\2\2\2\u021b\u021e\3\2\2\2\u021c"+
		"\u021a\3\2\2\2\u021d\u0213\3\2\2\2\u021d\u021e\3\2\2\2\u021e\u0220\3\2"+
		"\2\2\u021f\u0221\7\u0082\2\2\u0220\u021f\3\2\2\2\u0220\u0221\3\2\2\2\u0221"+
		"\u0222\3\2\2\2\u0222\u0223\7\63\2\2\u0223O\3\2\2\2\u0224\u0228\5\32\16"+
		"\2\u0225\u0228\5H%\2\u0226\u0228\5N(\2\u0227\u0224\3\2\2\2\u0227\u0225"+
		"\3\2\2\2\u0227\u0226\3\2\2\2\u0228Q\3\2\2\2\u0229\u022a\7\62\2\2\u022a"+
		"\u022f\5T+\2\u022b\u022d\7\u0082\2\2\u022c\u022b\3\2\2\2\u022c\u022d\3"+
		"\2\2\2\u022d\u022e\3\2\2\2\u022e\u0230\5T+\2\u022f\u022c\3\2\2\2\u0230"+
		"\u0231\3\2\2\2\u0231\u0232\3\2\2\2\u0231\u022f\3\2\2\2\u0232\u0233\3\2"+
		"\2\2\u0233\u0234\7\63\2\2\u0234S\3\2\2\2\u0235\u0238\5\16\b\2\u0236\u0238"+
		"\7/\2\2\u0237\u0235\3\2\2\2\u0237\u0236\3\2\2\2\u0238\u023a\3\2\2\2\u0239"+
		"\u023b\7w\2\2\u023a\u0239\3\2\2\2\u023a\u023b\3\2\2\2\u023bU\3\2\2\2\u023c"+
		"\u023e\t\b\2\2\u023d\u023c\3\2\2\2\u023d\u023e\3\2\2\2\u023e\u023f\3\2"+
		"\2\2\u023f\u0240\7/\2\2\u0240W\3\2\2\2F[cgkosw{\177\u0081\u0087\u008f"+
		"\u0093\u0097\u00a2\u00ab\u00b3\u00bc\u00c1\u00ca\u00e3\u0101\u0103\u0111"+
		"\u0115\u011d\u0129\u012c\u012f\u0136\u013a\u013f\u0149\u0150\u0156\u015e"+
		"\u0166\u016d\u0171\u017f\u0181\u0184\u019d\u01a5\u01a9\u01b3\u01b6\u01ba"+
		"\u01c3\u01cf\u01d1\u01d5\u01d9\u01f7\u01ff\u0202\u0205\u0210\u0215\u021a"+
		"\u021d\u0220\u0227\u022c\u0231\u0237\u023a\u023d";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}