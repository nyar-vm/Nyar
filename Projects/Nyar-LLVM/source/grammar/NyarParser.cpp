
// Generated from Projects/Antlr4/Nyar.g4 by ANTLR 4.7.2


#include "NyarListener.h"
#include "NyarVisitor.h"

#include "NyarParser.h"


using namespace antlrcpp;
using namespace antlr4;

NyarParser::NyarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NyarParser::~NyarParser() {
  delete _interpreter;
}

std::string NyarParser::getGrammarFileName() const {
  return "Nyar.g4";
}

const std::vector<std::string>& NyarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NyarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

NyarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ProgramContext::EOF() {
  return getToken(NyarParser::EOF, 0);
}

std::vector<NyarParser::StatementContext *> NyarParser::ProgramContext::statement() {
  return getRuleContexts<NyarParser::StatementContext>();
}

NyarParser::StatementContext* NyarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<NyarParser::StatementContext>(i);
}


size_t NyarParser::ProgramContext::getRuleIndex() const {
  return NyarParser::RuleProgram;
}

void NyarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void NyarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any NyarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ProgramContext* NyarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, NyarParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::Using)
      | (1ULL << NyarParser::Class)
      | (1ULL << NyarParser::Final)
      | (1ULL << NyarParser::Let)
      | (1ULL << NyarParser::Type)
      | (1ULL << NyarParser::If)
      | (1ULL << NyarParser::Match)
      | (1ULL << NyarParser::Switch)
      | (1ULL << NyarParser::For)
      | (1ULL << NyarParser::Try)
      | (1ULL << NyarParser::While)
      | (1ULL << NyarParser::Do)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::Identifier)
      | (1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::LS)
      | (1ULL << NyarParser::LM)
      | (1ULL << NyarParser::LL))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
      | (1ULL << (NyarParser::Plus - 68))
      | (1ULL << (NyarParser::Minus - 68))
      | (1ULL << (NyarParser::BitNot - 68))
      | (1ULL << (NyarParser::LogicNot - 68))
      | (1ULL << (NyarParser::Colon - 68))
      | (1ULL << (NyarParser::Semicolon - 68))
      | (1ULL << (NyarParser::Reciprocal - 68)))) != 0)) {
      setState(86);
      statement();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
    match(NyarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

NyarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::Empty_statementContext* NyarParser::StatementContext::empty_statement() {
  return getRuleContext<NyarParser::Empty_statementContext>(0);
}

NyarParser::Block_statementContext* NyarParser::StatementContext::block_statement() {
  return getRuleContext<NyarParser::Block_statementContext>(0);
}

NyarParser::EosContext* NyarParser::StatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}

NyarParser::Expression_statementContext* NyarParser::StatementContext::expression_statement() {
  return getRuleContext<NyarParser::Expression_statementContext>(0);
}

NyarParser::Assign_statementContext* NyarParser::StatementContext::assign_statement() {
  return getRuleContext<NyarParser::Assign_statementContext>(0);
}

NyarParser::Branch_statementContext* NyarParser::StatementContext::branch_statement() {
  return getRuleContext<NyarParser::Branch_statementContext>(0);
}

NyarParser::Try_statementContext* NyarParser::StatementContext::try_statement() {
  return getRuleContext<NyarParser::Try_statementContext>(0);
}

NyarParser::Module_statementContext* NyarParser::StatementContext::module_statement() {
  return getRuleContext<NyarParser::Module_statementContext>(0);
}

NyarParser::Class_statementContext* NyarParser::StatementContext::class_statement() {
  return getRuleContext<NyarParser::Class_statementContext>(0);
}

NyarParser::Loop_statementContext* NyarParser::StatementContext::loop_statement() {
  return getRuleContext<NyarParser::Loop_statementContext>(0);
}


size_t NyarParser::StatementContext::getRuleIndex() const {
  return NyarParser::RuleStatement;
}

void NyarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void NyarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any NyarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::StatementContext* NyarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, NyarParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      empty_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      block_statement();
      setState(97);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(96);
        eos();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(99);
      expression_statement();
      setState(101);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(100);
        eos();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(103);
      assign_statement();
      setState(105);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(104);
        eos();
        break;
      }

      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(107);
      branch_statement();
      setState(109);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(108);
        eos();
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(111);
      try_statement();
      setState(113);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(112);
        eos();
        break;
      }

      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(115);
      module_statement();
      setState(117);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(116);
        eos();
        break;
      }

      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(119);
      class_statement();
      setState(121);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(120);
        eos();
        break;
      }

      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(123);
      loop_statement();
      setState(125);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(124);
        eos();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Block_statementContext ------------------------------------------------------------------

NyarParser::Block_statementContext::Block_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Block_statementContext::getRuleIndex() const {
  return NyarParser::RuleBlock_statement;
}

void NyarParser::Block_statementContext::copyFrom(Block_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlockStatementContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::BlockStatementContext::LL() {
  return getToken(NyarParser::LL, 0);
}

tree::TerminalNode* NyarParser::BlockStatementContext::RL() {
  return getToken(NyarParser::RL, 0);
}

std::vector<NyarParser::StatementContext *> NyarParser::BlockStatementContext::statement() {
  return getRuleContexts<NyarParser::StatementContext>();
}

NyarParser::StatementContext* NyarParser::BlockStatementContext::statement(size_t i) {
  return getRuleContext<NyarParser::StatementContext>(i);
}

tree::TerminalNode* NyarParser::BlockStatementContext::Colon() {
  return getToken(NyarParser::Colon, 0);
}

tree::TerminalNode* NyarParser::BlockStatementContext::End() {
  return getToken(NyarParser::End, 0);
}

NyarParser::BlockStatementContext::BlockStatementContext(Block_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}
void NyarParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}

antlrcpp::Any NyarParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Block_statementContext* NyarParser::block_statement() {
  Block_statementContext *_localctx = _tracker.createInstance<Block_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, NyarParser::RuleBlock_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::LL: {
        _localctx = dynamic_cast<Block_statementContext *>(_tracker.createInstance<NyarParser::BlockStatementContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(129);
        match(NyarParser::LL);
        setState(131); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(130);
          statement();
          setState(133); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << NyarParser::Using)
          | (1ULL << NyarParser::Class)
          | (1ULL << NyarParser::Final)
          | (1ULL << NyarParser::Let)
          | (1ULL << NyarParser::Type)
          | (1ULL << NyarParser::If)
          | (1ULL << NyarParser::Match)
          | (1ULL << NyarParser::Switch)
          | (1ULL << NyarParser::For)
          | (1ULL << NyarParser::Try)
          | (1ULL << NyarParser::While)
          | (1ULL << NyarParser::Do)
          | (1ULL << NyarParser::STRING)
          | (1ULL << NyarParser::Identifier)
          | (1ULL << NyarParser::NUMBER)
          | (1ULL << NyarParser::LS)
          | (1ULL << NyarParser::LM)
          | (1ULL << NyarParser::LL))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
          | (1ULL << (NyarParser::Plus - 68))
          | (1ULL << (NyarParser::Minus - 68))
          | (1ULL << (NyarParser::BitNot - 68))
          | (1ULL << (NyarParser::LogicNot - 68))
          | (1ULL << (NyarParser::Colon - 68))
          | (1ULL << (NyarParser::Semicolon - 68))
          | (1ULL << (NyarParser::Reciprocal - 68)))) != 0));
        setState(135);
        match(NyarParser::RL);
        break;
      }

      case NyarParser::Colon: {
        _localctx = dynamic_cast<Block_statementContext *>(_tracker.createInstance<NyarParser::BlockStatementContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(137);
        match(NyarParser::Colon);
        setState(139); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(138);
          statement();
          setState(141); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << NyarParser::Using)
          | (1ULL << NyarParser::Class)
          | (1ULL << NyarParser::Final)
          | (1ULL << NyarParser::Let)
          | (1ULL << NyarParser::Type)
          | (1ULL << NyarParser::If)
          | (1ULL << NyarParser::Match)
          | (1ULL << NyarParser::Switch)
          | (1ULL << NyarParser::For)
          | (1ULL << NyarParser::Try)
          | (1ULL << NyarParser::While)
          | (1ULL << NyarParser::Do)
          | (1ULL << NyarParser::STRING)
          | (1ULL << NyarParser::Identifier)
          | (1ULL << NyarParser::NUMBER)
          | (1ULL << NyarParser::LS)
          | (1ULL << NyarParser::LM)
          | (1ULL << NyarParser::LL))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
          | (1ULL << (NyarParser::Plus - 68))
          | (1ULL << (NyarParser::Minus - 68))
          | (1ULL << (NyarParser::BitNot - 68))
          | (1ULL << (NyarParser::LogicNot - 68))
          | (1ULL << (NyarParser::Colon - 68))
          | (1ULL << (NyarParser::Semicolon - 68))
          | (1ULL << (NyarParser::Reciprocal - 68)))) != 0));
        setState(143);
        match(NyarParser::End);
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

//----------------- Expr_or_blockContext ------------------------------------------------------------------

NyarParser::Expr_or_blockContext::Expr_or_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::Block_statementContext* NyarParser::Expr_or_blockContext::block_statement() {
  return getRuleContext<NyarParser::Block_statementContext>(0);
}

NyarParser::ExpressionContext* NyarParser::Expr_or_blockContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}


size_t NyarParser::Expr_or_blockContext::getRuleIndex() const {
  return NyarParser::RuleExpr_or_block;
}

void NyarParser::Expr_or_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_or_block(this);
}

void NyarParser::Expr_or_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_or_block(this);
}


antlrcpp::Any NyarParser::Expr_or_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitExpr_or_block(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Expr_or_blockContext* NyarParser::expr_or_block() {
  Expr_or_blockContext *_localctx = _tracker.createInstance<Expr_or_blockContext>(_ctx, getState());
  enterRule(_localctx, 6, NyarParser::RuleExpr_or_block);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(147);
      block_statement();
      break;
    }

    case 2: {
      setState(148);
      expression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_statementContext ------------------------------------------------------------------

NyarParser::Empty_statementContext::Empty_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Empty_statementContext::getRuleIndex() const {
  return NyarParser::RuleEmpty_statement;
}

void NyarParser::Empty_statementContext::copyFrom(Empty_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

NyarParser::EosContext* NyarParser::EmptyStatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}

NyarParser::EmptyStatementContext::EmptyStatementContext(Empty_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}
void NyarParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}

antlrcpp::Any NyarParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Empty_statementContext* NyarParser::empty_statement() {
  Empty_statementContext *_localctx = _tracker.createInstance<Empty_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, NyarParser::RuleEmpty_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Empty_statementContext *>(_tracker.createInstance<NyarParser::EmptyStatementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(151);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

NyarParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::EosContext::Semicolon() {
  return getToken(NyarParser::Semicolon, 0);
}


size_t NyarParser::EosContext::getRuleIndex() const {
  return NyarParser::RuleEos;
}

void NyarParser::EosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEos(this);
}

void NyarParser::EosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEos(this);
}


antlrcpp::Any NyarParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::EosContext* NyarParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 10, NyarParser::RuleEos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(NyarParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SymbolContext ------------------------------------------------------------------

NyarParser::SymbolContext::SymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NyarParser::SymbolContext::Identifier() {
  return getTokens(NyarParser::Identifier);
}

tree::TerminalNode* NyarParser::SymbolContext::Identifier(size_t i) {
  return getToken(NyarParser::Identifier, i);
}

std::vector<tree::TerminalNode *> NyarParser::SymbolContext::DOT() {
  return getTokens(NyarParser::DOT);
}

tree::TerminalNode* NyarParser::SymbolContext::DOT(size_t i) {
  return getToken(NyarParser::DOT, i);
}


size_t NyarParser::SymbolContext::getRuleIndex() const {
  return NyarParser::RuleSymbol;
}

void NyarParser::SymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbol(this);
}

void NyarParser::SymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbol(this);
}


antlrcpp::Any NyarParser::SymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitSymbol(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::SymbolContext* NyarParser::symbol() {
  SymbolContext *_localctx = _tracker.createInstance<SymbolContext>(_ctx, getState());
  enterRule(_localctx, 12, NyarParser::RuleSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(NyarParser::Identifier);
    setState(160);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(156);
        match(NyarParser::DOT);
        setState(157);
        match(NyarParser::Identifier); 
      }
      setState(162);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalContext ------------------------------------------------------------------

NyarParser::GlobalContext::GlobalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::GlobalContext::Section() {
  return getToken(NyarParser::Section, 0);
}

std::vector<tree::TerminalNode *> NyarParser::GlobalContext::Identifier() {
  return getTokens(NyarParser::Identifier);
}

tree::TerminalNode* NyarParser::GlobalContext::Identifier(size_t i) {
  return getToken(NyarParser::Identifier, i);
}

std::vector<tree::TerminalNode *> NyarParser::GlobalContext::DOT() {
  return getTokens(NyarParser::DOT);
}

tree::TerminalNode* NyarParser::GlobalContext::DOT(size_t i) {
  return getToken(NyarParser::DOT, i);
}


size_t NyarParser::GlobalContext::getRuleIndex() const {
  return NyarParser::RuleGlobal;
}

void NyarParser::GlobalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal(this);
}

void NyarParser::GlobalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal(this);
}


