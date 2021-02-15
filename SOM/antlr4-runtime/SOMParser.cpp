
// Generated from SOM.g4 by ANTLR 4.9.1


#include "SOMVisitor.h"

#include "SOMParser.h"


using namespace antlrcpp;
using namespace antlr4;

SOMParser::SOMParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SOMParser::~SOMParser() {
  delete _interpreter;
}

std::string SOMParser::getGrammarFileName() const {
  return "SOM.g4";
}

const std::vector<std::string>& SOMParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SOMParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ClassDefinitionContext ------------------------------------------------------------------

SOMParser::ClassDefinitionContext::ClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::ClassDefinitionContext::IDENTIFIER() {
  return getToken(SOMParser::IDENTIFIER, 0);
}

tree::TerminalNode* SOMParser::ClassDefinitionContext::EQUALS() {
  return getToken(SOMParser::EQUALS, 0);
}

SOMParser::SuperclassContext* SOMParser::ClassDefinitionContext::superclass() {
  return getRuleContext<SOMParser::SuperclassContext>(0);
}

SOMParser::InstanceFieldsContext* SOMParser::ClassDefinitionContext::instanceFields() {
  return getRuleContext<SOMParser::InstanceFieldsContext>(0);
}

tree::TerminalNode* SOMParser::ClassDefinitionContext::CLOSE_PAR() {
  return getToken(SOMParser::CLOSE_PAR, 0);
}

std::vector<SOMParser::MethodContext *> SOMParser::ClassDefinitionContext::method() {
  return getRuleContexts<SOMParser::MethodContext>();
}

SOMParser::MethodContext* SOMParser::ClassDefinitionContext::method(size_t i) {
  return getRuleContext<SOMParser::MethodContext>(i);
}

tree::TerminalNode* SOMParser::ClassDefinitionContext::SEPARATOR() {
  return getToken(SOMParser::SEPARATOR, 0);
}

SOMParser::ClassFieldsContext* SOMParser::ClassDefinitionContext::classFields() {
  return getRuleContext<SOMParser::ClassFieldsContext>(0);
}


size_t SOMParser::ClassDefinitionContext::getRuleIndex() const {
  return SOMParser::RuleClassDefinition;
}


