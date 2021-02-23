// Generated from c:\Users\Rudolf\source\repos\SOM\SOM\SOM.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class SOMParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Comment=1, Whitespace=2, Primitive=3, Identifier=4, Equal=5, Separator=6, 
		NewTerm=7, EndTerm=8, Or=9, Comma=10, Minus=11, Not=12, And=13, Star=14, 
		Div=15, Mod=16, Plus=17, More=18, Less=19, At=20, Per=21, OperatorSequence=22, 
		Colon=23, NewBlock=24, EndBlock=25, Pound=26, Exit=27, Period=28, Assign=29, 
		Integer=30, Double=31, Keyword=32, KeywordSequence=33, STString=34;
	public static final int
		RULE_classdef = 0, RULE_superclass = 1, RULE_instanceFields = 2, RULE_classFields = 3, 
		RULE_method = 4, RULE_pattern = 5, RULE_unaryPattern = 6, RULE_binaryPattern = 7, 
		RULE_keywordPattern = 8, RULE_methodBlock = 9, RULE_unarySelector = 10, 
		RULE_binarySelector = 11, RULE_identifier = 12, RULE_keyword = 13, RULE_argument = 14, 
		RULE_blockContents = 15, RULE_localDefs = 16, RULE_blockBody = 17, RULE_result = 18, 
		RULE_expression = 19, RULE_assignation = 20, RULE_assignments = 21, RULE_assignment = 22, 
		RULE_evaluation = 23, RULE_primary = 24, RULE_variable = 25, RULE_messages = 26, 
		RULE_unaryMessage = 27, RULE_binaryMessage = 28, RULE_binaryOperand = 29, 
		RULE_keywordMessage = 30, RULE_formula = 31, RULE_nestedTerm = 32, RULE_literal = 33, 
		RULE_literalArray = 34, RULE_literalNumber = 35, RULE_literalDecimal = 36, 
		RULE_negativeDecimal = 37, RULE_literalInteger = 38, RULE_literalDouble = 39, 
		RULE_literalSymbol = 40, RULE_literalString = 41, RULE_selector = 42, 
		RULE_keywordSelector = 43, RULE_string = 44, RULE_nestedBlock = 45, RULE_blockPattern = 46, 
		RULE_blockArguments = 47;
	private static String[] makeRuleNames() {
		return new String[] {
			"classdef", "superclass", "instanceFields", "classFields", "method", 
			"pattern", "unaryPattern", "binaryPattern", "keywordPattern", "methodBlock", 
			"unarySelector", "binarySelector", "identifier", "keyword", "argument", 
			"blockContents", "localDefs", "blockBody", "result", "expression", "assignation", 
			"assignments", "assignment", "evaluation", "primary", "variable", "messages", 
			"unaryMessage", "binaryMessage", "binaryOperand", "keywordMessage", "formula", 
			"nestedTerm", "literal", "literalArray", "literalNumber", "literalDecimal", 
			"negativeDecimal", "literalInteger", "literalDouble", "literalSymbol", 
			"literalString", "selector", "keywordSelector", "string", "nestedBlock", 
			"blockPattern", "blockArguments"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, "'primitive'", null, "'='", null, "'('", "')'", "'|'", 
			"','", "'-'", "'~'", "'&'", "'*'", "'/'", "'\\'", "'+'", "'>'", "'<'", 
			"'@'", "'%'", null, "':'", "'['", "']'", "'#'", "'^'", "'.'", "':='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Comment", "Whitespace", "Primitive", "Identifier", "Equal", "Separator", 
			"NewTerm", "EndTerm", "Or", "Comma", "Minus", "Not", "And", "Star", "Div", 
			"Mod", "Plus", "More", "Less", "At", "Per", "OperatorSequence", "Colon", 
			"NewBlock", "EndBlock", "Pound", "Exit", "Period", "Assign", "Integer", 
			"Double", "Keyword", "KeywordSequence", "STString"
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
	public String getGrammarFileName() { return "SOM.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public SOMParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ClassdefContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(SOMParser.Identifier, 0); }
		public TerminalNode Equal() { return getToken(SOMParser.Equal, 0); }
		public SuperclassContext superclass() {
			return getRuleContext(SuperclassContext.class,0);
		}
		public InstanceFieldsContext instanceFields() {
			return getRuleContext(InstanceFieldsContext.class,0);
		}
		public TerminalNode EndTerm() { return getToken(SOMParser.EndTerm, 0); }
		public List<MethodContext> method() {
			return getRuleContexts(MethodContext.class);
		}
		public MethodContext method(int i) {
			return getRuleContext(MethodContext.class,i);
		}
		public TerminalNode Separator() { return getToken(SOMParser.Separator, 0); }
		public ClassFieldsContext classFields() {
			return getRuleContext(ClassFieldsContext.class,0);
		}
		public ClassdefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classdef; }
	}

	public final ClassdefContext classdef() throws RecognitionException {
		ClassdefContext _localctx = new ClassdefContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_classdef);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(96);
			match(Identifier);
			setState(97);
			match(Equal);
			setState(98);
			superclass();
			setState(99);
			instanceFields();
			setState(103);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Primitive) | (1L << Identifier) | (1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence) | (1L << Keyword))) != 0)) {
				{
				{
				setState(100);
				method();
				}
				}
				setState(105);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(114);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Separator) {
				{
				setState(106);
				match(Separator);
				setState(107);
				classFields();
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Primitive) | (1L << Identifier) | (1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence) | (1L << Keyword))) != 0)) {
					{
					{
					setState(108);
					method();
					}
					}
					setState(113);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(116);
			match(EndTerm);
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

	public static class SuperclassContext extends ParserRuleContext {
		public TerminalNode NewTerm() { return getToken(SOMParser.NewTerm, 0); }
		public TerminalNode Identifier() { return getToken(SOMParser.Identifier, 0); }
		public SuperclassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_superclass; }
	}

	public final SuperclassContext superclass() throws RecognitionException {
		SuperclassContext _localctx = new SuperclassContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_superclass);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Identifier) {
				{
				setState(118);
				match(Identifier);
				}
			}

			setState(121);
			match(NewTerm);
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

	public static class InstanceFieldsContext extends ParserRuleContext {
		public List<TerminalNode> Or() { return getTokens(SOMParser.Or); }
		public TerminalNode Or(int i) {
			return getToken(SOMParser.Or, i);
		}
		public List<VariableContext> variable() {
			return getRuleContexts(VariableContext.class);
		}
		public VariableContext variable(int i) {
			return getRuleContext(VariableContext.class,i);
		}
		public InstanceFieldsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instanceFields; }
	}

	public final InstanceFieldsContext instanceFields() throws RecognitionException {
		InstanceFieldsContext _localctx = new InstanceFieldsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_instanceFields);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(123);
				match(Or);
				setState(127);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Primitive || _la==Identifier) {
					{
					{
					setState(124);
					variable();
					}
					}
					setState(129);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(130);
				match(Or);
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

	public static class ClassFieldsContext extends ParserRuleContext {
		public List<TerminalNode> Or() { return getTokens(SOMParser.Or); }
		public TerminalNode Or(int i) {
			return getToken(SOMParser.Or, i);
		}
		public List<VariableContext> variable() {
			return getRuleContexts(VariableContext.class);
		}
		public VariableContext variable(int i) {
			return getRuleContext(VariableContext.class,i);
		}
		public ClassFieldsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classFields; }
	}

	public final ClassFieldsContext classFields() throws RecognitionException {
		ClassFieldsContext _localctx = new ClassFieldsContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_classFields);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(133);
				match(Or);
				setState(137);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Primitive || _la==Identifier) {
					{
					{
					setState(134);
					variable();
					}
					}
					setState(139);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(140);
				match(Or);
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

	public static class MethodContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public TerminalNode Equal() { return getToken(SOMParser.Equal, 0); }
		public TerminalNode Primitive() { return getToken(SOMParser.Primitive, 0); }
		public MethodBlockContext methodBlock() {
			return getRuleContext(MethodBlockContext.class,0);
		}
		public MethodContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_method; }
	}

	public final MethodContext method() throws RecognitionException {
		MethodContext _localctx = new MethodContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_method);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			pattern();
			setState(144);
			match(Equal);
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Primitive:
				{
				setState(145);
				match(Primitive);
				}
				break;
			case NewTerm:
				{
				setState(146);
				methodBlock();
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

	public static class PatternContext extends ParserRuleContext {
		public UnaryPatternContext unaryPattern() {
			return getRuleContext(UnaryPatternContext.class,0);
		}
		public KeywordPatternContext keywordPattern() {
			return getRuleContext(KeywordPatternContext.class,0);
		}
		public BinaryPatternContext binaryPattern() {
			return getRuleContext(BinaryPatternContext.class,0);
		}
		public PatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pattern; }
	}

	public final PatternContext pattern() throws RecognitionException {
		PatternContext _localctx = new PatternContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_pattern);
		try {
			setState(152);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Primitive:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(149);
				unaryPattern();
				}
				break;
			case Keyword:
				enterOuterAlt(_localctx, 2);
				{
				setState(150);
				keywordPattern();
				}
				break;
			case Equal:
			case Or:
			case Comma:
			case Minus:
			case Not:
			case And:
			case Star:
			case Div:
			case Mod:
			case Plus:
			case More:
			case Less:
			case At:
			case Per:
			case OperatorSequence:
				enterOuterAlt(_localctx, 3);
				{
				setState(151);
				binaryPattern();
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

	public static class UnaryPatternContext extends ParserRuleContext {
		public UnarySelectorContext unarySelector() {
			return getRuleContext(UnarySelectorContext.class,0);
		}
		public UnaryPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryPattern; }
	}

	public final UnaryPatternContext unaryPattern() throws RecognitionException {
		UnaryPatternContext _localctx = new UnaryPatternContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_unaryPattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(154);
			unarySelector();
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

	public static class BinaryPatternContext extends ParserRuleContext {
		public BinarySelectorContext binarySelector() {
			return getRuleContext(BinarySelectorContext.class,0);
		}
		public ArgumentContext argument() {
			return getRuleContext(ArgumentContext.class,0);
		}
		public BinaryPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binaryPattern; }
	}

	public final BinaryPatternContext binaryPattern() throws RecognitionException {
		BinaryPatternContext _localctx = new BinaryPatternContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_binaryPattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(156);
			binarySelector();
			setState(157);
			argument();
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

	public static class KeywordPatternContext extends ParserRuleContext {
		public List<KeywordContext> keyword() {
			return getRuleContexts(KeywordContext.class);
		}
		public KeywordContext keyword(int i) {
			return getRuleContext(KeywordContext.class,i);
		}
		public List<ArgumentContext> argument() {
			return getRuleContexts(ArgumentContext.class);
		}
		public ArgumentContext argument(int i) {
			return getRuleContext(ArgumentContext.class,i);
		}
		public KeywordPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keywordPattern; }
	}

	public final KeywordPatternContext keywordPattern() throws RecognitionException {
		KeywordPatternContext _localctx = new KeywordPatternContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_keywordPattern);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(159);
				keyword();
				setState(160);
				argument();
				}
				}
				setState(164); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==Keyword );
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

	public static class MethodBlockContext extends ParserRuleContext {
		public TerminalNode NewTerm() { return getToken(SOMParser.NewTerm, 0); }
		public TerminalNode EndTerm() { return getToken(SOMParser.EndTerm, 0); }
		public BlockContentsContext blockContents() {
			return getRuleContext(BlockContentsContext.class,0);
		}
		public MethodBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_methodBlock; }
	}

	public final MethodBlockContext methodBlock() throws RecognitionException {
		MethodBlockContext _localctx = new MethodBlockContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_methodBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			match(NewTerm);
			setState(168);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Primitive) | (1L << Identifier) | (1L << NewTerm) | (1L << Or) | (1L << Minus) | (1L << NewBlock) | (1L << Pound) | (1L << Exit) | (1L << Integer) | (1L << Double) | (1L << STString))) != 0)) {
				{
				setState(167);
				blockContents();
				}
			}

			setState(170);
			match(EndTerm);
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

	public static class UnarySelectorContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public UnarySelectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unarySelector; }
	}

	public final UnarySelectorContext unarySelector() throws RecognitionException {
		UnarySelectorContext _localctx = new UnarySelectorContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_unarySelector);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			identifier();
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

	public static class BinarySelectorContext extends ParserRuleContext {
		public TerminalNode Or() { return getToken(SOMParser.Or, 0); }
		public TerminalNode Comma() { return getToken(SOMParser.Comma, 0); }
		public TerminalNode Minus() { return getToken(SOMParser.Minus, 0); }
		public TerminalNode Equal() { return getToken(SOMParser.Equal, 0); }
		public TerminalNode Not() { return getToken(SOMParser.Not, 0); }
		public TerminalNode And() { return getToken(SOMParser.And, 0); }
		public TerminalNode Star() { return getToken(SOMParser.Star, 0); }
		public TerminalNode Div() { return getToken(SOMParser.Div, 0); }
		public TerminalNode Mod() { return getToken(SOMParser.Mod, 0); }
		public TerminalNode Plus() { return getToken(SOMParser.Plus, 0); }
		public TerminalNode More() { return getToken(SOMParser.More, 0); }
		public TerminalNode Less() { return getToken(SOMParser.Less, 0); }
		public TerminalNode At() { return getToken(SOMParser.At, 0); }
		public TerminalNode Per() { return getToken(SOMParser.Per, 0); }
		public TerminalNode OperatorSequence() { return getToken(SOMParser.OperatorSequence, 0); }
		public BinarySelectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binarySelector; }
	}

	public final BinarySelectorContext binarySelector() throws RecognitionException {
		BinarySelectorContext _localctx = new BinarySelectorContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_binarySelector);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode Primitive() { return getToken(SOMParser.Primitive, 0); }
		public TerminalNode Identifier() { return getToken(SOMParser.Identifier, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_identifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			_la = _input.LA(1);
			if ( !(_la==Primitive || _la==Identifier) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static class KeywordContext extends ParserRuleContext {
		public TerminalNode Keyword() { return getToken(SOMParser.Keyword, 0); }
		public KeywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyword; }
	}

	public final KeywordContext keyword() throws RecognitionException {
		KeywordContext _localctx = new KeywordContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_keyword);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			match(Keyword);
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

	public static class ArgumentContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public ArgumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument; }
	}

	public final ArgumentContext argument() throws RecognitionException {
		ArgumentContext _localctx = new ArgumentContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_argument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			variable();
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

	public static class BlockContentsContext extends ParserRuleContext {
		public BlockBodyContext blockBody() {
			return getRuleContext(BlockBodyContext.class,0);
		}
		public List<TerminalNode> Or() { return getTokens(SOMParser.Or); }
		public TerminalNode Or(int i) {
			return getToken(SOMParser.Or, i);
		}
		public LocalDefsContext localDefs() {
			return getRuleContext(LocalDefsContext.class,0);
		}
		public BlockContentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockContents; }
	}

	public final BlockContentsContext blockContents() throws RecognitionException {
		BlockContentsContext _localctx = new BlockContentsContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_blockContents);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Or) {
				{
				setState(182);
				match(Or);
				setState(183);
				localDefs();
				setState(184);
				match(Or);
				}
			}

			setState(188);
			blockBody();
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

	public static class LocalDefsContext extends ParserRuleContext {
		public List<VariableContext> variable() {
			return getRuleContexts(VariableContext.class);
		}
		public VariableContext variable(int i) {
			return getRuleContext(VariableContext.class,i);
		}
		public LocalDefsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_localDefs; }
	}

	public final LocalDefsContext localDefs() throws RecognitionException {
		LocalDefsContext _localctx = new LocalDefsContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_localDefs);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Primitive || _la==Identifier) {
				{
				{
				setState(190);
				variable();
				}
				}
				setState(195);
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

	public static class BlockBodyContext extends ParserRuleContext {
		public TerminalNode Exit() { return getToken(SOMParser.Exit, 0); }
		public ResultContext result() {
			return getRuleContext(ResultContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Period() { return getToken(SOMParser.Period, 0); }
		public BlockBodyContext blockBody() {
			return getRuleContext(BlockBodyContext.class,0);
		}
		public BlockBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockBody; }
	}

	public final BlockBodyContext blockBody() throws RecognitionException {
		BlockBodyContext _localctx = new BlockBodyContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_blockBody);
		int _la;
		try {
			setState(205);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Exit:
				enterOuterAlt(_localctx, 1);
				{
				setState(196);
				match(Exit);
				setState(197);
				result();
				}
				break;
			case Primitive:
			case Identifier:
			case NewTerm:
			case Minus:
			case NewBlock:
			case Pound:
			case Integer:
			case Double:
			case STString:
				enterOuterAlt(_localctx, 2);
				{
				setState(198);
				expression();
				setState(203);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Period) {
					{
					setState(199);
					match(Period);
					setState(201);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Primitive) | (1L << Identifier) | (1L << NewTerm) | (1L << Minus) | (1L << NewBlock) | (1L << Pound) | (1L << Exit) | (1L << Integer) | (1L << Double) | (1L << STString))) != 0)) {
						{
						setState(200);
						blockBody();
						}
					}

					}
				}

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

	public static class ResultContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Period() { return getToken(SOMParser.Period, 0); }
		public ResultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_result; }
	}

	public final ResultContext result() throws RecognitionException {
		ResultContext _localctx = new ResultContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_result);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			expression();
			setState(209);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Period) {
				{
				setState(208);
				match(Period);
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

	public static class ExpressionContext extends ParserRuleContext {
		public AssignationContext assignation() {
			return getRuleContext(AssignationContext.class,0);
		}
		public EvaluationContext evaluation() {
			return getRuleContext(EvaluationContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expression);
		try {
			setState(213);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(211);
				assignation();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(212);
				evaluation();
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

	public static class AssignationContext extends ParserRuleContext {
		public AssignmentsContext assignments() {
			return getRuleContext(AssignmentsContext.class,0);
		}
		public EvaluationContext evaluation() {
			return getRuleContext(EvaluationContext.class,0);
		}
		public AssignationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignation; }
	}

	public final AssignationContext assignation() throws RecognitionException {
		AssignationContext _localctx = new AssignationContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_assignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			assignments();
			setState(216);
			evaluation();
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

	public static class AssignmentsContext extends ParserRuleContext {
		public List<AssignmentContext> assignment() {
			return getRuleContexts(AssignmentContext.class);
		}
		public AssignmentContext assignment(int i) {
			return getRuleContext(AssignmentContext.class,i);
		}
		public AssignmentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignments; }
	}

	public final AssignmentsContext assignments() throws RecognitionException {
		AssignmentsContext _localctx = new AssignmentsContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_assignments);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(219); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(218);
					assignment();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(221); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
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

	public static class AssignmentContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode Assign() { return getToken(SOMParser.Assign, 0); }
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			variable();
			setState(224);
			match(Assign);
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

	public static class EvaluationContext extends ParserRuleContext {
		public PrimaryContext primary() {
			return getRuleContext(PrimaryContext.class,0);
		}
		public MessagesContext messages() {
			return getRuleContext(MessagesContext.class,0);
		}
		public EvaluationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_evaluation; }
	}

	public final EvaluationContext evaluation() throws RecognitionException {
		EvaluationContext _localctx = new EvaluationContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_evaluation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(226);
			primary();
			setState(228);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Primitive) | (1L << Identifier) | (1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence) | (1L << Keyword))) != 0)) {
				{
				setState(227);
				messages();
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

	public static class PrimaryContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public NestedTermContext nestedTerm() {
			return getRuleContext(NestedTermContext.class,0);
		}
		public NestedBlockContext nestedBlock() {
			return getRuleContext(NestedBlockContext.class,0);
		}
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public PrimaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primary; }
	}

	public final PrimaryContext primary() throws RecognitionException {
		PrimaryContext _localctx = new PrimaryContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_primary);
		try {
			setState(234);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Primitive:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(230);
				variable();
				}
				break;
			case NewTerm:
				enterOuterAlt(_localctx, 2);
				{
				setState(231);
				nestedTerm();
				}
				break;
			case NewBlock:
				enterOuterAlt(_localctx, 3);
				{
				setState(232);
				nestedBlock();
				}
				break;
			case Minus:
			case Pound:
			case Integer:
			case Double:
			case STString:
				enterOuterAlt(_localctx, 4);
				{
				setState(233);
				literal();
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

	public static class VariableContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(236);
			identifier();
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

	public static class MessagesContext extends ParserRuleContext {
		public List<UnaryMessageContext> unaryMessage() {
			return getRuleContexts(UnaryMessageContext.class);
		}
		public UnaryMessageContext unaryMessage(int i) {
			return getRuleContext(UnaryMessageContext.class,i);
		}
		public List<BinaryMessageContext> binaryMessage() {
			return getRuleContexts(BinaryMessageContext.class);
		}
		public BinaryMessageContext binaryMessage(int i) {
			return getRuleContext(BinaryMessageContext.class,i);
		}
		public KeywordMessageContext keywordMessage() {
			return getRuleContext(KeywordMessageContext.class,0);
		}
		public MessagesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messages; }
	}

	public final MessagesContext messages() throws RecognitionException {
		MessagesContext _localctx = new MessagesContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_messages);
		int _la;
		try {
			setState(261);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Primitive:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(239); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(238);
					unaryMessage();
					}
					}
					setState(241); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==Primitive || _la==Identifier );
				setState(246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence))) != 0)) {
					{
					{
					setState(243);
					binaryMessage();
					}
					}
					setState(248);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Keyword) {
					{
					setState(249);
					keywordMessage();
					}
				}

				}
				break;
			case Equal:
			case Or:
			case Comma:
			case Minus:
			case Not:
			case And:
			case Star:
			case Div:
			case Mod:
			case Plus:
			case More:
			case Less:
			case At:
			case Per:
			case OperatorSequence:
				enterOuterAlt(_localctx, 2);
				{
				setState(253); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(252);
					binaryMessage();
					}
					}
					setState(255); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence))) != 0) );
				setState(258);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Keyword) {
					{
					setState(257);
					keywordMessage();
					}
				}

				}
				break;
			case Keyword:
				enterOuterAlt(_localctx, 3);
				{
				setState(260);
				keywordMessage();
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

	public static class UnaryMessageContext extends ParserRuleContext {
		public UnarySelectorContext unarySelector() {
			return getRuleContext(UnarySelectorContext.class,0);
		}
		public UnaryMessageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryMessage; }
	}

	public final UnaryMessageContext unaryMessage() throws RecognitionException {
		UnaryMessageContext _localctx = new UnaryMessageContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_unaryMessage);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(263);
			unarySelector();
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

	public static class BinaryMessageContext extends ParserRuleContext {
		public BinarySelectorContext binarySelector() {
			return getRuleContext(BinarySelectorContext.class,0);
		}
		public BinaryOperandContext binaryOperand() {
			return getRuleContext(BinaryOperandContext.class,0);
		}
		public BinaryMessageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binaryMessage; }
	}

	public final BinaryMessageContext binaryMessage() throws RecognitionException {
		BinaryMessageContext _localctx = new BinaryMessageContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_binaryMessage);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265);
			binarySelector();
			setState(266);
			binaryOperand();
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

	public static class BinaryOperandContext extends ParserRuleContext {
		public PrimaryContext primary() {
			return getRuleContext(PrimaryContext.class,0);
		}
		public List<UnaryMessageContext> unaryMessage() {
			return getRuleContexts(UnaryMessageContext.class);
		}
		public UnaryMessageContext unaryMessage(int i) {
			return getRuleContext(UnaryMessageContext.class,i);
		}
		public BinaryOperandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binaryOperand; }
	}

	public final BinaryOperandContext binaryOperand() throws RecognitionException {
		BinaryOperandContext _localctx = new BinaryOperandContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_binaryOperand);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(268);
			primary();
			setState(272);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Primitive || _la==Identifier) {
				{
				{
				setState(269);
				unaryMessage();
				}
				}
				setState(274);
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

	public static class KeywordMessageContext extends ParserRuleContext {
		public List<KeywordContext> keyword() {
			return getRuleContexts(KeywordContext.class);
		}
		public KeywordContext keyword(int i) {
			return getRuleContext(KeywordContext.class,i);
		}
		public List<FormulaContext> formula() {
			return getRuleContexts(FormulaContext.class);
		}
		public FormulaContext formula(int i) {
			return getRuleContext(FormulaContext.class,i);
		}
		public KeywordMessageContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keywordMessage; }
	}

	public final KeywordMessageContext keywordMessage() throws RecognitionException {
		KeywordMessageContext _localctx = new KeywordMessageContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_keywordMessage);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(278); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(275);
				keyword();
				setState(276);
				formula();
				}
				}
				setState(280); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==Keyword );
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

	public static class FormulaContext extends ParserRuleContext {
		public BinaryOperandContext binaryOperand() {
			return getRuleContext(BinaryOperandContext.class,0);
		}
		public List<BinaryMessageContext> binaryMessage() {
			return getRuleContexts(BinaryMessageContext.class);
		}
		public BinaryMessageContext binaryMessage(int i) {
			return getRuleContext(BinaryMessageContext.class,i);
		}
		public FormulaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formula; }
	}

	public final FormulaContext formula() throws RecognitionException {
		FormulaContext _localctx = new FormulaContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_formula);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			binaryOperand();
			setState(286);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Equal) | (1L << Or) | (1L << Comma) | (1L << Minus) | (1L << Not) | (1L << And) | (1L << Star) | (1L << Div) | (1L << Mod) | (1L << Plus) | (1L << More) | (1L << Less) | (1L << At) | (1L << Per) | (1L << OperatorSequence))) != 0)) {
				{
				{
				setState(283);
				binaryMessage();
				}
				}
				setState(288);
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

	public static class NestedTermContext extends ParserRuleContext {
		public TerminalNode NewTerm() { return getToken(SOMParser.NewTerm, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode EndTerm() { return getToken(SOMParser.EndTerm, 0); }
		public NestedTermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedTerm; }
	}

	public final NestedTermContext nestedTerm() throws RecognitionException {
		NestedTermContext _localctx = new NestedTermContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_nestedTerm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(289);
			match(NewTerm);
			setState(290);
			expression();
			setState(291);
			match(EndTerm);
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

	public static class LiteralContext extends ParserRuleContext {
		public LiteralArrayContext literalArray() {
			return getRuleContext(LiteralArrayContext.class,0);
		}
		public LiteralSymbolContext literalSymbol() {
			return getRuleContext(LiteralSymbolContext.class,0);
		}
		public LiteralStringContext literalString() {
			return getRuleContext(LiteralStringContext.class,0);
		}
		public LiteralNumberContext literalNumber() {
			return getRuleContext(LiteralNumberContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_literal);
		try {
			setState(297);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(293);
				literalArray();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(294);
				literalSymbol();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(295);
				literalString();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(296);
				literalNumber();
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

	public static class LiteralArrayContext extends ParserRuleContext {
		public TerminalNode Pound() { return getToken(SOMParser.Pound, 0); }
		public TerminalNode NewTerm() { return getToken(SOMParser.NewTerm, 0); }
		public TerminalNode EndTerm() { return getToken(SOMParser.EndTerm, 0); }
		public List<LiteralContext> literal() {
			return getRuleContexts(LiteralContext.class);
		}
		public LiteralContext literal(int i) {
			return getRuleContext(LiteralContext.class,i);
		}
		public LiteralArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalArray; }
	}

	public final LiteralArrayContext literalArray() throws RecognitionException {
		LiteralArrayContext _localctx = new LiteralArrayContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_literalArray);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(299);
			match(Pound);
			setState(300);
			match(NewTerm);
			setState(304);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Minus) | (1L << Pound) | (1L << Integer) | (1L << Double) | (1L << STString))) != 0)) {
				{
				{
				setState(301);
				literal();
				}
				}
				setState(306);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(307);
			match(EndTerm);
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

	public static class LiteralNumberContext extends ParserRuleContext {
		public NegativeDecimalContext negativeDecimal() {
			return getRuleContext(NegativeDecimalContext.class,0);
		}
		public LiteralDecimalContext literalDecimal() {
			return getRuleContext(LiteralDecimalContext.class,0);
		}
		public LiteralNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalNumber; }
	}

	public final LiteralNumberContext literalNumber() throws RecognitionException {
		LiteralNumberContext _localctx = new LiteralNumberContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_literalNumber);
		try {
			setState(311);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Minus:
				enterOuterAlt(_localctx, 1);
				{
				setState(309);
				negativeDecimal();
				}
				break;
			case Integer:
			case Double:
				enterOuterAlt(_localctx, 2);
				{
				setState(310);
				literalDecimal();
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

	public static class LiteralDecimalContext extends ParserRuleContext {
		public LiteralIntegerContext literalInteger() {
			return getRuleContext(LiteralIntegerContext.class,0);
		}
		public LiteralDoubleContext literalDouble() {
			return getRuleContext(LiteralDoubleContext.class,0);
		}
		public LiteralDecimalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalDecimal; }
	}

	public final LiteralDecimalContext literalDecimal() throws RecognitionException {
		LiteralDecimalContext _localctx = new LiteralDecimalContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_literalDecimal);
		try {
			setState(315);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Integer:
				enterOuterAlt(_localctx, 1);
				{
				setState(313);
				literalInteger();
				}
				break;
			case Double:
				enterOuterAlt(_localctx, 2);
				{
				setState(314);
				literalDouble();
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

	public static class NegativeDecimalContext extends ParserRuleContext {
		public TerminalNode Minus() { return getToken(SOMParser.Minus, 0); }
		public LiteralDecimalContext literalDecimal() {
			return getRuleContext(LiteralDecimalContext.class,0);
		}
		public NegativeDecimalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_negativeDecimal; }
	}

	public final NegativeDecimalContext negativeDecimal() throws RecognitionException {
		NegativeDecimalContext _localctx = new NegativeDecimalContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_negativeDecimal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(317);
			match(Minus);
			setState(318);
			literalDecimal();
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

	public static class LiteralIntegerContext extends ParserRuleContext {
		public TerminalNode Integer() { return getToken(SOMParser.Integer, 0); }
		public LiteralIntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalInteger; }
	}

	public final LiteralIntegerContext literalInteger() throws RecognitionException {
		LiteralIntegerContext _localctx = new LiteralIntegerContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_literalInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(320);
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

	public static class LiteralDoubleContext extends ParserRuleContext {
		public TerminalNode Double() { return getToken(SOMParser.Double, 0); }
		public LiteralDoubleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalDouble; }
	}

	public final LiteralDoubleContext literalDouble() throws RecognitionException {
		LiteralDoubleContext _localctx = new LiteralDoubleContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_literalDouble);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(322);
			match(Double);
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

	public static class LiteralSymbolContext extends ParserRuleContext {
		public TerminalNode Pound() { return getToken(SOMParser.Pound, 0); }
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public SelectorContext selector() {
			return getRuleContext(SelectorContext.class,0);
		}
		public LiteralSymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalSymbol; }
	}

	public final LiteralSymbolContext literalSymbol() throws RecognitionException {
		LiteralSymbolContext _localctx = new LiteralSymbolContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_literalSymbol);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(324);
			match(Pound);
			setState(327);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STString:
				{
				setState(325);
				string();
				}
				break;
			case Primitive:
			case Identifier:
			case Equal:
			case Or:
			case Comma:
			case Minus:
			case Not:
			case And:
			case Star:
			case Div:
			case Mod:
			case Plus:
			case More:
			case Less:
			case At:
			case Per:
			case OperatorSequence:
			case Keyword:
			case KeywordSequence:
				{
				setState(326);
				selector();
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

	public static class LiteralStringContext extends ParserRuleContext {
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public LiteralStringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalString; }
	}

	public final LiteralStringContext literalString() throws RecognitionException {
		LiteralStringContext _localctx = new LiteralStringContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_literalString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(329);
			string();
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

	public static class SelectorContext extends ParserRuleContext {
		public BinarySelectorContext binarySelector() {
			return getRuleContext(BinarySelectorContext.class,0);
		}
		public KeywordSelectorContext keywordSelector() {
			return getRuleContext(KeywordSelectorContext.class,0);
		}
		public UnarySelectorContext unarySelector() {
			return getRuleContext(UnarySelectorContext.class,0);
		}
		public SelectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selector; }
	}

	public final SelectorContext selector() throws RecognitionException {
		SelectorContext _localctx = new SelectorContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_selector);
		try {
			setState(334);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
			case Or:
			case Comma:
			case Minus:
			case Not:
			case And:
			case Star:
			case Div:
			case Mod:
			case Plus:
			case More:
			case Less:
			case At:
			case Per:
			case OperatorSequence:
				enterOuterAlt(_localctx, 1);
				{
				setState(331);
				binarySelector();
				}
				break;
			case Keyword:
			case KeywordSequence:
				enterOuterAlt(_localctx, 2);
				{
				setState(332);
				keywordSelector();
				}
				break;
			case Primitive:
			case Identifier:
				enterOuterAlt(_localctx, 3);
				{
				setState(333);
				unarySelector();
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

	public static class KeywordSelectorContext extends ParserRuleContext {
		public TerminalNode Keyword() { return getToken(SOMParser.Keyword, 0); }
		public TerminalNode KeywordSequence() { return getToken(SOMParser.KeywordSequence, 0); }
		public KeywordSelectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keywordSelector; }
	}

	public final KeywordSelectorContext keywordSelector() throws RecognitionException {
		KeywordSelectorContext _localctx = new KeywordSelectorContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_keywordSelector);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(336);
			_la = _input.LA(1);
			if ( !(_la==Keyword || _la==KeywordSequence) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static class StringContext extends ParserRuleContext {
		public TerminalNode STString() { return getToken(SOMParser.STString, 0); }
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(338);
			match(STString);
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

	public static class NestedBlockContext extends ParserRuleContext {
		public TerminalNode NewBlock() { return getToken(SOMParser.NewBlock, 0); }
		public TerminalNode EndBlock() { return getToken(SOMParser.EndBlock, 0); }
		public BlockPatternContext blockPattern() {
			return getRuleContext(BlockPatternContext.class,0);
		}
		public BlockContentsContext blockContents() {
			return getRuleContext(BlockContentsContext.class,0);
		}
		public NestedBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedBlock; }
	}

	public final NestedBlockContext nestedBlock() throws RecognitionException {
		NestedBlockContext _localctx = new NestedBlockContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_nestedBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(340);
			match(NewBlock);
			setState(342);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(341);
				blockPattern();
				}
			}

			setState(345);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Primitive) | (1L << Identifier) | (1L << NewTerm) | (1L << Or) | (1L << Minus) | (1L << NewBlock) | (1L << Pound) | (1L << Exit) | (1L << Integer) | (1L << Double) | (1L << STString))) != 0)) {
				{
				setState(344);
				blockContents();
				}
			}

			setState(347);
			match(EndBlock);
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

	public static class BlockPatternContext extends ParserRuleContext {
		public BlockArgumentsContext blockArguments() {
			return getRuleContext(BlockArgumentsContext.class,0);
		}
		public TerminalNode Or() { return getToken(SOMParser.Or, 0); }
		public BlockPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockPattern; }
	}

	public final BlockPatternContext blockPattern() throws RecognitionException {
		BlockPatternContext _localctx = new BlockPatternContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_blockPattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(349);
			blockArguments();
			setState(350);
			match(Or);
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

	public static class BlockArgumentsContext extends ParserRuleContext {
		public List<TerminalNode> Colon() { return getTokens(SOMParser.Colon); }
		public TerminalNode Colon(int i) {
			return getToken(SOMParser.Colon, i);
		}
		public List<ArgumentContext> argument() {
			return getRuleContexts(ArgumentContext.class);
		}
		public ArgumentContext argument(int i) {
			return getRuleContext(ArgumentContext.class,i);
		}
		public BlockArgumentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockArguments; }
	}

	public final BlockArgumentsContext blockArguments() throws RecognitionException {
		BlockArgumentsContext _localctx = new BlockArgumentsContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_blockArguments);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(354); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(352);
				match(Colon);
				setState(353);
				argument();
				}
				}
				setState(356); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==Colon );
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3$\u0169\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\3\2\3\2\3\2\3\2\3\2\7\2h\n"+
		"\2\f\2\16\2k\13\2\3\2\3\2\3\2\7\2p\n\2\f\2\16\2s\13\2\5\2u\n\2\3\2\3\2"+
		"\3\3\5\3z\n\3\3\3\3\3\3\4\3\4\7\4\u0080\n\4\f\4\16\4\u0083\13\4\3\4\5"+
		"\4\u0086\n\4\3\5\3\5\7\5\u008a\n\5\f\5\16\5\u008d\13\5\3\5\5\5\u0090\n"+
		"\5\3\6\3\6\3\6\3\6\5\6\u0096\n\6\3\7\3\7\3\7\5\7\u009b\n\7\3\b\3\b\3\t"+
		"\3\t\3\t\3\n\3\n\3\n\6\n\u00a5\n\n\r\n\16\n\u00a6\3\13\3\13\5\13\u00ab"+
		"\n\13\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21"+
		"\3\21\3\21\5\21\u00bd\n\21\3\21\3\21\3\22\7\22\u00c2\n\22\f\22\16\22\u00c5"+
		"\13\22\3\23\3\23\3\23\3\23\3\23\5\23\u00cc\n\23\5\23\u00ce\n\23\5\23\u00d0"+
		"\n\23\3\24\3\24\5\24\u00d4\n\24\3\25\3\25\5\25\u00d8\n\25\3\26\3\26\3"+
		"\26\3\27\6\27\u00de\n\27\r\27\16\27\u00df\3\30\3\30\3\30\3\31\3\31\5\31"+
		"\u00e7\n\31\3\32\3\32\3\32\3\32\5\32\u00ed\n\32\3\33\3\33\3\34\6\34\u00f2"+
		"\n\34\r\34\16\34\u00f3\3\34\7\34\u00f7\n\34\f\34\16\34\u00fa\13\34\3\34"+
		"\5\34\u00fd\n\34\3\34\6\34\u0100\n\34\r\34\16\34\u0101\3\34\5\34\u0105"+
		"\n\34\3\34\5\34\u0108\n\34\3\35\3\35\3\36\3\36\3\36\3\37\3\37\7\37\u0111"+
		"\n\37\f\37\16\37\u0114\13\37\3 \3 \3 \6 \u0119\n \r \16 \u011a\3!\3!\7"+
		"!\u011f\n!\f!\16!\u0122\13!\3\"\3\"\3\"\3\"\3#\3#\3#\3#\5#\u012c\n#\3"+
		"$\3$\3$\7$\u0131\n$\f$\16$\u0134\13$\3$\3$\3%\3%\5%\u013a\n%\3&\3&\5&"+
		"\u013e\n&\3\'\3\'\3\'\3(\3(\3)\3)\3*\3*\3*\5*\u014a\n*\3+\3+\3,\3,\3,"+
		"\5,\u0151\n,\3-\3-\3.\3.\3/\3/\5/\u0159\n/\3/\5/\u015c\n/\3/\3/\3\60\3"+
		"\60\3\60\3\61\3\61\6\61\u0165\n\61\r\61\16\61\u0166\3\61\2\2\62\2\4\6"+
		"\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRT"+
		"VXZ\\^`\2\5\4\2\7\7\13\30\3\2\5\6\3\2\"#\2\u0167\2b\3\2\2\2\4y\3\2\2\2"+
		"\6\u0085\3\2\2\2\b\u008f\3\2\2\2\n\u0091\3\2\2\2\f\u009a\3\2\2\2\16\u009c"+
		"\3\2\2\2\20\u009e\3\2\2\2\22\u00a4\3\2\2\2\24\u00a8\3\2\2\2\26\u00ae\3"+
		"\2\2\2\30\u00b0\3\2\2\2\32\u00b2\3\2\2\2\34\u00b4\3\2\2\2\36\u00b6\3\2"+
		"\2\2 \u00bc\3\2\2\2\"\u00c3\3\2\2\2$\u00cf\3\2\2\2&\u00d1\3\2\2\2(\u00d7"+
		"\3\2\2\2*\u00d9\3\2\2\2,\u00dd\3\2\2\2.\u00e1\3\2\2\2\60\u00e4\3\2\2\2"+
		"\62\u00ec\3\2\2\2\64\u00ee\3\2\2\2\66\u0107\3\2\2\28\u0109\3\2\2\2:\u010b"+
		"\3\2\2\2<\u010e\3\2\2\2>\u0118\3\2\2\2@\u011c\3\2\2\2B\u0123\3\2\2\2D"+
		"\u012b\3\2\2\2F\u012d\3\2\2\2H\u0139\3\2\2\2J\u013d\3\2\2\2L\u013f\3\2"+
		"\2\2N\u0142\3\2\2\2P\u0144\3\2\2\2R\u0146\3\2\2\2T\u014b\3\2\2\2V\u0150"+
		"\3\2\2\2X\u0152\3\2\2\2Z\u0154\3\2\2\2\\\u0156\3\2\2\2^\u015f\3\2\2\2"+
		"`\u0164\3\2\2\2bc\7\6\2\2cd\7\7\2\2de\5\4\3\2ei\5\6\4\2fh\5\n\6\2gf\3"+
		"\2\2\2hk\3\2\2\2ig\3\2\2\2ij\3\2\2\2jt\3\2\2\2ki\3\2\2\2lm\7\b\2\2mq\5"+
		"\b\5\2np\5\n\6\2on\3\2\2\2ps\3\2\2\2qo\3\2\2\2qr\3\2\2\2ru\3\2\2\2sq\3"+
		"\2\2\2tl\3\2\2\2tu\3\2\2\2uv\3\2\2\2vw\7\n\2\2w\3\3\2\2\2xz\7\6\2\2yx"+
		"\3\2\2\2yz\3\2\2\2z{\3\2\2\2{|\7\t\2\2|\5\3\2\2\2}\u0081\7\13\2\2~\u0080"+
		"\5\64\33\2\177~\3\2\2\2\u0080\u0083\3\2\2\2\u0081\177\3\2\2\2\u0081\u0082"+
		"\3\2\2\2\u0082\u0084\3\2\2\2\u0083\u0081\3\2\2\2\u0084\u0086\7\13\2\2"+
		"\u0085}\3\2\2\2\u0085\u0086\3\2\2\2\u0086\7\3\2\2\2\u0087\u008b\7\13\2"+
		"\2\u0088\u008a\5\64\33\2\u0089\u0088\3\2\2\2\u008a\u008d\3\2\2\2\u008b"+
		"\u0089\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u008e\3\2\2\2\u008d\u008b\3\2"+
		"\2\2\u008e\u0090\7\13\2\2\u008f\u0087\3\2\2\2\u008f\u0090\3\2\2\2\u0090"+
		"\t\3\2\2\2\u0091\u0092\5\f\7\2\u0092\u0095\7\7\2\2\u0093\u0096\7\5\2\2"+
		"\u0094\u0096\5\24\13\2\u0095\u0093\3\2\2\2\u0095\u0094\3\2\2\2\u0096\13"+
		"\3\2\2\2\u0097\u009b\5\16\b\2\u0098\u009b\5\22\n\2\u0099\u009b\5\20\t"+
		"\2\u009a\u0097\3\2\2\2\u009a\u0098\3\2\2\2\u009a\u0099\3\2\2\2\u009b\r"+
		"\3\2\2\2\u009c\u009d\5\26\f\2\u009d\17\3\2\2\2\u009e\u009f\5\30\r\2\u009f"+
		"\u00a0\5\36\20\2\u00a0\21\3\2\2\2\u00a1\u00a2\5\34\17\2\u00a2\u00a3\5"+
		"\36\20\2\u00a3\u00a5\3\2\2\2\u00a4\u00a1\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6"+
		"\u00a4\3\2\2\2\u00a6\u00a7\3\2\2\2\u00a7\23\3\2\2\2\u00a8\u00aa\7\t\2"+
		"\2\u00a9\u00ab\5 \21\2\u00aa\u00a9\3\2\2\2\u00aa\u00ab\3\2\2\2\u00ab\u00ac"+
		"\3\2\2\2\u00ac\u00ad\7\n\2\2\u00ad\25\3\2\2\2\u00ae\u00af\5\32\16\2\u00af"+
		"\27\3\2\2\2\u00b0\u00b1\t\2\2\2\u00b1\31\3\2\2\2\u00b2\u00b3\t\3\2\2\u00b3"+
		"\33\3\2\2\2\u00b4\u00b5\7\"\2\2\u00b5\35\3\2\2\2\u00b6\u00b7\5\64\33\2"+
		"\u00b7\37\3\2\2\2\u00b8\u00b9\7\13\2\2\u00b9\u00ba\5\"\22\2\u00ba\u00bb"+
		"\7\13\2\2\u00bb\u00bd\3\2\2\2\u00bc\u00b8\3\2\2\2\u00bc\u00bd\3\2\2\2"+
		"\u00bd\u00be\3\2\2\2\u00be\u00bf\5$\23\2\u00bf!\3\2\2\2\u00c0\u00c2\5"+
		"\64\33\2\u00c1\u00c0\3\2\2\2\u00c2\u00c5\3\2\2\2\u00c3\u00c1\3\2\2\2\u00c3"+
		"\u00c4\3\2\2\2\u00c4#\3\2\2\2\u00c5\u00c3\3\2\2\2\u00c6\u00c7\7\35\2\2"+
		"\u00c7\u00d0\5&\24\2\u00c8\u00cd\5(\25\2\u00c9\u00cb\7\36\2\2\u00ca\u00cc"+
		"\5$\23\2\u00cb\u00ca\3\2\2\2\u00cb\u00cc\3\2\2\2\u00cc\u00ce\3\2\2\2\u00cd"+
		"\u00c9\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00d0\3\2\2\2\u00cf\u00c6\3\2"+
		"\2\2\u00cf\u00c8\3\2\2\2\u00d0%\3\2\2\2\u00d1\u00d3\5(\25\2\u00d2\u00d4"+
		"\7\36\2\2\u00d3\u00d2\3\2\2\2\u00d3\u00d4\3\2\2\2\u00d4\'\3\2\2\2\u00d5"+
		"\u00d8\5*\26\2\u00d6\u00d8\5\60\31\2\u00d7\u00d5\3\2\2\2\u00d7\u00d6\3"+
		"\2\2\2\u00d8)\3\2\2\2\u00d9\u00da\5,\27\2\u00da\u00db\5\60\31\2\u00db"+
		"+\3\2\2\2\u00dc\u00de\5.\30\2\u00dd\u00dc\3\2\2\2\u00de\u00df\3\2\2\2"+
		"\u00df\u00dd\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0-\3\2\2\2\u00e1\u00e2\5"+
		"\64\33\2\u00e2\u00e3\7\37\2\2\u00e3/\3\2\2\2\u00e4\u00e6\5\62\32\2\u00e5"+
		"\u00e7\5\66\34\2\u00e6\u00e5\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7\61\3\2"+
		"\2\2\u00e8\u00ed\5\64\33\2\u00e9\u00ed\5B\"\2\u00ea\u00ed\5\\/\2\u00eb"+
		"\u00ed\5D#\2\u00ec\u00e8\3\2\2\2\u00ec\u00e9\3\2\2\2\u00ec\u00ea\3\2\2"+
		"\2\u00ec\u00eb\3\2\2\2\u00ed\63\3\2\2\2\u00ee\u00ef\5\32\16\2\u00ef\65"+
		"\3\2\2\2\u00f0\u00f2\58\35\2\u00f1\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3"+
		"\u00f1\3\2\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00f8\3\2\2\2\u00f5\u00f7\5:"+
		"\36\2\u00f6\u00f5\3\2\2\2\u00f7\u00fa\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f8"+
		"\u00f9\3\2\2\2\u00f9\u00fc\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fb\u00fd\5>"+
		" \2\u00fc\u00fb\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u0108\3\2\2\2\u00fe"+
		"\u0100\5:\36\2\u00ff\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u00ff\3\2"+
		"\2\2\u0101\u0102\3\2\2\2\u0102\u0104\3\2\2\2\u0103\u0105\5> \2\u0104\u0103"+
		"\3\2\2\2\u0104\u0105\3\2\2\2\u0105\u0108\3\2\2\2\u0106\u0108\5> \2\u0107"+
		"\u00f1\3\2\2\2\u0107\u00ff\3\2\2\2\u0107\u0106\3\2\2\2\u0108\67\3\2\2"+
		"\2\u0109\u010a\5\26\f\2\u010a9\3\2\2\2\u010b\u010c\5\30\r\2\u010c\u010d"+
		"\5<\37\2\u010d;\3\2\2\2\u010e\u0112\5\62\32\2\u010f\u0111\58\35\2\u0110"+
		"\u010f\3\2\2\2\u0111\u0114\3\2\2\2\u0112\u0110\3\2\2\2\u0112\u0113\3\2"+
		"\2\2\u0113=\3\2\2\2\u0114\u0112\3\2\2\2\u0115\u0116\5\34\17\2\u0116\u0117"+
		"\5@!\2\u0117\u0119\3\2\2\2\u0118\u0115\3\2\2\2\u0119\u011a\3\2\2\2\u011a"+
		"\u0118\3\2\2\2\u011a\u011b\3\2\2\2\u011b?\3\2\2\2\u011c\u0120\5<\37\2"+
		"\u011d\u011f\5:\36\2\u011e\u011d\3\2\2\2\u011f\u0122\3\2\2\2\u0120\u011e"+
		"\3\2\2\2\u0120\u0121\3\2\2\2\u0121A\3\2\2\2\u0122\u0120\3\2\2\2\u0123"+
		"\u0124\7\t\2\2\u0124\u0125\5(\25\2\u0125\u0126\7\n\2\2\u0126C\3\2\2\2"+
		"\u0127\u012c\5F$\2\u0128\u012c\5R*\2\u0129\u012c\5T+\2\u012a\u012c\5H"+
		"%\2\u012b\u0127\3\2\2\2\u012b\u0128\3\2\2\2\u012b\u0129\3\2\2\2\u012b"+
		"\u012a\3\2\2\2\u012cE\3\2\2\2\u012d\u012e\7\34\2\2\u012e\u0132\7\t\2\2"+
		"\u012f\u0131\5D#\2\u0130\u012f\3\2\2\2\u0131\u0134\3\2\2\2\u0132\u0130"+
		"\3\2\2\2\u0132\u0133\3\2\2\2\u0133\u0135\3\2\2\2\u0134\u0132\3\2\2\2\u0135"+
		"\u0136\7\n\2\2\u0136G\3\2\2\2\u0137\u013a\5L\'\2\u0138\u013a\5J&\2\u0139"+
		"\u0137\3\2\2\2\u0139\u0138\3\2\2\2\u013aI\3\2\2\2\u013b\u013e\5N(\2\u013c"+
		"\u013e\5P)\2\u013d\u013b\3\2\2\2\u013d\u013c\3\2\2\2\u013eK\3\2\2\2\u013f"+
		"\u0140\7\r\2\2\u0140\u0141\5J&\2\u0141M\3\2\2\2\u0142\u0143\7 \2\2\u0143"+
		"O\3\2\2\2\u0144\u0145\7!\2\2\u0145Q\3\2\2\2\u0146\u0149\7\34\2\2\u0147"+
		"\u014a\5Z.\2\u0148\u014a\5V,\2\u0149\u0147\3\2\2\2\u0149\u0148\3\2\2\2"+
		"\u014aS\3\2\2\2\u014b\u014c\5Z.\2\u014cU\3\2\2\2\u014d\u0151\5\30\r\2"+
		"\u014e\u0151\5X-\2\u014f\u0151\5\26\f\2\u0150\u014d\3\2\2\2\u0150\u014e"+
		"\3\2\2\2\u0150\u014f\3\2\2\2\u0151W\3\2\2\2\u0152\u0153\t\4\2\2\u0153"+
		"Y\3\2\2\2\u0154\u0155\7$\2\2\u0155[\3\2\2\2\u0156\u0158\7\32\2\2\u0157"+
		"\u0159\5^\60\2\u0158\u0157\3\2\2\2\u0158\u0159\3\2\2\2\u0159\u015b\3\2"+
		"\2\2\u015a\u015c\5 \21\2\u015b\u015a\3\2\2\2\u015b\u015c\3\2\2\2\u015c"+
		"\u015d\3\2\2\2\u015d\u015e\7\33\2\2\u015e]\3\2\2\2\u015f\u0160\5`\61\2"+
		"\u0160\u0161\7\13\2\2\u0161_\3\2\2\2\u0162\u0163\7\31\2\2\u0163\u0165"+
		"\5\36\20\2\u0164\u0162\3\2\2\2\u0165\u0166\3\2\2\2\u0166\u0164\3\2\2\2"+
		"\u0166\u0167\3\2\2\2\u0167a\3\2\2\2*iqty\u0081\u0085\u008b\u008f\u0095"+
		"\u009a\u00a6\u00aa\u00bc\u00c3\u00cb\u00cd\u00cf\u00d3\u00d7\u00df\u00e6"+
		"\u00ec\u00f3\u00f8\u00fc\u0101\u0104\u0107\u0112\u011a\u0120\u012b\u0132"+
		"\u0139\u013d\u0149\u0150\u0158\u015b\u0166";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}