antlrcpp::Any NyarParser::GlobalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitGlobal(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::GlobalContext* NyarParser::global() {
  GlobalContext *_localctx = _tracker.createInstance<GlobalContext>(_ctx, getState());
  enterRule(_localctx, 14, NyarParser::RuleGlobal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(NyarParser::Section);
    setState(164);
    match(NyarParser::Identifier);
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::DOT) {
      setState(165);
      match(NyarParser::DOT);
      setState(166);
      match(NyarParser::Identifier);
      setState(171);
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

//----------------- Expression_statementContext ------------------------------------------------------------------

NyarParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Expression_statementContext::getRuleIndex() const {
  return NyarParser::RuleExpression_statement;
}

void NyarParser::Expression_statementContext::copyFrom(Expression_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::ExpressionStatementContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::ExpressionStatementContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::ExpressionStatementContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::ExpressionStatementContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}

NyarParser::ExpressionStatementContext::ExpressionStatementContext(Expression_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}
void NyarParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

antlrcpp::Any NyarParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Expression_statementContext* NyarParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, NyarParser::RuleExpression_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Expression_statementContext *>(_tracker.createInstance<NyarParser::ExpressionStatementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(172);
    expression(0);
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(173);
      match(NyarParser::COMMA);
      setState(174);
      expression(0);
      setState(179);
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

//----------------- Type_statementContext ------------------------------------------------------------------

NyarParser::Type_statementContext::Type_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Type_statementContext::getRuleIndex() const {
  return NyarParser::RuleType_statement;
}

void NyarParser::Type_statementContext::copyFrom(Type_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeAssignContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::TypeAssignContext::TypeAnnotation() {
  return getToken(NyarParser::TypeAnnotation, 0);
}

tree::TerminalNode* NyarParser::TypeAssignContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

NyarParser::ExpressionContext* NyarParser::TypeAssignContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::TypeAssignContext::Type() {
  return getToken(NyarParser::Type, 0);
}

NyarParser::TypeAssignContext::TypeAssignContext(Type_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::TypeAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAssign(this);
}
void NyarParser::TypeAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAssign(this);
}

antlrcpp::Any NyarParser::TypeAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTypeAssign(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Type_statementContext* NyarParser::type_statement() {
  Type_statementContext *_localctx = _tracker.createInstance<Type_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, NyarParser::RuleType_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::Identifier: {
        _localctx = dynamic_cast<Type_statementContext *>(_tracker.createInstance<NyarParser::TypeAssignContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(180);
        dynamic_cast<TypeAssignContext *>(_localctx)->left = match(NyarParser::Identifier);
        setState(181);
        match(NyarParser::TypeAnnotation);
        setState(182);
        dynamic_cast<TypeAssignContext *>(_localctx)->right = expression(0);
        break;
      }

      case NyarParser::Type: {
        _localctx = dynamic_cast<Type_statementContext *>(_tracker.createInstance<NyarParser::TypeAssignContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(183);
        match(NyarParser::Type);
        setState(184);
        dynamic_cast<TypeAssignContext *>(_localctx)->left = match(NyarParser::Identifier);
        setState(185);
        dynamic_cast<TypeAssignContext *>(_localctx)->right = expression(0);
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

//----------------- Function_applyContext ------------------------------------------------------------------

NyarParser::Function_applyContext::Function_applyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::SymbolContext* NyarParser::Function_applyContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::Function_applyContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::Function_applyContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::Function_paramsContext* NyarParser::Function_applyContext::function_params() {
  return getRuleContext<NyarParser::Function_paramsContext>(0);
}


size_t NyarParser::Function_applyContext::getRuleIndex() const {
  return NyarParser::RuleFunction_apply;
}

void NyarParser::Function_applyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_apply(this);
}

void NyarParser::Function_applyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_apply(this);
}


antlrcpp::Any NyarParser::Function_applyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitFunction_apply(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Function_applyContext* NyarParser::function_apply() {
  Function_applyContext *_localctx = _tracker.createInstance<Function_applyContext>(_ctx, getState());
  enterRule(_localctx, 20, NyarParser::RuleFunction_apply);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    symbol();
    setState(189);
    match(NyarParser::LS);
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::Type)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::Identifier)
      | (1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::LS)
      | (1ULL << NyarParser::LM)
      | (1ULL << NyarParser::LL))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
      | (1ULL << (NyarParser::Plus - 68))
      | (1ULL << (NyarParser::Minus - 68))
      | (1ULL << (NyarParser::BitNot - 68))
      | (1ULL << (NyarParser::LogicNot - 68))
      | (1ULL << (NyarParser::Reciprocal - 68)))) != 0)) {
      setState(190);
      function_params();
    }
    setState(193);
    match(NyarParser::RS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_paramsContext ------------------------------------------------------------------

NyarParser::Function_paramsContext::Function_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NyarParser::ExpressionContext *> NyarParser::Function_paramsContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Function_paramsContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::Function_paramsContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::Function_paramsContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::Function_paramsContext::getRuleIndex() const {
  return NyarParser::RuleFunction_params;
}

void NyarParser::Function_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_params(this);
}

void NyarParser::Function_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_params(this);
}


antlrcpp::Any NyarParser::Function_paramsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitFunction_params(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Function_paramsContext* NyarParser::function_params() {
  Function_paramsContext *_localctx = _tracker.createInstance<Function_paramsContext>(_ctx, getState());
  enterRule(_localctx, 22, NyarParser::RuleFunction_params);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    expression(0);
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(196);
      match(NyarParser::COMMA);
      setState(197);
      expression(0);
      setState(202);
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

//----------------- ExpressionContext ------------------------------------------------------------------

NyarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::ExpressionContext::getRuleIndex() const {
  return NyarParser::RuleExpression;
}

void NyarParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PriorityExpressionContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::PriorityExpressionContext::LS() {
  return getToken(NyarParser::LS, 0);
}

NyarParser::ExpressionContext* NyarParser::PriorityExpressionContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::PriorityExpressionContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::PriorityExpressionContext::PriorityExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::PriorityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPriorityExpression(this);
}
void NyarParser::PriorityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPriorityExpression(this);
}

antlrcpp::Any NyarParser::PriorityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPriorityExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionApplyContext ------------------------------------------------------------------

NyarParser::Function_applyContext* NyarParser::FunctionApplyContext::function_apply() {
  return getRuleContext<NyarParser::Function_applyContext>(0);
}

NyarParser::FunctionApplyContext::FunctionApplyContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::FunctionApplyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionApply(this);
}
void NyarParser::FunctionApplyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionApply(this);
}

antlrcpp::Any NyarParser::FunctionApplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitFunctionApply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexContext ------------------------------------------------------------------

NyarParser::ExpressionContext* NyarParser::IndexContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::IndexLiteralContext* NyarParser::IndexContext::indexLiteral() {
  return getRuleContext<NyarParser::IndexLiteralContext>(0);
}

NyarParser::IndexContext::IndexContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::IndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex(this);
}
void NyarParser::IndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex(this);
}

antlrcpp::Any NyarParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::StringContext::STRING() {
  return getToken(NyarParser::STRING, 0);
}

NyarParser::StringContext::StringContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void NyarParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

antlrcpp::Any NyarParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::BinaryLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::BinaryLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::BinaryLikeContext::LeftShift() {
  return getToken(NyarParser::LeftShift, 0);
}

tree::TerminalNode* NyarParser::BinaryLikeContext::RightShift() {
  return getToken(NyarParser::RightShift, 0);
}

NyarParser::BinaryLikeContext::BinaryLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::BinaryLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryLike(this);
}
void NyarParser::BinaryLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryLike(this);
}

antlrcpp::Any NyarParser::BinaryLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitBinaryLike(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::LogicLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::LogicLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::LogicLikeContext::Equal() {
  return getToken(NyarParser::Equal, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::NotEqual() {
  return getToken(NyarParser::NotEqual, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::Equivalent() {
  return getToken(NyarParser::Equivalent, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::NotEquivalent() {
  return getToken(NyarParser::NotEquivalent, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::Grater() {
  return getToken(NyarParser::Grater, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::GraterEqual() {
  return getToken(NyarParser::GraterEqual, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::Less() {
  return getToken(NyarParser::Less, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::LessEqual() {
  return getToken(NyarParser::LessEqual, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::LogicAnd() {
  return getToken(NyarParser::LogicAnd, 0);
}

tree::TerminalNode* NyarParser::LogicLikeContext::LogicOr() {
  return getToken(NyarParser::LogicOr, 0);
}

NyarParser::LogicLikeContext::LogicLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::LogicLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicLike(this);
}
void NyarParser::LogicLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicLike(this);
}

antlrcpp::Any NyarParser::LogicLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitLogicLike(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MethodApplyContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::MethodApplyContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::MethodApplyContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::MethodApplyContext::DOT() {
  return getToken(NyarParser::DOT, 0);
}

NyarParser::MethodApplyContext::MethodApplyContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::MethodApplyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodApply(this);
}
void NyarParser::MethodApplyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodApply(this);
}

antlrcpp::Any NyarParser::MethodApplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMethodApply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::CompareLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::CompareLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::CompareLikeContext::Equal() {
  return getToken(NyarParser::Equal, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::NotEqual() {
  return getToken(NyarParser::NotEqual, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::Equivalent() {
  return getToken(NyarParser::Equivalent, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::NotEquivalent() {
  return getToken(NyarParser::NotEquivalent, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::Grater() {
  return getToken(NyarParser::Grater, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::GraterEqual() {
  return getToken(NyarParser::GraterEqual, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::Less() {
  return getToken(NyarParser::Less, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::LessEqual() {
  return getToken(NyarParser::LessEqual, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::LogicAnd() {
  return getToken(NyarParser::LogicAnd, 0);
}

tree::TerminalNode* NyarParser::CompareLikeContext::LogicOr() {
  return getToken(NyarParser::LogicOr, 0);
}

NyarParser::CompareLikeContext::CompareLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::CompareLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareLike(this);
}
void NyarParser::CompareLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareLike(this);
}

antlrcpp::Any NyarParser::CompareLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitCompareLike(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::PlusLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::PlusLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::PlusLikeContext::Plus() {
  return getToken(NyarParser::Plus, 0);
}

tree::TerminalNode* NyarParser::PlusLikeContext::Minus() {
  return getToken(NyarParser::Minus, 0);
}

NyarParser::PlusLikeContext::PlusLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::PlusLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusLike(this);
}
void NyarParser::PlusLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusLike(this);
}

antlrcpp::Any NyarParser::PlusLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPlusLike(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LazyAssignContext ------------------------------------------------------------------

NyarParser::Function_applyContext* NyarParser::LazyAssignContext::function_apply() {
  return getRuleContext<NyarParser::Function_applyContext>(0);
}

tree::TerminalNode* NyarParser::LazyAssignContext::DelayedAssign() {
  return getToken(NyarParser::DelayedAssign, 0);
}

NyarParser::AssignableContext* NyarParser::LazyAssignContext::assignable() {
  return getRuleContext<NyarParser::AssignableContext>(0);
}

NyarParser::LazyAssignContext::LazyAssignContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::LazyAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLazyAssign(this);
}
void NyarParser::LazyAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLazyAssign(this);
}

antlrcpp::Any NyarParser::LazyAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitLazyAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::PowerLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::PowerLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::PowerLikeContext::Power() {
  return getToken(NyarParser::Power, 0);
}

tree::TerminalNode* NyarParser::PowerLikeContext::Surd() {
  return getToken(NyarParser::Surd, 0);
}

NyarParser::PowerLikeContext::PowerLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::PowerLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerLike(this);
}
void NyarParser::PowerLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerLike(this);
}

antlrcpp::Any NyarParser::PowerLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPowerLike(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeStatementContext ------------------------------------------------------------------

NyarParser::Type_statementContext* NyarParser::TypeStatementContext::type_statement() {
  return getRuleContext<NyarParser::Type_statementContext>(0);
}

NyarParser::TypeStatementContext::TypeStatementContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::TypeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeStatement(this);
}
void NyarParser::TypeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeStatement(this);
}

antlrcpp::Any NyarParser::TypeStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTypeStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::NumberContext::NUMBER() {
  return getToken(NyarParser::NUMBER, 0);
}

NyarParser::NumberContext::NumberContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}
void NyarParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

antlrcpp::Any NyarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperatorAssignContext ------------------------------------------------------------------

NyarParser::Assign_lhsContext* NyarParser::OperatorAssignContext::assign_lhs() {
  return getRuleContext<NyarParser::Assign_lhsContext>(0);
}

NyarParser::AssignableContext* NyarParser::OperatorAssignContext::assignable() {
  return getRuleContext<NyarParser::AssignableContext>(0);
}

tree::TerminalNode* NyarParser::OperatorAssignContext::Assign() {
  return getToken(NyarParser::Assign, 0);
}

tree::TerminalNode* NyarParser::OperatorAssignContext::PlusTo() {
  return getToken(NyarParser::PlusTo, 0);
}

tree::TerminalNode* NyarParser::OperatorAssignContext::MinusFrom() {
  return getToken(NyarParser::MinusFrom, 0);
}

tree::TerminalNode* NyarParser::OperatorAssignContext::LetAssign() {
  return getToken(NyarParser::LetAssign, 0);
}

tree::TerminalNode* NyarParser::OperatorAssignContext::FinalAssign() {
  return getToken(NyarParser::FinalAssign, 0);
}

NyarParser::OperatorAssignContext::OperatorAssignContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::OperatorAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorAssign(this);
}
void NyarParser::OperatorAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorAssign(this);
}

antlrcpp::Any NyarParser::OperatorAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitOperatorAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DictContext ------------------------------------------------------------------

NyarParser::DictLiteralContext* NyarParser::DictContext::dictLiteral() {
  return getRuleContext<NyarParser::DictLiteralContext>(0);
}

NyarParser::DictContext::DictContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::DictContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDict(this);
}
void NyarParser::DictContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDict(this);
}

antlrcpp::Any NyarParser::DictContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitDict(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrefixExpressionContext ------------------------------------------------------------------

NyarParser::ExpressionContext* NyarParser::PrefixExpressionContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::Plus() {
  return getToken(NyarParser::Plus, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::Minus() {
  return getToken(NyarParser::Minus, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::BitNot() {
  return getToken(NyarParser::BitNot, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::LogicNot() {
  return getToken(NyarParser::LogicNot, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::Reciprocal() {
  return getToken(NyarParser::Reciprocal, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::Increase() {
  return getToken(NyarParser::Increase, 0);
}

NyarParser::PrefixExpressionContext::PrefixExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::PrefixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixExpression(this);
}
void NyarParser::PrefixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixExpression(this);
}

antlrcpp::Any NyarParser::PrefixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPrefixExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SymbolExpressionContext ------------------------------------------------------------------

NyarParser::SymbolContext* NyarParser::SymbolExpressionContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

NyarParser::SymbolExpressionContext::SymbolExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::SymbolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbolExpression(this);
}
void NyarParser::SymbolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbolExpression(this);
}

antlrcpp::Any NyarParser::SymbolExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitSymbolExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListContext ------------------------------------------------------------------

NyarParser::ListLiteralContext* NyarParser::ListContext::listLiteral() {
  return getRuleContext<NyarParser::ListLiteralContext>(0);
}

NyarParser::ListContext::ListContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}
void NyarParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

antlrcpp::Any NyarParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostfixExpressionContext ------------------------------------------------------------------

NyarParser::ExpressionContext* NyarParser::PostfixExpressionContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::Pst_opsContext* NyarParser::PostfixExpressionContext::pst_ops() {
  return getRuleContext<NyarParser::Pst_opsContext>(0);
}

NyarParser::PostfixExpressionContext::PostfixExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}
void NyarParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}

antlrcpp::Any NyarParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::MultiplyLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::MultiplyLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::MultiplyLikeContext::Divide() {
  return getToken(NyarParser::Divide, 0);
}

tree::TerminalNode* NyarParser::MultiplyLikeContext::Times() {
  return getToken(NyarParser::Times, 0);
}

tree::TerminalNode* NyarParser::MultiplyLikeContext::Multiply() {
  return getToken(NyarParser::Multiply, 0);
}

tree::TerminalNode* NyarParser::MultiplyLikeContext::Kronecker() {
  return getToken(NyarParser::Kronecker, 0);
}

tree::TerminalNode* NyarParser::MultiplyLikeContext::TensorProduct() {
  return getToken(NyarParser::TensorProduct, 0);
}

NyarParser::MultiplyLikeContext::MultiplyLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::MultiplyLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyLike(this);
}
void NyarParser::MultiplyLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyLike(this);
}

antlrcpp::Any NyarParser::MultiplyLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMultiplyLike(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListLikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::ListLikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::ListLikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::ListLikeContext::Concat() {
  return getToken(NyarParser::Concat, 0);
}

tree::TerminalNode* NyarParser::ListLikeContext::LeftShift() {
  return getToken(NyarParser::LeftShift, 0);
}

tree::TerminalNode* NyarParser::ListLikeContext::RightShift() {
  return getToken(NyarParser::RightShift, 0);
}

NyarParser::ListLikeContext::ListLikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::ListLikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListLike(this);
}
void NyarParser::ListLikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListLike(this);
}

antlrcpp::Any NyarParser::ListLikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitListLike(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ExpressionContext* NyarParser::expression() {
   return expression(0);
}

NyarParser::ExpressionContext* NyarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NyarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  NyarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, NyarParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TypeStatementContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(204);
      type_statement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FunctionApplyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      function_apply();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrefixExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(206);
      dynamic_cast<PrefixExpressionContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
        | (1ULL << (NyarParser::Plus - 68))
        | (1ULL << (NyarParser::Minus - 68))
        | (1ULL << (NyarParser::BitNot - 68))
        | (1ULL << (NyarParser::LogicNot - 68))
        | (1ULL << (NyarParser::Reciprocal - 68)))) != 0))) {
        dynamic_cast<PrefixExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(207);
      dynamic_cast<PrefixExpressionContext *>(_localctx)->right = expression(19);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LazyAssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(208);
      dynamic_cast<LazyAssignContext *>(_localctx)->id = function_apply();
      setState(209);
      dynamic_cast<LazyAssignContext *>(_localctx)->op = match(NyarParser::DelayedAssign);
      setState(210);
      dynamic_cast<LazyAssignContext *>(_localctx)->expr = assignable();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<OperatorAssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(212);
      dynamic_cast<OperatorAssignContext *>(_localctx)->id = assign_lhs();
      setState(213);
      dynamic_cast<OperatorAssignContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (NyarParser::PlusTo - 69))
        | (1ULL << (NyarParser::MinusFrom - 69))
        | (1ULL << (NyarParser::Assign - 69))
        | (1ULL << (NyarParser::LetAssign - 69))
        | (1ULL << (NyarParser::FinalAssign - 69)))) != 0))) {
        dynamic_cast<OperatorAssignContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(214);
      dynamic_cast<OperatorAssignContext *>(_localctx)->expr = assignable();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(216);
      dynamic_cast<ListContext *>(_localctx)->data = listLiteral();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<DictContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      dynamic_cast<DictContext *>(_localctx)->data = dictLiteral();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(218);
      dynamic_cast<StringContext *>(_localctx)->atom = match(NyarParser::STRING);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      dynamic_cast<NumberContext *>(_localctx)->atom = match(NyarParser::NUMBER);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<SymbolExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(220);
      dynamic_cast<SymbolExpressionContext *>(_localctx)->atom = symbol();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<PriorityExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(221);
      match(NyarParser::LS);
      setState(222);
      expression(0);
      setState(223);
      match(NyarParser::RS);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(255);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MethodApplyContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(227);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(228);
          dynamic_cast<MethodApplyContext *>(_localctx)->op = match(NyarParser::DOT);
          setState(229);
          dynamic_cast<MethodApplyContext *>(_localctx)->right = expression(18);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(230);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(231);
          dynamic_cast<BinaryLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NyarParser::LeftShift

          || _la == NyarParser::RightShift)) {
            dynamic_cast<BinaryLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(232);
          dynamic_cast<BinaryLikeContext *>(_localctx)->right = expression(17);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<LogicLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(233);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(234);
          dynamic_cast<LogicLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 62)) & ((1ULL << (NyarParser::LessEqual - 62))
            | (1ULL << (NyarParser::Less - 62))
            | (1ULL << (NyarParser::GraterEqual - 62))
            | (1ULL << (NyarParser::Grater - 62))
            | (1ULL << (NyarParser::Equivalent - 62))
            | (1ULL << (NyarParser::NotEquivalent - 62))
            | (1ULL << (NyarParser::Equal - 62))
            | (1ULL << (NyarParser::LogicOr - 62))
            | (1ULL << (NyarParser::LogicAnd - 62))
            | (1ULL << (NyarParser::NotEqual - 62)))) != 0))) {
            dynamic_cast<LogicLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(235);
          dynamic_cast<LogicLikeContext *>(_localctx)->right = expression(16);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CompareLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(236);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(237);
          dynamic_cast<CompareLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 62)) & ((1ULL << (NyarParser::LessEqual - 62))
            | (1ULL << (NyarParser::Less - 62))
            | (1ULL << (NyarParser::GraterEqual - 62))
            | (1ULL << (NyarParser::Grater - 62))
            | (1ULL << (NyarParser::Equivalent - 62))
            | (1ULL << (NyarParser::NotEquivalent - 62))
            | (1ULL << (NyarParser::Equal - 62))
            | (1ULL << (NyarParser::LogicOr - 62))
            | (1ULL << (NyarParser::LogicAnd - 62))
            | (1ULL << (NyarParser::NotEqual - 62)))) != 0))) {
            dynamic_cast<CompareLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(238);
          dynamic_cast<CompareLikeContext *>(_localctx)->right = expression(15);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PowerLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(239);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(240);
          dynamic_cast<PowerLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NyarParser::Power

          || _la == NyarParser::Surd)) {
            dynamic_cast<PowerLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(241);
          dynamic_cast<PowerLikeContext *>(_localctx)->right = expression(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<MultiplyLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(243);
          dynamic_cast<MultiplyLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 78) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 78)) & ((1ULL << (NyarParser::Times - 78))
            | (1ULL << (NyarParser::Multiply - 78))
            | (1ULL << (NyarParser::Kronecker - 78))
            | (1ULL << (NyarParser::TensorProduct - 78))
            | (1ULL << (NyarParser::Divide - 78)))) != 0))) {
            dynamic_cast<MultiplyLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(244);
          dynamic_cast<MultiplyLikeContext *>(_localctx)->right = expression(13);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<PlusLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(245);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(246);
          dynamic_cast<PlusLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NyarParser::Plus

          || _la == NyarParser::Minus)) {
            dynamic_cast<PlusLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(247);
          dynamic_cast<PlusLikeContext *>(_localctx)->right = expression(12);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ListLikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(248);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(249);
          dynamic_cast<ListLikeContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 61)) & ((1ULL << (NyarParser::LeftShift - 61))
            | (1ULL << (NyarParser::RightShift - 61))
            | (1ULL << (NyarParser::Concat - 61)))) != 0))) {
            dynamic_cast<ListLikeContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(250);
          dynamic_cast<ListLikeContext *>(_localctx)->right = expression(11);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<PostfixExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(251);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(252);
          dynamic_cast<PostfixExpressionContext *>(_localctx)->op = pst_ops();
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<IndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(253);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(254);
          dynamic_cast<IndexContext *>(_localctx)->data = indexLiteral();
          break;
        }

        } 
      }
      setState(259);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Pst_opsContext ------------------------------------------------------------------

