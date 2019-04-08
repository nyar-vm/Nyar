
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
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::Assign_mods)
      | (1ULL << NyarParser::If)
      | (1ULL << NyarParser::Try)
      | (1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::SYMBOL)
      | (1ULL << NyarParser::LS)
      | (1ULL << NyarParser::LM)
      | (1ULL << NyarParser::LL))) != 0) || _la == NyarParser::Semicolon) {
      setState(62);
      statement();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
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

NyarParser::EmptyStatementContext* NyarParser::StatementContext::emptyStatement() {
  return getRuleContext<NyarParser::EmptyStatementContext>(0);
}

NyarParser::BlockStatementContext* NyarParser::StatementContext::blockStatement() {
  return getRuleContext<NyarParser::BlockStatementContext>(0);
}

NyarParser::ExpressionStatementContext* NyarParser::StatementContext::expressionStatement() {
  return getRuleContext<NyarParser::ExpressionStatementContext>(0);
}

NyarParser::AssignStatementContext* NyarParser::StatementContext::assignStatement() {
  return getRuleContext<NyarParser::AssignStatementContext>(0);
}

NyarParser::IfStatementContext* NyarParser::StatementContext::ifStatement() {
  return getRuleContext<NyarParser::IfStatementContext>(0);
}

NyarParser::TryStatementContext* NyarParser::StatementContext::tryStatement() {
  return getRuleContext<NyarParser::TryStatementContext>(0);
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
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      emptyStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      blockStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
      expressionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(73);
      assignStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(74);
      ifStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(75);
      tryStatement();
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

//----------------- BlockStatementContext ------------------------------------------------------------------

NyarParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t NyarParser::BlockStatementContext::getRuleIndex() const {
  return NyarParser::RuleBlockStatement;
}

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

NyarParser::BlockStatementContext* NyarParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, NyarParser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(NyarParser::LL);
    setState(80); 
    _errHandler->sync(this);
    alt = 1 + 1;
    do {
      switch (alt) {
        case 1 + 1: {
              setState(79);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(82); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(84);
    match(NyarParser::RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_blockContext ------------------------------------------------------------------

NyarParser::Expr_blockContext::Expr_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::BlockStatementContext* NyarParser::Expr_blockContext::blockStatement() {
  return getRuleContext<NyarParser::BlockStatementContext>(0);
}

NyarParser::ExpressionContext* NyarParser::Expr_blockContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}


size_t NyarParser::Expr_blockContext::getRuleIndex() const {
  return NyarParser::RuleExpr_block;
}

void NyarParser::Expr_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_block(this);
}

void NyarParser::Expr_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_block(this);
}


antlrcpp::Any NyarParser::Expr_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitExpr_block(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::Expr_blockContext* NyarParser::expr_block() {
  Expr_blockContext *_localctx = _tracker.createInstance<Expr_blockContext>(_ctx, getState());
  enterRule(_localctx, 6, NyarParser::RuleExpr_block);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      blockStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
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

//----------------- EmptyStatementContext ------------------------------------------------------------------

NyarParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::EosContext* NyarParser::EmptyStatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::EmptyStatementContext::getRuleIndex() const {
  return NyarParser::RuleEmptyStatement;
}

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

NyarParser::EmptyStatementContext* NyarParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, NyarParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
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
    setState(92);
    match(NyarParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EolContext ------------------------------------------------------------------

NyarParser::EolContext::EolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::EosContext* NyarParser::EolContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::EolContext::getRuleIndex() const {
  return NyarParser::RuleEol;
}

void NyarParser::EolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEol(this);
}

void NyarParser::EolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEol(this);
}


antlrcpp::Any NyarParser::EolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitEol(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::EolContext* NyarParser::eol() {
  EolContext *_localctx = _tracker.createInstance<EolContext>(_ctx, getState());
  enterRule(_localctx, 12, NyarParser::RuleEol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::Semicolon: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        eos();
        break;
      }

      case NyarParser::T__0:
      case NyarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(100);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(96);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == NyarParser::T__0) {
            setState(95);
            match(NyarParser::T__0);
          }
          setState(98);
          match(NyarParser::T__1);
          break;
        }

        case 2: {
          setState(99);
          match(NyarParser::T__0);
          break;
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

//----------------- ExpressionStatementContext ------------------------------------------------------------------

NyarParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NyarParser::ExpressionContext *> NyarParser::ExpressionStatementContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::ExpressionStatementContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::ExpressionStatementContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::ExpressionStatementContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
}

NyarParser::EosContext* NyarParser::ExpressionStatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::ExpressionStatementContext::getRuleIndex() const {
  return NyarParser::RuleExpressionStatement;
}

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

NyarParser::ExpressionStatementContext* NyarParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, NyarParser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    expression(0);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::Comma) {
      setState(105);
      match(NyarParser::Comma);
      setState(106);
      expression(0);
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(112);
      eos();
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
//----------------- SymbolContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::SymbolContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}

NyarParser::SymbolContext::SymbolContext(ExpressionContext *ctx) { copyFrom(ctx); }

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
//----------------- Plus_LikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Plus_LikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Plus_LikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Plus_LikeContext::Add_ops() {
  return getToken(NyarParser::Add_ops, 0);
}

NyarParser::Plus_LikeContext::Plus_LikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Plus_LikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlus_Like(this);
}
void NyarParser::Plus_LikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlus_Like(this);
}

antlrcpp::Any NyarParser::Plus_LikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPlus_Like(this);
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
//----------------- List_LikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::List_LikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::List_LikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::List_LikeContext::List_ops() {
  return getToken(NyarParser::List_ops, 0);
}

NyarParser::List_LikeContext::List_LikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::List_LikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_Like(this);
}
void NyarParser::List_LikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_Like(this);
}

antlrcpp::Any NyarParser::List_LikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitList_Like(this);
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

NyarParser::AssignTupleContext* NyarParser::OperatorAssignContext::assignTuple() {
  return getRuleContext<NyarParser::AssignTupleContext>(0);
}

tree::TerminalNode* NyarParser::OperatorAssignContext::Assign_ops() {
  return getToken(NyarParser::Assign_ops, 0);
}