antlrcpp::Any SOMParser::ClassDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitClassDefinition(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ClassDefinitionContext* SOMParser::classDefinition() {
  ClassDefinitionContext *_localctx = _tracker.createInstance<ClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 0, SOMParser::RuleClassDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(SOMParser::IDENTIFIER);
    setState(83);
    match(SOMParser::EQUALS);
    setState(84);
    superclass();
    setState(85);
    instanceFields();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::KEYWORD)
      | (1ULL << SOMParser::IDENTIFIER)
      | (1ULL << SOMParser::PLUS)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::MULT)
      | (1ULL << SOMParser::DIV)
      | (1ULL << SOMParser::MOD)
      | (1ULL << SOMParser::EQUALS)
      | (1ULL << SOMParser::GREATER)
      | (1ULL << SOMParser::LESS)
      | (1ULL << SOMParser::GREATER_EQ)
      | (1ULL << SOMParser::LESS_EQ)
      | (1ULL << SOMParser::VBAR))) != 0)) {
      setState(86);
      method();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::SEPARATOR) {
      setState(92);
      match(SOMParser::SEPARATOR);
      setState(93);
      classFields();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SOMParser::KEYWORD)
        | (1ULL << SOMParser::IDENTIFIER)
        | (1ULL << SOMParser::PLUS)
        | (1ULL << SOMParser::MINUS)
        | (1ULL << SOMParser::MULT)
        | (1ULL << SOMParser::DIV)
        | (1ULL << SOMParser::MOD)
        | (1ULL << SOMParser::EQUALS)
        | (1ULL << SOMParser::GREATER)
        | (1ULL << SOMParser::LESS)
        | (1ULL << SOMParser::GREATER_EQ)
        | (1ULL << SOMParser::LESS_EQ)
        | (1ULL << SOMParser::VBAR))) != 0)) {
        setState(94);
        method();
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(102);
    match(SOMParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperclassContext ------------------------------------------------------------------

SOMParser::SuperclassContext::SuperclassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::SuperclassContext::OPEN_PAR() {
  return getToken(SOMParser::OPEN_PAR, 0);
}

tree::TerminalNode* SOMParser::SuperclassContext::IDENTIFIER() {
  return getToken(SOMParser::IDENTIFIER, 0);
}


size_t SOMParser::SuperclassContext::getRuleIndex() const {
  return SOMParser::RuleSuperclass;
}


antlrcpp::Any SOMParser::SuperclassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitSuperclass(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::SuperclassContext* SOMParser::superclass() {
  SuperclassContext *_localctx = _tracker.createInstance<SuperclassContext>(_ctx, getState());
  enterRule(_localctx, 2, SOMParser::RuleSuperclass);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::IDENTIFIER) {
      setState(104);
      match(SOMParser::IDENTIFIER);
    }
    setState(107);
    match(SOMParser::OPEN_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceFieldsContext ------------------------------------------------------------------

SOMParser::InstanceFieldsContext::InstanceFieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::InstanceFieldsContext::VBAR() {
  return getTokens(SOMParser::VBAR);
}

tree::TerminalNode* SOMParser::InstanceFieldsContext::VBAR(size_t i) {
  return getToken(SOMParser::VBAR, i);
}

std::vector<SOMParser::VariableContext *> SOMParser::InstanceFieldsContext::variable() {
  return getRuleContexts<SOMParser::VariableContext>();
}

SOMParser::VariableContext* SOMParser::InstanceFieldsContext::variable(size_t i) {
  return getRuleContext<SOMParser::VariableContext>(i);
}


size_t SOMParser::InstanceFieldsContext::getRuleIndex() const {
  return SOMParser::RuleInstanceFields;
}


antlrcpp::Any SOMParser::InstanceFieldsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitInstanceFields(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::InstanceFieldsContext* SOMParser::instanceFields() {
  InstanceFieldsContext *_localctx = _tracker.createInstance<InstanceFieldsContext>(_ctx, getState());
  enterRule(_localctx, 4, SOMParser::RuleInstanceFields);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(109);
      match(SOMParser::VBAR);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SOMParser::IDENTIFIER) {
        setState(110);
        variable();
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(116);
      match(SOMParser::VBAR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassFieldsContext ------------------------------------------------------------------

SOMParser::ClassFieldsContext::ClassFieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::ClassFieldsContext::VBAR() {
  return getTokens(SOMParser::VBAR);
}

tree::TerminalNode* SOMParser::ClassFieldsContext::VBAR(size_t i) {
  return getToken(SOMParser::VBAR, i);
}

std::vector<SOMParser::VariableContext *> SOMParser::ClassFieldsContext::variable() {
  return getRuleContexts<SOMParser::VariableContext>();
}

SOMParser::VariableContext* SOMParser::ClassFieldsContext::variable(size_t i) {
  return getRuleContext<SOMParser::VariableContext>(i);
}


size_t SOMParser::ClassFieldsContext::getRuleIndex() const {
  return SOMParser::RuleClassFields;
}


antlrcpp::Any SOMParser::ClassFieldsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitClassFields(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ClassFieldsContext* SOMParser::classFields() {
  ClassFieldsContext *_localctx = _tracker.createInstance<ClassFieldsContext>(_ctx, getState());
  enterRule(_localctx, 6, SOMParser::RuleClassFields);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(119);
      match(SOMParser::VBAR);
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SOMParser::IDENTIFIER) {
        setState(120);
        variable();
        setState(125);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(126);
      match(SOMParser::VBAR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodContext ------------------------------------------------------------------

SOMParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::PatternContext* SOMParser::MethodContext::pattern() {
  return getRuleContext<SOMParser::PatternContext>(0);
}

tree::TerminalNode* SOMParser::MethodContext::EQUALS() {
  return getToken(SOMParser::EQUALS, 0);
}

SOMParser::MethodBlockContext* SOMParser::MethodContext::methodBlock() {
  return getRuleContext<SOMParser::MethodBlockContext>(0);
}


size_t SOMParser::MethodContext::getRuleIndex() const {
  return SOMParser::RuleMethod;
}


antlrcpp::Any SOMParser::MethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitMethod(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::MethodContext* SOMParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 8, SOMParser::RuleMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    pattern();
    setState(130);
    match(SOMParser::EQUALS);
    setState(131);
    methodBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBlockContext ------------------------------------------------------------------

SOMParser::MethodBlockContext::MethodBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::MethodBlockContext::OPEN_PAR() {
  return getToken(SOMParser::OPEN_PAR, 0);
}

tree::TerminalNode* SOMParser::MethodBlockContext::CLOSE_PAR() {
  return getToken(SOMParser::CLOSE_PAR, 0);
}

SOMParser::BlockContentsContext* SOMParser::MethodBlockContext::blockContents() {
  return getRuleContext<SOMParser::BlockContentsContext>(0);
}


size_t SOMParser::MethodBlockContext::getRuleIndex() const {
  return SOMParser::RuleMethodBlock;
}


antlrcpp::Any SOMParser::MethodBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitMethodBlock(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::MethodBlockContext* SOMParser::methodBlock() {
  MethodBlockContext *_localctx = _tracker.createInstance<MethodBlockContext>(_ctx, getState());
  enterRule(_localctx, 10, SOMParser::RuleMethodBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(SOMParser::OPEN_PAR);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::IDENTIFIER)
      | (1ULL << SOMParser::INTEGER)
      | (1ULL << SOMParser::DOUBLE)
      | (1ULL << SOMParser::STRING)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::VBAR)
      | (1ULL << SOMParser::RETURN)
      | (1ULL << SOMParser::POUND)
      | (1ULL << SOMParser::OPEN_PAR)
      | (1ULL << SOMParser::NEW_BLOCK))) != 0)) {
      setState(134);
      blockContents();
    }
    setState(137);
    match(SOMParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContentsContext ------------------------------------------------------------------

SOMParser::BlockContentsContext::BlockContentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::BlockBodyContext* SOMParser::BlockContentsContext::blockBody() {
  return getRuleContext<SOMParser::BlockBodyContext>(0);
}

std::vector<tree::TerminalNode *> SOMParser::BlockContentsContext::VBAR() {
  return getTokens(SOMParser::VBAR);
}

tree::TerminalNode* SOMParser::BlockContentsContext::VBAR(size_t i) {
  return getToken(SOMParser::VBAR, i);
}

SOMParser::LocalDefinitionsContext* SOMParser::BlockContentsContext::localDefinitions() {
  return getRuleContext<SOMParser::LocalDefinitionsContext>(0);
}


size_t SOMParser::BlockContentsContext::getRuleIndex() const {
  return SOMParser::RuleBlockContents;
}


antlrcpp::Any SOMParser::BlockContentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBlockContents(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BlockContentsContext* SOMParser::blockContents() {
  BlockContentsContext *_localctx = _tracker.createInstance<BlockContentsContext>(_ctx, getState());
  enterRule(_localctx, 12, SOMParser::RuleBlockContents);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::VBAR) {
      setState(139);
      match(SOMParser::VBAR);
      setState(140);
      localDefinitions();
      setState(141);
      match(SOMParser::VBAR);
    }
    setState(145);
    blockBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalDefinitionsContext ------------------------------------------------------------------

SOMParser::LocalDefinitionsContext::LocalDefinitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SOMParser::VariableContext *> SOMParser::LocalDefinitionsContext::variable() {
  return getRuleContexts<SOMParser::VariableContext>();
}

SOMParser::VariableContext* SOMParser::LocalDefinitionsContext::variable(size_t i) {
  return getRuleContext<SOMParser::VariableContext>(i);
}


size_t SOMParser::LocalDefinitionsContext::getRuleIndex() const {
  return SOMParser::RuleLocalDefinitions;
}


antlrcpp::Any SOMParser::LocalDefinitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLocalDefinitions(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LocalDefinitionsContext* SOMParser::localDefinitions() {
  LocalDefinitionsContext *_localctx = _tracker.createInstance<LocalDefinitionsContext>(_ctx, getState());
  enterRule(_localctx, 14, SOMParser::RuleLocalDefinitions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SOMParser::IDENTIFIER) {
      setState(147);
      variable();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockBodyContext ------------------------------------------------------------------

SOMParser::BlockBodyContext::BlockBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::BlockBodyContext::RETURN() {
  return getToken(SOMParser::RETURN, 0);
}

SOMParser::ResultContext* SOMParser::BlockBodyContext::result() {
  return getRuleContext<SOMParser::ResultContext>(0);
}

SOMParser::ExpressionContext* SOMParser::BlockBodyContext::expression() {
  return getRuleContext<SOMParser::ExpressionContext>(0);
}

tree::TerminalNode* SOMParser::BlockBodyContext::PERIOD() {
  return getToken(SOMParser::PERIOD, 0);
}

SOMParser::BlockBodyContext* SOMParser::BlockBodyContext::blockBody() {
  return getRuleContext<SOMParser::BlockBodyContext>(0);
}


size_t SOMParser::BlockBodyContext::getRuleIndex() const {
  return SOMParser::RuleBlockBody;
}


antlrcpp::Any SOMParser::BlockBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBlockBody(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BlockBodyContext* SOMParser::blockBody() {
  BlockBodyContext *_localctx = _tracker.createInstance<BlockBodyContext>(_ctx, getState());
  enterRule(_localctx, 16, SOMParser::RuleBlockBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::RETURN: {
        enterOuterAlt(_localctx, 1);
        setState(153);
        match(SOMParser::RETURN);
        setState(154);
        result();
        break;
      }

      case SOMParser::IDENTIFIER:
      case SOMParser::INTEGER:
      case SOMParser::DOUBLE:
      case SOMParser::STRING:
      case SOMParser::MINUS:
      case SOMParser::POUND:
      case SOMParser::OPEN_PAR:
      case SOMParser::NEW_BLOCK: {
        enterOuterAlt(_localctx, 2);
        setState(155);
        expression();
        setState(160);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SOMParser::PERIOD) {
          setState(156);
          match(SOMParser::PERIOD);
          setState(158);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SOMParser::IDENTIFIER)
            | (1ULL << SOMParser::INTEGER)
            | (1ULL << SOMParser::DOUBLE)
            | (1ULL << SOMParser::STRING)
            | (1ULL << SOMParser::MINUS)
            | (1ULL << SOMParser::RETURN)
            | (1ULL << SOMParser::POUND)
            | (1ULL << SOMParser::OPEN_PAR)
            | (1ULL << SOMParser::NEW_BLOCK))) != 0)) {
            setState(157);
            blockBody();
          }
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

SOMParser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::ExpressionContext* SOMParser::ResultContext::expression() {
  return getRuleContext<SOMParser::ExpressionContext>(0);
}

tree::TerminalNode* SOMParser::ResultContext::PERIOD() {
  return getToken(SOMParser::PERIOD, 0);
}


size_t SOMParser::ResultContext::getRuleIndex() const {
  return SOMParser::RuleResult;
}


antlrcpp::Any SOMParser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ResultContext* SOMParser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 18, SOMParser::RuleResult);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    expression();
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::PERIOD) {
      setState(165);
      match(SOMParser::PERIOD);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SOMParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::AssignationContext* SOMParser::ExpressionContext::assignation() {
  return getRuleContext<SOMParser::AssignationContext>(0);
}

SOMParser::EvaluationContext* SOMParser::ExpressionContext::evaluation() {
  return getRuleContext<SOMParser::EvaluationContext>(0);
}


size_t SOMParser::ExpressionContext::getRuleIndex() const {
  return SOMParser::RuleExpression;
}


antlrcpp::Any SOMParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ExpressionContext* SOMParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, SOMParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      assignation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      evaluation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignationContext ------------------------------------------------------------------

SOMParser::AssignationContext::AssignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::AssignmentsContext* SOMParser::AssignationContext::assignments() {
  return getRuleContext<SOMParser::AssignmentsContext>(0);
}

SOMParser::EvaluationContext* SOMParser::AssignationContext::evaluation() {
  return getRuleContext<SOMParser::EvaluationContext>(0);
}


size_t SOMParser::AssignationContext::getRuleIndex() const {
  return SOMParser::RuleAssignation;
}


antlrcpp::Any SOMParser::AssignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitAssignation(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::AssignationContext* SOMParser::assignation() {
  AssignationContext *_localctx = _tracker.createInstance<AssignationContext>(_ctx, getState());
  enterRule(_localctx, 22, SOMParser::RuleAssignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    assignments();
    setState(173);
    evaluation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentsContext ------------------------------------------------------------------

SOMParser::AssignmentsContext::AssignmentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SOMParser::AssignmentContext *> SOMParser::AssignmentsContext::assignment() {
  return getRuleContexts<SOMParser::AssignmentContext>();
}

SOMParser::AssignmentContext* SOMParser::AssignmentsContext::assignment(size_t i) {
  return getRuleContext<SOMParser::AssignmentContext>(i);
}


size_t SOMParser::AssignmentsContext::getRuleIndex() const {
  return SOMParser::RuleAssignments;
}


antlrcpp::Any SOMParser::AssignmentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitAssignments(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::AssignmentsContext* SOMParser::assignments() {
  AssignmentsContext *_localctx = _tracker.createInstance<AssignmentsContext>(_ctx, getState());
  enterRule(_localctx, 24, SOMParser::RuleAssignments);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(176); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(175);
              assignment();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(178); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

SOMParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::VariableContext* SOMParser::AssignmentContext::variable() {
  return getRuleContext<SOMParser::VariableContext>(0);
}

tree::TerminalNode* SOMParser::AssignmentContext::ASSIGN() {
  return getToken(SOMParser::ASSIGN, 0);
}


size_t SOMParser::AssignmentContext::getRuleIndex() const {
  return SOMParser::RuleAssignment;
}


antlrcpp::Any SOMParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::AssignmentContext* SOMParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 26, SOMParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    variable();
    setState(181);
    match(SOMParser::ASSIGN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EvaluationContext ------------------------------------------------------------------

SOMParser::EvaluationContext::EvaluationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::PrimaryContext* SOMParser::EvaluationContext::primary() {
  return getRuleContext<SOMParser::PrimaryContext>(0);
}

SOMParser::MessagesContext* SOMParser::EvaluationContext::messages() {
  return getRuleContext<SOMParser::MessagesContext>(0);
}


size_t SOMParser::EvaluationContext::getRuleIndex() const {
  return SOMParser::RuleEvaluation;
}


antlrcpp::Any SOMParser::EvaluationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitEvaluation(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::EvaluationContext* SOMParser::evaluation() {
  EvaluationContext *_localctx = _tracker.createInstance<EvaluationContext>(_ctx, getState());
  enterRule(_localctx, 28, SOMParser::RuleEvaluation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    primary();
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::KEYWORD)
      | (1ULL << SOMParser::IDENTIFIER)
      | (1ULL << SOMParser::PLUS)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::MULT)
      | (1ULL << SOMParser::DIV)
      | (1ULL << SOMParser::MOD)
      | (1ULL << SOMParser::EQUALS)
      | (1ULL << SOMParser::GREATER)
      | (1ULL << SOMParser::LESS)
      | (1ULL << SOMParser::GREATER_EQ)
      | (1ULL << SOMParser::LESS_EQ)
      | (1ULL << SOMParser::VBAR))) != 0)) {
      setState(184);
      messages();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

SOMParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::VariableContext* SOMParser::PrimaryContext::variable() {
  return getRuleContext<SOMParser::VariableContext>(0);
}

SOMParser::NestedTermContext* SOMParser::PrimaryContext::nestedTerm() {
  return getRuleContext<SOMParser::NestedTermContext>(0);
}

SOMParser::NestedBlockContext* SOMParser::PrimaryContext::nestedBlock() {
  return getRuleContext<SOMParser::NestedBlockContext>(0);
}

SOMParser::LiteralContext* SOMParser::PrimaryContext::literal() {
  return getRuleContext<SOMParser::LiteralContext>(0);
}


size_t SOMParser::PrimaryContext::getRuleIndex() const {
  return SOMParser::RulePrimary;
}


antlrcpp::Any SOMParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::PrimaryContext* SOMParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 30, SOMParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(187);
        variable();
        break;
      }

      case SOMParser::OPEN_PAR: {
        enterOuterAlt(_localctx, 2);
        setState(188);
        nestedTerm();
        break;
      }

      case SOMParser::NEW_BLOCK: {
        enterOuterAlt(_localctx, 3);
        setState(189);
        nestedBlock();
        break;
      }

      case SOMParser::INTEGER:
      case SOMParser::DOUBLE:
      case SOMParser::STRING:
      case SOMParser::MINUS:
      case SOMParser::POUND: {
        enterOuterAlt(_localctx, 4);
        setState(190);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessagesContext ------------------------------------------------------------------

SOMParser::MessagesContext::MessagesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SOMParser::UnaryMessageContext *> SOMParser::MessagesContext::unaryMessage() {
  return getRuleContexts<SOMParser::UnaryMessageContext>();
}

SOMParser::UnaryMessageContext* SOMParser::MessagesContext::unaryMessage(size_t i) {
  return getRuleContext<SOMParser::UnaryMessageContext>(i);
}

std::vector<SOMParser::BinaryMessageContext *> SOMParser::MessagesContext::binaryMessage() {
  return getRuleContexts<SOMParser::BinaryMessageContext>();
}

SOMParser::BinaryMessageContext* SOMParser::MessagesContext::binaryMessage(size_t i) {
  return getRuleContext<SOMParser::BinaryMessageContext>(i);
}

SOMParser::KeywordMessageContext* SOMParser::MessagesContext::keywordMessage() {
  return getRuleContext<SOMParser::KeywordMessageContext>(0);
}


size_t SOMParser::MessagesContext::getRuleIndex() const {
  return SOMParser::RuleMessages;
}


antlrcpp::Any SOMParser::MessagesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitMessages(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::MessagesContext* SOMParser::messages() {
  MessagesContext *_localctx = _tracker.createInstance<MessagesContext>(_ctx, getState());
  enterRule(_localctx, 32, SOMParser::RuleMessages);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(216);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(194); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(193);
          unaryMessage();
          setState(196); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == SOMParser::IDENTIFIER);
        setState(201);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SOMParser::PLUS)
          | (1ULL << SOMParser::MINUS)
          | (1ULL << SOMParser::MULT)
          | (1ULL << SOMParser::DIV)
          | (1ULL << SOMParser::MOD)
          | (1ULL << SOMParser::EQUALS)
          | (1ULL << SOMParser::GREATER)
          | (1ULL << SOMParser::LESS)
          | (1ULL << SOMParser::GREATER_EQ)
          | (1ULL << SOMParser::LESS_EQ)
          | (1ULL << SOMParser::VBAR))) != 0)) {
          setState(198);
          binaryMessage();
          setState(203);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(205);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SOMParser::KEYWORD) {
          setState(204);
          keywordMessage();
        }
        break;
      }

      case SOMParser::PLUS:
      case SOMParser::MINUS:
      case SOMParser::MULT:
      case SOMParser::DIV:
      case SOMParser::MOD:
      case SOMParser::EQUALS:
      case SOMParser::GREATER:
      case SOMParser::LESS:
      case SOMParser::GREATER_EQ:
      case SOMParser::LESS_EQ:
      case SOMParser::VBAR: {
        enterOuterAlt(_localctx, 2);
        setState(208); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(207);
          binaryMessage();
          setState(210); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SOMParser::PLUS)
          | (1ULL << SOMParser::MINUS)
          | (1ULL << SOMParser::MULT)
          | (1ULL << SOMParser::DIV)
          | (1ULL << SOMParser::MOD)
          | (1ULL << SOMParser::EQUALS)
          | (1ULL << SOMParser::GREATER)
          | (1ULL << SOMParser::LESS)
          | (1ULL << SOMParser::GREATER_EQ)
          | (1ULL << SOMParser::LESS_EQ)
          | (1ULL << SOMParser::VBAR))) != 0));
        setState(213);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SOMParser::KEYWORD) {
          setState(212);
          keywordMessage();
        }
        break;
      }

      case SOMParser::KEYWORD: {
        enterOuterAlt(_localctx, 3);
        setState(215);
        keywordMessage();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryMessageContext ------------------------------------------------------------------

SOMParser::UnaryMessageContext::UnaryMessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::UnaryMessageContext::IDENTIFIER() {
  return getToken(SOMParser::IDENTIFIER, 0);
}


size_t SOMParser::UnaryMessageContext::getRuleIndex() const {
  return SOMParser::RuleUnaryMessage;
}


antlrcpp::Any SOMParser::UnaryMessageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitUnaryMessage(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::UnaryMessageContext* SOMParser::unaryMessage() {
  UnaryMessageContext *_localctx = _tracker.createInstance<UnaryMessageContext>(_ctx, getState());
  enterRule(_localctx, 34, SOMParser::RuleUnaryMessage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(SOMParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryMessageContext ------------------------------------------------------------------

SOMParser::BinaryMessageContext::BinaryMessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::BinarySelectorContext* SOMParser::BinaryMessageContext::binarySelector() {
  return getRuleContext<SOMParser::BinarySelectorContext>(0);
}

SOMParser::BinaryOperandContext* SOMParser::BinaryMessageContext::binaryOperand() {
  return getRuleContext<SOMParser::BinaryOperandContext>(0);
}


size_t SOMParser::BinaryMessageContext::getRuleIndex() const {
  return SOMParser::RuleBinaryMessage;
}


antlrcpp::Any SOMParser::BinaryMessageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBinaryMessage(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BinaryMessageContext* SOMParser::binaryMessage() {
  BinaryMessageContext *_localctx = _tracker.createInstance<BinaryMessageContext>(_ctx, getState());
  enterRule(_localctx, 36, SOMParser::RuleBinaryMessage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    binarySelector();
    setState(221);
    binaryOperand();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperandContext ------------------------------------------------------------------

SOMParser::BinaryOperandContext::BinaryOperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::PrimaryContext* SOMParser::BinaryOperandContext::primary() {
  return getRuleContext<SOMParser::PrimaryContext>(0);
}

std::vector<SOMParser::UnaryMessageContext *> SOMParser::BinaryOperandContext::unaryMessage() {
  return getRuleContexts<SOMParser::UnaryMessageContext>();
}

SOMParser::UnaryMessageContext* SOMParser::BinaryOperandContext::unaryMessage(size_t i) {
  return getRuleContext<SOMParser::UnaryMessageContext>(i);
}


size_t SOMParser::BinaryOperandContext::getRuleIndex() const {
  return SOMParser::RuleBinaryOperand;
}


antlrcpp::Any SOMParser::BinaryOperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBinaryOperand(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BinaryOperandContext* SOMParser::binaryOperand() {
  BinaryOperandContext *_localctx = _tracker.createInstance<BinaryOperandContext>(_ctx, getState());
  enterRule(_localctx, 38, SOMParser::RuleBinaryOperand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    primary();
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SOMParser::IDENTIFIER) {
      setState(224);
      unaryMessage();
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordMessageContext ------------------------------------------------------------------

SOMParser::KeywordMessageContext::KeywordMessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::KeywordMessageContext::KEYWORD() {
  return getTokens(SOMParser::KEYWORD);
}

tree::TerminalNode* SOMParser::KeywordMessageContext::KEYWORD(size_t i) {
  return getToken(SOMParser::KEYWORD, i);
}

std::vector<SOMParser::FormulaContext *> SOMParser::KeywordMessageContext::formula() {
  return getRuleContexts<SOMParser::FormulaContext>();
}

SOMParser::FormulaContext* SOMParser::KeywordMessageContext::formula(size_t i) {
  return getRuleContext<SOMParser::FormulaContext>(i);
}


size_t SOMParser::KeywordMessageContext::getRuleIndex() const {
  return SOMParser::RuleKeywordMessage;
}


antlrcpp::Any SOMParser::KeywordMessageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitKeywordMessage(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::KeywordMessageContext* SOMParser::keywordMessage() {
  KeywordMessageContext *_localctx = _tracker.createInstance<KeywordMessageContext>(_ctx, getState());
  enterRule(_localctx, 40, SOMParser::RuleKeywordMessage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(230);
      match(SOMParser::KEYWORD);
      setState(231);
      formula();
      setState(234); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SOMParser::KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

SOMParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::BinaryOperandContext* SOMParser::FormulaContext::binaryOperand() {
  return getRuleContext<SOMParser::BinaryOperandContext>(0);
}

std::vector<SOMParser::BinaryMessageContext *> SOMParser::FormulaContext::binaryMessage() {
  return getRuleContexts<SOMParser::BinaryMessageContext>();
}

SOMParser::BinaryMessageContext* SOMParser::FormulaContext::binaryMessage(size_t i) {
  return getRuleContext<SOMParser::BinaryMessageContext>(i);
}


size_t SOMParser::FormulaContext::getRuleIndex() const {
  return SOMParser::RuleFormula;
}


antlrcpp::Any SOMParser::FormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitFormula(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::FormulaContext* SOMParser::formula() {
  FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, getState());
  enterRule(_localctx, 42, SOMParser::RuleFormula);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    binaryOperand();
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::PLUS)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::MULT)
      | (1ULL << SOMParser::DIV)
      | (1ULL << SOMParser::MOD)
      | (1ULL << SOMParser::EQUALS)
      | (1ULL << SOMParser::GREATER)
      | (1ULL << SOMParser::LESS)
      | (1ULL << SOMParser::GREATER_EQ)
      | (1ULL << SOMParser::LESS_EQ)
      | (1ULL << SOMParser::VBAR))) != 0)) {
      setState(237);
      binaryMessage();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedTermContext ------------------------------------------------------------------

SOMParser::NestedTermContext::NestedTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::NestedTermContext::OPEN_PAR() {
  return getToken(SOMParser::OPEN_PAR, 0);
}

SOMParser::ExpressionContext* SOMParser::NestedTermContext::expression() {
  return getRuleContext<SOMParser::ExpressionContext>(0);
}

tree::TerminalNode* SOMParser::NestedTermContext::CLOSE_PAR() {
  return getToken(SOMParser::CLOSE_PAR, 0);
}


size_t SOMParser::NestedTermContext::getRuleIndex() const {
  return SOMParser::RuleNestedTerm;
}


antlrcpp::Any SOMParser::NestedTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitNestedTerm(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::NestedTermContext* SOMParser::nestedTerm() {
  NestedTermContext *_localctx = _tracker.createInstance<NestedTermContext>(_ctx, getState());
  enterRule(_localctx, 44, SOMParser::RuleNestedTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(SOMParser::OPEN_PAR);
    setState(244);
    expression();
    setState(245);
    match(SOMParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedBlockContext ------------------------------------------------------------------

SOMParser::NestedBlockContext::NestedBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::NestedBlockContext::NEW_BLOCK() {
  return getToken(SOMParser::NEW_BLOCK, 0);
}

tree::TerminalNode* SOMParser::NestedBlockContext::CLOSE_BLOCK() {
  return getToken(SOMParser::CLOSE_BLOCK, 0);
}

SOMParser::BlockPatternContext* SOMParser::NestedBlockContext::blockPattern() {
  return getRuleContext<SOMParser::BlockPatternContext>(0);
}

SOMParser::BlockContentsContext* SOMParser::NestedBlockContext::blockContents() {
  return getRuleContext<SOMParser::BlockContentsContext>(0);
}


size_t SOMParser::NestedBlockContext::getRuleIndex() const {
  return SOMParser::RuleNestedBlock;
}


antlrcpp::Any SOMParser::NestedBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitNestedBlock(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::NestedBlockContext* SOMParser::nestedBlock() {
  NestedBlockContext *_localctx = _tracker.createInstance<NestedBlockContext>(_ctx, getState());
  enterRule(_localctx, 46, SOMParser::RuleNestedBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(SOMParser::NEW_BLOCK);
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::COLON) {
      setState(248);
      blockPattern();
    }
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::IDENTIFIER)
      | (1ULL << SOMParser::INTEGER)
      | (1ULL << SOMParser::DOUBLE)
      | (1ULL << SOMParser::STRING)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::VBAR)
      | (1ULL << SOMParser::RETURN)
      | (1ULL << SOMParser::POUND)
      | (1ULL << SOMParser::OPEN_PAR)
      | (1ULL << SOMParser::NEW_BLOCK))) != 0)) {
      setState(251);
      blockContents();
    }
    setState(254);
    match(SOMParser::CLOSE_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockPatternContext ------------------------------------------------------------------

SOMParser::BlockPatternContext::BlockPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::BlockArgsContext* SOMParser::BlockPatternContext::blockArgs() {
  return getRuleContext<SOMParser::BlockArgsContext>(0);
}

tree::TerminalNode* SOMParser::BlockPatternContext::VBAR() {
  return getToken(SOMParser::VBAR, 0);
}


size_t SOMParser::BlockPatternContext::getRuleIndex() const {
  return SOMParser::RuleBlockPattern;
}


antlrcpp::Any SOMParser::BlockPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBlockPattern(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BlockPatternContext* SOMParser::blockPattern() {
  BlockPatternContext *_localctx = _tracker.createInstance<BlockPatternContext>(_ctx, getState());
  enterRule(_localctx, 48, SOMParser::RuleBlockPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    blockArgs();
    setState(257);
    match(SOMParser::VBAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockArgsContext ------------------------------------------------------------------

SOMParser::BlockArgsContext::BlockArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::BlockArgsContext::COLON() {
  return getTokens(SOMParser::COLON);
}

tree::TerminalNode* SOMParser::BlockArgsContext::COLON(size_t i) {
  return getToken(SOMParser::COLON, i);
}

std::vector<SOMParser::ArgumentContext *> SOMParser::BlockArgsContext::argument() {
  return getRuleContexts<SOMParser::ArgumentContext>();
}

SOMParser::ArgumentContext* SOMParser::BlockArgsContext::argument(size_t i) {
  return getRuleContext<SOMParser::ArgumentContext>(i);
}


size_t SOMParser::BlockArgsContext::getRuleIndex() const {
  return SOMParser::RuleBlockArgs;
}


antlrcpp::Any SOMParser::BlockArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBlockArgs(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BlockArgsContext* SOMParser::blockArgs() {
  BlockArgsContext *_localctx = _tracker.createInstance<BlockArgsContext>(_ctx, getState());
  enterRule(_localctx, 50, SOMParser::RuleBlockArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(259);
      match(SOMParser::COLON);
      setState(260);
      argument();
      setState(263); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SOMParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

SOMParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::VariableContext::IDENTIFIER() {
  return getToken(SOMParser::IDENTIFIER, 0);
}


size_t SOMParser::VariableContext::getRuleIndex() const {
  return SOMParser::RuleVariable;
}


antlrcpp::Any SOMParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::VariableContext* SOMParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 52, SOMParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(SOMParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatternContext ------------------------------------------------------------------

SOMParser::PatternContext::PatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::UnaryPatternContext* SOMParser::PatternContext::unaryPattern() {
  return getRuleContext<SOMParser::UnaryPatternContext>(0);
}

SOMParser::KeywordPatternContext* SOMParser::PatternContext::keywordPattern() {
  return getRuleContext<SOMParser::KeywordPatternContext>(0);
}

SOMParser::BinaryPatternContext* SOMParser::PatternContext::binaryPattern() {
  return getRuleContext<SOMParser::BinaryPatternContext>(0);
}


size_t SOMParser::PatternContext::getRuleIndex() const {
  return SOMParser::RulePattern;
}


antlrcpp::Any SOMParser::PatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitPattern(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::PatternContext* SOMParser::pattern() {
  PatternContext *_localctx = _tracker.createInstance<PatternContext>(_ctx, getState());
  enterRule(_localctx, 54, SOMParser::RulePattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(270);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(267);
        unaryPattern();
        break;
      }

      case SOMParser::KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(268);
        keywordPattern();
        break;
      }

      case SOMParser::PLUS:
      case SOMParser::MINUS:
      case SOMParser::MULT:
      case SOMParser::DIV:
      case SOMParser::MOD:
      case SOMParser::EQUALS:
      case SOMParser::GREATER:
      case SOMParser::LESS:
      case SOMParser::GREATER_EQ:
      case SOMParser::LESS_EQ:
      case SOMParser::VBAR: {
        enterOuterAlt(_localctx, 3);
        setState(269);
        binaryPattern();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryPatternContext ------------------------------------------------------------------

SOMParser::UnaryPatternContext::UnaryPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::UnarySelectorContext* SOMParser::UnaryPatternContext::unarySelector() {
  return getRuleContext<SOMParser::UnarySelectorContext>(0);
}


size_t SOMParser::UnaryPatternContext::getRuleIndex() const {
  return SOMParser::RuleUnaryPattern;
}


antlrcpp::Any SOMParser::UnaryPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitUnaryPattern(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::UnaryPatternContext* SOMParser::unaryPattern() {
  UnaryPatternContext *_localctx = _tracker.createInstance<UnaryPatternContext>(_ctx, getState());
  enterRule(_localctx, 56, SOMParser::RuleUnaryPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    unarySelector();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnarySelectorContext ------------------------------------------------------------------

SOMParser::UnarySelectorContext::UnarySelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::UnarySelectorContext::IDENTIFIER() {
  return getToken(SOMParser::IDENTIFIER, 0);
}


size_t SOMParser::UnarySelectorContext::getRuleIndex() const {
  return SOMParser::RuleUnarySelector;
}


antlrcpp::Any SOMParser::UnarySelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitUnarySelector(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::UnarySelectorContext* SOMParser::unarySelector() {
  UnarySelectorContext *_localctx = _tracker.createInstance<UnarySelectorContext>(_ctx, getState());
  enterRule(_localctx, 58, SOMParser::RuleUnarySelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(SOMParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryPatternContext ------------------------------------------------------------------

SOMParser::BinaryPatternContext::BinaryPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::BinarySelectorContext* SOMParser::BinaryPatternContext::binarySelector() {
  return getRuleContext<SOMParser::BinarySelectorContext>(0);
}

SOMParser::ArgumentContext* SOMParser::BinaryPatternContext::argument() {
  return getRuleContext<SOMParser::ArgumentContext>(0);
}


size_t SOMParser::BinaryPatternContext::getRuleIndex() const {
  return SOMParser::RuleBinaryPattern;
}


antlrcpp::Any SOMParser::BinaryPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBinaryPattern(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BinaryPatternContext* SOMParser::binaryPattern() {
  BinaryPatternContext *_localctx = _tracker.createInstance<BinaryPatternContext>(_ctx, getState());
  enterRule(_localctx, 60, SOMParser::RuleBinaryPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    binarySelector();
    setState(277);
    argument();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordPatternContext ------------------------------------------------------------------

SOMParser::KeywordPatternContext::KeywordPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::KeywordPatternContext::KEYWORD() {
  return getTokens(SOMParser::KEYWORD);
}

tree::TerminalNode* SOMParser::KeywordPatternContext::KEYWORD(size_t i) {
  return getToken(SOMParser::KEYWORD, i);
}

std::vector<SOMParser::ArgumentContext *> SOMParser::KeywordPatternContext::argument() {
  return getRuleContexts<SOMParser::ArgumentContext>();
}

SOMParser::ArgumentContext* SOMParser::KeywordPatternContext::argument(size_t i) {
  return getRuleContext<SOMParser::ArgumentContext>(i);
}


size_t SOMParser::KeywordPatternContext::getRuleIndex() const {
  return SOMParser::RuleKeywordPattern;
}


antlrcpp::Any SOMParser::KeywordPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitKeywordPattern(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::KeywordPatternContext* SOMParser::keywordPattern() {
  KeywordPatternContext *_localctx = _tracker.createInstance<KeywordPatternContext>(_ctx, getState());
  enterRule(_localctx, 62, SOMParser::RuleKeywordPattern);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(279);
      match(SOMParser::KEYWORD);
      setState(280);
      argument();
      setState(283); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SOMParser::KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinarySelectorContext ------------------------------------------------------------------

SOMParser::BinarySelectorContext::BinarySelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::BinarySelectorContext::VBAR() {
  return getToken(SOMParser::VBAR, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::PLUS() {
  return getToken(SOMParser::PLUS, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::MINUS() {
  return getToken(SOMParser::MINUS, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::EQUALS() {
  return getToken(SOMParser::EQUALS, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::MULT() {
  return getToken(SOMParser::MULT, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::DIV() {
  return getToken(SOMParser::DIV, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::MOD() {
  return getToken(SOMParser::MOD, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::GREATER() {
  return getToken(SOMParser::GREATER, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::GREATER_EQ() {
  return getToken(SOMParser::GREATER_EQ, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::LESS() {
  return getToken(SOMParser::LESS, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::LESS_EQ() {
  return getToken(SOMParser::LESS_EQ, 0);
}


size_t SOMParser::BinarySelectorContext::getRuleIndex() const {
  return SOMParser::RuleBinarySelector;
}


antlrcpp::Any SOMParser::BinarySelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBinarySelector(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BinarySelectorContext* SOMParser::binarySelector() {
  BinarySelectorContext *_localctx = _tracker.createInstance<BinarySelectorContext>(_ctx, getState());
  enterRule(_localctx, 64, SOMParser::RuleBinarySelector);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::PLUS)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::MULT)
      | (1ULL << SOMParser::DIV)
      | (1ULL << SOMParser::MOD)
      | (1ULL << SOMParser::EQUALS)
      | (1ULL << SOMParser::GREATER)
      | (1ULL << SOMParser::LESS)
      | (1ULL << SOMParser::GREATER_EQ)
      | (1ULL << SOMParser::LESS_EQ)
      | (1ULL << SOMParser::VBAR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

SOMParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::VariableContext* SOMParser::ArgumentContext::variable() {
  return getRuleContext<SOMParser::VariableContext>(0);
}


size_t SOMParser::ArgumentContext::getRuleIndex() const {
  return SOMParser::RuleArgument;
}


antlrcpp::Any SOMParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ArgumentContext* SOMParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 66, SOMParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

SOMParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::LiteralNumberContext* SOMParser::LiteralContext::literalNumber() {
  return getRuleContext<SOMParser::LiteralNumberContext>(0);
}

SOMParser::LiteralStringContext* SOMParser::LiteralContext::literalString() {
  return getRuleContext<SOMParser::LiteralStringContext>(0);
}

SOMParser::LiteralArrayContext* SOMParser::LiteralContext::literalArray() {
  return getRuleContext<SOMParser::LiteralArrayContext>(0);
}

SOMParser::LiteralSymbolContext* SOMParser::LiteralContext::literalSymbol() {
  return getRuleContext<SOMParser::LiteralSymbolContext>(0);
}


size_t SOMParser::LiteralContext::getRuleIndex() const {
  return SOMParser::RuleLiteral;
}


antlrcpp::Any SOMParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralContext* SOMParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 68, SOMParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(289);
      literalNumber();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(290);
      literalString();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(291);
      literalArray();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(292);
      literalSymbol();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralNumberContext ------------------------------------------------------------------

SOMParser::LiteralNumberContext::LiteralNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralNumberContext::INTEGER() {
  return getToken(SOMParser::INTEGER, 0);
}

tree::TerminalNode* SOMParser::LiteralNumberContext::DOUBLE() {
  return getToken(SOMParser::DOUBLE, 0);
}

tree::TerminalNode* SOMParser::LiteralNumberContext::MINUS() {
  return getToken(SOMParser::MINUS, 0);
}


size_t SOMParser::LiteralNumberContext::getRuleIndex() const {
  return SOMParser::RuleLiteralNumber;
}


antlrcpp::Any SOMParser::LiteralNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralNumber(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralNumberContext* SOMParser::literalNumber() {
  LiteralNumberContext *_localctx = _tracker.createInstance<LiteralNumberContext>(_ctx, getState());
  enterRule(_localctx, 70, SOMParser::RuleLiteralNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::MINUS) {
      setState(295);
      match(SOMParser::MINUS);
    }
    setState(298);
    _la = _input->LA(1);
    if (!(_la == SOMParser::INTEGER

    || _la == SOMParser::DOUBLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralStringContext ------------------------------------------------------------------

SOMParser::LiteralStringContext::LiteralStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralStringContext::STRING() {
  return getToken(SOMParser::STRING, 0);
}


size_t SOMParser::LiteralStringContext::getRuleIndex() const {
  return SOMParser::RuleLiteralString;
}


antlrcpp::Any SOMParser::LiteralStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralString(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralStringContext* SOMParser::literalString() {
  LiteralStringContext *_localctx = _tracker.createInstance<LiteralStringContext>(_ctx, getState());
  enterRule(_localctx, 72, SOMParser::RuleLiteralString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(SOMParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralArrayContext ------------------------------------------------------------------

SOMParser::LiteralArrayContext::LiteralArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralArrayContext::POUND() {
  return getToken(SOMParser::POUND, 0);
}

tree::TerminalNode* SOMParser::LiteralArrayContext::NEW_BLOCK() {
  return getToken(SOMParser::NEW_BLOCK, 0);
}

tree::TerminalNode* SOMParser::LiteralArrayContext::CLOSE_BLOCK() {
  return getToken(SOMParser::CLOSE_BLOCK, 0);
}

std::vector<SOMParser::LiteralContext *> SOMParser::LiteralArrayContext::literal() {
  return getRuleContexts<SOMParser::LiteralContext>();
}

SOMParser::LiteralContext* SOMParser::LiteralArrayContext::literal(size_t i) {
  return getRuleContext<SOMParser::LiteralContext>(i);
}


size_t SOMParser::LiteralArrayContext::getRuleIndex() const {
  return SOMParser::RuleLiteralArray;
}


antlrcpp::Any SOMParser::LiteralArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralArray(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralArrayContext* SOMParser::literalArray() {
  LiteralArrayContext *_localctx = _tracker.createInstance<LiteralArrayContext>(_ctx, getState());
  enterRule(_localctx, 74, SOMParser::RuleLiteralArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(SOMParser::POUND);
    setState(303);
    match(SOMParser::NEW_BLOCK);
    setState(307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::INTEGER)
      | (1ULL << SOMParser::DOUBLE)
      | (1ULL << SOMParser::STRING)
      | (1ULL << SOMParser::MINUS)
      | (1ULL << SOMParser::POUND))) != 0)) {
      setState(304);
      literal();
      setState(309);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(310);
    match(SOMParser::CLOSE_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralSymbolContext ------------------------------------------------------------------

SOMParser::LiteralSymbolContext::LiteralSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralSymbolContext::POUND() {
  return getToken(SOMParser::POUND, 0);
}

tree::TerminalNode* SOMParser::LiteralSymbolContext::STRING() {
  return getToken(SOMParser::STRING, 0);
}

SOMParser::SelectorContext* SOMParser::LiteralSymbolContext::selector() {
  return getRuleContext<SOMParser::SelectorContext>(0);
}


size_t SOMParser::LiteralSymbolContext::getRuleIndex() const {
  return SOMParser::RuleLiteralSymbol;
}


antlrcpp::Any SOMParser::LiteralSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralSymbol(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralSymbolContext* SOMParser::literalSymbol() {
  LiteralSymbolContext *_localctx = _tracker.createInstance<LiteralSymbolContext>(_ctx, getState());
  enterRule(_localctx, 76, SOMParser::RuleLiteralSymbol);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(SOMParser::POUND);
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::STRING: {
        setState(313);
        match(SOMParser::STRING);
        break;
      }

      case SOMParser::KEYWORD:
      case SOMParser::IDENTIFIER:
      case SOMParser::PLUS:
      case SOMParser::MINUS:
      case SOMParser::MULT:
      case SOMParser::DIV:
      case SOMParser::MOD:
      case SOMParser::EQUALS:
      case SOMParser::GREATER:
      case SOMParser::LESS:
      case SOMParser::GREATER_EQ:
      case SOMParser::LESS_EQ:
      case SOMParser::VBAR: {
        setState(314);
        selector();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorContext ------------------------------------------------------------------

SOMParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::BinarySelectorContext* SOMParser::SelectorContext::binarySelector() {
  return getRuleContext<SOMParser::BinarySelectorContext>(0);
}

SOMParser::KeywordSelectorContext* SOMParser::SelectorContext::keywordSelector() {
  return getRuleContext<SOMParser::KeywordSelectorContext>(0);
}

SOMParser::UnarySelectorContext* SOMParser::SelectorContext::unarySelector() {
  return getRuleContext<SOMParser::UnarySelectorContext>(0);
}


size_t SOMParser::SelectorContext::getRuleIndex() const {
  return SOMParser::RuleSelector;
}


antlrcpp::Any SOMParser::SelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitSelector(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::SelectorContext* SOMParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 78, SOMParser::RuleSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::PLUS:
      case SOMParser::MINUS:
      case SOMParser::MULT:
      case SOMParser::DIV:
      case SOMParser::MOD:
      case SOMParser::EQUALS:
      case SOMParser::GREATER:
      case SOMParser::LESS:
      case SOMParser::GREATER_EQ:
      case SOMParser::LESS_EQ:
      case SOMParser::VBAR: {
        enterOuterAlt(_localctx, 1);
        setState(317);
        binarySelector();
        break;
      }

      case SOMParser::KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(318);
        keywordSelector();
        break;
      }

      case SOMParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(319);
        unarySelector();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordSelectorContext ------------------------------------------------------------------

SOMParser::KeywordSelectorContext::KeywordSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::KeywordSelectorContext::KEYWORD() {
  return getTokens(SOMParser::KEYWORD);
}

tree::TerminalNode* SOMParser::KeywordSelectorContext::KEYWORD(size_t i) {
  return getToken(SOMParser::KEYWORD, i);
}


size_t SOMParser::KeywordSelectorContext::getRuleIndex() const {
  return SOMParser::RuleKeywordSelector;
}


antlrcpp::Any SOMParser::KeywordSelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitKeywordSelector(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::KeywordSelectorContext* SOMParser::keywordSelector() {
  KeywordSelectorContext *_localctx = _tracker.createInstance<KeywordSelectorContext>(_ctx, getState());
  enterRule(_localctx, 80, SOMParser::RuleKeywordSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(323); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(322);
              match(SOMParser::KEYWORD);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(325); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SOMParser::_decisionToDFA;
atn::PredictionContextCache SOMParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SOMParser::_atn;
std::vector<uint16_t> SOMParser::_serializedATN;

std::vector<std::string> SOMParser::_ruleNames = {
  "classDefinition", "superclass", "instanceFields", "classFields", "method", 
  "methodBlock", "blockContents", "localDefinitions", "blockBody", "result", 
  "expression", "assignation", "assignments", "assignment", "evaluation", 
  "primary", "messages", "unaryMessage", "binaryMessage", "binaryOperand", 
  "keywordMessage", "formula", "nestedTerm", "nestedBlock", "blockPattern", 
  "blockArgs", "variable", "pattern", "unaryPattern", "unarySelector", "binaryPattern", 
  "keywordPattern", "binarySelector", "argument", "literal", "literalNumber", 
  "literalString", "literalArray", "literalSymbol", "selector", "keywordSelector"
};

std::vector<std::string> SOMParser::_literalNames = {
  "", "", "", "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'\\'", "'='", 
  "'>'", "'<'", "'>='", "'<='", "':='", "'----'", "'|'", "'''", "':'", "','", 
  "'^'", "'.'", "'#'", "'('", "')'", "'['", "']'"
};

std::vector<std::string> SOMParser::_symbolicNames = {
  "", "KEYWORD", "IDENTIFIER", "WHITESPACE", "COMMENT", "INTEGER", "DOUBLE", 
  "STRING", "PLUS", "MINUS", "MULT", "DIV", "MOD", "EQUALS", "GREATER", 
  "LESS", "GREATER_EQ", "LESS_EQ", "ASSIGN", "SEPARATOR", "VBAR", "SIMPLE_QUOTE", 
  "COLON", "COMMA", "RETURN", "PERIOD", "POUND", "OPEN_PAR", "CLOSE_PAR", 
  "NEW_BLOCK", "CLOSE_BLOCK"
};

dfa::Vocabulary SOMParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SOMParser::_tokenNames;

SOMParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x20, 0x14a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x5a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x5d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x62, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x65, 0xb, 0x2, 0x5, 0x2, 0x67, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x5, 0x3, 0x6c, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x72, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x75, 0xb, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x78, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0x7c, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x7f, 0xb, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x82, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x8a, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x92, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x7, 0x9, 0x97, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x9a, 0xb, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xa1, 0xa, 0xa, 
    0x5, 0xa, 0xa3, 0xa, 0xa, 0x5, 0xa, 0xa5, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0xa9, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xad, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x6, 0xe, 0xb3, 0xa, 0xe, 0xd, 
    0xe, 0xe, 0xe, 0xb4, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0xbc, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xc2, 0xa, 0x11, 0x3, 0x12, 0x6, 0x12, 0xc5, 0xa, 0x12, 0xd, 
    0x12, 0xe, 0x12, 0xc6, 0x3, 0x12, 0x7, 0x12, 0xca, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0xcd, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0xd0, 0xa, 0x12, 0x3, 
    0x12, 0x6, 0x12, 0xd3, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0xd4, 0x3, 0x12, 
    0x5, 0x12, 0xd8, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xdb, 0xa, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0xe4, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xe7, 0xb, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x6, 0x16, 0xeb, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0xec, 
    0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xf1, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0xf4, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0xfc, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0xff, 0xa, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x6, 0x1b, 0x108, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x109, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x111, 
    0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x6, 0x21, 0x11c, 0xa, 0x21, 
    0xd, 0x21, 0xe, 0x21, 0x11d, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x128, 0xa, 0x24, 
    0x3, 0x25, 0x5, 0x25, 0x12b, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x134, 0xa, 0x27, 
    0xc, 0x27, 0xe, 0x27, 0x137, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x13e, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x143, 0xa, 0x29, 0x3, 0x2a, 0x6, 0x2a, 0x146, 
    0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 0x147, 0x3, 0x2a, 0x2, 0x2, 0x2b, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
    0x4e, 0x50, 0x52, 0x2, 0x4, 0x4, 0x2, 0xa, 0x13, 0x16, 0x16, 0x3, 0x2, 
    0x7, 0x8, 0x2, 0x14e, 0x2, 0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x77, 0x3, 0x2, 0x2, 0x2, 0x8, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x83, 0x3, 0x2, 0x2, 0x2, 0xc, 0x87, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x10, 0x98, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x16, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xae, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x26, 0xde, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xea, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x102, 0x3, 0x2, 0x2, 0x2, 0x34, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x38, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x116, 0x3, 0x2, 0x2, 0x2, 0x40, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x121, 0x3, 0x2, 0x2, 0x2, 0x46, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x130, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x142, 0x3, 0x2, 0x2, 0x2, 0x52, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x55, 0x7, 0x4, 0x2, 0x2, 0x55, 0x56, 0x7, 0xf, 0x2, 0x2, 
    0x56, 0x57, 0x5, 0x4, 0x3, 0x2, 0x57, 0x5b, 0x5, 0x6, 0x4, 0x2, 0x58, 
    0x5a, 0x5, 0xa, 0x6, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x66, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x5f, 0x7, 0x15, 0x2, 0x2, 0x5f, 0x63, 0x5, 0x8, 0x5, 
    0x2, 0x60, 0x62, 0x5, 0xa, 0x6, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x1e, 
    0x2, 0x2, 0x69, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0x4, 0x2, 
    0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x1d, 0x2, 0x2, 0x6e, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x73, 0x7, 0x16, 0x2, 0x2, 0x70, 0x72, 
    0x5, 0x36, 0x1c, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x78, 0x7, 0x16, 0x2, 0x2, 0x77, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7d, 0x7, 0x16, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x36, 0x1c, 0x2, 0x7b, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0x16, 0x2, 
    0x2, 0x81, 0x79, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x9, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x38, 0x1d, 0x2, 0x84, 
    0x85, 0x7, 0xf, 0x2, 0x2, 0x85, 0x86, 0x5, 0xc, 0x7, 0x2, 0x86, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x7, 0x1d, 0x2, 0x2, 0x88, 0x8a, 0x5, 
    0xe, 0x8, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x1e, 0x2, 
    0x2, 0x8c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x16, 0x2, 0x2, 
    0x8e, 0x8f, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x90, 0x7, 0x16, 0x2, 0x2, 0x90, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x5, 
    0x12, 0xa, 0x2, 0x94, 0xf, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x5, 0x36, 
    0x1c, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x11, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9c, 0x7, 0x1a, 0x2, 0x2, 0x9c, 0xa5, 0x5, 0x14, 0xb, 0x2, 0x9d, 0xa2, 
    0x5, 0x16, 0xc, 0x2, 0x9e, 0xa0, 0x7, 0x1b, 0x2, 0x2, 0x9f, 0xa1, 0x5, 
    0x12, 0xa, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9e, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa5, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x16, 0xc, 0x2, 0xa7, 0xa9, 
    0x7, 0x1b, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x5, 0x18, 
    0xd, 0x2, 0xab, 0xad, 0x5, 0x1e, 0x10, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xaf, 0x5, 0x1a, 0xe, 0x2, 0xaf, 0xb0, 0x5, 0x1e, 0x10, 0x2, 0xb0, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb3, 0x5, 0x1c, 0xf, 0x2, 0xb2, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb7, 0x5, 0x36, 0x1c, 0x2, 0xb7, 0xb8, 0x7, 0x14, 0x2, 
    0x2, 0xb8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x20, 0x11, 0x2, 
    0xba, 0xbc, 0x5, 0x22, 0x12, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc2, 
    0x5, 0x36, 0x1c, 0x2, 0xbe, 0xc2, 0x5, 0x2e, 0x18, 0x2, 0xbf, 0xc2, 
    0x5, 0x30, 0x19, 0x2, 0xc0, 0xc2, 0x5, 0x46, 0x24, 0x2, 0xc1, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc5, 0x5, 0x24, 0x13, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xca, 0x5, 0x26, 0x14, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xd0, 0x5, 0x2a, 0x16, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd3, 0x5, 0x26, 0x14, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x5, 
    0x2a, 0x16, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x5, 0x2a, 0x16, 
    0x2, 0xda, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x23, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xdd, 0x7, 0x4, 0x2, 0x2, 0xdd, 0x25, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 
    0x5, 0x42, 0x22, 0x2, 0xdf, 0xe0, 0x5, 0x28, 0x15, 0x2, 0xe0, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe5, 0x5, 0x20, 0x11, 0x2, 0xe2, 0xe4, 0x5, 
    0x24, 0x13, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe9, 0x7, 0x3, 0x2, 0x2, 0xe9, 0xeb, 0x5, 0x2c, 0x17, 0x2, 0xea, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 
    0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xee, 0xf2, 0x5, 0x28, 0x15, 0x2, 0xef, 0xf1, 0x5, 0x26, 
    0x14, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf6, 0x7, 0x1d, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x16, 0xc, 0x2, 0xf7, 0xf8, 
    0x7, 0x1e, 0x2, 0x2, 0xf8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfb, 0x7, 
    0x1f, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x32, 0x1a, 0x2, 0xfb, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xff, 0x5, 0xe, 0x8, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0x7, 0x20, 0x2, 0x2, 0x101, 0x31, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0x5, 0x34, 0x1b, 0x2, 0x103, 0x104, 0x7, 0x16, 0x2, 0x2, 0x104, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x18, 0x2, 0x2, 0x106, 
    0x108, 0x5, 0x44, 0x23, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0x4, 0x2, 0x2, 0x10c, 0x37, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x111, 0x5, 
    0x3a, 0x1e, 0x2, 0x10e, 0x111, 0x5, 0x40, 0x21, 0x2, 0x10f, 0x111, 0x5, 
    0x3e, 0x20, 0x2, 0x110, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x113, 0x5, 0x3c, 0x1f, 0x2, 0x113, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x115, 0x7, 0x4, 0x2, 0x2, 0x115, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x117, 0x5, 0x42, 0x22, 0x2, 0x117, 0x118, 0x5, 0x44, 0x23, 
    0x2, 0x118, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x3, 0x2, 0x2, 
    0x11a, 0x11c, 0x5, 0x44, 0x23, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x120, 0x9, 0x2, 0x2, 0x2, 0x120, 0x43, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x5, 0x36, 0x1c, 0x2, 0x122, 0x45, 0x3, 0x2, 0x2, 0x2, 0x123, 0x128, 
    0x5, 0x48, 0x25, 0x2, 0x124, 0x128, 0x5, 0x4a, 0x26, 0x2, 0x125, 0x128, 
    0x5, 0x4c, 0x27, 0x2, 0x126, 0x128, 0x5, 0x4e, 0x28, 0x2, 0x127, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x12b, 0x7, 0xb, 0x2, 0x2, 0x12a, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12d, 0x9, 0x3, 0x2, 0x2, 0x12d, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x12f, 0x7, 0x9, 0x2, 0x2, 0x12f, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x131, 0x7, 0x1c, 0x2, 0x2, 0x131, 0x135, 0x7, 0x1f, 0x2, 
    0x2, 0x132, 0x134, 0x5, 0x46, 0x24, 0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x137, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x20, 0x2, 
    0x2, 0x139, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x7, 0x1c, 0x2, 
    0x2, 0x13b, 0x13e, 0x7, 0x9, 0x2, 0x2, 0x13c, 0x13e, 0x5, 0x50, 0x29, 
    0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x143, 0x5, 0x42, 0x22, 
    0x2, 0x140, 0x143, 0x5, 0x52, 0x2a, 0x2, 0x141, 0x143, 0x5, 0x3c, 0x1f, 
    0x2, 0x142, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x146, 0x7, 0x3, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x53, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x5b, 0x63, 0x66, 0x6b, 0x73, 0x77, 0x7d, 0x81, 0x89, 0x91, 0x98, 0xa0, 
    0xa2, 0xa4, 0xa8, 0xac, 0xb4, 0xbb, 0xc1, 0xc6, 0xcb, 0xcf, 0xd4, 0xd7, 
    0xda, 0xe5, 0xec, 0xf2, 0xfb, 0xfe, 0x109, 0x110, 0x11d, 0x127, 0x12a, 
    0x135, 0x13d, 0x142, 0x147, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SOMParser::Initializer SOMParser::_init;