NyarParser::Pst_opsContext::Pst_opsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Pst_opsContext::Increase() {
  return getToken(NyarParser::Increase, 0);
}


size_t NyarParser::Pst_opsContext::getRuleIndex() const {
  return NyarParser::RulePst_ops;
}

void NyarParser::Pst_opsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPst_ops(this);
}

void NyarParser::Pst_opsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPst_ops(this);
}


antlrcpp::Any NyarParser::Pst_opsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPst_ops(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Pst_opsContext* NyarParser::pst_ops() {
  Pst_opsContext *_localctx = _tracker.createInstance<Pst_opsContext>(_ctx, getState());
  enterRule(_localctx, 26, NyarParser::RulePst_ops);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(NyarParser::Increase);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_statementContext ------------------------------------------------------------------

NyarParser::Assign_statementContext::Assign_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Assign_statementContext::getRuleIndex() const {
  return NyarParser::RuleAssign_statement;
}

void NyarParser::Assign_statementContext::copyFrom(Assign_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignStatementContext ------------------------------------------------------------------

NyarParser::Assign_lhsContext* NyarParser::AssignStatementContext::assign_lhs() {
  return getRuleContext<NyarParser::Assign_lhsContext>(0);
}

NyarParser::AssignableContext* NyarParser::AssignStatementContext::assignable() {
  return getRuleContext<NyarParser::AssignableContext>(0);
}

tree::TerminalNode* NyarParser::AssignStatementContext::Let() {
  return getToken(NyarParser::Let, 0);
}

tree::TerminalNode* NyarParser::AssignStatementContext::Final() {
  return getToken(NyarParser::Final, 0);
}

NyarParser::AssignStatementContext::AssignStatementContext(Assign_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::AssignStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStatement(this);
}
void NyarParser::AssignStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStatement(this);
}

antlrcpp::Any NyarParser::AssignStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Assign_statementContext* NyarParser::assign_statement() {
  Assign_statementContext *_localctx = _tracker.createInstance<Assign_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, NyarParser::RuleAssign_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Assign_statementContext *>(_tracker.createInstance<NyarParser::AssignStatementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(262);
    dynamic_cast<AssignStatementContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == NyarParser::Final

    || _la == NyarParser::Let)) {
      dynamic_cast<AssignStatementContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(263);
    dynamic_cast<AssignStatementContext *>(_localctx)->id = assign_lhs();
    setState(264);
    dynamic_cast<AssignStatementContext *>(_localctx)->expr = assignable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignableContext ------------------------------------------------------------------

NyarParser::AssignableContext::AssignableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::ExpressionContext* NyarParser::AssignableContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::AssignableContext::LL() {
  return getToken(NyarParser::LL, 0);
}

tree::TerminalNode* NyarParser::AssignableContext::RL() {
  return getToken(NyarParser::RL, 0);
}

std::vector<NyarParser::StatementContext *> NyarParser::AssignableContext::statement() {
  return getRuleContexts<NyarParser::StatementContext>();
}

NyarParser::StatementContext* NyarParser::AssignableContext::statement(size_t i) {
  return getRuleContext<NyarParser::StatementContext>(i);
}


size_t NyarParser::AssignableContext::getRuleIndex() const {
  return NyarParser::RuleAssignable;
}

void NyarParser::AssignableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignable(this);
}

void NyarParser::AssignableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignable(this);
}


antlrcpp::Any NyarParser::AssignableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignable(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::AssignableContext* NyarParser::assignable() {
  AssignableContext *_localctx = _tracker.createInstance<AssignableContext>(_ctx, getState());
  enterRule(_localctx, 30, NyarParser::RuleAssignable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(266);
      expression(0);
      break;
    }

    case 2: {
      setState(267);
      match(NyarParser::LL);
      setState(269); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(268);
        statement();
        setState(271); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << NyarParser::Using)
        | (1ULL << NyarParser::Class)
        | (1ULL << NyarParser::Final)
        | (1ULL << NyarParser::Let)
        | (1ULL << NyarParser::Type)
        | (1ULL << NyarParser::If)
        | (1ULL << NyarParser::Match)
        | (1ULL << NyarParser::Switch)
        | (1ULL << NyarParser::For)
        | (1ULL << NyarParser::Try)
        | (1ULL << NyarParser::While)
        | (1ULL << NyarParser::Do)
        | (1ULL << NyarParser::STRING)
        | (1ULL << NyarParser::Identifier)
        | (1ULL << NyarParser::NUMBER)
        | (1ULL << NyarParser::LS)
        | (1ULL << NyarParser::LM)
        | (1ULL << NyarParser::LL))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
        | (1ULL << (NyarParser::Plus - 68))
        | (1ULL << (NyarParser::Minus - 68))
        | (1ULL << (NyarParser::BitNot - 68))
        | (1ULL << (NyarParser::LogicNot - 68))
        | (1ULL << (NyarParser::Colon - 68))
        | (1ULL << (NyarParser::Semicolon - 68))
        | (1ULL << (NyarParser::Reciprocal - 68)))) != 0));
      setState(273);
      match(NyarParser::RL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_lhsContext ------------------------------------------------------------------

NyarParser::Assign_lhsContext::Assign_lhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Assign_lhsContext::getRuleIndex() const {
  return NyarParser::RuleAssign_lhs;
}

void NyarParser::Assign_lhsContext::copyFrom(Assign_lhsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignAttributeContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> NyarParser::AssignAttributeContext::Identifier() {
  return getTokens(NyarParser::Identifier);
}

tree::TerminalNode* NyarParser::AssignAttributeContext::Identifier(size_t i) {
  return getToken(NyarParser::Identifier, i);
}

std::vector<tree::TerminalNode *> NyarParser::AssignAttributeContext::DOT() {
  return getTokens(NyarParser::DOT);
}

tree::TerminalNode* NyarParser::AssignAttributeContext::DOT(size_t i) {
  return getToken(NyarParser::DOT, i);
}

NyarParser::AssignAttributeContext::AssignAttributeContext(Assign_lhsContext *ctx) { copyFrom(ctx); }

void NyarParser::AssignAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignAttribute(this);
}
void NyarParser::AssignAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignAttribute(this);
}

antlrcpp::Any NyarParser::AssignAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignAttribute(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignFunctionContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> NyarParser::AssignFunctionContext::Identifier() {
  return getTokens(NyarParser::Identifier);
}

tree::TerminalNode* NyarParser::AssignFunctionContext::Identifier(size_t i) {
  return getToken(NyarParser::Identifier, i);
}

tree::TerminalNode* NyarParser::AssignFunctionContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::AssignFunctionContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::AssignFunctionContext::AssignFunctionContext(Assign_lhsContext *ctx) { copyFrom(ctx); }

void NyarParser::AssignFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignFunction(this);
}
void NyarParser::AssignFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignFunction(this);
}

antlrcpp::Any NyarParser::AssignFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignPairContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::AssignPairContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::AssignPairContext::RS() {
  return getToken(NyarParser::RS, 0);
}

std::vector<NyarParser::Assign_passContext *> NyarParser::AssignPairContext::assign_pass() {
  return getRuleContexts<NyarParser::Assign_passContext>();
}

NyarParser::Assign_passContext* NyarParser::AssignPairContext::assign_pass(size_t i) {
  return getRuleContext<NyarParser::Assign_passContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::AssignPairContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::AssignPairContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}

NyarParser::AssignPairContext::AssignPairContext(Assign_lhsContext *ctx) { copyFrom(ctx); }

void NyarParser::AssignPairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignPair(this);
}
void NyarParser::AssignPairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignPair(this);
}

antlrcpp::Any NyarParser::AssignPairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignPair(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignValueContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::AssignValueContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

NyarParser::AssignValueContext::AssignValueContext(Assign_lhsContext *ctx) { copyFrom(ctx); }

void NyarParser::AssignValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignValue(this);
}
void NyarParser::AssignValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignValue(this);
}

antlrcpp::Any NyarParser::AssignValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignWithListContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::AssignWithListContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

tree::TerminalNode* NyarParser::AssignWithListContext::LM() {
  return getToken(NyarParser::LM, 0);
}

tree::TerminalNode* NyarParser::AssignWithListContext::Integer() {
  return getToken(NyarParser::Integer, 0);
}

tree::TerminalNode* NyarParser::AssignWithListContext::RM() {
  return getToken(NyarParser::RM, 0);
}

NyarParser::AssignWithListContext::AssignWithListContext(Assign_lhsContext *ctx) { copyFrom(ctx); }

void NyarParser::AssignWithListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignWithList(this);
}
void NyarParser::AssignWithListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignWithList(this);
}

antlrcpp::Any NyarParser::AssignWithListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignWithList(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Assign_lhsContext* NyarParser::assign_lhs() {
  Assign_lhsContext *_localctx = _tracker.createInstance<Assign_lhsContext>(_ctx, getState());
  enterRule(_localctx, 32, NyarParser::RuleAssign_lhs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Assign_lhsContext *>(_tracker.createInstance<NyarParser::AssignValueContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(277);
      match(NyarParser::Identifier);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Assign_lhsContext *>(_tracker.createInstance<NyarParser::AssignAttributeContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(278);
      match(NyarParser::Identifier);
      setState(281); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(279);
        match(NyarParser::DOT);
        setState(280);
        match(NyarParser::Identifier);
        setState(283); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == NyarParser::DOT);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Assign_lhsContext *>(_tracker.createInstance<NyarParser::AssignFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(285);
      match(NyarParser::Identifier);
      setState(286);
      match(NyarParser::LS);
      setState(287);
      match(NyarParser::Identifier);
      setState(288);
      match(NyarParser::RS);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Assign_lhsContext *>(_tracker.createInstance<NyarParser::AssignPairContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(289);
      match(NyarParser::LS);
      setState(298);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Identifier

      || _la == NyarParser::Tilde) {
        setState(290);
        assign_pass();
        setState(295);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(291);
            match(NyarParser::COMMA);
            setState(292);
            assign_pass(); 
          }
          setState(297);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
        }
      }
      setState(301);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::COMMA) {
        setState(300);
        match(NyarParser::COMMA);
      }
      setState(303);
      match(NyarParser::RS);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Assign_lhsContext *>(_tracker.createInstance<NyarParser::AssignWithListContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(304);
      match(NyarParser::Identifier);
      setState(305);
      match(NyarParser::LM);
      setState(306);
      match(NyarParser::Integer);
      setState(307);
      match(NyarParser::RM);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_passContext ------------------------------------------------------------------

NyarParser::Assign_passContext::Assign_passContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Assign_passContext::Tilde() {
  return getToken(NyarParser::Tilde, 0);
}

NyarParser::SymbolContext* NyarParser::Assign_passContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}


size_t NyarParser::Assign_passContext::getRuleIndex() const {
  return NyarParser::RuleAssign_pass;
}

void NyarParser::Assign_passContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_pass(this);
}

void NyarParser::Assign_passContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_pass(this);
}