NyarParser::AssignableContext* NyarParser::OperatorAssignContext::assignable() {
  return getRuleContext<NyarParser::AssignableContext>(0);
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

tree::TerminalNode* NyarParser::PrefixExpressionContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::RS() {
  return getToken(NyarParser::RS, 0);
}

tree::TerminalNode* NyarParser::PrefixExpressionContext::Pre_ops() {
  return getToken(NyarParser::Pre_ops, 0);
}

NyarParser::ExpressionContext* NyarParser::PrefixExpressionContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
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
//----------------- Logic_LikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Logic_LikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Logic_LikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Logic_LikeContext::Logic_ops() {
  return getToken(NyarParser::Logic_ops, 0);
}

NyarParser::Logic_LikeContext::Logic_LikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Logic_LikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_Like(this);
}
void NyarParser::Logic_LikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_Like(this);
}

antlrcpp::Any NyarParser::Logic_LikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitLogic_Like(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Power_LikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Power_LikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Power_LikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Power_LikeContext::Pow_ops() {
  return getToken(NyarParser::Pow_ops, 0);
}

NyarParser::Power_LikeContext::Power_LikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Power_LikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPower_Like(this);
}
void NyarParser::Power_LikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPower_Like(this);
}

antlrcpp::Any NyarParser::Power_LikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPower_Like(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Multiply_LikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Multiply_LikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Multiply_LikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Multiply_LikeContext::Mul_ops() {
  return getToken(NyarParser::Mul_ops, 0);
}

NyarParser::Multiply_LikeContext::Multiply_LikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Multiply_LikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiply_Like(this);
}
void NyarParser::Multiply_LikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiply_Like(this);
}

antlrcpp::Any NyarParser::Multiply_LikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMultiply_Like(this);
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
//----------------- Binary_LikeContext ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Binary_LikeContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Binary_LikeContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Binary_LikeContext::Bit_ops() {
  return getToken(NyarParser::Bit_ops, 0);
}

NyarParser::Binary_LikeContext::Binary_LikeContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Binary_LikeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_Like(this);
}
void NyarParser::Binary_LikeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_Like(this);
}

antlrcpp::Any NyarParser::Binary_LikeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitBinary_Like(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TupleContext ------------------------------------------------------------------

NyarParser::TupleLiteralContext* NyarParser::TupleContext::tupleLiteral() {
  return getRuleContext<NyarParser::TupleLiteralContext>(0);
}

NyarParser::TupleContext::TupleContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::TupleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuple(this);
}
void NyarParser::TupleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuple(this);
}

antlrcpp::Any NyarParser::TupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTuple(this);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, NyarParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PrefixExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(116);
      match(NyarParser::LS);
      setState(117);
      dynamic_cast<PrefixExpressionContext *>(_localctx)->op = match(NyarParser::Pre_ops);
      setState(118);
      dynamic_cast<PrefixExpressionContext *>(_localctx)->right = expression(0);
      setState(119);
      match(NyarParser::RS);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OperatorAssignContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(121);
      dynamic_cast<OperatorAssignContext *>(_localctx)->id = assignTuple();
      setState(122);
      dynamic_cast<OperatorAssignContext *>(_localctx)->op = match(NyarParser::Assign_ops);
      setState(123);
      dynamic_cast<OperatorAssignContext *>(_localctx)->expr = assignable();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<TupleContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(125);
      dynamic_cast<TupleContext *>(_localctx)->data = tupleLiteral();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(126);
      dynamic_cast<ListContext *>(_localctx)->data = listLiteral();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<DictContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(127);
      dynamic_cast<DictContext *>(_localctx)->data = dictLiteral();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(128);
      dynamic_cast<StringContext *>(_localctx)->atom = match(NyarParser::STRING);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(129);
      dynamic_cast<NumberContext *>(_localctx)->atom = match(NyarParser::NUMBER);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<SymbolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(130);
      dynamic_cast<SymbolContext *>(_localctx)->atom = match(NyarParser::SYMBOL);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PriorityExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(131);
      match(NyarParser::LS);
      setState(132);
      expression(0);
      setState(133);
      match(NyarParser::RS);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(155);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Binary_LikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(137);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(138);
          dynamic_cast<Binary_LikeContext *>(_localctx)->op = match(NyarParser::Bit_ops);
          setState(139);
          dynamic_cast<Binary_LikeContext *>(_localctx)->right = expression(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Logic_LikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(140);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(141);
          dynamic_cast<Logic_LikeContext *>(_localctx)->op = match(NyarParser::Logic_ops);
          setState(142);
          dynamic_cast<Logic_LikeContext *>(_localctx)->right = expression(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Power_LikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(143);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(144);
          dynamic_cast<Power_LikeContext *>(_localctx)->op = match(NyarParser::Pow_ops);
          setState(145);
          dynamic_cast<Power_LikeContext *>(_localctx)->right = expression(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Multiply_LikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(146);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(147);
          dynamic_cast<Multiply_LikeContext *>(_localctx)->op = match(NyarParser::Mul_ops);
          setState(148);
          dynamic_cast<Multiply_LikeContext *>(_localctx)->right = expression(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Plus_LikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(149);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(150);
          dynamic_cast<Plus_LikeContext *>(_localctx)->op = match(NyarParser::Add_ops);
          setState(151);
          dynamic_cast<Plus_LikeContext *>(_localctx)->right = expression(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<List_LikeContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(152);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(153);
          dynamic_cast<List_LikeContext *>(_localctx)->op = match(NyarParser::List_ops);
          setState(154);
          dynamic_cast<List_LikeContext *>(_localctx)->right = expression(10);
          break;
        }

        } 
      }
      setState(159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
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

NyarParser::BlockStatementContext* NyarParser::AssignableContext::blockStatement() {
  return getRuleContext<NyarParser::BlockStatementContext>(0);
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
  enterRule(_localctx, 18, NyarParser::RuleAssignable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(160);
      expression(0);
      break;
    }

    case 2: {
      setState(161);
      blockStatement();
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

//----------------- AssignStatementContext ------------------------------------------------------------------

NyarParser::AssignStatementContext::AssignStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::AssignStatementContext::getRuleIndex() const {
  return NyarParser::RuleAssignStatement;
}

void NyarParser::AssignStatementContext::copyFrom(AssignStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ModifierAssignContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ModifierAssignContext::Assign_mods() {
  return getToken(NyarParser::Assign_mods, 0);
}

NyarParser::AssignTupleContext* NyarParser::ModifierAssignContext::assignTuple() {
  return getRuleContext<NyarParser::AssignTupleContext>(0);
}

NyarParser::AssignableContext* NyarParser::ModifierAssignContext::assignable() {
  return getRuleContext<NyarParser::AssignableContext>(0);
}

NyarParser::EosContext* NyarParser::ModifierAssignContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}

NyarParser::ModifierAssignContext::ModifierAssignContext(AssignStatementContext *ctx) { copyFrom(ctx); }

void NyarParser::ModifierAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifierAssign(this);
}
void NyarParser::ModifierAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifierAssign(this);
}

antlrcpp::Any NyarParser::ModifierAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModifierAssign(this);
  else
    return visitor->visitChildren(this);
}
NyarParser::AssignStatementContext* NyarParser::assignStatement() {
  AssignStatementContext *_localctx = _tracker.createInstance<AssignStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, NyarParser::RuleAssignStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AssignStatementContext *>(_tracker.createInstance<NyarParser::ModifierAssignContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(164);
    dynamic_cast<ModifierAssignContext *>(_localctx)->op = match(NyarParser::Assign_mods);
    setState(165);
    dynamic_cast<ModifierAssignContext *>(_localctx)->id = assignTuple();
    setState(166);
    dynamic_cast<ModifierAssignContext *>(_localctx)->expr = assignable();
    setState(168);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(167);
      eos();
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

//----------------- AssignTupleContext ------------------------------------------------------------------

NyarParser::AssignTupleContext::AssignTupleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::AssignTupleContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}

tree::TerminalNode* NyarParser::AssignTupleContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::AssignTupleContext::RS() {
  return getToken(NyarParser::RS, 0);
}

std::vector<NyarParser::AssignPassContext *> NyarParser::AssignTupleContext::assignPass() {
  return getRuleContexts<NyarParser::AssignPassContext>();
}

NyarParser::AssignPassContext* NyarParser::AssignTupleContext::assignPass(size_t i) {
  return getRuleContext<NyarParser::AssignPassContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::AssignTupleContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::AssignTupleContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
}


size_t NyarParser::AssignTupleContext::getRuleIndex() const {
  return NyarParser::RuleAssignTuple;
}

void NyarParser::AssignTupleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignTuple(this);
}

void NyarParser::AssignTupleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignTuple(this);
}


antlrcpp::Any NyarParser::AssignTupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignTuple(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::AssignTupleContext* NyarParser::assignTuple() {
  AssignTupleContext *_localctx = _tracker.createInstance<AssignTupleContext>(_ctx, getState());
  enterRule(_localctx, 22, NyarParser::RuleAssignTuple);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::SYMBOL: {
        setState(170);
        match(NyarParser::SYMBOL);
        break;
      }

      case NyarParser::LS: {
        setState(171);
        match(NyarParser::LS);
        setState(180);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NyarParser::SYMBOL || _la == NyarParser::Tilde) {
          setState(172);
          assignPass();
          setState(177);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(173);
              match(NyarParser::Comma);
              setState(174);
              assignPass(); 
            }
            setState(179);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
          }
        }
        setState(183);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NyarParser::Comma) {
          setState(182);
          match(NyarParser::Comma);
        }
        setState(185);
        match(NyarParser::RS);
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

