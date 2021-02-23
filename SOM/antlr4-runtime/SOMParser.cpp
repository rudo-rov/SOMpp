
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


//----------------- ClassdefContext ------------------------------------------------------------------

SOMParser::ClassdefContext::ClassdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::ClassdefContext::Identifier() {
  return getToken(SOMParser::Identifier, 0);
}

tree::TerminalNode* SOMParser::ClassdefContext::Equal() {
  return getToken(SOMParser::Equal, 0);
}

SOMParser::SuperclassContext* SOMParser::ClassdefContext::superclass() {
  return getRuleContext<SOMParser::SuperclassContext>(0);
}

SOMParser::InstanceFieldsContext* SOMParser::ClassdefContext::instanceFields() {
  return getRuleContext<SOMParser::InstanceFieldsContext>(0);
}

tree::TerminalNode* SOMParser::ClassdefContext::EndTerm() {
  return getToken(SOMParser::EndTerm, 0);
}

std::vector<SOMParser::MethodContext *> SOMParser::ClassdefContext::method() {
  return getRuleContexts<SOMParser::MethodContext>();
}

SOMParser::MethodContext* SOMParser::ClassdefContext::method(size_t i) {
  return getRuleContext<SOMParser::MethodContext>(i);
}

tree::TerminalNode* SOMParser::ClassdefContext::Separator() {
  return getToken(SOMParser::Separator, 0);
}

SOMParser::ClassFieldsContext* SOMParser::ClassdefContext::classFields() {
  return getRuleContext<SOMParser::ClassFieldsContext>(0);
}

std::vector<SOMParser::ClassMethodContext *> SOMParser::ClassdefContext::classMethod() {
  return getRuleContexts<SOMParser::ClassMethodContext>();
}

SOMParser::ClassMethodContext* SOMParser::ClassdefContext::classMethod(size_t i) {
  return getRuleContext<SOMParser::ClassMethodContext>(i);
}


size_t SOMParser::ClassdefContext::getRuleIndex() const {
  return SOMParser::RuleClassdef;
}