antlrcpp::Any NyarParser::Assign_passContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssign_pass(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Assign_passContext* NyarParser::assign_pass() {
  Assign_passContext *_localctx = _tracker.createInstance<Assign_passContext>(_ctx, getState());
  enterRule(_localctx, 34, NyarParser::RuleAssign_pass);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::Tilde: {
        enterOuterAlt(_localctx, 1);
        setState(310);
        match(NyarParser::Tilde);
        break;
      }

      case NyarParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(311);
        symbol();
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

//----------------- Module_statementContext ------------------------------------------------------------------

NyarParser::Module_statementContext::Module_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Module_statementContext::getRuleIndex() const {
  return NyarParser::RuleModule_statement;
}

void NyarParser::Module_statementContext::copyFrom(Module_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ModuleIncludeContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ModuleIncludeContext::Using() {
  return getToken(NyarParser::Using, 0);
}

NyarParser::SymbolContext* NyarParser::ModuleIncludeContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::ModuleIncludeContext::Times() {
  return getToken(NyarParser::Times, 0);
}

tree::TerminalNode* NyarParser::ModuleIncludeContext::Power() {
  return getToken(NyarParser::Power, 0);
}

NyarParser::ModuleIncludeContext::ModuleIncludeContext(Module_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ModuleIncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleInclude(this);
}
void NyarParser::ModuleIncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleInclude(this);
}

antlrcpp::Any NyarParser::ModuleIncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModuleInclude(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModuleAliasContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ModuleAliasContext::Using() {
  return getToken(NyarParser::Using, 0);
}

tree::TerminalNode* NyarParser::ModuleAliasContext::As() {
  return getToken(NyarParser::As, 0);
}

NyarParser::SymbolContext* NyarParser::ModuleAliasContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::ModuleAliasContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

NyarParser::ModuleAliasContext::ModuleAliasContext(Module_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ModuleAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleAlias(this);
}
void NyarParser::ModuleAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleAlias(this);
}

antlrcpp::Any NyarParser::ModuleAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModuleAlias(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModuleSymbolContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ModuleSymbolContext::Using() {
  return getToken(NyarParser::Using, 0);
}

NyarParser::SymbolContext* NyarParser::ModuleSymbolContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::ModuleSymbolContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

tree::TerminalNode* NyarParser::ModuleSymbolContext::With() {
  return getToken(NyarParser::With, 0);
}

NyarParser::ModuleSymbolContext::ModuleSymbolContext(Module_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ModuleSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleSymbol(this);
}
void NyarParser::ModuleSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleSymbol(this);
}

antlrcpp::Any NyarParser::ModuleSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModuleSymbol(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModuleSymbolsContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ModuleSymbolsContext::Using() {
  return getToken(NyarParser::Using, 0);
}

NyarParser::Id_tuplesContext* NyarParser::ModuleSymbolsContext::id_tuples() {
  return getRuleContext<NyarParser::Id_tuplesContext>(0);
}

NyarParser::SymbolContext* NyarParser::ModuleSymbolsContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::ModuleSymbolsContext::With() {
  return getToken(NyarParser::With, 0);
}

NyarParser::ModuleSymbolsContext::ModuleSymbolsContext(Module_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ModuleSymbolsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleSymbols(this);
}
void NyarParser::ModuleSymbolsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleSymbols(this);
}

antlrcpp::Any NyarParser::ModuleSymbolsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModuleSymbols(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModuleResolveContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ModuleResolveContext::Using() {
  return getToken(NyarParser::Using, 0);
}

NyarParser::DictLiteralContext* NyarParser::ModuleResolveContext::dictLiteral() {
  return getRuleContext<NyarParser::DictLiteralContext>(0);
}

NyarParser::ModuleResolveContext::ModuleResolveContext(Module_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ModuleResolveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleResolve(this);
}
void NyarParser::ModuleResolveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleResolve(this);
}

antlrcpp::Any NyarParser::ModuleResolveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModuleResolve(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Module_statementContext* NyarParser::module_statement() {
  Module_statementContext *_localctx = _tracker.createInstance<Module_statementContext>(_ctx, getState());
  enterRule(_localctx, 36, NyarParser::RuleModule_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(340);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Module_statementContext *>(_tracker.createInstance<NyarParser::ModuleIncludeContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(NyarParser::Using);
      setState(315);
      dynamic_cast<ModuleIncludeContext *>(_localctx)->module = symbol();
      setState(317);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Times

      || _la == NyarParser::Power) {
        setState(316);
        _la = _input->LA(1);
        if (!(_la == NyarParser::Times

        || _la == NyarParser::Power)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Module_statementContext *>(_tracker.createInstance<NyarParser::ModuleAliasContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(319);
      match(NyarParser::Using);
      setState(320);
      dynamic_cast<ModuleAliasContext *>(_localctx)->module = symbol();
      setState(321);
      match(NyarParser::As);
      setState(322);
      dynamic_cast<ModuleAliasContext *>(_localctx)->alias = match(NyarParser::Identifier);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Module_statementContext *>(_tracker.createInstance<NyarParser::ModuleSymbolContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(324);
      match(NyarParser::Using);
      setState(325);
      dynamic_cast<ModuleSymbolContext *>(_localctx)->source = symbol();
      setState(327);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::With) {
        setState(326);
        match(NyarParser::With);
      }
      setState(329);
      dynamic_cast<ModuleSymbolContext *>(_localctx)->name = match(NyarParser::Identifier);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Module_statementContext *>(_tracker.createInstance<NyarParser::ModuleSymbolsContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(331);
      match(NyarParser::Using);
      setState(332);
      dynamic_cast<ModuleSymbolsContext *>(_localctx)->source = symbol();
      setState(334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::With) {
        setState(333);
        match(NyarParser::With);
      }
      setState(336);
      id_tuples();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Module_statementContext *>(_tracker.createInstance<NyarParser::ModuleResolveContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(338);
      match(NyarParser::Using);
      setState(339);
      dictLiteral();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_tuplesContext ------------------------------------------------------------------

NyarParser::Id_tuplesContext::Id_tuplesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Id_tuplesContext::LL() {
  return getToken(NyarParser::LL, 0);
}

std::vector<tree::TerminalNode *> NyarParser::Id_tuplesContext::Identifier() {
  return getTokens(NyarParser::Identifier);
}

tree::TerminalNode* NyarParser::Id_tuplesContext::Identifier(size_t i) {
  return getToken(NyarParser::Identifier, i);
}

tree::TerminalNode* NyarParser::Id_tuplesContext::RL() {
  return getToken(NyarParser::RL, 0);
}

std::vector<tree::TerminalNode *> NyarParser::Id_tuplesContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::Id_tuplesContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::Id_tuplesContext::getRuleIndex() const {
  return NyarParser::RuleId_tuples;
}

void NyarParser::Id_tuplesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_tuples(this);
}

void NyarParser::Id_tuplesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_tuples(this);
}


antlrcpp::Any NyarParser::Id_tuplesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitId_tuples(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Id_tuplesContext* NyarParser::id_tuples() {
  Id_tuplesContext *_localctx = _tracker.createInstance<Id_tuplesContext>(_ctx, getState());
  enterRule(_localctx, 38, NyarParser::RuleId_tuples);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(NyarParser::LL);
    setState(343);
    match(NyarParser::Identifier);
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(344);
      match(NyarParser::COMMA);
      setState(345);
      match(NyarParser::Identifier);
      setState(350);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(351);
    match(NyarParser::RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_statementContext ------------------------------------------------------------------

NyarParser::Class_statementContext::Class_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Class_statementContext::getRuleIndex() const {
  return NyarParser::RuleClass_statement;
}

void NyarParser::Class_statementContext::copyFrom(Class_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ClassBaseContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ClassBaseContext::Class() {
  return getToken(NyarParser::Class, 0);
}

NyarParser::Class_defineContext* NyarParser::ClassBaseContext::class_define() {
  return getRuleContext<NyarParser::Class_defineContext>(0);
}

tree::TerminalNode* NyarParser::ClassBaseContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

NyarParser::Class_implementContext* NyarParser::ClassBaseContext::class_implement() {
  return getRuleContext<NyarParser::Class_implementContext>(0);
}

NyarParser::ClassBaseContext::ClassBaseContext(Class_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ClassBaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBase(this);
}
void NyarParser::ClassBaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBase(this);
}

antlrcpp::Any NyarParser::ClassBaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassBase(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassWithFatherContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ClassWithFatherContext::Class() {
  return getToken(NyarParser::Class, 0);
}

NyarParser::Class_fathersContext* NyarParser::ClassWithFatherContext::class_fathers() {
  return getRuleContext<NyarParser::Class_fathersContext>(0);
}

NyarParser::Class_defineContext* NyarParser::ClassWithFatherContext::class_define() {
  return getRuleContext<NyarParser::Class_defineContext>(0);
}

tree::TerminalNode* NyarParser::ClassWithFatherContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

NyarParser::Class_implementContext* NyarParser::ClassWithFatherContext::class_implement() {
  return getRuleContext<NyarParser::Class_implementContext>(0);
}

NyarParser::ClassWithFatherContext::ClassWithFatherContext(Class_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ClassWithFatherContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassWithFather(this);
}
void NyarParser::ClassWithFatherContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassWithFather(this);
}

antlrcpp::Any NyarParser::ClassWithFatherContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassWithFather(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Class_statementContext* NyarParser::class_statement() {
  Class_statementContext *_localctx = _tracker.createInstance<Class_statementContext>(_ctx, getState());
  enterRule(_localctx, 40, NyarParser::RuleClass_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Class_statementContext *>(_tracker.createInstance<NyarParser::ClassBaseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(353);
      match(NyarParser::Class);
      setState(354);
      dynamic_cast<ClassBaseContext *>(_localctx)->id = match(NyarParser::Identifier);
      setState(356);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Implement || _la == NyarParser::Colon) {
        setState(355);
        class_implement();
      }
      setState(358);
      class_define();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Class_statementContext *>(_tracker.createInstance<NyarParser::ClassWithFatherContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(359);
      match(NyarParser::Class);
      setState(360);
      dynamic_cast<ClassWithFatherContext *>(_localctx)->id = match(NyarParser::Identifier);
      setState(361);
      class_fathers();
      setState(363);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Implement || _la == NyarParser::Colon) {
        setState(362);
        class_implement();
      }
      setState(365);
      class_define();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_fathersContext ------------------------------------------------------------------

NyarParser::Class_fathersContext::Class_fathersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Class_fathersContext::getRuleIndex() const {
  return NyarParser::RuleClass_fathers;
}

void NyarParser::Class_fathersContext::copyFrom(Class_fathersContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ClassFatherContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ClassFatherContext::Extend() {
  return getToken(NyarParser::Extend, 0);
}

NyarParser::SymbolContext* NyarParser::ClassFatherContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::ClassFatherContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::ClassFatherContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::ClassFatherContext::ClassFatherContext(Class_fathersContext *ctx) { copyFrom(ctx); }

void NyarParser::ClassFatherContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassFather(this);
}
void NyarParser::ClassFatherContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassFather(this);
}

antlrcpp::Any NyarParser::ClassFatherContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassFather(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassFathersContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ClassFathersContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::ClassFathersContext::RS() {
  return getToken(NyarParser::RS, 0);
}

std::vector<NyarParser::SymbolContext *> NyarParser::ClassFathersContext::symbol() {
  return getRuleContexts<NyarParser::SymbolContext>();
}

NyarParser::SymbolContext* NyarParser::ClassFathersContext::symbol(size_t i) {
  return getRuleContext<NyarParser::SymbolContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::ClassFathersContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::ClassFathersContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}

NyarParser::ClassFathersContext::ClassFathersContext(Class_fathersContext *ctx) { copyFrom(ctx); }

void NyarParser::ClassFathersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassFathers(this);
}
void NyarParser::ClassFathersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassFathers(this);
}

antlrcpp::Any NyarParser::ClassFathersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassFathers(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Class_fathersContext* NyarParser::class_fathers() {
  Class_fathersContext *_localctx = _tracker.createInstance<Class_fathersContext>(_ctx, getState());
  enterRule(_localctx, 42, NyarParser::RuleClass_fathers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(386);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Class_fathersContext *>(_tracker.createInstance<NyarParser::ClassFatherContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(369);
      match(NyarParser::Extend);
      setState(370);
      dynamic_cast<ClassFatherContext *>(_localctx)->father = symbol();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Class_fathersContext *>(_tracker.createInstance<NyarParser::ClassFatherContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(371);
      match(NyarParser::LS);
      setState(372);
      dynamic_cast<ClassFatherContext *>(_localctx)->father = symbol();
      setState(373);
      match(NyarParser::RS);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Class_fathersContext *>(_tracker.createInstance<NyarParser::ClassFathersContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(375);
      match(NyarParser::LS);
      setState(383);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Identifier) {
        setState(376);
        symbol();
        setState(379); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(377);
          match(NyarParser::COMMA);
          setState(378);
          symbol();
          setState(381); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == NyarParser::COMMA);
      }
      setState(385);
      match(NyarParser::RS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_implementContext ------------------------------------------------------------------

NyarParser::Class_implementContext::Class_implementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Class_implementContext::getRuleIndex() const {
  return NyarParser::RuleClass_implement;
}

void NyarParser::Class_implementContext::copyFrom(Class_implementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ClassImplementContext ------------------------------------------------------------------

NyarParser::SymbolContext* NyarParser::ClassImplementContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::ClassImplementContext::Implement() {
  return getToken(NyarParser::Implement, 0);
}

tree::TerminalNode* NyarParser::ClassImplementContext::Colon() {
  return getToken(NyarParser::Colon, 0);
}

NyarParser::ClassImplementContext::ClassImplementContext(Class_implementContext *ctx) { copyFrom(ctx); }

void NyarParser::ClassImplementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassImplement(this);
}
void NyarParser::ClassImplementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassImplement(this);
}

antlrcpp::Any NyarParser::ClassImplementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassImplement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Class_implementContext* NyarParser::class_implement() {
  Class_implementContext *_localctx = _tracker.createInstance<Class_implementContext>(_ctx, getState());
  enterRule(_localctx, 44, NyarParser::RuleClass_implement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Class_implementContext *>(_tracker.createInstance<NyarParser::ClassImplementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(388);
    _la = _input->LA(1);
    if (!(_la == NyarParser::Implement || _la == NyarParser::Colon)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(389);
    symbol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_defineContext ------------------------------------------------------------------

NyarParser::Class_defineContext::Class_defineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Class_defineContext::getRuleIndex() const {
  return NyarParser::RuleClass_define;
}

void NyarParser::Class_defineContext::copyFrom(Class_defineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ClassDefineContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ClassDefineContext::LL() {
  return getToken(NyarParser::LL, 0);
}

NyarParser::ExpressionContext* NyarParser::ClassDefineContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::ClassDefineContext::RL() {
  return getToken(NyarParser::RL, 0);
}

NyarParser::ClassDefineContext::ClassDefineContext(Class_defineContext *ctx) { copyFrom(ctx); }

void NyarParser::ClassDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDefine(this);
}
void NyarParser::ClassDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDefine(this);
}

antlrcpp::Any NyarParser::ClassDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassDefine(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Class_defineContext* NyarParser::class_define() {
  Class_defineContext *_localctx = _tracker.createInstance<Class_defineContext>(_ctx, getState());
  enterRule(_localctx, 46, NyarParser::RuleClass_define);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Class_defineContext *>(_tracker.createInstance<NyarParser::ClassDefineContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(NyarParser::LL);
    setState(392);
    expression(0);
    setState(393);
    match(NyarParser::RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_StatementContext ------------------------------------------------------------------

NyarParser::Interface_StatementContext::Interface_StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Interface_StatementContext::Interface() {
  return getToken(NyarParser::Interface, 0);
}

NyarParser::ExpressionContext* NyarParser::Interface_StatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EosContext* NyarParser::Interface_StatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::Interface_StatementContext::getRuleIndex() const {
  return NyarParser::RuleInterface_Statement;
}

void NyarParser::Interface_StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_Statement(this);
}

void NyarParser::Interface_StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_Statement(this);
}


antlrcpp::Any NyarParser::Interface_StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitInterface_Statement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Interface_StatementContext* NyarParser::interface_Statement() {
  Interface_StatementContext *_localctx = _tracker.createInstance<Interface_StatementContext>(_ctx, getState());
  enterRule(_localctx, 48, NyarParser::RuleInterface_Statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    match(NyarParser::Interface);
    setState(396);
    expression(0);
    setState(397);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Template_StatementContext ------------------------------------------------------------------

NyarParser::Template_StatementContext::Template_StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Template_StatementContext::Template() {
  return getToken(NyarParser::Template, 0);
}

NyarParser::ExpressionContext* NyarParser::Template_StatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EosContext* NyarParser::Template_StatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::Template_StatementContext::getRuleIndex() const {
  return NyarParser::RuleTemplate_Statement;
}

void NyarParser::Template_StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplate_Statement(this);
}

void NyarParser::Template_StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplate_Statement(this);
}


antlrcpp::Any NyarParser::Template_StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTemplate_Statement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Template_StatementContext* NyarParser::template_Statement() {
  Template_StatementContext *_localctx = _tracker.createInstance<Template_StatementContext>(_ctx, getState());
  enterRule(_localctx, 50, NyarParser::RuleTemplate_Statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(NyarParser::Template);
    setState(400);
    expression(0);
    setState(401);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_StatementContext ------------------------------------------------------------------

NyarParser::Macro_StatementContext::Macro_StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Macro_StatementContext::Macro() {
  return getToken(NyarParser::Macro, 0);
}

NyarParser::ExpressionContext* NyarParser::Macro_StatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EosContext* NyarParser::Macro_StatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::Macro_StatementContext::getRuleIndex() const {
  return NyarParser::RuleMacro_Statement;
}

void NyarParser::Macro_StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_Statement(this);
}

void NyarParser::Macro_StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_Statement(this);
}


antlrcpp::Any NyarParser::Macro_StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMacro_Statement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Macro_StatementContext* NyarParser::macro_Statement() {
  Macro_StatementContext *_localctx = _tracker.createInstance<Macro_StatementContext>(_ctx, getState());
  enterRule(_localctx, 52, NyarParser::RuleMacro_Statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(NyarParser::Macro);
    setState(404);
    expression(0);
    setState(405);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Branch_statementContext ------------------------------------------------------------------

NyarParser::Branch_statementContext::Branch_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Branch_statementContext::getRuleIndex() const {
  return NyarParser::RuleBranch_statement;
}

void NyarParser::Branch_statementContext::copyFrom(Branch_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MatchStatementContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::MatchStatementContext::Match() {
  return getToken(NyarParser::Match, 0);
}

NyarParser::Condition_statementContext* NyarParser::MatchStatementContext::condition_statement() {
  return getRuleContext<NyarParser::Condition_statementContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::MatchStatementContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::MatchStatementContext::MatchStatementContext(Branch_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::MatchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchStatement(this);
}
void NyarParser::MatchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchStatement(this);
}

antlrcpp::Any NyarParser::MatchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMatchStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SwitchStatementContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::SwitchStatementContext::Switch() {
  return getToken(NyarParser::Switch, 0);
}

NyarParser::Condition_statementContext* NyarParser::SwitchStatementContext::condition_statement() {
  return getRuleContext<NyarParser::Condition_statementContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::SwitchStatementContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::SwitchStatementContext::SwitchStatementContext(Branch_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}
void NyarParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

antlrcpp::Any NyarParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfNestedContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::IfNestedContext::If() {
  return getToken(NyarParser::If, 0);
}

NyarParser::Condition_statementContext* NyarParser::IfNestedContext::condition_statement() {
  return getRuleContext<NyarParser::Condition_statementContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::IfNestedContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

std::vector<NyarParser::If_elseifContext *> NyarParser::IfNestedContext::if_elseif() {
  return getRuleContexts<NyarParser::If_elseifContext>();
}

NyarParser::If_elseifContext* NyarParser::IfNestedContext::if_elseif(size_t i) {
  return getRuleContext<NyarParser::If_elseifContext>(i);
}

NyarParser::If_elseContext* NyarParser::IfNestedContext::if_else() {
  return getRuleContext<NyarParser::If_elseContext>(0);
}

NyarParser::IfNestedContext::IfNestedContext(Branch_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::IfNestedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfNested(this);
}
void NyarParser::IfNestedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfNested(this);
}

antlrcpp::Any NyarParser::IfNestedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitIfNested(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfSingleContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::IfSingleContext::If() {
  return getToken(NyarParser::If, 0);
}

NyarParser::Condition_statementContext* NyarParser::IfSingleContext::condition_statement() {
  return getRuleContext<NyarParser::Condition_statementContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::IfSingleContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::If_elseContext* NyarParser::IfSingleContext::if_else() {
  return getRuleContext<NyarParser::If_elseContext>(0);
}

NyarParser::IfSingleContext::IfSingleContext(Branch_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::IfSingleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfSingle(this);
}
void NyarParser::IfSingleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfSingle(this);
}

antlrcpp::Any NyarParser::IfSingleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitIfSingle(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Branch_statementContext* NyarParser::branch_statement() {
  Branch_statementContext *_localctx = _tracker.createInstance<Branch_statementContext>(_ctx, getState());
  enterRule(_localctx, 54, NyarParser::RuleBranch_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(433);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Branch_statementContext *>(_tracker.createInstance<NyarParser::IfSingleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(407);
      match(NyarParser::If);
      setState(408);
      condition_statement();
      setState(409);
      expr_or_block();
      setState(411);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Else) {
        setState(410);
        if_else();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Branch_statementContext *>(_tracker.createInstance<NyarParser::IfNestedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(413);
      match(NyarParser::If);
      setState(414);
      condition_statement();
      setState(415);
      expr_or_block();
      setState(419);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(416);
          if_elseif(); 
        }
        setState(421);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      }
      setState(423);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Else) {
        setState(422);
        if_else();
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Branch_statementContext *>(_tracker.createInstance<NyarParser::SwitchStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(425);
      match(NyarParser::Switch);
      setState(426);
      condition_statement();
      setState(427);
      expr_or_block();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Branch_statementContext *>(_tracker.createInstance<NyarParser::MatchStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(429);
      match(NyarParser::Match);
      setState(430);
      condition_statement();
      setState(431);
      expr_or_block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_statementContext ------------------------------------------------------------------

NyarParser::Condition_statementContext::Condition_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Condition_statementContext::getRuleIndex() const {
  return NyarParser::RuleCondition_statement;
}

void NyarParser::Condition_statementContext::copyFrom(Condition_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionStatementContext ------------------------------------------------------------------

NyarParser::ExpressionContext* NyarParser::ConditionStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::ConditionStatementContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::ConditionStatementContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::ConditionStatementContext::ConditionStatementContext(Condition_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ConditionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionStatement(this);
}
void NyarParser::ConditionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionStatement(this);
}

antlrcpp::Any NyarParser::ConditionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitConditionStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Condition_statementContext* NyarParser::condition_statement() {
  Condition_statementContext *_localctx = _tracker.createInstance<Condition_statementContext>(_ctx, getState());
  enterRule(_localctx, 56, NyarParser::RuleCondition_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Condition_statementContext *>(_tracker.createInstance<NyarParser::ConditionStatementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(436);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(435);
      match(NyarParser::LS);
      break;
    }

    }
    setState(438);
    expression(0);
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::RS) {
      setState(439);
      match(NyarParser::RS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_elseContext ------------------------------------------------------------------

NyarParser::If_elseContext::If_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::If_elseContext::getRuleIndex() const {
  return NyarParser::RuleIf_else;
}

void NyarParser::If_elseContext::copyFrom(If_elseContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ElseStatementContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ElseStatementContext::Else() {
  return getToken(NyarParser::Else, 0);
}

NyarParser::Expr_or_blockContext* NyarParser::ElseStatementContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::ElseStatementContext::ElseStatementContext(If_elseContext *ctx) { copyFrom(ctx); }

void NyarParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}
void NyarParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}

antlrcpp::Any NyarParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::If_elseContext* NyarParser::if_else() {
  If_elseContext *_localctx = _tracker.createInstance<If_elseContext>(_ctx, getState());
  enterRule(_localctx, 58, NyarParser::RuleIf_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<If_elseContext *>(_tracker.createInstance<NyarParser::ElseStatementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(442);
    match(NyarParser::Else);
    setState(443);
    expr_or_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_elseifContext ------------------------------------------------------------------

NyarParser::If_elseifContext::If_elseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::If_elseifContext::getRuleIndex() const {
  return NyarParser::RuleIf_elseif;
}

void NyarParser::If_elseifContext::copyFrom(If_elseifContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ElseIfStatementContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ElseIfStatementContext::Else() {
  return getToken(NyarParser::Else, 0);
}

tree::TerminalNode* NyarParser::ElseIfStatementContext::If() {
  return getToken(NyarParser::If, 0);
}

NyarParser::Condition_statementContext* NyarParser::ElseIfStatementContext::condition_statement() {
  return getRuleContext<NyarParser::Condition_statementContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::ElseIfStatementContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

tree::TerminalNode* NyarParser::ElseIfStatementContext::Then() {
  return getToken(NyarParser::Then, 0);
}

NyarParser::ElseIfStatementContext::ElseIfStatementContext(If_elseifContext *ctx) { copyFrom(ctx); }

void NyarParser::ElseIfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfStatement(this);
}
void NyarParser::ElseIfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfStatement(this);
}

antlrcpp::Any NyarParser::ElseIfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitElseIfStatement(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::If_elseifContext* NyarParser::if_elseif() {
  If_elseifContext *_localctx = _tracker.createInstance<If_elseifContext>(_ctx, getState());
  enterRule(_localctx, 60, NyarParser::RuleIf_elseif);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<If_elseifContext *>(_tracker.createInstance<NyarParser::ElseIfStatementContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(NyarParser::Else);
    setState(446);
    match(NyarParser::If);
    setState(447);
    condition_statement();
    setState(449);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Then) {
      setState(448);
      match(NyarParser::Then);
    }
    setState(451);
    expr_or_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Try_statementContext ------------------------------------------------------------------

NyarParser::Try_statementContext::Try_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Try_statementContext::Try() {
  return getToken(NyarParser::Try, 0);
}

NyarParser::Block_statementContext* NyarParser::Try_statementContext::block_statement() {
  return getRuleContext<NyarParser::Block_statementContext>(0);
}

NyarParser::FinalProductionContext* NyarParser::Try_statementContext::finalProduction() {
  return getRuleContext<NyarParser::FinalProductionContext>(0);
}

NyarParser::CatchProductionContext* NyarParser::Try_statementContext::catchProduction() {
  return getRuleContext<NyarParser::CatchProductionContext>(0);
}


size_t NyarParser::Try_statementContext::getRuleIndex() const {
  return NyarParser::RuleTry_statement;
}

void NyarParser::Try_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTry_statement(this);
}

void NyarParser::Try_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTry_statement(this);
}


antlrcpp::Any NyarParser::Try_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTry_statement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Try_statementContext* NyarParser::try_statement() {
  Try_statementContext *_localctx = _tracker.createInstance<Try_statementContext>(_ctx, getState());
  enterRule(_localctx, 62, NyarParser::RuleTry_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(453);
      match(NyarParser::Try);
      setState(454);
      block_statement();
      setState(455);
      finalProduction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(457);
      match(NyarParser::Try);
      setState(458);
      block_statement();

      setState(459);
      catchProduction();
      setState(461);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
      case 1: {
        setState(460);
        finalProduction();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchProductionContext ------------------------------------------------------------------

NyarParser::CatchProductionContext::CatchProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::CatchProductionContext::Catch() {
  return getToken(NyarParser::Catch, 0);
}

NyarParser::SymbolContext* NyarParser::CatchProductionContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

NyarParser::Block_statementContext* NyarParser::CatchProductionContext::block_statement() {
  return getRuleContext<NyarParser::Block_statementContext>(0);
}

tree::TerminalNode* NyarParser::CatchProductionContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::CatchProductionContext::RS() {
  return getToken(NyarParser::RS, 0);
}


size_t NyarParser::CatchProductionContext::getRuleIndex() const {
  return NyarParser::RuleCatchProduction;
}

void NyarParser::CatchProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchProduction(this);
}

void NyarParser::CatchProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchProduction(this);
}


antlrcpp::Any NyarParser::CatchProductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitCatchProduction(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::CatchProductionContext* NyarParser::catchProduction() {
  CatchProductionContext *_localctx = _tracker.createInstance<CatchProductionContext>(_ctx, getState());
  enterRule(_localctx, 64, NyarParser::RuleCatchProduction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    match(NyarParser::Catch);
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::LS) {
      setState(466);
      match(NyarParser::LS);
    }
    setState(469);
    symbol();
    setState(471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::RS) {
      setState(470);
      match(NyarParser::RS);
    }
    setState(473);
    block_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinalProductionContext ------------------------------------------------------------------

NyarParser::FinalProductionContext::FinalProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::FinalProductionContext::Final() {
  return getToken(NyarParser::Final, 0);
}

NyarParser::Block_statementContext* NyarParser::FinalProductionContext::block_statement() {
  return getRuleContext<NyarParser::Block_statementContext>(0);
}


size_t NyarParser::FinalProductionContext::getRuleIndex() const {
  return NyarParser::RuleFinalProduction;
}

void NyarParser::FinalProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinalProduction(this);
}

void NyarParser::FinalProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinalProduction(this);
}


antlrcpp::Any NyarParser::FinalProductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitFinalProduction(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::FinalProductionContext* NyarParser::finalProduction() {
  FinalProductionContext *_localctx = _tracker.createInstance<FinalProductionContext>(_ctx, getState());
  enterRule(_localctx, 66, NyarParser::RuleFinalProduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    match(NyarParser::Final);
    setState(476);
    block_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_statementContext ------------------------------------------------------------------

NyarParser::Loop_statementContext::Loop_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::Loop_statementContext::getRuleIndex() const {
  return NyarParser::RuleLoop_statement;
}

void NyarParser::Loop_statementContext::copyFrom(Loop_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ForInLoopContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ForInLoopContext::For() {
  return getToken(NyarParser::For, 0);
}

tree::TerminalNode* NyarParser::ForInLoopContext::Identifier() {
  return getToken(NyarParser::Identifier, 0);
}

tree::TerminalNode* NyarParser::ForInLoopContext::In() {
  return getToken(NyarParser::In, 0);
}

NyarParser::ExpressionContext* NyarParser::ForInLoopContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::ForInLoopContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::ForInLoopContext::ForInLoopContext(Loop_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ForInLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInLoop(this);
}
void NyarParser::ForInLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInLoop(this);
}

antlrcpp::Any NyarParser::ForInLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitForInLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForLoopContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ForLoopContext::For() {
  return getToken(NyarParser::For, 0);
}

tree::TerminalNode* NyarParser::ForLoopContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::ForLoopContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::Expr_or_blockContext* NyarParser::ForLoopContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

std::vector<tree::TerminalNode *> NyarParser::ForLoopContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::ForLoopContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}

std::vector<NyarParser::ExpressionContext *> NyarParser::ForLoopContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::ForLoopContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

NyarParser::ForLoopContext::ForLoopContext(Loop_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}
void NyarParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}

antlrcpp::Any NyarParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoLoopContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::DoLoopContext::Do() {
  return getToken(NyarParser::Do, 0);
}

NyarParser::Expr_or_blockContext* NyarParser::DoLoopContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::DoLoopContext::DoLoopContext(Loop_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::DoLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoLoop(this);
}
void NyarParser::DoLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoLoop(this);
}

antlrcpp::Any NyarParser::DoLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitDoLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileLoopContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::WhileLoopContext::While() {
  return getToken(NyarParser::While, 0);
}

NyarParser::Condition_statementContext* NyarParser::WhileLoopContext::condition_statement() {
  return getRuleContext<NyarParser::Condition_statementContext>(0);
}

NyarParser::Expr_or_blockContext* NyarParser::WhileLoopContext::expr_or_block() {
  return getRuleContext<NyarParser::Expr_or_blockContext>(0);
}

NyarParser::WhileLoopContext::WhileLoopContext(Loop_statementContext *ctx) { copyFrom(ctx); }

void NyarParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}
void NyarParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}

antlrcpp::Any NyarParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::Loop_statementContext* NyarParser::loop_statement() {
  Loop_statementContext *_localctx = _tracker.createInstance<Loop_statementContext>(_ctx, getState());
  enterRule(_localctx, 68, NyarParser::RuleLoop_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(501);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Loop_statementContext *>(_tracker.createInstance<NyarParser::ForLoopContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(478);
      match(NyarParser::For);
      setState(479);
      match(NyarParser::LS);

      setState(480);
      dynamic_cast<ForLoopContext *>(_localctx)->initial = expression(0);
      setState(481);
      match(NyarParser::COMMA);
      setState(482);
      dynamic_cast<ForLoopContext *>(_localctx)->condition = expression(0);
      setState(483);
      match(NyarParser::COMMA);
      setState(484);
      dynamic_cast<ForLoopContext *>(_localctx)->increment = expression(0);
      setState(486);
      match(NyarParser::RS);
      setState(487);
      expr_or_block();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Loop_statementContext *>(_tracker.createInstance<NyarParser::ForInLoopContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(489);
      match(NyarParser::For);
      setState(490);
      match(NyarParser::Identifier);
      setState(491);
      match(NyarParser::In);
      setState(492);
      expression(0);
      setState(493);
      expr_or_block();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Loop_statementContext *>(_tracker.createInstance<NyarParser::WhileLoopContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(495);
      match(NyarParser::While);
      setState(496);
      condition_statement();
      setState(497);
      expr_or_block();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Loop_statementContext *>(_tracker.createInstance<NyarParser::DoLoopContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(499);
      match(NyarParser::Do);
      setState(500);
      expr_or_block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictLiteralContext ------------------------------------------------------------------

NyarParser::DictLiteralContext::DictLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::DictLiteralContext::LL() {
  return getToken(NyarParser::LL, 0);
}

tree::TerminalNode* NyarParser::DictLiteralContext::RL() {
  return getToken(NyarParser::RL, 0);
}

std::vector<NyarParser::KeyvalueContext *> NyarParser::DictLiteralContext::keyvalue() {
  return getRuleContexts<NyarParser::KeyvalueContext>();
}

NyarParser::KeyvalueContext* NyarParser::DictLiteralContext::keyvalue(size_t i) {
  return getRuleContext<NyarParser::KeyvalueContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::DictLiteralContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::DictLiteralContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::DictLiteralContext::getRuleIndex() const {
  return NyarParser::RuleDictLiteral;
}

void NyarParser::DictLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictLiteral(this);
}

void NyarParser::DictLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictLiteral(this);
}


antlrcpp::Any NyarParser::DictLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitDictLiteral(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::DictLiteralContext* NyarParser::dictLiteral() {
  DictLiteralContext *_localctx = _tracker.createInstance<DictLiteralContext>(_ctx, getState());
  enterRule(_localctx, 70, NyarParser::RuleDictLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(NyarParser::LL);
    setState(512);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::Identifier)
      | (1ULL << NyarParser::NUMBER))) != 0)) {
      setState(504);
      keyvalue();
      setState(509);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(505);
          match(NyarParser::COMMA);
          setState(506);
          keyvalue(); 
        }
        setState(511);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
      }
    }
    setState(515);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::COMMA) {
      setState(514);
      match(NyarParser::COMMA);
    }
    setState(517);
    match(NyarParser::RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyvalueContext ------------------------------------------------------------------

NyarParser::KeyvalueContext::KeyvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::KeyvalueContext::Colon() {
  return getToken(NyarParser::Colon, 0);
}

NyarParser::Key_validContext* NyarParser::KeyvalueContext::key_valid() {
  return getRuleContext<NyarParser::Key_validContext>(0);
}

NyarParser::ElementContext* NyarParser::KeyvalueContext::element() {
  return getRuleContext<NyarParser::ElementContext>(0);
}


size_t NyarParser::KeyvalueContext::getRuleIndex() const {
  return NyarParser::RuleKeyvalue;
}

void NyarParser::KeyvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyvalue(this);
}

void NyarParser::KeyvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyvalue(this);
}


antlrcpp::Any NyarParser::KeyvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitKeyvalue(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::KeyvalueContext* NyarParser::keyvalue() {
  KeyvalueContext *_localctx = _tracker.createInstance<KeyvalueContext>(_ctx, getState());
  enterRule(_localctx, 72, NyarParser::RuleKeyvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    dynamic_cast<KeyvalueContext *>(_localctx)->key = key_valid();
    setState(520);
    match(NyarParser::Colon);
    setState(521);
    dynamic_cast<KeyvalueContext *>(_localctx)->value = element();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Key_validContext ------------------------------------------------------------------

NyarParser::Key_validContext::Key_validContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::Key_validContext::NUMBER() {
  return getToken(NyarParser::NUMBER, 0);
}

tree::TerminalNode* NyarParser::Key_validContext::STRING() {
  return getToken(NyarParser::STRING, 0);
}

NyarParser::SymbolContext* NyarParser::Key_validContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}


size_t NyarParser::Key_validContext::getRuleIndex() const {
  return NyarParser::RuleKey_valid;
}

void NyarParser::Key_validContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey_valid(this);
}

void NyarParser::Key_validContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey_valid(this);
}


antlrcpp::Any NyarParser::Key_validContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitKey_valid(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Key_validContext* NyarParser::key_valid() {
  Key_validContext *_localctx = _tracker.createInstance<Key_validContext>(_ctx, getState());
  enterRule(_localctx, 74, NyarParser::RuleKey_valid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(526);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::NUMBER: {
        setState(523);
        match(NyarParser::NUMBER);
        break;
      }

      case NyarParser::STRING: {
        setState(524);
        match(NyarParser::STRING);
        break;
      }

      case NyarParser::Identifier: {
        setState(525);
        symbol();
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

//----------------- ListLiteralContext ------------------------------------------------------------------

NyarParser::ListLiteralContext::ListLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ListLiteralContext::LM() {
  return getToken(NyarParser::LM, 0);
}

tree::TerminalNode* NyarParser::ListLiteralContext::RM() {
  return getToken(NyarParser::RM, 0);
}

std::vector<NyarParser::ElementContext *> NyarParser::ListLiteralContext::element() {
  return getRuleContexts<NyarParser::ElementContext>();
}

NyarParser::ElementContext* NyarParser::ListLiteralContext::element(size_t i) {
  return getRuleContext<NyarParser::ElementContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::ListLiteralContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::ListLiteralContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::ListLiteralContext::getRuleIndex() const {
  return NyarParser::RuleListLiteral;
}

void NyarParser::ListLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListLiteral(this);
}

void NyarParser::ListLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListLiteral(this);
}


antlrcpp::Any NyarParser::ListLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitListLiteral(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ListLiteralContext* NyarParser::listLiteral() {
  ListLiteralContext *_localctx = _tracker.createInstance<ListLiteralContext>(_ctx, getState());
  enterRule(_localctx, 76, NyarParser::RuleListLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(NyarParser::LM);
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::Type)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::Identifier)
      | (1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::LS)
      | (1ULL << NyarParser::LM)
      | (1ULL << NyarParser::LL))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (NyarParser::Increase - 68))
      | (1ULL << (NyarParser::Plus - 68))
      | (1ULL << (NyarParser::Minus - 68))
      | (1ULL << (NyarParser::BitNot - 68))
      | (1ULL << (NyarParser::LogicNot - 68))
      | (1ULL << (NyarParser::Reciprocal - 68)))) != 0)) {
      setState(529);
      element();
      setState(536);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(531);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == NyarParser::COMMA) {
            setState(530);
            match(NyarParser::COMMA);
          }
          setState(533);
          element(); 
        }
        setState(538);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
      }
    }
    setState(542);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::COMMA) {
      setState(541);
      match(NyarParser::COMMA);
    }
    setState(544);
    match(NyarParser::RM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

NyarParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::ExpressionContext* NyarParser::ElementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::DictLiteralContext* NyarParser::ElementContext::dictLiteral() {
  return getRuleContext<NyarParser::DictLiteralContext>(0);
}

NyarParser::ListLiteralContext* NyarParser::ElementContext::listLiteral() {
  return getRuleContext<NyarParser::ListLiteralContext>(0);
}


size_t NyarParser::ElementContext::getRuleIndex() const {
  return NyarParser::RuleElement;
}

void NyarParser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void NyarParser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


antlrcpp::Any NyarParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ElementContext* NyarParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 78, NyarParser::RuleElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(546);
      expression(0);
      break;
    }

    case 2: {
      setState(547);
      dictLiteral();
      break;
    }

    case 3: {
      setState(548);
      listLiteral();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexLiteralContext ------------------------------------------------------------------

NyarParser::IndexLiteralContext::IndexLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::IndexLiteralContext::LM() {
  return getToken(NyarParser::LM, 0);
}

std::vector<NyarParser::Index_validContext *> NyarParser::IndexLiteralContext::index_valid() {
  return getRuleContexts<NyarParser::Index_validContext>();
}

NyarParser::Index_validContext* NyarParser::IndexLiteralContext::index_valid(size_t i) {
  return getRuleContext<NyarParser::Index_validContext>(i);
}

tree::TerminalNode* NyarParser::IndexLiteralContext::RM() {
  return getToken(NyarParser::RM, 0);
}

std::vector<tree::TerminalNode *> NyarParser::IndexLiteralContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::IndexLiteralContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::IndexLiteralContext::getRuleIndex() const {
  return NyarParser::RuleIndexLiteral;
}

void NyarParser::IndexLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexLiteral(this);
}

void NyarParser::IndexLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexLiteral(this);
}


antlrcpp::Any NyarParser::IndexLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitIndexLiteral(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::IndexLiteralContext* NyarParser::indexLiteral() {
  IndexLiteralContext *_localctx = _tracker.createInstance<IndexLiteralContext>(_ctx, getState());
  enterRule(_localctx, 80, NyarParser::RuleIndexLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(NyarParser::LM);
    setState(552);
    index_valid();
    setState(557); 
    _errHandler->sync(this);
    alt = 1 + 1;
    do {
      switch (alt) {
        case 1 + 1: {
              setState(554);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == NyarParser::COMMA) {
                setState(553);
                match(NyarParser::COMMA);
              }
              setState(556);
              index_valid();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(559); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    } while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(561);
    match(NyarParser::RM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_validContext ------------------------------------------------------------------

NyarParser::Index_validContext::Index_validContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::SymbolContext* NyarParser::Index_validContext::symbol() {
  return getRuleContext<NyarParser::SymbolContext>(0);
}

tree::TerminalNode* NyarParser::Index_validContext::Integer() {
  return getToken(NyarParser::Integer, 0);
}

tree::TerminalNode* NyarParser::Index_validContext::Colon() {
  return getToken(NyarParser::Colon, 0);
}


size_t NyarParser::Index_validContext::getRuleIndex() const {
  return NyarParser::RuleIndex_valid;
}

void NyarParser::Index_validContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_valid(this);
}

void NyarParser::Index_validContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_valid(this);
}


antlrcpp::Any NyarParser::Index_validContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitIndex_valid(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Index_validContext* NyarParser::index_valid() {
  Index_validContext *_localctx = _tracker.createInstance<Index_validContext>(_ctx, getState());
  enterRule(_localctx, 82, NyarParser::RuleIndex_valid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::Identifier: {
        setState(563);
        symbol();
        break;
      }

      case NyarParser::Integer: {
        setState(564);
        match(NyarParser::Integer);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(568);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Colon) {
      setState(567);
      match(NyarParser::Colon);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedIntegerContext ------------------------------------------------------------------

NyarParser::SignedIntegerContext::SignedIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::SignedIntegerContext::Integer() {
  return getToken(NyarParser::Integer, 0);
}

tree::TerminalNode* NyarParser::SignedIntegerContext::Plus() {
  return getToken(NyarParser::Plus, 0);
}

tree::TerminalNode* NyarParser::SignedIntegerContext::Minus() {
  return getToken(NyarParser::Minus, 0);
}


size_t NyarParser::SignedIntegerContext::getRuleIndex() const {
  return NyarParser::RuleSignedInteger;
}

void NyarParser::SignedIntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignedInteger(this);
}

void NyarParser::SignedIntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignedInteger(this);
}


antlrcpp::Any NyarParser::SignedIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitSignedInteger(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::SignedIntegerContext* NyarParser::signedInteger() {
  SignedIntegerContext *_localctx = _tracker.createInstance<SignedIntegerContext>(_ctx, getState());
  enterRule(_localctx, 84, NyarParser::RuleSignedInteger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Plus

    || _la == NyarParser::Minus) {
      setState(570);
      _la = _input->LA(1);
      if (!(_la == NyarParser::Plus

      || _la == NyarParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(573);
    match(NyarParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool NyarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NyarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 17);
    case 1: return precpred(_ctx, 16);
    case 2: return precpred(_ctx, 15);
    case 3: return precpred(_ctx, 14);
    case 4: return precpred(_ctx, 13);
    case 5: return precpred(_ctx, 12);
    case 6: return precpred(_ctx, 11);
    case 7: return precpred(_ctx, 10);
    case 8: return precpred(_ctx, 18);
    case 9: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> NyarParser::_decisionToDFA;
atn::PredictionContextCache NyarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NyarParser::_atn;
std::vector<uint16_t> NyarParser::_serializedATN;

std::vector<std::string> NyarParser::_ruleNames = {
  "program", "statement", "block_statement", "expr_or_block", "empty_statement", 
  "eos", "symbol", "global", "expression_statement", "type_statement", "function_apply", 
  "function_params", "expression", "pst_ops", "assign_statement", "assignable", 
  "assign_lhs", "assign_pass", "module_statement", "id_tuples", "class_statement", 
  "class_fathers", "class_implement", "class_define", "interface_Statement", 
  "template_Statement", "macro_Statement", "branch_statement", "condition_statement", 
  "if_else", "if_elseif", "try_statement", "catchProduction", "finalProduction", 
  "loop_statement", "dictLiteral", "keyvalue", "key_valid", "listLiteral", 
  "element", "indexLiteral", "index_valid", "signedInteger"
};

std::vector<std::string> NyarParser::_literalNames = {
  "", "", "", "", "", "'using'", "'expose'", "'as'", "'with'", "'macro'", 
  "'end'", "'template'", "'interface'", "'enumerate'", "'structure'", "'class'", 
  "'extend'", "'implement'", "'setter'", "'getter'", "'public'", "'private'", 
  "'protect'", "'final'", "'let'", "'type'", "'if'", "'then'", "'else'", 
  "'match'", "'switch'", "'case'", "'for'", "'in'", "'try'", "'catch'", 
  "'while'", "'do'", "'true'", "'false'", "", "", "", "", "", "", "'('", 
  "')'", "'['", "']'", "'{'", "'}'", "'\u2308'", "'\u2309'", "'\u230A'", 
  "'\u230B'", "", "", "'\u201C'", "'\u201D'", "", "", "'<='", "'<'", "", 
  "", "'>='", "'>'", "'++'", "'+='", "'+'", "'\u2295'", "'--'", "'-='", 
  "", "'-'", "'***'", "'**'", "'*'", "'\u00D7'", "'\u2297'", "'\u2299'", 
  "'//@'", "'//'", "'/@'", "'/'", "'\u00F7'", "'%%%'", "'%%'", "'%'", "'^^'", 
  "'^'", "'\u221A'", "'==='", "'=!='", "'=='", "", "'='", "'~~'", "'~='", 
  "'~'", "", "'|'", "", "'&'", "'!!'", "", "", "", "'#!'", "'$'", "'@@@'", 
  "'@@'", "'@='", "'@'", "", "", "", "", "'`'", "'\u00B4'", "'\"'", "'''", 
  "'_'", "'...'", "", "", "'\u22C5'", "", "'\u215F'", "'\u00B0'", "'\u1D40'", 
  "'\u1D34'", "'\u2102'", "'\u211D'", "'\u2124'", "'\U0001D539'", "'\U0001D540'", 
  "'\U0001D54A'", "'\u00A7'", "'\u00B6'", "'\u00A4'", "'\u2208'"
};

std::vector<std::string> NyarParser::_symbolicNames = {
  "", "LineComment", "PartComment", "WhiteSpace", "NewLine", "Using", "Expose", 
  "As", "With", "Macro", "End", "Template", "Interface", "Enumerate", "Structure", 
  "Class", "Extend", "Implement", "Setter", "Getter", "Public", "Private", 
  "Protect", "Final", "Let", "Type", "If", "Then", "Else", "Match", "Switch", 
  "Case", "For", "In", "Try", "Catch", "While", "Do", "True", "False", "BOOL", 
  "STRING", "Identifier", "NUMBER", "Float", "Integer", "LS", "RS", "LM", 
  "RM", "LL", "RL", "LCeil", "RCeil", "LFloor", "RFloor", "LAngle", "RAngle", 
  "LQuote", "RQuote", "Import", "LeftShift", "LessEqual", "Less", "Export", 
  "RightShift", "GraterEqual", "Grater", "Increase", "PlusTo", "Plus", "LogicXor", 
  "Decrease", "MinusFrom", "To", "Minus", "NullSequence", "Sequence", "Times", 
  "Multiply", "Kronecker", "TensorProduct", "MapAll", "Remainder", "Map", 
  "Divide", "Quotient", "Comment", "Output", "Mod", "BaseInput", "Power", 
  "Surd", "Equivalent", "NotEquivalent", "Equal", "Infer", "Assign", "Concat", 
  "Destruct", "Tilde", "LogicOr", "BitOr", "LogicAnd", "BitAnd", "DoubleBang", 
  "NotEqual", "BitNot", "LogicNot", "Shebang", "PostfixFunction", "Curry", 
  "Apply", "LetAssign", "At", "TypeAnnotation", "DelayedAssign", "Colon", 
  "Semicolon", "Quote", "Acute", "DoubleQuotation", "Quotation", "Underline", 
  "Ellipsis", "FinalAssign", "DOT", "Dot", "COMMA", "Reciprocal", "Degree", 
  "Transpose", "Hermitian", "FieldComplex", "FieldReal", "FieldUnsigned", 
  "FieldBool", "FieldInteger", "FieldString", "Section", "Pilcrow", "Currency", 
  "Element"
};

dfa::Vocabulary NyarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NyarParser::_tokenNames;

NyarParser::Initializer::Initializer() {
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
    0x3, 0x90, 0x242, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x2c, 0x9, 0x2c, 0x3, 0x2, 0x7, 0x2, 0x5a, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x5d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x64, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x68, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x6c, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x70, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x74, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x78, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x7c, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x80, 0xa, 0x3, 0x5, 0x3, 
    0x82, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x86, 0xa, 0x4, 0xd, 0x4, 
    0xe, 0x4, 0x87, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x8e, 
    0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x8f, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x94, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x98, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xa1, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xa4, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0xaa, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xad, 0xb, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xb2, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0xb5, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0xbd, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0xc2, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0xc9, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xcc, 0xb, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0xe4, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x102, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x105, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x110, 
    0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x111, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x116, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x6, 0x12, 
    0x11c, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0x11d, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0x128, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x12b, 0xb, 0x12, 0x5, 
    0x12, 0x12d, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x130, 0xa, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x137, 
    0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x13b, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x140, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 
    0x14, 0x14a, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x151, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x157, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x15d, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x160, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
    0x16, 0x167, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x16e, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x172, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x17e, 
    0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x17f, 0x5, 0x17, 0x182, 0xa, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x185, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x5, 0x1d, 0x19e, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0x1a4, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x1a7, 
    0xb, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1aa, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
    0x1d, 0x1b4, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x1b7, 0xa, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1bb, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x1c4, 
    0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1d0, 
    0xa, 0x21, 0x5, 0x21, 0x1d2, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x1d6, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1da, 0xa, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1f8, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x1fe, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 
    0x201, 0xb, 0x25, 0x5, 0x25, 0x203, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 
    0x206, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x211, 0xa, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x216, 0xa, 0x28, 0x3, 0x28, 
    0x7, 0x28, 0x219, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x21c, 0xb, 0x28, 
    0x5, 0x28, 0x21e, 0xa, 0x28, 0x3, 0x28, 0x5, 0x28, 0x221, 0xa, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x228, 
    0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x22d, 0xa, 0x2a, 
    0x3, 0x2a, 0x6, 0x2a, 0x230, 0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 0x231, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x238, 0xa, 0x2b, 
    0x3, 0x2b, 0x5, 0x2b, 0x23b, 0xa, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x23e, 
    0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x231, 0x3, 0x1a, 0x2d, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x2, 0xd, 0x7, 0x2, 0x46, 0x46, 
    0x48, 0x48, 0x4d, 0x4d, 0x6d, 0x6e, 0x83, 0x83, 0x7, 0x2, 0x47, 0x47, 
    0x4b, 0x4b, 0x63, 0x63, 0x73, 0x73, 0x7f, 0x7f, 0x4, 0x2, 0x3f, 0x3f, 
    0x43, 0x43, 0x8, 0x2, 0x40, 0x41, 0x44, 0x45, 0x5f, 0x61, 0x67, 0x67, 
    0x69, 0x69, 0x6c, 0x6c, 0x3, 0x2, 0x5d, 0x5e, 0x4, 0x2, 0x50, 0x53, 
    0x57, 0x57, 0x4, 0x2, 0x48, 0x48, 0x4d, 0x4d, 0x5, 0x2, 0x3f, 0x3f, 
    0x43, 0x43, 0x64, 0x64, 0x3, 0x2, 0x19, 0x1a, 0x4, 0x2, 0x50, 0x50, 
    0x5d, 0x5d, 0x4, 0x2, 0x13, 0x13, 0x77, 0x77, 0x2, 0x27f, 0x2, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x81, 0x3, 0x2, 0x2, 0x2, 0x6, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0x12, 0xae, 0x3, 0x2, 0x2, 0x2, 0x14, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x106, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x108, 0x3, 0x2, 0x2, 0x2, 0x20, 0x115, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x136, 0x3, 0x2, 0x2, 0x2, 0x24, 0x13a, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x156, 0x3, 0x2, 0x2, 0x2, 0x28, 0x158, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x184, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x186, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x189, 0x3, 0x2, 0x2, 0x2, 0x32, 0x18d, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x191, 0x3, 0x2, 0x2, 0x2, 0x36, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x1dd, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1f9, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x210, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x212, 0x3, 0x2, 0x2, 0x2, 0x50, 0x227, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x229, 0x3, 0x2, 0x2, 0x2, 0x54, 0x237, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x4, 0x3, 0x2, 
    0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0x2, 0x2, 0x3, 0x5f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x60, 0x82, 0x5, 0xa, 
    0x6, 0x2, 0x61, 0x63, 0x5, 0x6, 0x4, 0x2, 0x62, 0x64, 0x5, 0xc, 0x7, 
    0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x82, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 0x5, 0x12, 0xa, 0x2, 0x66, 
    0x68, 0x5, 0xc, 0x7, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x82, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x5, 
    0x1e, 0x10, 0x2, 0x6a, 0x6c, 0x5, 0xc, 0x7, 0x2, 0x6b, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x6f, 0x5, 0x38, 0x1d, 0x2, 0x6e, 0x70, 0x5, 0xc, 0x7, 0x2, 
    0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x5, 0x40, 0x21, 0x2, 0x72, 0x74, 
    0x5, 0xc, 0x7, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x82, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x5, 0x26, 
    0x14, 0x2, 0x76, 0x78, 0x5, 0xc, 0x7, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x7b, 0x5, 0x2a, 0x16, 0x2, 0x7a, 0x7c, 0x5, 0xc, 0x7, 0x2, 0x7b, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0x46, 0x24, 0x2, 0x7e, 0x80, 0x5, 
    0xc, 0x7, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x61, 0x3, 0x2, 0x2, 0x2, 0x81, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x69, 0x3, 0x2, 0x2, 0x2, 0x81, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x81, 0x75, 0x3, 0x2, 0x2, 0x2, 0x81, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x82, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x85, 0x7, 0x34, 0x2, 0x2, 0x84, 0x86, 0x5, 0x4, 
    0x3, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x35, 0x2, 0x2, 0x8a, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x7, 0x77, 0x2, 0x2, 0x8c, 0x8e, 
    0x5, 0x4, 0x3, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0xc, 0x2, 
    0x2, 0x92, 0x94, 0x3, 0x2, 0x2, 0x2, 0x93, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x94, 0x7, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x98, 0x5, 0x6, 0x4, 0x2, 0x96, 0x98, 0x5, 0x1a, 0xe, 0x2, 0x97, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0xc, 0x7, 0x2, 0x9a, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9c, 0x7, 0x78, 0x2, 0x2, 0x9c, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0xa2, 0x7, 0x2c, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x80, 0x2, 0x2, 
    0x9f, 0xa1, 0x7, 0x2c, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x8d, 0x2, 0x2, 0xa6, 0xab, 0x7, 0x2c, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x80, 0x2, 0x2, 0xa8, 0xaa, 0x7, 0x2c, 0x2, 
    0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb3, 
    0x5, 0x1a, 0xe, 0x2, 0xaf, 0xb0, 0x7, 0x82, 0x2, 0x2, 0xb0, 0xb2, 0x5, 
    0x1a, 0xe, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb6, 0xb7, 0x7, 0x2c, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x75, 0x2, 0x2, 0xb8, 
    0xbd, 0x5, 0x1a, 0xe, 0x2, 0xb9, 0xba, 0x7, 0x1b, 0x2, 0x2, 0xba, 0xbb, 
    0x7, 0x2c, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x1a, 0xe, 0x2, 0xbc, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbf, 0x5, 0xe, 0x8, 0x2, 0xbf, 0xc1, 0x7, 0x30, 0x2, 
    0x2, 0xc0, 0xc2, 0x5, 0x18, 0xd, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 
    0xc4, 0x7, 0x31, 0x2, 0x2, 0xc4, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xca, 
    0x5, 0x1a, 0xe, 0x2, 0xc6, 0xc7, 0x7, 0x82, 0x2, 0x2, 0xc7, 0xc9, 0x5, 
    0x1a, 0xe, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0x19, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xce, 0x8, 0xe, 0x1, 0x2, 0xce, 0xe4, 0x5, 0x14, 0xb, 0x2, 0xcf, 
    0xe4, 0x5, 0x16, 0xc, 0x2, 0xd0, 0xd1, 0x9, 0x2, 0x2, 0x2, 0xd1, 0xe4, 
    0x5, 0x1a, 0xe, 0x15, 0xd2, 0xd3, 0x5, 0x16, 0xc, 0x2, 0xd3, 0xd4, 0x7, 
    0x76, 0x2, 0x2, 0xd4, 0xd5, 0x5, 0x20, 0x11, 0x2, 0xd5, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x5, 0x22, 0x12, 0x2, 0xd7, 0xd8, 0x9, 0x3, 0x2, 
    0x2, 0xd8, 0xd9, 0x5, 0x20, 0x11, 0x2, 0xd9, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xe4, 0x5, 0x4e, 0x28, 0x2, 0xdb, 0xe4, 0x5, 0x48, 0x25, 0x2, 
    0xdc, 0xe4, 0x7, 0x2b, 0x2, 0x2, 0xdd, 0xe4, 0x7, 0x2d, 0x2, 0x2, 0xde, 
    0xe4, 0x5, 0xe, 0x8, 0x2, 0xdf, 0xe0, 0x7, 0x30, 0x2, 0x2, 0xe0, 0xe1, 
    0x5, 0x1a, 0xe, 0x2, 0xe1, 0xe2, 0x7, 0x31, 0x2, 0x2, 0xe2, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0x103, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0xc, 
    0x13, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x80, 0x2, 0x2, 0xe7, 0x102, 0x5, 0x1a, 
    0xe, 0x14, 0xe8, 0xe9, 0xc, 0x12, 0x2, 0x2, 0xe9, 0xea, 0x9, 0x4, 0x2, 
    0x2, 0xea, 0x102, 0x5, 0x1a, 0xe, 0x13, 0xeb, 0xec, 0xc, 0x11, 0x2, 
    0x2, 0xec, 0xed, 0x9, 0x5, 0x2, 0x2, 0xed, 0x102, 0x5, 0x1a, 0xe, 0x12, 
    0xee, 0xef, 0xc, 0x10, 0x2, 0x2, 0xef, 0xf0, 0x9, 0x5, 0x2, 0x2, 0xf0, 
    0x102, 0x5, 0x1a, 0xe, 0x11, 0xf1, 0xf2, 0xc, 0xf, 0x2, 0x2, 0xf2, 0xf3, 
    0x9, 0x6, 0x2, 0x2, 0xf3, 0x102, 0x5, 0x1a, 0xe, 0xf, 0xf4, 0xf5, 0xc, 
    0xe, 0x2, 0x2, 0xf5, 0xf6, 0x9, 0x7, 0x2, 0x2, 0xf6, 0x102, 0x5, 0x1a, 
    0xe, 0xf, 0xf7, 0xf8, 0xc, 0xd, 0x2, 0x2, 0xf8, 0xf9, 0x9, 0x8, 0x2, 
    0x2, 0xf9, 0x102, 0x5, 0x1a, 0xe, 0xe, 0xfa, 0xfb, 0xc, 0xc, 0x2, 0x2, 
    0xfb, 0xfc, 0x9, 0x9, 0x2, 0x2, 0xfc, 0x102, 0x5, 0x1a, 0xe, 0xd, 0xfd, 
    0xfe, 0xc, 0x14, 0x2, 0x2, 0xfe, 0x102, 0x5, 0x1c, 0xf, 0x2, 0xff, 0x100, 
    0xc, 0x8, 0x2, 0x2, 0x100, 0x102, 0x5, 0x52, 0x2a, 0x2, 0x101, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0x101, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x101, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0xee, 0x3, 0x2, 0x2, 0x2, 0x101, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x101, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x7, 0x46, 0x2, 0x2, 0x107, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
    0x9, 0xa, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x22, 0x12, 0x2, 0x10a, 0x10b, 
    0x5, 0x20, 0x11, 0x2, 0x10b, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x116, 
    0x5, 0x1a, 0xe, 0x2, 0x10d, 0x10f, 0x7, 0x34, 0x2, 0x2, 0x10e, 0x110, 
    0x5, 0x4, 0x3, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
    0x7, 0x35, 0x2, 0x2, 0x114, 0x116, 0x3, 0x2, 0x2, 0x2, 0x115, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x116, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x137, 0x7, 0x2c, 0x2, 0x2, 0x118, 0x11b, 0x7, 
    0x2c, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x80, 0x2, 0x2, 0x11a, 0x11c, 0x7, 
    0x2c, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x137, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 
    0x2c, 0x2, 0x2, 0x120, 0x121, 0x7, 0x30, 0x2, 0x2, 0x121, 0x122, 0x7, 
    0x2c, 0x2, 0x2, 0x122, 0x137, 0x7, 0x31, 0x2, 0x2, 0x123, 0x12c, 0x7, 
    0x30, 0x2, 0x2, 0x124, 0x129, 0x5, 0x24, 0x13, 0x2, 0x125, 0x126, 0x7, 
    0x82, 0x2, 0x2, 0x126, 0x128, 0x5, 0x24, 0x13, 0x2, 0x127, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x130, 0x7, 0x82, 0x2, 0x2, 0x12f, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x137, 0x7, 0x31, 0x2, 0x2, 0x132, 0x133, 0x7, 
    0x2c, 0x2, 0x2, 0x133, 0x134, 0x7, 0x32, 0x2, 0x2, 0x134, 0x135, 0x7, 
    0x2f, 0x2, 0x2, 0x135, 0x137, 0x7, 0x33, 0x2, 0x2, 0x136, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x136, 0x118, 0x3, 0x2, 0x2, 0x2, 0x136, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x136, 0x123, 0x3, 0x2, 0x2, 0x2, 0x136, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x137, 0x23, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x7, 0x66, 
    0x2, 0x2, 0x139, 0x13b, 0x5, 0xe, 0x8, 0x2, 0x13a, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x13d, 0x7, 0x7, 0x2, 0x2, 0x13d, 0x13f, 0x5, 0xe, 0x8, 
    0x2, 0x13e, 0x140, 0x9, 0xb, 0x2, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x157, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x142, 0x7, 0x7, 0x2, 0x2, 0x142, 0x143, 0x5, 0xe, 0x8, 
    0x2, 0x143, 0x144, 0x7, 0x9, 0x2, 0x2, 0x144, 0x145, 0x7, 0x2c, 0x2, 
    0x2, 0x145, 0x157, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0x7, 0x2, 
    0x2, 0x147, 0x149, 0x5, 0xe, 0x8, 0x2, 0x148, 0x14a, 0x7, 0xa, 0x2, 
    0x2, 0x149, 0x148, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x2c, 0x2, 
    0x2, 0x14c, 0x157, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x7, 0x2, 
    0x2, 0x14e, 0x150, 0x5, 0xe, 0x8, 0x2, 0x14f, 0x151, 0x7, 0xa, 0x2, 
    0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x5, 0x28, 0x15, 
    0x2, 0x153, 0x157, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x7, 0x7, 0x2, 
    0x2, 0x155, 0x157, 0x5, 0x48, 0x25, 0x2, 0x156, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x141, 0x3, 0x2, 0x2, 0x2, 0x156, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x27, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x7, 0x34, 0x2, 
    0x2, 0x159, 0x15e, 0x7, 0x2c, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x82, 0x2, 
    0x2, 0x15b, 0x15d, 0x7, 0x2c, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x35, 0x2, 
    0x2, 0x162, 0x29, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x7, 0x11, 0x2, 
    0x2, 0x164, 0x166, 0x7, 0x2c, 0x2, 0x2, 0x165, 0x167, 0x5, 0x2e, 0x18, 
    0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x172, 0x5, 0x30, 0x19, 
    0x2, 0x169, 0x16a, 0x7, 0x11, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x2c, 0x2, 
    0x2, 0x16b, 0x16d, 0x5, 0x2c, 0x17, 0x2, 0x16c, 0x16e, 0x5, 0x2e, 0x18, 
    0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x5, 0x30, 0x19, 
    0x2, 0x170, 0x172, 0x3, 0x2, 0x2, 0x2, 0x171, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x171, 0x169, 0x3, 0x2, 0x2, 0x2, 0x172, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x173, 0x174, 0x7, 0x12, 0x2, 0x2, 0x174, 0x185, 0x5, 0xe, 0x8, 0x2, 
    0x175, 0x176, 0x7, 0x30, 0x2, 0x2, 0x176, 0x177, 0x5, 0xe, 0x8, 0x2, 
    0x177, 0x178, 0x7, 0x31, 0x2, 0x2, 0x178, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x181, 0x7, 0x30, 0x2, 0x2, 0x17a, 0x17d, 0x5, 0xe, 0x8, 0x2, 
    0x17b, 0x17c, 0x7, 0x82, 0x2, 0x2, 0x17c, 0x17e, 0x5, 0xe, 0x8, 0x2, 
    0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x182, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17a, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x185, 0x7, 0x31, 0x2, 0x2, 0x184, 0x173, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x175, 0x3, 0x2, 0x2, 0x2, 0x184, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x9, 0xc, 0x2, 0x2, 0x187, 
    0x188, 0x5, 0xe, 0x8, 0x2, 0x188, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 
    0x7, 0x34, 0x2, 0x2, 0x18a, 0x18b, 0x5, 0x1a, 0xe, 0x2, 0x18b, 0x18c, 
    0x7, 0x35, 0x2, 0x2, 0x18c, 0x31, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 
    0x7, 0xe, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0x1a, 0xe, 0x2, 0x18f, 0x190, 
    0x5, 0xc, 0x7, 0x2, 0x190, 0x33, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x7, 
    0xd, 0x2, 0x2, 0x192, 0x193, 0x5, 0x1a, 0xe, 0x2, 0x193, 0x194, 0x5, 
    0xc, 0x7, 0x2, 0x194, 0x35, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0xb, 
    0x2, 0x2, 0x196, 0x197, 0x5, 0x1a, 0xe, 0x2, 0x197, 0x198, 0x5, 0xc, 
    0x7, 0x2, 0x198, 0x37, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x1c, 
    0x2, 0x2, 0x19a, 0x19b, 0x5, 0x3a, 0x1e, 0x2, 0x19b, 0x19d, 0x5, 0x8, 
    0x5, 0x2, 0x19c, 0x19e, 0x5, 0x3c, 0x1f, 0x2, 0x19d, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x1c, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x3a, 
    0x1e, 0x2, 0x1a1, 0x1a5, 0x5, 0x8, 0x5, 0x2, 0x1a2, 0x1a4, 0x5, 0x3e, 
    0x20, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 
    0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x3c, 0x1f, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x20, 0x2, 0x2, 0x1ac, 0x1ad, 0x5, 0x3a, 
    0x1e, 0x2, 0x1ad, 0x1ae, 0x5, 0x8, 0x5, 0x2, 0x1ae, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x1f, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x3a, 
    0x1e, 0x2, 0x1b1, 0x1b2, 0x5, 0x8, 0x5, 0x2, 0x1b2, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x199, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1b4, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b7, 0x7, 0x30, 
    0x2, 0x2, 0x1b6, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 
    0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ba, 0x5, 0x1a, 
    0xe, 0x2, 0x1b9, 0x1bb, 0x7, 0x31, 0x2, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x1bc, 0x1bd, 0x7, 0x1e, 0x2, 0x2, 0x1bd, 0x1be, 0x5, 0x8, 0x5, 
    0x2, 0x1be, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x7, 0x1e, 0x2, 
    0x2, 0x1c0, 0x1c1, 0x7, 0x1c, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0x3a, 0x1e, 
    0x2, 0x1c2, 0x1c4, 0x7, 0x1d, 0x2, 0x2, 0x1c3, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1c6, 0x5, 0x8, 0x5, 0x2, 0x1c6, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x1c7, 0x1c8, 0x7, 0x24, 0x2, 0x2, 0x1c8, 0x1c9, 0x5, 0x6, 0x4, 0x2, 
    0x1c9, 0x1ca, 0x5, 0x44, 0x23, 0x2, 0x1ca, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1cc, 0x7, 0x24, 0x2, 0x2, 0x1cc, 0x1cd, 0x5, 0x6, 0x4, 0x2, 
    0x1cd, 0x1cf, 0x5, 0x42, 0x22, 0x2, 0x1ce, 0x1d0, 0x5, 0x44, 0x23, 0x2, 
    0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1d3, 
    0x1d5, 0x7, 0x25, 0x2, 0x2, 0x1d4, 0x1d6, 0x7, 0x30, 0x2, 0x2, 0x1d5, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
    0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d9, 0x5, 0xe, 0x8, 0x2, 0x1d8, 
    0x1da, 0x7, 0x31, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 
    0x1dc, 0x5, 0x6, 0x4, 0x2, 0x1dc, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 
    0x7, 0x19, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x6, 0x4, 0x2, 0x1df, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x22, 0x2, 0x2, 0x1e1, 0x1e2, 
    0x7, 0x30, 0x2, 0x2, 0x1e2, 0x1e3, 0x5, 0x1a, 0xe, 0x2, 0x1e3, 0x1e4, 
    0x7, 0x82, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x1a, 0xe, 0x2, 0x1e5, 0x1e6, 
    0x7, 0x82, 0x2, 0x2, 0x1e6, 0x1e7, 0x5, 0x1a, 0xe, 0x2, 0x1e7, 0x1e8, 
    0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x31, 0x2, 0x2, 0x1e9, 0x1ea, 
    0x5, 0x8, 0x5, 0x2, 0x1ea, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 
    0x7, 0x22, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x2c, 0x2, 0x2, 0x1ed, 0x1ee, 
    0x7, 0x23, 0x2, 0x2, 0x1ee, 0x1ef, 0x5, 0x1a, 0xe, 0x2, 0x1ef, 0x1f0, 
    0x5, 0x8, 0x5, 0x2, 0x1f0, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 
    0x7, 0x26, 0x2, 0x2, 0x1f2, 0x1f3, 0x5, 0x3a, 0x1e, 0x2, 0x1f3, 0x1f4, 
    0x5, 0x8, 0x5, 0x2, 0x1f4, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 
    0x7, 0x27, 0x2, 0x2, 0x1f6, 0x1f8, 0x5, 0x8, 0x5, 0x2, 0x1f7, 0x1e0, 
    0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f1, 
    0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x1f9, 0x202, 0x7, 0x34, 0x2, 0x2, 0x1fa, 0x1ff, 0x5, 
    0x4a, 0x26, 0x2, 0x1fb, 0x1fc, 0x7, 0x82, 0x2, 0x2, 0x1fc, 0x1fe, 0x5, 
    0x4a, 0x26, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x201, 0x3, 
    0x2, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x203, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 
    0x2, 0x2, 0x2, 0x202, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 
    0x2, 0x2, 0x2, 0x203, 0x205, 0x3, 0x2, 0x2, 0x2, 0x204, 0x206, 0x7, 
    0x82, 0x2, 0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 
    0x2, 0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x7, 
    0x35, 0x2, 0x2, 0x208, 0x49, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x5, 
    0x4c, 0x27, 0x2, 0x20a, 0x20b, 0x7, 0x77, 0x2, 0x2, 0x20b, 0x20c, 0x5, 
    0x50, 0x29, 0x2, 0x20c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x211, 0x7, 
    0x2d, 0x2, 0x2, 0x20e, 0x211, 0x7, 0x2b, 0x2, 0x2, 0x20f, 0x211, 0x5, 
    0xe, 0x8, 0x2, 0x210, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 
    0x2, 0x2, 0x2, 0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x21d, 0x7, 0x32, 0x2, 0x2, 0x213, 0x21a, 0x5, 0x50, 
    0x29, 0x2, 0x214, 0x216, 0x7, 0x82, 0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x219, 0x5, 0x50, 0x29, 0x2, 0x218, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21e, 0x3, 0x2, 
    0x2, 0x2, 0x21c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 0x3, 0x2, 
    0x2, 0x2, 0x21f, 0x221, 0x7, 0x82, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 
    0x2, 0x2, 0x222, 0x223, 0x7, 0x33, 0x2, 0x2, 0x223, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x224, 0x228, 0x5, 0x1a, 0xe, 0x2, 0x225, 0x228, 0x5, 0x48, 
    0x25, 0x2, 0x226, 0x228, 0x5, 0x4e, 0x28, 0x2, 0x227, 0x224, 0x3, 0x2, 
    0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x51, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x32, 
    0x2, 0x2, 0x22a, 0x22f, 0x5, 0x54, 0x2b, 0x2, 0x22b, 0x22d, 0x7, 0x82, 
    0x2, 0x2, 0x22c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x230, 0x5, 0x54, 
    0x2b, 0x2, 0x22f, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 
    0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x7, 0x33, 
    0x2, 0x2, 0x234, 0x53, 0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 0x5, 0xe, 0x8, 
    0x2, 0x236, 0x238, 0x7, 0x2f, 0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x236, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23a, 0x3, 0x2, 0x2, 
    0x2, 0x239, 0x23b, 0x7, 0x77, 0x2, 0x2, 0x23a, 0x239, 0x3, 0x2, 0x2, 
    0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x23c, 0x23e, 0x9, 0x8, 0x2, 0x2, 0x23d, 0x23c, 0x3, 0x2, 0x2, 0x2, 
    0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x240, 0x7, 0x2f, 0x2, 0x2, 0x240, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x5b, 0x63, 0x67, 0x6b, 0x6f, 0x73, 0x77, 0x7b, 0x7f, 0x81, 0x87, 
    0x8f, 0x93, 0x97, 0xa2, 0xab, 0xb3, 0xbc, 0xc1, 0xca, 0xe3, 0x101, 0x103, 
    0x111, 0x115, 0x11d, 0x129, 0x12c, 0x12f, 0x136, 0x13a, 0x13f, 0x149, 
    0x150, 0x156, 0x15e, 0x166, 0x16d, 0x171, 0x17f, 0x181, 0x184, 0x19d, 
    0x1a5, 0x1a9, 0x1b3, 0x1b6, 0x1ba, 0x1c3, 0x1cf, 0x1d1, 0x1d5, 0x1d9, 
    0x1f7, 0x1ff, 0x202, 0x205, 0x210, 0x215, 0x21a, 0x21d, 0x220, 0x227, 
    0x22c, 0x231, 0x237, 0x23a, 0x23d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

NyarParser::Initializer NyarParser::_init;