//----------------- AssignPassContext ------------------------------------------------------------------

NyarParser::AssignPassContext::AssignPassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::AssignPassContext::Tilde() {
  return getToken(NyarParser::Tilde, 0);
}

tree::TerminalNode* NyarParser::AssignPassContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}


size_t NyarParser::AssignPassContext::getRuleIndex() const {
  return NyarParser::RuleAssignPass;
}

void NyarParser::AssignPassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignPass(this);
}

void NyarParser::AssignPassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignPass(this);
}


antlrcpp::Any NyarParser::AssignPassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAssignPass(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::AssignPassContext* NyarParser::assignPass() {
  AssignPassContext *_localctx = _tracker.createInstance<AssignPassContext>(_ctx, getState());
  enterRule(_localctx, 24, NyarParser::RuleAssignPass);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    _la = _input->LA(1);
    if (!(_la == NyarParser::SYMBOL || _la == NyarParser::Tilde)) {
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

//----------------- ModuleStatementContext ------------------------------------------------------------------

NyarParser::ModuleStatementContext::ModuleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ModuleStatementContext::Using() {
  return getToken(NyarParser::Using, 0);
}

tree::TerminalNode* NyarParser::ModuleStatementContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}

tree::TerminalNode* NyarParser::ModuleStatementContext::As() {
  return getToken(NyarParser::As, 0);
}

tree::TerminalNode* NyarParser::ModuleStatementContext::STRING() {
  return getToken(NyarParser::STRING, 0);
}

tree::TerminalNode* NyarParser::ModuleStatementContext::With() {
  return getToken(NyarParser::With, 0);
}

tree::TerminalNode* NyarParser::ModuleStatementContext::Expose() {
  return getToken(NyarParser::Expose, 0);
}


size_t NyarParser::ModuleStatementContext::getRuleIndex() const {
  return NyarParser::RuleModuleStatement;
}

void NyarParser::ModuleStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleStatement(this);
}

void NyarParser::ModuleStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleStatement(this);
}