antlrcpp::Any SOMParser::ClassdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitClassdef(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ClassdefContext* SOMParser::classdef() {
  ClassdefContext *_localctx = _tracker.createInstance<ClassdefContext>(_ctx, getState());
  enterRule(_localctx, 0, SOMParser::RuleClassdef);
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
    setState(98);
    match(SOMParser::Identifier);
    setState(99);
    match(SOMParser::Equal);
    setState(100);
    superclass();
    setState(101);
    instanceFields();
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Primitive)
      | (1ULL << SOMParser::Identifier)
      | (1ULL << SOMParser::Equal)
      | (1ULL << SOMParser::Or)
      | (1ULL << SOMParser::Comma)
      | (1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::Not)
      | (1ULL << SOMParser::And)
      | (1ULL << SOMParser::Star)
      | (1ULL << SOMParser::Div)
      | (1ULL << SOMParser::Mod)
      | (1ULL << SOMParser::Plus)
      | (1ULL << SOMParser::More)
      | (1ULL << SOMParser::Less)
      | (1ULL << SOMParser::At)
      | (1ULL << SOMParser::Per)
      | (1ULL << SOMParser::OperatorSequence)
      | (1ULL << SOMParser::Keyword))) != 0)) {
      setState(102);
      method();
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::Separator) {
      setState(108);
      match(SOMParser::Separator);
      setState(109);
      classFields();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SOMParser::Primitive)
        | (1ULL << SOMParser::Identifier)
        | (1ULL << SOMParser::Equal)
        | (1ULL << SOMParser::Or)
        | (1ULL << SOMParser::Comma)
        | (1ULL << SOMParser::Minus)
        | (1ULL << SOMParser::Not)
        | (1ULL << SOMParser::And)
        | (1ULL << SOMParser::Star)
        | (1ULL << SOMParser::Div)
        | (1ULL << SOMParser::Mod)
        | (1ULL << SOMParser::Plus)
        | (1ULL << SOMParser::More)
        | (1ULL << SOMParser::Less)
        | (1ULL << SOMParser::At)
        | (1ULL << SOMParser::Per)
        | (1ULL << SOMParser::OperatorSequence)
        | (1ULL << SOMParser::Keyword))) != 0)) {
        setState(110);
        classMethod();
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(118);
    match(SOMParser::EndTerm);
   
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

tree::TerminalNode* SOMParser::SuperclassContext::NewTerm() {
  return getToken(SOMParser::NewTerm, 0);
}

tree::TerminalNode* SOMParser::SuperclassContext::Identifier() {
  return getToken(SOMParser::Identifier, 0);
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
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::Identifier) {
      setState(120);
      match(SOMParser::Identifier);
    }
    setState(123);
    match(SOMParser::NewTerm);
   
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

std::vector<tree::TerminalNode *> SOMParser::InstanceFieldsContext::Or() {
  return getTokens(SOMParser::Or);
}

tree::TerminalNode* SOMParser::InstanceFieldsContext::Or(size_t i) {
  return getToken(SOMParser::Or, i);
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
    setState(133);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(125);
      match(SOMParser::Or);
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SOMParser::Primitive

      || _la == SOMParser::Identifier) {
        setState(126);
        variable();
        setState(131);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(132);
      match(SOMParser::Or);
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

std::vector<tree::TerminalNode *> SOMParser::ClassFieldsContext::Or() {
  return getTokens(SOMParser::Or);
}

tree::TerminalNode* SOMParser::ClassFieldsContext::Or(size_t i) {
  return getToken(SOMParser::Or, i);
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
    setState(143);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(135);
      match(SOMParser::Or);
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SOMParser::Primitive

      || _la == SOMParser::Identifier) {
        setState(136);
        variable();
        setState(141);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(142);
      match(SOMParser::Or);
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

//----------------- ClassMethodContext ------------------------------------------------------------------

SOMParser::ClassMethodContext::ClassMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::MethodContext* SOMParser::ClassMethodContext::method() {
  return getRuleContext<SOMParser::MethodContext>(0);
}


size_t SOMParser::ClassMethodContext::getRuleIndex() const {
  return SOMParser::RuleClassMethod;
}


antlrcpp::Any SOMParser::ClassMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitClassMethod(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::ClassMethodContext* SOMParser::classMethod() {
  ClassMethodContext *_localctx = _tracker.createInstance<ClassMethodContext>(_ctx, getState());
  enterRule(_localctx, 8, SOMParser::RuleClassMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    method();
   
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

tree::TerminalNode* SOMParser::MethodContext::Equal() {
  return getToken(SOMParser::Equal, 0);
}

tree::TerminalNode* SOMParser::MethodContext::Primitive() {
  return getToken(SOMParser::Primitive, 0);
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
  enterRule(_localctx, 10, SOMParser::RuleMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    pattern();
    setState(148);
    match(SOMParser::Equal);
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Primitive: {
        setState(149);
        match(SOMParser::Primitive);
        break;
      }

      case SOMParser::NewTerm: {
        setState(150);
        methodBlock();
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
  enterRule(_localctx, 12, SOMParser::RulePattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Primitive:
      case SOMParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(153);
        unaryPattern();
        break;
      }

      case SOMParser::Keyword: {
        enterOuterAlt(_localctx, 2);
        setState(154);
        keywordPattern();
        break;
      }

      case SOMParser::Equal:
      case SOMParser::Or:
      case SOMParser::Comma:
      case SOMParser::Minus:
      case SOMParser::Not:
      case SOMParser::And:
      case SOMParser::Star:
      case SOMParser::Div:
      case SOMParser::Mod:
      case SOMParser::Plus:
      case SOMParser::More:
      case SOMParser::Less:
      case SOMParser::At:
      case SOMParser::Per:
      case SOMParser::OperatorSequence: {
        enterOuterAlt(_localctx, 3);
        setState(155);
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
  enterRule(_localctx, 14, SOMParser::RuleUnaryPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    unarySelector();
   
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
  enterRule(_localctx, 16, SOMParser::RuleBinaryPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    binarySelector();
    setState(161);
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

std::vector<SOMParser::KeywordContext *> SOMParser::KeywordPatternContext::keyword() {
  return getRuleContexts<SOMParser::KeywordContext>();
}

SOMParser::KeywordContext* SOMParser::KeywordPatternContext::keyword(size_t i) {
  return getRuleContext<SOMParser::KeywordContext>(i);
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
  enterRule(_localctx, 18, SOMParser::RuleKeywordPattern);
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
    setState(166); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(163);
      keyword();
      setState(164);
      argument();
      setState(168); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SOMParser::Keyword);
   
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

tree::TerminalNode* SOMParser::MethodBlockContext::NewTerm() {
  return getToken(SOMParser::NewTerm, 0);
}

tree::TerminalNode* SOMParser::MethodBlockContext::EndTerm() {
  return getToken(SOMParser::EndTerm, 0);
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
  enterRule(_localctx, 20, SOMParser::RuleMethodBlock);
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
    setState(170);
    match(SOMParser::NewTerm);
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Primitive)
      | (1ULL << SOMParser::Identifier)
      | (1ULL << SOMParser::NewTerm)
      | (1ULL << SOMParser::Or)
      | (1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::NewBlock)
      | (1ULL << SOMParser::Pound)
      | (1ULL << SOMParser::Exit)
      | (1ULL << SOMParser::Integer)
      | (1ULL << SOMParser::Double)
      | (1ULL << SOMParser::STString))) != 0)) {
      setState(171);
      blockContents();
    }
    setState(174);
    match(SOMParser::EndTerm);
   
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

SOMParser::IdentifierContext* SOMParser::UnarySelectorContext::identifier() {
  return getRuleContext<SOMParser::IdentifierContext>(0);
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
  enterRule(_localctx, 22, SOMParser::RuleUnarySelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    identifier();
   
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

tree::TerminalNode* SOMParser::BinarySelectorContext::Or() {
  return getToken(SOMParser::Or, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Comma() {
  return getToken(SOMParser::Comma, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Minus() {
  return getToken(SOMParser::Minus, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Equal() {
  return getToken(SOMParser::Equal, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Not() {
  return getToken(SOMParser::Not, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::And() {
  return getToken(SOMParser::And, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Star() {
  return getToken(SOMParser::Star, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Div() {
  return getToken(SOMParser::Div, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Mod() {
  return getToken(SOMParser::Mod, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Plus() {
  return getToken(SOMParser::Plus, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::More() {
  return getToken(SOMParser::More, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Less() {
  return getToken(SOMParser::Less, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::At() {
  return getToken(SOMParser::At, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::Per() {
  return getToken(SOMParser::Per, 0);
}

tree::TerminalNode* SOMParser::BinarySelectorContext::OperatorSequence() {
  return getToken(SOMParser::OperatorSequence, 0);
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
  enterRule(_localctx, 24, SOMParser::RuleBinarySelector);
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
    setState(178);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Equal)
      | (1ULL << SOMParser::Or)
      | (1ULL << SOMParser::Comma)
      | (1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::Not)
      | (1ULL << SOMParser::And)
      | (1ULL << SOMParser::Star)
      | (1ULL << SOMParser::Div)
      | (1ULL << SOMParser::Mod)
      | (1ULL << SOMParser::Plus)
      | (1ULL << SOMParser::More)
      | (1ULL << SOMParser::Less)
      | (1ULL << SOMParser::At)
      | (1ULL << SOMParser::Per)
      | (1ULL << SOMParser::OperatorSequence))) != 0))) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

SOMParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::IdentifierContext::Primitive() {
  return getToken(SOMParser::Primitive, 0);
}

tree::TerminalNode* SOMParser::IdentifierContext::Identifier() {
  return getToken(SOMParser::Identifier, 0);
}


size_t SOMParser::IdentifierContext::getRuleIndex() const {
  return SOMParser::RuleIdentifier;
}


antlrcpp::Any SOMParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::IdentifierContext* SOMParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 26, SOMParser::RuleIdentifier);
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
    setState(180);
    _la = _input->LA(1);
    if (!(_la == SOMParser::Primitive

    || _la == SOMParser::Identifier)) {
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

//----------------- KeywordContext ------------------------------------------------------------------

SOMParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::KeywordContext::Keyword() {
  return getToken(SOMParser::Keyword, 0);
}


size_t SOMParser::KeywordContext::getRuleIndex() const {
  return SOMParser::RuleKeyword;
}


antlrcpp::Any SOMParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::KeywordContext* SOMParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 28, SOMParser::RuleKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(SOMParser::Keyword);
   
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
  enterRule(_localctx, 30, SOMParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    variable();
   
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

std::vector<tree::TerminalNode *> SOMParser::BlockContentsContext::Or() {
  return getTokens(SOMParser::Or);
}

tree::TerminalNode* SOMParser::BlockContentsContext::Or(size_t i) {
  return getToken(SOMParser::Or, i);
}

SOMParser::LocalDefsContext* SOMParser::BlockContentsContext::localDefs() {
  return getRuleContext<SOMParser::LocalDefsContext>(0);
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
  enterRule(_localctx, 32, SOMParser::RuleBlockContents);
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
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::Or) {
      setState(186);
      match(SOMParser::Or);
      setState(187);
      localDefs();
      setState(188);
      match(SOMParser::Or);
    }
    setState(192);
    blockBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalDefsContext ------------------------------------------------------------------

SOMParser::LocalDefsContext::LocalDefsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SOMParser::VariableContext *> SOMParser::LocalDefsContext::variable() {
  return getRuleContexts<SOMParser::VariableContext>();
}

SOMParser::VariableContext* SOMParser::LocalDefsContext::variable(size_t i) {
  return getRuleContext<SOMParser::VariableContext>(i);
}


size_t SOMParser::LocalDefsContext::getRuleIndex() const {
  return SOMParser::RuleLocalDefs;
}


antlrcpp::Any SOMParser::LocalDefsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLocalDefs(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LocalDefsContext* SOMParser::localDefs() {
  LocalDefsContext *_localctx = _tracker.createInstance<LocalDefsContext>(_ctx, getState());
  enterRule(_localctx, 34, SOMParser::RuleLocalDefs);
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
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SOMParser::Primitive

    || _la == SOMParser::Identifier) {
      setState(194);
      variable();
      setState(199);
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

tree::TerminalNode* SOMParser::BlockBodyContext::Exit() {
  return getToken(SOMParser::Exit, 0);
}

SOMParser::ResultContext* SOMParser::BlockBodyContext::result() {
  return getRuleContext<SOMParser::ResultContext>(0);
}

SOMParser::ExpressionContext* SOMParser::BlockBodyContext::expression() {
  return getRuleContext<SOMParser::ExpressionContext>(0);
}

tree::TerminalNode* SOMParser::BlockBodyContext::Period() {
  return getToken(SOMParser::Period, 0);
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
  enterRule(_localctx, 36, SOMParser::RuleBlockBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Exit: {
        enterOuterAlt(_localctx, 1);
        setState(200);
        match(SOMParser::Exit);
        setState(201);
        result();
        break;
      }

      case SOMParser::Primitive:
      case SOMParser::Identifier:
      case SOMParser::NewTerm:
      case SOMParser::Minus:
      case SOMParser::NewBlock:
      case SOMParser::Pound:
      case SOMParser::Integer:
      case SOMParser::Double:
      case SOMParser::STString: {
        enterOuterAlt(_localctx, 2);
        setState(202);
        expression();
        setState(207);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SOMParser::Period) {
          setState(203);
          match(SOMParser::Period);
          setState(205);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SOMParser::Primitive)
            | (1ULL << SOMParser::Identifier)
            | (1ULL << SOMParser::NewTerm)
            | (1ULL << SOMParser::Minus)
            | (1ULL << SOMParser::NewBlock)
            | (1ULL << SOMParser::Pound)
            | (1ULL << SOMParser::Exit)
            | (1ULL << SOMParser::Integer)
            | (1ULL << SOMParser::Double)
            | (1ULL << SOMParser::STString))) != 0)) {
            setState(204);
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

tree::TerminalNode* SOMParser::ResultContext::Period() {
  return getToken(SOMParser::Period, 0);
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
  enterRule(_localctx, 38, SOMParser::RuleResult);
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
    setState(211);
    expression();
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::Period) {
      setState(212);
      match(SOMParser::Period);
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
  enterRule(_localctx, 40, SOMParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(215);
      assignation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(216);
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
  enterRule(_localctx, 42, SOMParser::RuleAssignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    assignments();
    setState(220);
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
  enterRule(_localctx, 44, SOMParser::RuleAssignments);

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
    setState(223); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(222);
              assignment();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(225); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
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

tree::TerminalNode* SOMParser::AssignmentContext::Assign() {
  return getToken(SOMParser::Assign, 0);
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
  enterRule(_localctx, 46, SOMParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    variable();
    setState(228);
    match(SOMParser::Assign);
   
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
  enterRule(_localctx, 48, SOMParser::RuleEvaluation);
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
    setState(230);
    primary();
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Primitive)
      | (1ULL << SOMParser::Identifier)
      | (1ULL << SOMParser::Equal)
      | (1ULL << SOMParser::Or)
      | (1ULL << SOMParser::Comma)
      | (1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::Not)
      | (1ULL << SOMParser::And)
      | (1ULL << SOMParser::Star)
      | (1ULL << SOMParser::Div)
      | (1ULL << SOMParser::Mod)
      | (1ULL << SOMParser::Plus)
      | (1ULL << SOMParser::More)
      | (1ULL << SOMParser::Less)
      | (1ULL << SOMParser::At)
      | (1ULL << SOMParser::Per)
      | (1ULL << SOMParser::OperatorSequence)
      | (1ULL << SOMParser::Keyword))) != 0)) {
      setState(231);
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
  enterRule(_localctx, 50, SOMParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(238);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Primitive:
      case SOMParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(234);
        variable();
        break;
      }

      case SOMParser::NewTerm: {
        enterOuterAlt(_localctx, 2);
        setState(235);
        nestedTerm();
        break;
      }

      case SOMParser::NewBlock: {
        enterOuterAlt(_localctx, 3);
        setState(236);
        nestedBlock();
        break;
      }

      case SOMParser::Minus:
      case SOMParser::Pound:
      case SOMParser::Integer:
      case SOMParser::Double:
      case SOMParser::STString: {
        enterOuterAlt(_localctx, 4);
        setState(237);
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

//----------------- VariableContext ------------------------------------------------------------------

SOMParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::IdentifierContext* SOMParser::VariableContext::identifier() {
  return getRuleContext<SOMParser::IdentifierContext>(0);
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
    setState(240);
    identifier();
   
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
  enterRule(_localctx, 54, SOMParser::RuleMessages);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Primitive:
      case SOMParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(243); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(242);
          unaryMessage();
          setState(245); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == SOMParser::Primitive

        || _la == SOMParser::Identifier);
        setState(250);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SOMParser::Equal)
          | (1ULL << SOMParser::Or)
          | (1ULL << SOMParser::Comma)
          | (1ULL << SOMParser::Minus)
          | (1ULL << SOMParser::Not)
          | (1ULL << SOMParser::And)
          | (1ULL << SOMParser::Star)
          | (1ULL << SOMParser::Div)
          | (1ULL << SOMParser::Mod)
          | (1ULL << SOMParser::Plus)
          | (1ULL << SOMParser::More)
          | (1ULL << SOMParser::Less)
          | (1ULL << SOMParser::At)
          | (1ULL << SOMParser::Per)
          | (1ULL << SOMParser::OperatorSequence))) != 0)) {
          setState(247);
          binaryMessage();
          setState(252);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(254);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SOMParser::Keyword) {
          setState(253);
          keywordMessage();
        }
        break;
      }

      case SOMParser::Equal:
      case SOMParser::Or:
      case SOMParser::Comma:
      case SOMParser::Minus:
      case SOMParser::Not:
      case SOMParser::And:
      case SOMParser::Star:
      case SOMParser::Div:
      case SOMParser::Mod:
      case SOMParser::Plus:
      case SOMParser::More:
      case SOMParser::Less:
      case SOMParser::At:
      case SOMParser::Per:
      case SOMParser::OperatorSequence: {
        enterOuterAlt(_localctx, 2);
        setState(257); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(256);
          binaryMessage();
          setState(259); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SOMParser::Equal)
          | (1ULL << SOMParser::Or)
          | (1ULL << SOMParser::Comma)
          | (1ULL << SOMParser::Minus)
          | (1ULL << SOMParser::Not)
          | (1ULL << SOMParser::And)
          | (1ULL << SOMParser::Star)
          | (1ULL << SOMParser::Div)
          | (1ULL << SOMParser::Mod)
          | (1ULL << SOMParser::Plus)
          | (1ULL << SOMParser::More)
          | (1ULL << SOMParser::Less)
          | (1ULL << SOMParser::At)
          | (1ULL << SOMParser::Per)
          | (1ULL << SOMParser::OperatorSequence))) != 0));
        setState(262);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SOMParser::Keyword) {
          setState(261);
          keywordMessage();
        }
        break;
      }

      case SOMParser::Keyword: {
        enterOuterAlt(_localctx, 3);
        setState(264);
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

SOMParser::UnarySelectorContext* SOMParser::UnaryMessageContext::unarySelector() {
  return getRuleContext<SOMParser::UnarySelectorContext>(0);
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
  enterRule(_localctx, 56, SOMParser::RuleUnaryMessage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    unarySelector();
   
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
  enterRule(_localctx, 58, SOMParser::RuleBinaryMessage);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    binarySelector();
    setState(270);
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
  enterRule(_localctx, 60, SOMParser::RuleBinaryOperand);
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
    setState(272);
    primary();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SOMParser::Primitive

    || _la == SOMParser::Identifier) {
      setState(273);
      unaryMessage();
      setState(278);
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

std::vector<SOMParser::KeywordContext *> SOMParser::KeywordMessageContext::keyword() {
  return getRuleContexts<SOMParser::KeywordContext>();
}

SOMParser::KeywordContext* SOMParser::KeywordMessageContext::keyword(size_t i) {
  return getRuleContext<SOMParser::KeywordContext>(i);
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
  enterRule(_localctx, 62, SOMParser::RuleKeywordMessage);
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
    setState(282); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(279);
      keyword();
      setState(280);
      formula();
      setState(284); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SOMParser::Keyword);
   
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
  enterRule(_localctx, 64, SOMParser::RuleFormula);
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
    setState(286);
    binaryOperand();
    setState(290);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Equal)
      | (1ULL << SOMParser::Or)
      | (1ULL << SOMParser::Comma)
      | (1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::Not)
      | (1ULL << SOMParser::And)
      | (1ULL << SOMParser::Star)
      | (1ULL << SOMParser::Div)
      | (1ULL << SOMParser::Mod)
      | (1ULL << SOMParser::Plus)
      | (1ULL << SOMParser::More)
      | (1ULL << SOMParser::Less)
      | (1ULL << SOMParser::At)
      | (1ULL << SOMParser::Per)
      | (1ULL << SOMParser::OperatorSequence))) != 0)) {
      setState(287);
      binaryMessage();
      setState(292);
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

tree::TerminalNode* SOMParser::NestedTermContext::NewTerm() {
  return getToken(SOMParser::NewTerm, 0);
}

SOMParser::ExpressionContext* SOMParser::NestedTermContext::expression() {
  return getRuleContext<SOMParser::ExpressionContext>(0);
}

tree::TerminalNode* SOMParser::NestedTermContext::EndTerm() {
  return getToken(SOMParser::EndTerm, 0);
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
  enterRule(_localctx, 66, SOMParser::RuleNestedTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(SOMParser::NewTerm);
    setState(294);
    expression();
    setState(295);
    match(SOMParser::EndTerm);
   
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

SOMParser::LiteralArrayContext* SOMParser::LiteralContext::literalArray() {
  return getRuleContext<SOMParser::LiteralArrayContext>(0);
}

SOMParser::LiteralSymbolContext* SOMParser::LiteralContext::literalSymbol() {
  return getRuleContext<SOMParser::LiteralSymbolContext>(0);
}

SOMParser::LiteralStringContext* SOMParser::LiteralContext::literalString() {
  return getRuleContext<SOMParser::LiteralStringContext>(0);
}

SOMParser::LiteralNumberContext* SOMParser::LiteralContext::literalNumber() {
  return getRuleContext<SOMParser::LiteralNumberContext>(0);
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
    setState(301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(297);
      literalArray();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(298);
      literalSymbol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(299);
      literalString();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(300);
      literalNumber();
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

//----------------- LiteralArrayContext ------------------------------------------------------------------

SOMParser::LiteralArrayContext::LiteralArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralArrayContext::Pound() {
  return getToken(SOMParser::Pound, 0);
}

tree::TerminalNode* SOMParser::LiteralArrayContext::NewTerm() {
  return getToken(SOMParser::NewTerm, 0);
}

tree::TerminalNode* SOMParser::LiteralArrayContext::EndTerm() {
  return getToken(SOMParser::EndTerm, 0);
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
  enterRule(_localctx, 70, SOMParser::RuleLiteralArray);
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
    setState(303);
    match(SOMParser::Pound);
    setState(304);
    match(SOMParser::NewTerm);
    setState(308);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::Pound)
      | (1ULL << SOMParser::Integer)
      | (1ULL << SOMParser::Double)
      | (1ULL << SOMParser::STString))) != 0)) {
      setState(305);
      literal();
      setState(310);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(311);
    match(SOMParser::EndTerm);
   
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

SOMParser::NegativeDecimalContext* SOMParser::LiteralNumberContext::negativeDecimal() {
  return getRuleContext<SOMParser::NegativeDecimalContext>(0);
}

SOMParser::LiteralDecimalContext* SOMParser::LiteralNumberContext::literalDecimal() {
  return getRuleContext<SOMParser::LiteralDecimalContext>(0);
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
  enterRule(_localctx, 72, SOMParser::RuleLiteralNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Minus: {
        enterOuterAlt(_localctx, 1);
        setState(313);
        negativeDecimal();
        break;
      }

      case SOMParser::Integer:
      case SOMParser::Double: {
        enterOuterAlt(_localctx, 2);
        setState(314);
        literalDecimal();
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

//----------------- LiteralDecimalContext ------------------------------------------------------------------

SOMParser::LiteralDecimalContext::LiteralDecimalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::LiteralIntegerContext* SOMParser::LiteralDecimalContext::literalInteger() {
  return getRuleContext<SOMParser::LiteralIntegerContext>(0);
}

SOMParser::LiteralDoubleContext* SOMParser::LiteralDecimalContext::literalDouble() {
  return getRuleContext<SOMParser::LiteralDoubleContext>(0);
}


size_t SOMParser::LiteralDecimalContext::getRuleIndex() const {
  return SOMParser::RuleLiteralDecimal;
}


antlrcpp::Any SOMParser::LiteralDecimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralDecimal(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralDecimalContext* SOMParser::literalDecimal() {
  LiteralDecimalContext *_localctx = _tracker.createInstance<LiteralDecimalContext>(_ctx, getState());
  enterRule(_localctx, 74, SOMParser::RuleLiteralDecimal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(319);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Integer: {
        enterOuterAlt(_localctx, 1);
        setState(317);
        literalInteger();
        break;
      }

      case SOMParser::Double: {
        enterOuterAlt(_localctx, 2);
        setState(318);
        literalDouble();
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

//----------------- NegativeDecimalContext ------------------------------------------------------------------

SOMParser::NegativeDecimalContext::NegativeDecimalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::NegativeDecimalContext::Minus() {
  return getToken(SOMParser::Minus, 0);
}

SOMParser::LiteralDecimalContext* SOMParser::NegativeDecimalContext::literalDecimal() {
  return getRuleContext<SOMParser::LiteralDecimalContext>(0);
}


size_t SOMParser::NegativeDecimalContext::getRuleIndex() const {
  return SOMParser::RuleNegativeDecimal;
}


antlrcpp::Any SOMParser::NegativeDecimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitNegativeDecimal(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::NegativeDecimalContext* SOMParser::negativeDecimal() {
  NegativeDecimalContext *_localctx = _tracker.createInstance<NegativeDecimalContext>(_ctx, getState());
  enterRule(_localctx, 76, SOMParser::RuleNegativeDecimal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(SOMParser::Minus);
    setState(322);
    literalDecimal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralIntegerContext ------------------------------------------------------------------

SOMParser::LiteralIntegerContext::LiteralIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralIntegerContext::Integer() {
  return getToken(SOMParser::Integer, 0);
}


size_t SOMParser::LiteralIntegerContext::getRuleIndex() const {
  return SOMParser::RuleLiteralInteger;
}


antlrcpp::Any SOMParser::LiteralIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralInteger(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralIntegerContext* SOMParser::literalInteger() {
  LiteralIntegerContext *_localctx = _tracker.createInstance<LiteralIntegerContext>(_ctx, getState());
  enterRule(_localctx, 78, SOMParser::RuleLiteralInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(SOMParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralDoubleContext ------------------------------------------------------------------

SOMParser::LiteralDoubleContext::LiteralDoubleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::LiteralDoubleContext::Double() {
  return getToken(SOMParser::Double, 0);
}


size_t SOMParser::LiteralDoubleContext::getRuleIndex() const {
  return SOMParser::RuleLiteralDouble;
}


antlrcpp::Any SOMParser::LiteralDoubleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitLiteralDouble(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::LiteralDoubleContext* SOMParser::literalDouble() {
  LiteralDoubleContext *_localctx = _tracker.createInstance<LiteralDoubleContext>(_ctx, getState());
  enterRule(_localctx, 80, SOMParser::RuleLiteralDouble);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(SOMParser::Double);
   
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

tree::TerminalNode* SOMParser::LiteralSymbolContext::Pound() {
  return getToken(SOMParser::Pound, 0);
}

SOMParser::StringContext* SOMParser::LiteralSymbolContext::string() {
  return getRuleContext<SOMParser::StringContext>(0);
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
  enterRule(_localctx, 82, SOMParser::RuleLiteralSymbol);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(SOMParser::Pound);
    setState(331);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::STString: {
        setState(329);
        string();
        break;
      }

      case SOMParser::Primitive:
      case SOMParser::Identifier:
      case SOMParser::Equal:
      case SOMParser::Or:
      case SOMParser::Comma:
      case SOMParser::Minus:
      case SOMParser::Not:
      case SOMParser::And:
      case SOMParser::Star:
      case SOMParser::Div:
      case SOMParser::Mod:
      case SOMParser::Plus:
      case SOMParser::More:
      case SOMParser::Less:
      case SOMParser::At:
      case SOMParser::Per:
      case SOMParser::OperatorSequence:
      case SOMParser::Keyword:
      case SOMParser::KeywordSequence: {
        setState(330);
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

//----------------- LiteralStringContext ------------------------------------------------------------------

SOMParser::LiteralStringContext::LiteralStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SOMParser::StringContext* SOMParser::LiteralStringContext::string() {
  return getRuleContext<SOMParser::StringContext>(0);
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
  enterRule(_localctx, 84, SOMParser::RuleLiteralString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    string();
   
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
  enterRule(_localctx, 86, SOMParser::RuleSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(338);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SOMParser::Equal:
      case SOMParser::Or:
      case SOMParser::Comma:
      case SOMParser::Minus:
      case SOMParser::Not:
      case SOMParser::And:
      case SOMParser::Star:
      case SOMParser::Div:
      case SOMParser::Mod:
      case SOMParser::Plus:
      case SOMParser::More:
      case SOMParser::Less:
      case SOMParser::At:
      case SOMParser::Per:
      case SOMParser::OperatorSequence: {
        enterOuterAlt(_localctx, 1);
        setState(335);
        binarySelector();
        break;
      }

      case SOMParser::Keyword:
      case SOMParser::KeywordSequence: {
        enterOuterAlt(_localctx, 2);
        setState(336);
        keywordSelector();
        break;
      }

      case SOMParser::Primitive:
      case SOMParser::Identifier: {
        enterOuterAlt(_localctx, 3);
        setState(337);
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

tree::TerminalNode* SOMParser::KeywordSelectorContext::Keyword() {
  return getToken(SOMParser::Keyword, 0);
}

tree::TerminalNode* SOMParser::KeywordSelectorContext::KeywordSequence() {
  return getToken(SOMParser::KeywordSequence, 0);
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
  enterRule(_localctx, 88, SOMParser::RuleKeywordSelector);
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
    setState(340);
    _la = _input->LA(1);
    if (!(_la == SOMParser::Keyword

    || _la == SOMParser::KeywordSequence)) {
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

//----------------- StringContext ------------------------------------------------------------------

SOMParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SOMParser::StringContext::STString() {
  return getToken(SOMParser::STString, 0);
}


size_t SOMParser::StringContext::getRuleIndex() const {
  return SOMParser::RuleString;
}


antlrcpp::Any SOMParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::StringContext* SOMParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 90, SOMParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(SOMParser::STString);
   
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

tree::TerminalNode* SOMParser::NestedBlockContext::NewBlock() {
  return getToken(SOMParser::NewBlock, 0);
}

tree::TerminalNode* SOMParser::NestedBlockContext::EndBlock() {
  return getToken(SOMParser::EndBlock, 0);
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
  enterRule(_localctx, 92, SOMParser::RuleNestedBlock);
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
    setState(344);
    match(SOMParser::NewBlock);
    setState(346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SOMParser::Colon) {
      setState(345);
      blockPattern();
    }
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SOMParser::Primitive)
      | (1ULL << SOMParser::Identifier)
      | (1ULL << SOMParser::NewTerm)
      | (1ULL << SOMParser::Or)
      | (1ULL << SOMParser::Minus)
      | (1ULL << SOMParser::NewBlock)
      | (1ULL << SOMParser::Pound)
      | (1ULL << SOMParser::Exit)
      | (1ULL << SOMParser::Integer)
      | (1ULL << SOMParser::Double)
      | (1ULL << SOMParser::STString))) != 0)) {
      setState(348);
      blockContents();
    }
    setState(351);
    match(SOMParser::EndBlock);
   
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

SOMParser::BlockArgumentsContext* SOMParser::BlockPatternContext::blockArguments() {
  return getRuleContext<SOMParser::BlockArgumentsContext>(0);
}

tree::TerminalNode* SOMParser::BlockPatternContext::Or() {
  return getToken(SOMParser::Or, 0);
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
  enterRule(_localctx, 94, SOMParser::RuleBlockPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    blockArguments();
    setState(354);
    match(SOMParser::Or);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockArgumentsContext ------------------------------------------------------------------

SOMParser::BlockArgumentsContext::BlockArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SOMParser::BlockArgumentsContext::Colon() {
  return getTokens(SOMParser::Colon);
}

tree::TerminalNode* SOMParser::BlockArgumentsContext::Colon(size_t i) {
  return getToken(SOMParser::Colon, i);
}

std::vector<SOMParser::ArgumentContext *> SOMParser::BlockArgumentsContext::argument() {
  return getRuleContexts<SOMParser::ArgumentContext>();
}

SOMParser::ArgumentContext* SOMParser::BlockArgumentsContext::argument(size_t i) {
  return getRuleContext<SOMParser::ArgumentContext>(i);
}


size_t SOMParser::BlockArgumentsContext::getRuleIndex() const {
  return SOMParser::RuleBlockArguments;
}


antlrcpp::Any SOMParser::BlockArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SOMVisitor*>(visitor))
    return parserVisitor->visitBlockArguments(this);
  else
    return visitor->visitChildren(this);
}

SOMParser::BlockArgumentsContext* SOMParser::blockArguments() {
  BlockArgumentsContext *_localctx = _tracker.createInstance<BlockArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 96, SOMParser::RuleBlockArguments);
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
    setState(358); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(356);
      match(SOMParser::Colon);
      setState(357);
      argument();
      setState(360); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SOMParser::Colon);
   
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
  "classdef", "superclass", "instanceFields", "classFields", "classMethod", 
  "method", "pattern", "unaryPattern", "binaryPattern", "keywordPattern", 
  "methodBlock", "unarySelector", "binarySelector", "identifier", "keyword", 
  "argument", "blockContents", "localDefs", "blockBody", "result", "expression", 
  "assignation", "assignments", "assignment", "evaluation", "primary", "variable", 
  "messages", "unaryMessage", "binaryMessage", "binaryOperand", "keywordMessage", 
  "formula", "nestedTerm", "literal", "literalArray", "literalNumber", "literalDecimal", 
  "negativeDecimal", "literalInteger", "literalDouble", "literalSymbol", 
  "literalString", "selector", "keywordSelector", "string", "nestedBlock", 
  "blockPattern", "blockArguments"
};

std::vector<std::string> SOMParser::_literalNames = {
  "", "", "", "'primitive'", "", "'='", "", "'('", "')'", "'|'", "','", 
  "'-'", "'~'", "'&'", "'*'", "'/'", "'\\'", "'+'", "'>'", "'<'", "'@'", 
  "'%'", "", "':'", "'['", "']'", "'#'", "'^'", "'.'", "':='"
};

std::vector<std::string> SOMParser::_symbolicNames = {
  "", "Comment", "Whitespace", "Primitive", "Identifier", "Equal", "Separator", 
  "NewTerm", "EndTerm", "Or", "Comma", "Minus", "Not", "And", "Star", "Div", 
  "Mod", "Plus", "More", "Less", "At", "Per", "OperatorSequence", "Colon", 
  "NewBlock", "EndBlock", "Pound", "Exit", "Period", "Assign", "Integer", 
  "Double", "Keyword", "KeywordSequence", "STString"
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
    0x3, 0x24, 0x16d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x6a, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x6d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x72, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x75, 0xb, 0x2, 0x5, 
    0x2, 0x77, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x5, 0x3, 0x7c, 0xa, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x82, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x85, 0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x88, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x8c, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x8f, 
    0xb, 0x5, 0x3, 0x5, 0x5, 0x5, 0x92, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x9a, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x9f, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0xa9, 
    0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xaa, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xaf, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xc1, 0xa, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x7, 0x13, 0xc6, 0xa, 0x13, 0xc, 0x13, 0xe, 
    0x13, 0xc9, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0xd0, 0xa, 0x14, 0x5, 0x14, 0xd2, 0xa, 0x14, 0x5, 0x14, 
    0xd4, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xd8, 0xa, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0xdc, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x18, 0x6, 0x18, 0xe2, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0xe3, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0xeb, 
    0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0xf1, 
    0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x6, 0x1d, 0xf6, 0xa, 0x1d, 
    0xd, 0x1d, 0xe, 0x1d, 0xf7, 0x3, 0x1d, 0x7, 0x1d, 0xfb, 0xa, 0x1d, 0xc, 
    0x1d, 0xe, 0x1d, 0xfe, 0xb, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x101, 0xa, 
    0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x104, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 
    0x105, 0x3, 0x1d, 0x5, 0x1d, 0x109, 0xa, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x10c, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x115, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 
    0x118, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x6, 0x21, 0x11d, 
    0xa, 0x21, 0xd, 0x21, 0xe, 0x21, 0x11e, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x123, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x126, 0xb, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x5, 0x24, 0x130, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x7, 0x25, 0x135, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x138, 0xb, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x13e, 0xa, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x142, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x14e, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x155, 0xa, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x15d, 
    0xa, 0x30, 0x3, 0x30, 0x5, 0x30, 0x160, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 0x169, 
    0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x16a, 0x3, 0x32, 0x2, 0x2, 0x33, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
    0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x2, 
    0x5, 0x4, 0x2, 0x7, 0x7, 0xb, 0x18, 0x3, 0x2, 0x5, 0x6, 0x3, 0x2, 0x22, 
    0x23, 0x2, 0x16a, 0x2, 0x64, 0x3, 0x2, 0x2, 0x2, 0x4, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x93, 0x3, 0x2, 0x2, 0x2, 0xc, 0x95, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x16, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xba, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x26, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x30, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x34, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x38, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x40, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x127, 0x3, 0x2, 0x2, 0x2, 0x46, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x131, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x141, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x146, 0x3, 0x2, 0x2, 0x2, 0x52, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x154, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x156, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x158, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x60, 0x163, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x168, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x6, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x7, 0x2, 0x2, 0x66, 0x67, 0x5, 0x4, 0x3, 
    0x2, 0x67, 0x6b, 0x5, 0x6, 0x4, 0x2, 0x68, 0x6a, 0x5, 0xc, 0x7, 0x2, 
    0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 
    0x8, 0x2, 0x2, 0x6f, 0x73, 0x5, 0x8, 0x5, 0x2, 0x70, 0x72, 0x5, 0xa, 
    0x6, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0xa, 0x2, 0x2, 0x79, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7c, 0x7, 0x6, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x7, 0x9, 0x2, 0x2, 0x7e, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x83, 0x7, 0xb, 0x2, 0x2, 0x80, 0x82, 0x5, 0x36, 0x1c, 0x2, 0x81, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x88, 0x7, 0xb, 
    0x2, 0x2, 0x87, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x7, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8d, 0x7, 0xb, 0x2, 0x2, 
    0x8a, 0x8c, 0x5, 0x36, 0x1c, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x92, 0x7, 0xb, 0x2, 0x2, 0x91, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x5, 0xc, 0x7, 0x2, 0x94, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x96, 0x5, 0xe, 0x8, 0x2, 0x96, 0x99, 0x7, 0x7, 0x2, 0x2, 0x97, 
    0x9a, 0x7, 0x5, 0x2, 0x2, 0x98, 0x9a, 0x5, 0x16, 0xc, 0x2, 0x99, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9f, 0x5, 0x10, 0x9, 0x2, 0x9c, 0x9f, 0x5, 0x14, 
    0xb, 0x2, 0x9d, 0x9f, 0x5, 0x12, 0xa, 0x2, 0x9e, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x18, 0xd, 0x2, 0xa1, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x1a, 0xe, 0x2, 0xa3, 0xa4, 
    0x5, 0x20, 0x11, 0x2, 0xa4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x5, 
    0x1e, 0x10, 0x2, 0xa6, 0xa7, 0x5, 0x20, 0x11, 0x2, 0xa7, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0x15, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x7, 0x9, 0x2, 0x2, 
    0xad, 0xaf, 0x5, 0x22, 0x12, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 
    0x7, 0xa, 0x2, 0x2, 0xb1, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 
    0x1c, 0xf, 0x2, 0xb3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x9, 0x2, 
    0x2, 0x2, 0xb5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x9, 0x3, 0x2, 
    0x2, 0xb7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x22, 0x2, 0x2, 
    0xb9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x36, 0x1c, 0x2, 0xbb, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0xb, 0x2, 0x2, 0xbd, 0xbe, 
    0x5, 0x24, 0x13, 0x2, 0xbe, 0xbf, 0x7, 0xb, 0x2, 0x2, 0xbf, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x26, 0x14, 
    0x2, 0xc3, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0x5, 0x36, 0x1c, 0x2, 
    0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 
    0x1d, 0x2, 0x2, 0xcb, 0xd4, 0x5, 0x28, 0x15, 0x2, 0xcc, 0xd1, 0x5, 0x2a, 
    0x16, 0x2, 0xcd, 0xcf, 0x7, 0x1e, 0x2, 0x2, 0xce, 0xd0, 0x5, 0x26, 0x14, 
    0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x2a, 0x16, 0x2, 0xd6, 0xd8, 0x7, 0x1e, 
    0x2, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x5, 0x2c, 0x17, 0x2, 
    0xda, 0xdc, 0x5, 0x32, 0x1a, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 
    0x5, 0x2e, 0x18, 0x2, 0xde, 0xdf, 0x5, 0x32, 0x1a, 0x2, 0xdf, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x5, 0x30, 0x19, 0x2, 0xe1, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe6, 0x5, 0x36, 0x1c, 0x2, 0xe6, 0xe7, 0x7, 0x1f, 0x2, 0x2, 
    0xe7, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x5, 0x34, 0x1b, 0x2, 0xe9, 
    0xeb, 0x5, 0x38, 0x1d, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0x33, 0x3, 0x2, 0x2, 0x2, 0xec, 0xf1, 0x5, 
    0x36, 0x1c, 0x2, 0xed, 0xf1, 0x5, 0x44, 0x23, 0x2, 0xee, 0xf1, 0x5, 
    0x5e, 0x30, 0x2, 0xef, 0xf1, 0x5, 0x46, 0x24, 0x2, 0xf0, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x5, 0x1c, 0xf, 0x2, 0xf3, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf6, 0x5, 0x3a, 0x1e, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfb, 0x5, 
    0x3c, 0x1f, 0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x101, 0x5, 0x40, 0x21, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x104, 0x5, 0x3c, 0x1f, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x109, 0x5, 0x40, 0x21, 0x2, 0x108, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10c, 0x5, 0x40, 0x21, 0x2, 0x10b, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x103, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x18, 0xd, 0x2, 
    0x10e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x1a, 0xe, 0x2, 
    0x110, 0x111, 0x5, 0x3e, 0x20, 0x2, 0x111, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x116, 0x5, 0x34, 0x1b, 0x2, 0x113, 0x115, 0x5, 0x3a, 0x1e, 0x2, 
    0x114, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x11a, 0x5, 0x1e, 0x10, 0x2, 0x11a, 0x11b, 0x5, 0x42, 0x22, 0x2, 0x11b, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x41, 0x3, 0x2, 0x2, 0x2, 0x120, 0x124, 
    0x5, 0x3e, 0x20, 0x2, 0x121, 0x123, 0x5, 0x3c, 0x1f, 0x2, 0x122, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 
    0x9, 0x2, 0x2, 0x128, 0x129, 0x5, 0x2a, 0x16, 0x2, 0x129, 0x12a, 0x7, 
    0xa, 0x2, 0x2, 0x12a, 0x45, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x130, 0x5, 0x48, 
    0x25, 0x2, 0x12c, 0x130, 0x5, 0x54, 0x2b, 0x2, 0x12d, 0x130, 0x5, 0x56, 
    0x2c, 0x2, 0x12e, 0x130, 0x5, 0x4a, 0x26, 0x2, 0x12f, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x132, 0x7, 0x1c, 0x2, 0x2, 0x132, 0x136, 0x7, 0x9, 0x2, 
    0x2, 0x133, 0x135, 0x5, 0x46, 0x24, 0x2, 0x134, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x138, 0x3, 0x2, 0x2, 0x2, 0x136, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0xa, 0x2, 
    0x2, 0x13a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13e, 0x5, 0x4e, 0x28, 
    0x2, 0x13c, 0x13e, 0x5, 0x4c, 0x27, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x142, 0x5, 0x50, 0x29, 0x2, 0x140, 0x142, 0x5, 0x52, 0x2a, 0x2, 
    0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0xd, 0x2, 0x2, 0x144, 
    0x145, 0x5, 0x4c, 0x27, 0x2, 0x145, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x147, 0x7, 0x20, 0x2, 0x2, 0x147, 0x51, 0x3, 0x2, 0x2, 0x2, 0x148, 
    0x149, 0x7, 0x21, 0x2, 0x2, 0x149, 0x53, 0x3, 0x2, 0x2, 0x2, 0x14a, 
    0x14d, 0x7, 0x1c, 0x2, 0x2, 0x14b, 0x14e, 0x5, 0x5c, 0x2f, 0x2, 0x14c, 
    0x14e, 0x5, 0x58, 0x2d, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x55, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 
    0x5, 0x5c, 0x2f, 0x2, 0x150, 0x57, 0x3, 0x2, 0x2, 0x2, 0x151, 0x155, 
    0x5, 0x1a, 0xe, 0x2, 0x152, 0x155, 0x5, 0x5a, 0x2e, 0x2, 0x153, 0x155, 
    0x5, 0x18, 0xd, 0x2, 0x154, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x9, 0x4, 0x2, 0x2, 0x157, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x159, 0x7, 0x24, 0x2, 0x2, 0x159, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15c, 0x7, 0x1a, 0x2, 0x2, 0x15b, 0x15d, 0x5, 0x60, 
    0x31, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 0x5, 0x22, 
    0x12, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x1b, 
    0x2, 0x2, 0x162, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x5, 0x62, 
    0x32, 0x2, 0x164, 0x165, 0x7, 0xb, 0x2, 0x2, 0x165, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x167, 0x7, 0x19, 0x2, 0x2, 0x167, 0x169, 0x5, 0x20, 
    0x11, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x63, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x6b, 0x73, 0x76, 0x7b, 
    0x83, 0x87, 0x8d, 0x91, 0x99, 0x9e, 0xaa, 0xae, 0xc0, 0xc7, 0xcf, 0xd1, 
    0xd3, 0xd7, 0xdb, 0xe3, 0xea, 0xf0, 0xf7, 0xfc, 0x100, 0x105, 0x108, 
    0x10b, 0x116, 0x11e, 0x124, 0x12f, 0x136, 0x13d, 0x141, 0x14d, 0x154, 
    0x15c, 0x15f, 0x16a, 
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