antlrcpp::Any NyarParser::ModuleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitModuleStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ModuleStatementContext* NyarParser::moduleStatement() {
  ModuleStatementContext *_localctx = _tracker.createInstance<ModuleStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, NyarParser::RuleModuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(190);
      match(NyarParser::Using);
      setState(191);
      dynamic_cast<ModuleStatementContext *>(_localctx)->core = match(NyarParser::SYMBOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
      match(NyarParser::Using);
      setState(193);
      dynamic_cast<ModuleStatementContext *>(_localctx)->source = match(NyarParser::STRING);
      setState(194);
      match(NyarParser::As);
      setState(195);
      dynamic_cast<ModuleStatementContext *>(_localctx)->name = match(NyarParser::SYMBOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(196);
      match(NyarParser::Using);
      setState(197);
      dynamic_cast<ModuleStatementContext *>(_localctx)->source = match(NyarParser::STRING);
      setState(198);
      match(NyarParser::With);
      setState(199);
      dynamic_cast<ModuleStatementContext *>(_localctx)->name = match(NyarParser::SYMBOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(200);
      match(NyarParser::Expose);
      setState(201);
      dynamic_cast<ModuleStatementContext *>(_localctx)->source = match(NyarParser::STRING);
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

//----------------- MacroStatementContext ------------------------------------------------------------------

NyarParser::MacroStatementContext::MacroStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::MacroStatementContext::Macro() {
  return getToken(NyarParser::Macro, 0);
}

NyarParser::ExpressionContext* NyarParser::MacroStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EosContext* NyarParser::MacroStatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::MacroStatementContext::getRuleIndex() const {
  return NyarParser::RuleMacroStatement;
}

void NyarParser::MacroStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacroStatement(this);
}

void NyarParser::MacroStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacroStatement(this);
}


antlrcpp::Any NyarParser::MacroStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMacroStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::MacroStatementContext* NyarParser::macroStatement() {
  MacroStatementContext *_localctx = _tracker.createInstance<MacroStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, NyarParser::RuleMacroStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(NyarParser::Macro);
    setState(205);
    expression(0);
    setState(206);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateStatementContext ------------------------------------------------------------------

NyarParser::TemplateStatementContext::TemplateStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::TemplateStatementContext::Template() {
  return getToken(NyarParser::Template, 0);
}

NyarParser::ExpressionContext* NyarParser::TemplateStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EolContext* NyarParser::TemplateStatementContext::eol() {
  return getRuleContext<NyarParser::EolContext>(0);
}


size_t NyarParser::TemplateStatementContext::getRuleIndex() const {
  return NyarParser::RuleTemplateStatement;
}

void NyarParser::TemplateStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateStatement(this);
}

void NyarParser::TemplateStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateStatement(this);
}


antlrcpp::Any NyarParser::TemplateStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTemplateStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::TemplateStatementContext* NyarParser::templateStatement() {
  TemplateStatementContext *_localctx = _tracker.createInstance<TemplateStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, NyarParser::RuleTemplateStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(NyarParser::Template);
    setState(209);
    expression(0);
    setState(210);
    eol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceStatementContext ------------------------------------------------------------------

NyarParser::InterfaceStatementContext::InterfaceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::InterfaceStatementContext::Interface() {
  return getToken(NyarParser::Interface, 0);
}

NyarParser::ExpressionContext* NyarParser::InterfaceStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EolContext* NyarParser::InterfaceStatementContext::eol() {
  return getRuleContext<NyarParser::EolContext>(0);
}


size_t NyarParser::InterfaceStatementContext::getRuleIndex() const {
  return NyarParser::RuleInterfaceStatement;
}

void NyarParser::InterfaceStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceStatement(this);
}

void NyarParser::InterfaceStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceStatement(this);
}


antlrcpp::Any NyarParser::InterfaceStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitInterfaceStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::InterfaceStatementContext* NyarParser::interfaceStatement() {
  InterfaceStatementContext *_localctx = _tracker.createInstance<InterfaceStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, NyarParser::RuleInterfaceStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(NyarParser::Interface);
    setState(213);
    expression(0);
    setState(214);
    eol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassStatementContext ------------------------------------------------------------------

NyarParser::ClassStatementContext::ClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ClassStatementContext::Class() {
  return getToken(NyarParser::Class, 0);
}

NyarParser::ExpressionContext* NyarParser::ClassStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::EolContext* NyarParser::ClassStatementContext::eol() {
  return getRuleContext<NyarParser::EolContext>(0);
}


size_t NyarParser::ClassStatementContext::getRuleIndex() const {
  return NyarParser::RuleClassStatement;
}

void NyarParser::ClassStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassStatement(this);
}

void NyarParser::ClassStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassStatement(this);
}


antlrcpp::Any NyarParser::ClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitClassStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ClassStatementContext* NyarParser::classStatement() {
  ClassStatementContext *_localctx = _tracker.createInstance<ClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, NyarParser::RuleClassStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(NyarParser::Class);
    setState(217);
    expression(0);
    setState(218);
    eol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

NyarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::IfStatementContext::If() {
  return getToken(NyarParser::If, 0);
}

NyarParser::ConditionContext* NyarParser::IfStatementContext::condition() {
  return getRuleContext<NyarParser::ConditionContext>(0);
}

NyarParser::ElseifContext* NyarParser::IfStatementContext::elseif() {
  return getRuleContext<NyarParser::ElseifContext>(0);
}

tree::TerminalNode* NyarParser::IfStatementContext::Else() {
  return getToken(NyarParser::Else, 0);
}

NyarParser::Expr_blockContext* NyarParser::IfStatementContext::expr_block() {
  return getRuleContext<NyarParser::Expr_blockContext>(0);
}

NyarParser::EosContext* NyarParser::IfStatementContext::eos() {
  return getRuleContext<NyarParser::EosContext>(0);
}


size_t NyarParser::IfStatementContext::getRuleIndex() const {
  return NyarParser::RuleIfStatement;
}

void NyarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void NyarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any NyarParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::IfStatementContext* NyarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, NyarParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(NyarParser::If);
    setState(221);
    condition();
    setState(222);
    elseif();
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Else) {
      setState(223);
      match(NyarParser::Else);
      setState(224);
      expr_block();
    }
    setState(228);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(227);
      eos();
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

//----------------- ElseifContext ------------------------------------------------------------------

NyarParser::ElseifContext::ElseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NyarParser::ElseifContext::Else() {
  return getTokens(NyarParser::Else);
}

tree::TerminalNode* NyarParser::ElseifContext::Else(size_t i) {
  return getToken(NyarParser::Else, i);
}

std::vector<tree::TerminalNode *> NyarParser::ElseifContext::If() {
  return getTokens(NyarParser::If);
}

tree::TerminalNode* NyarParser::ElseifContext::If(size_t i) {
  return getToken(NyarParser::If, i);
}

std::vector<NyarParser::ConditionContext *> NyarParser::ElseifContext::condition() {
  return getRuleContexts<NyarParser::ConditionContext>();
}

NyarParser::ConditionContext* NyarParser::ElseifContext::condition(size_t i) {
  return getRuleContext<NyarParser::ConditionContext>(i);
}


size_t NyarParser::ElseifContext::getRuleIndex() const {
  return NyarParser::RuleElseif;
}

void NyarParser::ElseifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseif(this);
}

void NyarParser::ElseifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseif(this);
}


antlrcpp::Any NyarParser::ElseifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitElseif(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ElseifContext* NyarParser::elseif() {
  ElseifContext *_localctx = _tracker.createInstance<ElseifContext>(_ctx, getState());
  enterRule(_localctx, 38, NyarParser::RuleElseif);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(235);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(230);
        match(NyarParser::Else);
        setState(231);
        match(NyarParser::If);
        setState(232);
        condition(); 
      }
      setState(237);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

NyarParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::ExpressionContext* NyarParser::ConditionContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

NyarParser::Expr_blockContext* NyarParser::ConditionContext::expr_block() {
  return getRuleContext<NyarParser::Expr_blockContext>(0);
}

tree::TerminalNode* NyarParser::ConditionContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::ConditionContext::RS() {
  return getToken(NyarParser::RS, 0);
}


size_t NyarParser::ConditionContext::getRuleIndex() const {
  return NyarParser::RuleCondition;
}

void NyarParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void NyarParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any NyarParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ConditionContext* NyarParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 40, NyarParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(238);
      match(NyarParser::LS);
      break;
    }

    }
    setState(241);
    expression(0);
    setState(242);
    expr_block();
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::RS) {
      setState(243);
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

//----------------- TryStatementContext ------------------------------------------------------------------

NyarParser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::TryStatementContext::Try() {
  return getToken(NyarParser::Try, 0);
}

NyarParser::BlockStatementContext* NyarParser::TryStatementContext::blockStatement() {
  return getRuleContext<NyarParser::BlockStatementContext>(0);
}

NyarParser::FinalProductionContext* NyarParser::TryStatementContext::finalProduction() {
  return getRuleContext<NyarParser::FinalProductionContext>(0);
}

NyarParser::CatchProductionContext* NyarParser::TryStatementContext::catchProduction() {
  return getRuleContext<NyarParser::CatchProductionContext>(0);
}


size_t NyarParser::TryStatementContext::getRuleIndex() const {
  return NyarParser::RuleTryStatement;
}

void NyarParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void NyarParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}


antlrcpp::Any NyarParser::TryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTryStatement(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::TryStatementContext* NyarParser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, NyarParser::RuleTryStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(256);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(246);
      match(NyarParser::Try);
      setState(247);
      blockStatement();
      setState(248);
      finalProduction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(250);
      match(NyarParser::Try);
      setState(251);
      blockStatement();

      setState(252);
      catchProduction();
      setState(254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Final) {
        setState(253);
        finalProduction();
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

tree::TerminalNode* NyarParser::CatchProductionContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}

NyarParser::BlockStatementContext* NyarParser::CatchProductionContext::blockStatement() {
  return getRuleContext<NyarParser::BlockStatementContext>(0);
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
  enterRule(_localctx, 44, NyarParser::RuleCatchProduction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(NyarParser::Catch);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::LS) {
      setState(259);
      match(NyarParser::LS);
    }
    setState(262);
    match(NyarParser::SYMBOL);
    setState(264);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::RS) {
      setState(263);
      match(NyarParser::RS);
    }
    setState(266);
    blockStatement();
   
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

NyarParser::BlockStatementContext* NyarParser::FinalProductionContext::blockStatement() {
  return getRuleContext<NyarParser::BlockStatementContext>(0);
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
  enterRule(_localctx, 46, NyarParser::RuleFinalProduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(NyarParser::Final);
    setState(269);
    blockStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleLiteralContext ------------------------------------------------------------------

NyarParser::TupleLiteralContext::TupleLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::TupleLiteralContext::LS() {
  return getToken(NyarParser::LS, 0);
}

tree::TerminalNode* NyarParser::TupleLiteralContext::RS() {
  return getToken(NyarParser::RS, 0);
}

std::vector<NyarParser::SingleContext *> NyarParser::TupleLiteralContext::single() {
  return getRuleContexts<NyarParser::SingleContext>();
}

NyarParser::SingleContext* NyarParser::TupleLiteralContext::single(size_t i) {
  return getRuleContext<NyarParser::SingleContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::TupleLiteralContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::TupleLiteralContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
}


size_t NyarParser::TupleLiteralContext::getRuleIndex() const {
  return NyarParser::RuleTupleLiteral;
}

void NyarParser::TupleLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleLiteral(this);
}

void NyarParser::TupleLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleLiteral(this);
}


antlrcpp::Any NyarParser::TupleLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitTupleLiteral(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::TupleLiteralContext* NyarParser::tupleLiteral() {
  TupleLiteralContext *_localctx = _tracker.createInstance<TupleLiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, NyarParser::RuleTupleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(NyarParser::LS);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::BOOL)
      | (1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::STRING))) != 0)) {
      setState(272);
      single();
      setState(277);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(273);
          match(NyarParser::Comma);
          setState(274);
          single(); 
        }
        setState(279);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
      }
    }
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Comma) {
      setState(282);
      match(NyarParser::Comma);
    }
    setState(285);
    match(NyarParser::RS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleContext ------------------------------------------------------------------

NyarParser::SingleContext::SingleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::SingleContext::STRING() {
  return getToken(NyarParser::STRING, 0);
}

tree::TerminalNode* NyarParser::SingleContext::NUMBER() {
  return getToken(NyarParser::NUMBER, 0);
}

tree::TerminalNode* NyarParser::SingleContext::BOOL() {
  return getToken(NyarParser::BOOL, 0);
}


size_t NyarParser::SingleContext::getRuleIndex() const {
  return NyarParser::RuleSingle;
}

void NyarParser::SingleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle(this);
}

void NyarParser::SingleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle(this);
}


antlrcpp::Any NyarParser::SingleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitSingle(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::SingleContext* NyarParser::single() {
  SingleContext *_localctx = _tracker.createInstance<SingleContext>(_ctx, getState());
  enterRule(_localctx, 50, NyarParser::RuleSingle);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::BOOL)
      | (1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::STRING))) != 0))) {
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

std::vector<tree::TerminalNode *> NyarParser::DictLiteralContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::DictLiteralContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
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
  enterRule(_localctx, 52, NyarParser::RuleDictLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(NyarParser::LL);
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::SYMBOL))) != 0)) {
      setState(290);
      keyvalue();
      setState(295);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(291);
          match(NyarParser::Comma);
          setState(292);
          keyvalue(); 
        }
        setState(297);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      }
    }
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Comma) {
      setState(300);
      match(NyarParser::Comma);
    }
    setState(303);
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

NyarParser::ElementContext* NyarParser::KeyvalueContext::element() {
  return getRuleContext<NyarParser::ElementContext>(0);
}

tree::TerminalNode* NyarParser::KeyvalueContext::NUMBER() {
  return getToken(NyarParser::NUMBER, 0);
}

tree::TerminalNode* NyarParser::KeyvalueContext::STRING() {
  return getToken(NyarParser::STRING, 0);
}

tree::TerminalNode* NyarParser::KeyvalueContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
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
  enterRule(_localctx, 54, NyarParser::RuleKeyvalue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::SYMBOL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(306);
    match(NyarParser::Colon);
    setState(307);
    element();
   
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

std::vector<tree::TerminalNode *> NyarParser::ListLiteralContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::ListLiteralContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
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
  enterRule(_localctx, 56, NyarParser::RuleListLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(NyarParser::LM);
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::NUMBER)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::SYMBOL)
      | (1ULL << NyarParser::LS)
      | (1ULL << NyarParser::LM)
      | (1ULL << NyarParser::LL))) != 0)) {
      setState(310);
      element();
      setState(317);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(312);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == NyarParser::Comma) {
            setState(311);
            match(NyarParser::Comma);
          }
          setState(314);
          element(); 
        }
        setState(319);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
      }
    }
    setState(323);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Comma) {
      setState(322);
      match(NyarParser::Comma);
    }
    setState(325);
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
  enterRule(_localctx, 58, NyarParser::RuleElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(327);
      expression(0);
      break;
    }

    case 2: {
      setState(328);
      dictLiteral();
      break;
    }

    case 3: {
      setState(329);
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
  enterRule(_localctx, 60, NyarParser::RuleSignedInteger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::Plus

    || _la == NyarParser::Minus) {
      setState(332);
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
    setState(335);
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
    case 8: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NyarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);

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
  "program", "statement", "blockStatement", "expr_block", "emptyStatement", 
  "eos", "eol", "expressionStatement", "expression", "assignable", "assignStatement", 
  "assignTuple", "assignPass", "moduleStatement", "macroStatement", "templateStatement", 
  "interfaceStatement", "classStatement", "ifStatement", "elseif", "condition", 
  "tryStatement", "catchProduction", "finalProduction", "tupleLiteral", 
  "single", "dictLiteral", "keyvalue", "listLiteral", "element", "signedInteger"
};

std::vector<std::string> NyarParser::_literalNames = {
  "", "'\r'", "'\n'", "", "", "", "", "", "", "", "'use'", "'expose'", "'with'", 
  "'as'", "'macro'", "'template'", "'interface'", "'class'", "'extends'", 
  "'mixin'", "'setter'", "'getter'", "'public'", "'private'", "'protected'", 
  "'final'", "'let'", "'true'", "'false'", "'if'", "'else'", "'try'", "'catch'", 
  "'for'", "'in'", "", "", "", "", "", "", "", "", "", "", "", "", "", "'('", 
  "')'", "'['", "']'", "'{'", "'}'", "'\u2308'", "'\u2309'", "'\u230A'", 
  "'\u230B'", "", "", "", "", "", "", "'<='", "'<'", "", "", "'>='", "'>'", 
  "'++'", "'+='", "'+'", "'--'", "'-='", "", "'-'", "'***'", "'**'", "'*'", 
  "'//'", "'/'", "'\u00B0'", "'\u00F7'", "'%%%'", "'%%'", "'%'", "'^^'", 
  "'^'", "'\u221A'", "'==='", "'=!='", "'=='", "", "'='", "", "'|'", "", 
  "'#!'", "'$$'", "'$'", "'@@@'", "'@@'", "'@='", "'@'", "", "':'", "';'", 
  "'`'", "'\u00B4'", "", "", "'...'", "'.='", "'.'", "','", "'''", "'/@'", 
  "'//@'", "'~~'", "'~='", "'~'", "'\u00D7'", "'\u2297'", "'\u2299'", "'\u00A7'", 
  "'\u00B6'", "'\u00A4'"
};

std::vector<std::string> NyarParser::_symbolicNames = {
  "", "", "", "Assign_ops", "Lazy_assign", "Assign_mods", "LineComment", 
  "PartComment", "WhiteSpace", "NewLine", "Using", "Expose", "With", "As", 
  "Macro", "Template", "Interface", "Class", "Extends", "Mixin", "Setter", 
  "Getter", "Public", "Private", "Protected", "Final", "Let", "True", "False", 
  "If", "Else", "Try", "Catch", "For", "In", "BOOL", "NUMBER", "STRING", 
  "SYMBOL", "Integer", "Float", "Add_ops", "Bit_ops", "Logic_ops", "Pow_ops", 
  "Mul_ops", "List_ops", "Pre_ops", "LS", "RS", "LM", "RM", "LL", "RL", 
  "LCeil", "RCeil", "LFloor", "RFloor", "LAngle", "RAngle", "LQuote", "RQuote", 
  "Import", "LeftShift", "LessEqual", "Less", "Export", "RightShift", "GraterEqual", 
  "Grater", "Increase", "PlusTo", "Plus", "Decrease", "MinusFrom", "To", 
  "Minus", "NullSequence", "Sequence", "Times", "Remainder", "Divide", "Degree", 
  "Quotient", "Comment", "Output", "Mod", "BaseInput", "Power", "Surd", 
  "Equivalent", "NotEquivalent", "Equal", "Infer", "Assign", "Bar2", "Bar", 
  "DelayedAssign", "Shebang", "PostfixFunction", "AnonymousFunction", "Curry", 
  "Apply", "LetAssign", "At", "Type", "Colon", "Semicolon", "Quote", "Acute", 
  "NotEqual", "Not", "Ellipsis", "FinalAssign", "Dot", "Comma", "Quotation", 
  "Map", "MapAll", "Concat", "Destruct", "Tilde", "Multiply", "Kronecker", 
  "TensorProduct", "Section", "Pilcrow", "Currency"
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
    0x3, 0x81, 0x154, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x7, 0x2, 0x42, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x45, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4f, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x53, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 
    0x54, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x5b, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x63, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x67, 0xa, 0x8, 0x5, 0x8, 
    0x69, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x6e, 0xa, 0x9, 
    0xc, 0x9, 0xe, 0x9, 0x71, 0xb, 0x9, 0x3, 0x9, 0x5, 0x9, 0x74, 0xa, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x8a, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x9e, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xa1, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0xa5, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xab, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 
    0xd, 0xb2, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xb5, 0xb, 0xd, 0x5, 0xd, 0xb7, 
    0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0xba, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0xbd, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0xcd, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe4, 
    0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe7, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0xec, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xef, 0xb, 
    0x15, 0x3, 0x16, 0x5, 0x16, 0xf2, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0xf7, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x101, 
    0xa, 0x17, 0x5, 0x17, 0x103, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x107, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x10b, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x116, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x119, 0xb, 0x1a, 0x5, 0x1a, 0x11b, 0xa, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x11e, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x128, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x12b, 0xb, 0x1c, 0x5, 0x1c, 0x12d, 0xa, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x130, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
    0x1e, 0x13b, 0xa, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x13e, 0xa, 0x1e, 0xc, 
    0x1e, 0xe, 0x1e, 0x141, 0xb, 0x1e, 0x5, 0x1e, 0x143, 0xa, 0x1e, 0x3, 
    0x1e, 0x5, 0x1e, 0x146, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x14d, 0xa, 0x1f, 0x3, 0x20, 0x5, 0x20, 
    0x150, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x54, 0x3, 0x12, 
    0x21, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x2, 0x6, 0x4, 0x2, 0x28, 
    0x28, 0x7b, 0x7b, 0x3, 0x2, 0x25, 0x27, 0x3, 0x2, 0x26, 0x28, 0x4, 0x2, 
    0x4a, 0x4a, 0x4e, 0x4e, 0x2, 0x16e, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x50, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x68, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x89, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xda, 0x3, 0x2, 0x2, 0x2, 0x26, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xed, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x102, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x32, 0x111, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x121, 0x3, 0x2, 0x2, 0x2, 0x36, 0x123, 0x3, 0x2, 0x2, 0x2, 0x38, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x137, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x4, 
    0x3, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x46, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x7, 0x2, 0x2, 0x3, 0x47, 0x3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4f, 
    0x5, 0xa, 0x6, 0x2, 0x49, 0x4f, 0x5, 0x6, 0x4, 0x2, 0x4a, 0x4f, 0x5, 
    0x10, 0x9, 0x2, 0x4b, 0x4f, 0x5, 0x16, 0xc, 0x2, 0x4c, 0x4f, 0x5, 0x26, 
    0x14, 0x2, 0x4d, 0x4f, 0x5, 0x2c, 0x17, 0x2, 0x4e, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 
    0x7, 0x36, 0x2, 0x2, 0x51, 0x53, 0x5, 0x4, 0x3, 0x2, 0x52, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x57, 0x7, 0x37, 0x2, 0x2, 0x57, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x5b, 0x5, 0x6, 0x4, 0x2, 0x59, 0x5b, 0x5, 0x12, 0xa, 0x2, 0x5a, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0xc, 0x7, 0x2, 0x5d, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x6d, 0x2, 0x2, 0x5f, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x69, 0x5, 0xc, 0x7, 0x2, 0x61, 0x63, 0x7, 0x3, 0x2, 
    0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x7, 0x4, 0x2, 0x2, 0x65, 
    0x67, 0x7, 0x3, 0x2, 0x2, 0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x6f, 0x5, 0x12, 0xa, 0x2, 0x6b, 0x6c, 0x7, 0x75, 0x2, 
    0x2, 0x6c, 0x6e, 0x5, 0x12, 0xa, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x5, 0xc, 0x7, 0x2, 0x73, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x76, 0x8, 0xa, 0x1, 0x2, 0x76, 0x77, 0x7, 0x32, 0x2, 
    0x2, 0x77, 0x78, 0x7, 0x31, 0x2, 0x2, 0x78, 0x79, 0x5, 0x12, 0xa, 0x2, 
    0x79, 0x7a, 0x7, 0x33, 0x2, 0x2, 0x7a, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7c, 0x5, 0x18, 0xd, 0x2, 0x7c, 0x7d, 0x7, 0x5, 0x2, 0x2, 0x7d, 0x7e, 
    0x5, 0x14, 0xb, 0x2, 0x7e, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x8a, 0x5, 
    0x32, 0x1a, 0x2, 0x80, 0x8a, 0x5, 0x3a, 0x1e, 0x2, 0x81, 0x8a, 0x5, 
    0x36, 0x1c, 0x2, 0x82, 0x8a, 0x7, 0x27, 0x2, 0x2, 0x83, 0x8a, 0x7, 0x26, 
    0x2, 0x2, 0x84, 0x8a, 0x7, 0x28, 0x2, 0x2, 0x85, 0x86, 0x7, 0x32, 0x2, 
    0x2, 0x86, 0x87, 0x5, 0x12, 0xa, 0x2, 0x87, 0x88, 0x7, 0x33, 0x2, 0x2, 
    0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x75, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x89, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x81, 0x3, 0x2, 0x2, 0x2, 0x89, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x83, 0x3, 0x2, 0x2, 0x2, 0x89, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8c, 0xc, 0x10, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x2c, 0x2, 0x2, 
    0x8d, 0x9e, 0x5, 0x12, 0xa, 0x11, 0x8e, 0x8f, 0xc, 0xf, 0x2, 0x2, 0x8f, 
    0x90, 0x7, 0x2d, 0x2, 0x2, 0x90, 0x9e, 0x5, 0x12, 0xa, 0x10, 0x91, 0x92, 
    0xc, 0xe, 0x2, 0x2, 0x92, 0x93, 0x7, 0x2e, 0x2, 0x2, 0x93, 0x9e, 0x5, 
    0x12, 0xa, 0xe, 0x94, 0x95, 0xc, 0xd, 0x2, 0x2, 0x95, 0x96, 0x7, 0x2f, 
    0x2, 0x2, 0x96, 0x9e, 0x5, 0x12, 0xa, 0xe, 0x97, 0x98, 0xc, 0xc, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0x2b, 0x2, 0x2, 0x99, 0x9e, 0x5, 0x12, 0xa, 0xd, 
    0x9a, 0x9b, 0xc, 0xb, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x30, 0x2, 0x2, 0x9c, 
    0x9e, 0x5, 0x12, 0xa, 0xc, 0x9d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x91, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x94, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x5, 0x12, 0xa, 0x2, 0xa3, 
    0xa5, 0x5, 0x6, 0x4, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 
    0x7, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x18, 0xd, 0x2, 0xa8, 0xaa, 0x5, 0x14, 
    0xb, 0x2, 0xa9, 0xab, 0x5, 0xc, 0x7, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xbd, 0x7, 0x28, 0x2, 0x2, 0xad, 0xb6, 0x7, 0x32, 0x2, 0x2, 0xae, 
    0xb3, 0x5, 0x1a, 0xe, 0x2, 0xaf, 0xb0, 0x7, 0x75, 0x2, 0x2, 0xb0, 0xb2, 
    0x5, 0x1a, 0xe, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x7, 0x75, 0x2, 0x2, 0xb9, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x7, 0x33, 0x2, 0x2, 0xbc, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0xad, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbf, 0x9, 0x2, 0x2, 0x2, 0xbf, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xc1, 0x7, 0xc, 0x2, 0x2, 0xc1, 0xcd, 0x7, 0x28, 0x2, 0x2, 
    0xc2, 0xc3, 0x7, 0xc, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x27, 0x2, 0x2, 0xc4, 
    0xc5, 0x7, 0xf, 0x2, 0x2, 0xc5, 0xcd, 0x7, 0x28, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0xc, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x27, 0x2, 0x2, 0xc8, 0xc9, 0x7, 
    0xe, 0x2, 0x2, 0xc9, 0xcd, 0x7, 0x28, 0x2, 0x2, 0xca, 0xcb, 0x7, 0xd, 
    0x2, 0x2, 0xcb, 0xcd, 0x7, 0x27, 0x2, 0x2, 0xcc, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcf, 0x7, 0x10, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x12, 0xa, 0x2, 0xd0, 0xd1, 
    0x5, 0xc, 0x7, 0x2, 0xd1, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 
    0x11, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x12, 0xa, 0x2, 0xd4, 0xd5, 0x5, 0xe, 
    0x8, 0x2, 0xd5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x12, 0x2, 
    0x2, 0xd7, 0xd8, 0x5, 0x12, 0xa, 0x2, 0xd8, 0xd9, 0x5, 0xe, 0x8, 0x2, 
    0xd9, 0x23, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x13, 0x2, 0x2, 0xdb, 
    0xdc, 0x5, 0x12, 0xa, 0x2, 0xdc, 0xdd, 0x5, 0xe, 0x8, 0x2, 0xdd, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x1f, 0x2, 0x2, 0xdf, 0xe0, 0x5, 
    0x2a, 0x16, 0x2, 0xe0, 0xe3, 0x5, 0x28, 0x15, 0x2, 0xe1, 0xe2, 0x7, 
    0x20, 0x2, 0x2, 0xe2, 0xe4, 0x5, 0x8, 0x5, 0x2, 0xe3, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe7, 0x5, 0xc, 0x7, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe9, 0x7, 0x20, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x1f, 0x2, 0x2, 0xea, 0xec, 
    0x5, 0x2a, 0x16, 0x2, 0xeb, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xec, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0x29, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf2, 0x7, 0x32, 0x2, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x5, 0x12, 0xa, 0x2, 0xf4, 0xf6, 0x5, 0x8, 0x5, 0x2, 0xf5, 0xf7, 
    0x7, 0x33, 0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x21, 
    0x2, 0x2, 0xf9, 0xfa, 0x5, 0x6, 0x4, 0x2, 0xfa, 0xfb, 0x5, 0x30, 0x19, 
    0x2, 0xfb, 0x103, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x21, 0x2, 0x2, 
    0xfd, 0xfe, 0x5, 0x6, 0x4, 0x2, 0xfe, 0x100, 0x5, 0x2e, 0x18, 0x2, 0xff, 
    0x101, 0x5, 0x30, 0x19, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x102, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x103, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x7, 0x22, 0x2, 0x2, 0x105, 0x107, 
    0x7, 0x32, 0x2, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 
    0x7, 0x28, 0x2, 0x2, 0x109, 0x10b, 0x7, 0x33, 0x2, 0x2, 0x10a, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x6, 0x4, 0x2, 0x10d, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x1b, 0x2, 0x2, 0x10f, 0x110, 0x5, 
    0x6, 0x4, 0x2, 0x110, 0x31, 0x3, 0x2, 0x2, 0x2, 0x111, 0x11a, 0x7, 0x32, 
    0x2, 0x2, 0x112, 0x117, 0x5, 0x34, 0x1b, 0x2, 0x113, 0x114, 0x7, 0x75, 
    0x2, 0x2, 0x114, 0x116, 0x5, 0x34, 0x1b, 0x2, 0x115, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11e, 0x7, 0x75, 0x2, 0x2, 0x11d, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x120, 0x7, 0x33, 0x2, 0x2, 0x120, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x122, 0x9, 0x3, 0x2, 0x2, 0x122, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x123, 0x12c, 0x7, 0x36, 0x2, 0x2, 0x124, 0x129, 0x5, 0x38, 0x1d, 
    0x2, 0x125, 0x126, 0x7, 0x75, 0x2, 0x2, 0x126, 0x128, 0x5, 0x38, 0x1d, 
    0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0x124, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x7, 0x75, 0x2, 
    0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x37, 0x2, 
    0x2, 0x132, 0x37, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x9, 0x4, 0x2, 0x2, 
    0x134, 0x135, 0x7, 0x6c, 0x2, 0x2, 0x135, 0x136, 0x5, 0x3c, 0x1f, 0x2, 
    0x136, 0x39, 0x3, 0x2, 0x2, 0x2, 0x137, 0x142, 0x7, 0x34, 0x2, 0x2, 
    0x138, 0x13f, 0x5, 0x3c, 0x1f, 0x2, 0x139, 0x13b, 0x7, 0x75, 0x2, 0x2, 
    0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13e, 0x5, 0x3c, 0x1f, 0x2, 
    0x13d, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x138, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x145, 0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x7, 0x75, 0x2, 0x2, 
    0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0x35, 0x2, 0x2, 
    0x148, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14d, 0x5, 0x12, 0xa, 0x2, 
    0x14a, 0x14d, 0x5, 0x36, 0x1c, 0x2, 0x14b, 0x14d, 0x5, 0x3a, 0x1e, 0x2, 
    0x14c, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x150, 0x9, 0x5, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 
    0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x152, 0x7, 0x29, 0x2, 0x2, 0x152, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x43, 
    0x4e, 0x54, 0x5a, 0x62, 0x66, 0x68, 0x6f, 0x73, 0x89, 0x9d, 0x9f, 0xa4, 
    0xaa, 0xb3, 0xb6, 0xb9, 0xbc, 0xcc, 0xe3, 0xe6, 0xed, 0xf1, 0xf6, 0x100, 
    0x102, 0x106, 0x10a, 0x117, 0x11a, 0x11d, 0x129, 0x12c, 0x12f, 0x13a, 
    0x13f, 0x142, 0x145, 0x14c, 0x14f, 
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
