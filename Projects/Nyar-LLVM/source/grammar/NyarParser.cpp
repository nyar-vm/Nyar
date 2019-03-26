
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
    setState(31);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::INTEGER)
      | (1ULL << NyarParser::REAL)
      | (1ULL << NyarParser::Using)
      | (1ULL << NyarParser::Exposing)
      | (1ULL << NyarParser::Macro)
      | (1ULL << NyarParser::Template)
      | (1ULL << NyarParser::Interface)
      | (1ULL << NyarParser::Class)
      | (1ULL << NyarParser::SYMBOL)
      | (1ULL << NyarParser::LS))) != 0)) {
      setState(28);
      statement();
      setState(33);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(34);
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

NyarParser::ExpressionStatementContext* NyarParser::StatementContext::expressionStatement() {
  return getRuleContext<NyarParser::ExpressionStatementContext>(0);
}

NyarParser::ModuleStatementContext* NyarParser::StatementContext::moduleStatement() {
  return getRuleContext<NyarParser::ModuleStatementContext>(0);
}

NyarParser::AssignStatementContext* NyarParser::StatementContext::assignStatement() {
  return getRuleContext<NyarParser::AssignStatementContext>(0);
}

NyarParser::MacroStatementContext* NyarParser::StatementContext::macroStatement() {
  return getRuleContext<NyarParser::MacroStatementContext>(0);
}

NyarParser::TemplateStatementContext* NyarParser::StatementContext::templateStatement() {
  return getRuleContext<NyarParser::TemplateStatementContext>(0);
}

NyarParser::InterfaceStatementContext* NyarParser::StatementContext::interfaceStatement() {
  return getRuleContext<NyarParser::InterfaceStatementContext>(0);
}

NyarParser::ClassStatementContext* NyarParser::StatementContext::classStatement() {
  return getRuleContext<NyarParser::ClassStatementContext>(0);
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
    setState(43);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(37);
      moduleStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(38);
      assignStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(39);
      macroStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(40);
      templateStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(41);
      interfaceStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(42);
      classStatement();
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

//----------------- ExpressionStatementContext ------------------------------------------------------------------

NyarParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::ExpressionContext* NyarParser::ExpressionStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
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
  enterRule(_localctx, 4, NyarParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    expression(0);
    setState(46);
    match(NyarParser::T__0);
   
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

tree::TerminalNode* NyarParser::ModuleStatementContext::Exposing() {
  return getToken(NyarParser::Exposing, 0);
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
  enterRule(_localctx, 6, NyarParser::RuleModuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      match(NyarParser::Using);
      setState(49);
      dynamic_cast<ModuleStatementContext *>(_localctx)->core = match(NyarParser::SYMBOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(50);
      match(NyarParser::Using);
      setState(51);
      dynamic_cast<ModuleStatementContext *>(_localctx)->source = match(NyarParser::STRING);
      setState(52);
      match(NyarParser::As);
      setState(53);
      dynamic_cast<ModuleStatementContext *>(_localctx)->name = match(NyarParser::SYMBOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(54);
      match(NyarParser::Using);
      setState(55);
      dynamic_cast<ModuleStatementContext *>(_localctx)->source = match(NyarParser::STRING);
      setState(56);
      match(NyarParser::With);
      setState(57);
      dynamic_cast<ModuleStatementContext *>(_localctx)->name = match(NyarParser::SYMBOL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(58);
      match(NyarParser::Exposing);
      setState(59);
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

//----------------- AssignStatementContext ------------------------------------------------------------------

NyarParser::AssignStatementContext::AssignStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::AssignStatementContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}

tree::TerminalNode* NyarParser::AssignStatementContext::AssignmentOperator() {
  return getToken(NyarParser::AssignmentOperator, 0);
}

NyarParser::ExpressionContext* NyarParser::AssignStatementContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}


size_t NyarParser::AssignStatementContext::getRuleIndex() const {
  return NyarParser::RuleAssignStatement;
}

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

NyarParser::AssignStatementContext* NyarParser::assignStatement() {
  AssignStatementContext *_localctx = _tracker.createInstance<AssignStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, NyarParser::RuleAssignStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(NyarParser::SYMBOL);
    setState(63);
    match(NyarParser::AssignmentOperator);
    setState(64);
    expression(0);
    setState(65);
    match(NyarParser::T__0);
   
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
  enterRule(_localctx, 10, NyarParser::RuleMacroStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(NyarParser::Macro);
    setState(68);
    expression(0);
    setState(69);
    match(NyarParser::T__0);
   
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
  enterRule(_localctx, 12, NyarParser::RuleTemplateStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(NyarParser::Template);
    setState(72);
    expression(0);
    setState(73);
    match(NyarParser::T__0);
   
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
  enterRule(_localctx, 14, NyarParser::RuleInterfaceStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(NyarParser::Interface);
    setState(76);
    expression(0);
    setState(77);
    match(NyarParser::T__0);
   
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
  enterRule(_localctx, 16, NyarParser::RuleClassStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(NyarParser::Class);
    setState(80);
    expression(0);
    setState(81);
    match(NyarParser::T__0);
   
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

//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::IntegerContext::INTEGER() {
  return getToken(NyarParser::INTEGER, 0);
}

NyarParser::IntegerContext::IntegerContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}
void NyarParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

antlrcpp::Any NyarParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Multiply_Divide_Context ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Multiply_Divide_Context::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Multiply_Divide_Context::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Multiply_Divide_Context::MultiplyLike() {
  return getToken(NyarParser::MultiplyLike, 0);
}

NyarParser::Multiply_Divide_Context::Multiply_Divide_Context(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Multiply_Divide_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiply_Divide_(this);
}
void NyarParser::Multiply_Divide_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiply_Divide_(this);
}

antlrcpp::Any NyarParser::Multiply_Divide_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMultiply_Divide_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- List_Context ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::List_Context::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::List_Context::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::List_Context::ListOperator() {
  return getToken(NyarParser::ListOperator, 0);
}

NyarParser::List_Context::List_Context(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::List_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_(this);
}
void NyarParser::List_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_(this);
}

antlrcpp::Any NyarParser::List_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitList_(this);
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
//----------------- RealContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::RealContext::REAL() {
  return getToken(NyarParser::REAL, 0);
}

NyarParser::RealContext::RealContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::RealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal(this);
}
void NyarParser::RealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal(this);
}

antlrcpp::Any NyarParser::RealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitReal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Binary_Context ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Binary_Context::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Binary_Context::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Binary_Context::BinaryOperator() {
  return getToken(NyarParser::BinaryOperator, 0);
}

NyarParser::Binary_Context::Binary_Context(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Binary_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_(this);
}
void NyarParser::Binary_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_(this);
}

antlrcpp::Any NyarParser::Binary_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitBinary_(this);
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
//----------------- Logic_Context ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Logic_Context::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Logic_Context::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Logic_Context::LogicOperator() {
  return getToken(NyarParser::LogicOperator, 0);
}

NyarParser::Logic_Context::Logic_Context(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Logic_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_(this);
}
void NyarParser::Logic_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_(this);
}

antlrcpp::Any NyarParser::Logic_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitLogic_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Power_Context ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Power_Context::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Power_Context::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Power_Context::PowerLike() {
  return getToken(NyarParser::PowerLike, 0);
}

NyarParser::Power_Context::Power_Context(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Power_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPower_(this);
}
void NyarParser::Power_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPower_(this);
}

antlrcpp::Any NyarParser::Power_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPower_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PriorityOperationContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::PriorityOperationContext::LS() {
  return getToken(NyarParser::LS, 0);
}

NyarParser::ExpressionContext* NyarParser::PriorityOperationContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}

tree::TerminalNode* NyarParser::PriorityOperationContext::RS() {
  return getToken(NyarParser::RS, 0);
}

NyarParser::PriorityOperationContext::PriorityOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::PriorityOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPriorityOperation(this);
}
void NyarParser::PriorityOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPriorityOperation(this);
}

antlrcpp::Any NyarParser::PriorityOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitPriorityOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_Subtract_Context ------------------------------------------------------------------

std::vector<NyarParser::ExpressionContext *> NyarParser::Add_Subtract_Context::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::Add_Subtract_Context::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

tree::TerminalNode* NyarParser::Add_Subtract_Context::AddLike() {
  return getToken(NyarParser::AddLike, 0);
}

NyarParser::Add_Subtract_Context::Add_Subtract_Context(ExpressionContext *ctx) { copyFrom(ctx); }

void NyarParser::Add_Subtract_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_Subtract_(this);
}
void NyarParser::Add_Subtract_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_Subtract_(this);
}

antlrcpp::Any NyarParser::Add_Subtract_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitAdd_Subtract_(this);
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, NyarParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::STRING: {
        _localctx = _tracker.createInstance<StringContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(84);
        dynamic_cast<StringContext *>(_localctx)->atom = match(NyarParser::STRING);
        break;
      }

      case NyarParser::REAL: {
        _localctx = _tracker.createInstance<RealContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(85);
        dynamic_cast<RealContext *>(_localctx)->atom = match(NyarParser::REAL);
        break;
      }

      case NyarParser::INTEGER: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(86);
        dynamic_cast<IntegerContext *>(_localctx)->atom = match(NyarParser::INTEGER);
        break;
      }

      case NyarParser::SYMBOL: {
        _localctx = _tracker.createInstance<SymbolContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(87);
        dynamic_cast<SymbolContext *>(_localctx)->atom = match(NyarParser::SYMBOL);
        break;
      }

      case NyarParser::LS: {
        _localctx = _tracker.createInstance<PriorityOperationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(88);
        match(NyarParser::LS);
        setState(89);
        expression(0);
        setState(90);
        match(NyarParser::RS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(114);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(112);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Binary_Context>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(94);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(95);
          dynamic_cast<Binary_Context *>(_localctx)->op = match(NyarParser::BinaryOperator);
          setState(96);
          dynamic_cast<Binary_Context *>(_localctx)->right = expression(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Logic_Context>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(97);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(98);
          dynamic_cast<Logic_Context *>(_localctx)->op = match(NyarParser::LogicOperator);
          setState(99);
          dynamic_cast<Logic_Context *>(_localctx)->right = expression(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Power_Context>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(100);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(101);
          dynamic_cast<Power_Context *>(_localctx)->op = match(NyarParser::PowerLike);
          setState(102);
          dynamic_cast<Power_Context *>(_localctx)->right = expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Multiply_Divide_Context>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(103);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(104);
          dynamic_cast<Multiply_Divide_Context *>(_localctx)->op = match(NyarParser::MultiplyLike);
          setState(105);
          dynamic_cast<Multiply_Divide_Context *>(_localctx)->right = expression(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Add_Subtract_Context>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(106);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(107);
          dynamic_cast<Add_Subtract_Context *>(_localctx)->op = match(NyarParser::AddLike);
          setState(108);
          dynamic_cast<Add_Subtract_Context *>(_localctx)->right = expression(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<List_Context>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(109);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(110);
          dynamic_cast<List_Context *>(_localctx)->op = match(NyarParser::ListOperator);
          setState(111);
          dynamic_cast<List_Context *>(_localctx)->right = expression(7);
          break;
        }

        } 
      }
      setState(116);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

NyarParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ListContext::LM() {
  return getToken(NyarParser::LM, 0);
}

tree::TerminalNode* NyarParser::ListContext::RM() {
  return getToken(NyarParser::RM, 0);
}

std::vector<NyarParser::ExpressionContext *> NyarParser::ListContext::expression() {
  return getRuleContexts<NyarParser::ExpressionContext>();
}

NyarParser::ExpressionContext* NyarParser::ListContext::expression(size_t i) {
  return getRuleContext<NyarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::ListContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::ListContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
}


size_t NyarParser::ListContext::getRuleIndex() const {
  return NyarParser::RuleList;
}

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

NyarParser::ListContext* NyarParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 20, NyarParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(NyarParser::LM);
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::INTEGER)
      | (1ULL << NyarParser::REAL)
      | (1ULL << NyarParser::SYMBOL)
      | (1ULL << NyarParser::LS))) != 0)) {
      setState(118);
      expression(0);
      setState(120);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Comma) {
        setState(119);
        match(NyarParser::Comma);
      }
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(127);
    match(NyarParser::RM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordContext ------------------------------------------------------------------

NyarParser::RecordContext::RecordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::RecordContext::LL() {
  return getToken(NyarParser::LL, 0);
}

tree::TerminalNode* NyarParser::RecordContext::RL() {
  return getToken(NyarParser::RL, 0);
}

std::vector<NyarParser::KeyValueContext *> NyarParser::RecordContext::keyValue() {
  return getRuleContexts<NyarParser::KeyValueContext>();
}

NyarParser::KeyValueContext* NyarParser::RecordContext::keyValue(size_t i) {
  return getRuleContext<NyarParser::KeyValueContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::RecordContext::Comma() {
  return getTokens(NyarParser::Comma);
}

tree::TerminalNode* NyarParser::RecordContext::Comma(size_t i) {
  return getToken(NyarParser::Comma, i);
}


size_t NyarParser::RecordContext::getRuleIndex() const {
  return NyarParser::RuleRecord;
}

void NyarParser::RecordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecord(this);
}

void NyarParser::RecordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecord(this);
}


antlrcpp::Any NyarParser::RecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitRecord(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::RecordContext* NyarParser::record() {
  RecordContext *_localctx = _tracker.createInstance<RecordContext>(_ctx, getState());
  enterRule(_localctx, 22, NyarParser::RuleRecord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(NyarParser::LL);
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::SYMBOL) {
      setState(130);
      keyValue();
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NyarParser::Comma) {
        setState(131);
        match(NyarParser::Comma);
      }
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    match(NyarParser::RL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyValueContext ------------------------------------------------------------------

NyarParser::KeyValueContext::KeyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::KeyValueContext::Colon() {
  return getToken(NyarParser::Colon, 0);
}

tree::TerminalNode* NyarParser::KeyValueContext::SYMBOL() {
  return getToken(NyarParser::SYMBOL, 0);
}

NyarParser::ExpressionContext* NyarParser::KeyValueContext::expression() {
  return getRuleContext<NyarParser::ExpressionContext>(0);
}


size_t NyarParser::KeyValueContext::getRuleIndex() const {
  return NyarParser::RuleKeyValue;
}

void NyarParser::KeyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyValue(this);
}

void NyarParser::KeyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyValue(this);
}


antlrcpp::Any NyarParser::KeyValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitKeyValue(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::KeyValueContext* NyarParser::keyValue() {
  KeyValueContext *_localctx = _tracker.createInstance<KeyValueContext>(_ctx, getState());
  enterRule(_localctx, 24, NyarParser::RuleKeyValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    dynamic_cast<KeyValueContext *>(_localctx)->key = match(NyarParser::SYMBOL);
    setState(142);
    match(NyarParser::Colon);
    setState(143);
    dynamic_cast<KeyValueContext *>(_localctx)->value = expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathAliasContext ------------------------------------------------------------------

NyarParser::MathAliasContext::MathAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::MathAliasContext::Math() {
  return getToken(NyarParser::Math, 0);
}


size_t NyarParser::MathAliasContext::getRuleIndex() const {
  return NyarParser::RuleMathAlias;
}

void NyarParser::MathAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathAlias(this);
}

void NyarParser::MathAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NyarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathAlias(this);
}


antlrcpp::Any NyarParser::MathAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarVisitor*>(visitor))
    return parserVisitor->visitMathAlias(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::MathAliasContext* NyarParser::mathAlias() {
  MathAliasContext *_localctx = _tracker.createInstance<MathAliasContext>(_ctx, getState());
  enterRule(_localctx, 26, NyarParser::RuleMathAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    dynamic_cast<MathAliasContext *>(_localctx)->alias = match(NyarParser::Math);
   
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
    case 9: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NyarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);

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
  "program", "statement", "expressionStatement", "moduleStatement", "assignStatement", 
  "macroStatement", "templateStatement", "interfaceStatement", "classStatement", 
  "expression", "list", "record", "keyValue", "mathAlias"
};

std::vector<std::string> NyarParser::_literalNames = {
  "", "';'", "", "", "", "", "", "", "'Using'", "'Exposing'", "'With'", 
  "'As'", "'Macro'", "'\u00A7'", "'Template'", "'\u00B6'", "'Interface'", 
  "'Class'", "'Extends'", "'Mixin'", "'Setter'", "'Getter'", "'Public'", 
  "'Private'", "'Protected'", "'Final'", "'Try'", "'Catch'", "'For'", "'In'", 
  "'\u213C'", "'\u2147'", "'\u2148'", "'\u213D'", "'\u210E'", "'\u215F'", 
  "'\u2146'", "'\u2124'", "'\u211D'", "'\u2102'", "", "", "'('", "')'", 
  "'['", "']'", "'{'", "'}'", "'\u2308'", "'\u2309'", "'\u230A'", "'\u230B'", 
  "'\u27E8'", "'\u27E9'", "", "", "", "", "'<'", "'>'", "'+++'", "'++'", 
  "'+'", "'---'", "'--'", "'-'", "'***'", "'**'", "'*'", "'//'", "'/'", 
  "'\u00F7'", "'%%'", "'%'", "'^^'", "'^'", "'\u221A'", "'==='", "'=='", 
  "'='", "", "'=!='", "'>='", "'<='", "'|||'", "'||'", "'|'", "'##'", "'#'", 
  "'$$'", "'$'", "'@@@'", "'@@'", "'@'", "", "':'", "'`'", "'!'", "'.'", 
  "','", "'''", "'=<'", "", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", 
  "'=.'", "'/@'", "'//@'", "", "", "'<>'", "'<->'", "", "'\u00D7'", "'\u2297'", 
  "'\u2299'"
};

std::vector<std::string> NyarParser::_symbolicNames = {
  "", "", "STRING", "INTEGER", "REAL", "WhiteSpace", "NewLine", "Comment", 
  "Using", "Exposing", "With", "As", "Macro", "MacroApply", "Template", 
  "TemplayeApply", "Interface", "Class", "Extends", "Mixin", "Setter", "Getter", 
  "Public", "Private", "Protected", "Final", "Try", "Catch", "For", "In", 
  "Pi", "E", "I", "EulerGamma", "Plank", "Reciprocal", "Derivative", "IntegerField", 
  "RealField", "ComplexField", "SYMBOL", "Math", "LS", "RS", "LM", "RM", 
  "LL", "RL", "LCeil", "RCeil", "LFloor", "RFloor", "LAngle", "RAngle", 
  "Import", "Export", "LeftShift", "RightShift", "Less", "Grater", "Plus3", 
  "Increase", "Add", "Minus3", "Decrease", "Subtract", "NullSequence", "Sequence", 
  "Times", "Remainder", "Divide", "Quotient", "Output", "Mod", "BaseInput", 
  "Power", "Root", "Equivalent", "Equal", "Set", "NotEqual", "NotEquivalent", 
  "GraterEqual", "LessEqual", "Bar3", "Bar2", "Bar", "SlotSequence", "Slot", 
  "PostfixFunction", "AnonymousFunction", "Curry", "Apply", "At", "Type", 
  "Colon", "Quote", "Bang", "Dot", "Comma", "Quotation", "SetConstant", 
  "DelayedSet", "SetAddTo", "SetMinusFrom", "SetTimesTo", "SetDivideFrom", 
  "SetModTo", "SetPowerTo", "Clean", "Map", "MapAll", "To", "Infer", "Concat", 
  "Unknow5", "Unknow6", "Multiply", "Kronecker", "TensorProduct", "AssignmentOperator", 
  "BinaryOperator", "LogicOperator", "PowerLike", "MultiplyLike", "AddLike", 
  "ListOperator"
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
    0x3, 0x80, 0x96, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x7, 0x2, 0x20, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x23, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x5f, 0xa, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x73, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x76, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x7b, 0xa, 0xc, 0x7, 0xc, 0x7d, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x80, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x87, 0xa, 0xd, 0x7, 0xd, 0x89, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x8c, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x2, 0x3, 0x14, 0x10, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x2, 0x2, 
    0x9f, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 0x2, 0x2, 0xe, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x16, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x5, 0x4, 0x3, 0x2, 0x1f, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x2, 0x2, 
    0x3, 0x25, 0x3, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2e, 0x5, 0x6, 0x4, 0x2, 
    0x27, 0x2e, 0x5, 0x8, 0x5, 0x2, 0x28, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x29, 
    0x2e, 0x5, 0xc, 0x7, 0x2, 0x2a, 0x2e, 0x5, 0xe, 0x8, 0x2, 0x2b, 0x2e, 
    0x5, 0x10, 0x9, 0x2, 0x2c, 0x2e, 0x5, 0x12, 0xa, 0x2, 0x2d, 0x26, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x5, 0x14, 0xb, 0x2, 0x30, 
    0x31, 0x7, 0x3, 0x2, 0x2, 0x31, 0x7, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 
    0x7, 0xa, 0x2, 0x2, 0x33, 0x3f, 0x7, 0x2a, 0x2, 0x2, 0x34, 0x35, 0x7, 
    0xa, 0x2, 0x2, 0x35, 0x36, 0x7, 0x4, 0x2, 0x2, 0x36, 0x37, 0x7, 0xd, 
    0x2, 0x2, 0x37, 0x3f, 0x7, 0x2a, 0x2, 0x2, 0x38, 0x39, 0x7, 0xa, 0x2, 
    0x2, 0x39, 0x3a, 0x7, 0x4, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0xc, 0x2, 0x2, 
    0x3b, 0x3f, 0x7, 0x2a, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0xb, 0x2, 0x2, 0x3d, 
    0x3f, 0x7, 0x4, 0x2, 0x2, 0x3e, 0x32, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x2a, 
    0x2, 0x2, 0x41, 0x42, 0x7, 0x7a, 0x2, 0x2, 0x42, 0x43, 0x5, 0x14, 0xb, 
    0x2, 0x43, 0x44, 0x7, 0x3, 0x2, 0x2, 0x44, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x46, 0x7, 0xe, 0x2, 0x2, 0x46, 0x47, 0x5, 0x14, 0xb, 0x2, 0x47, 
    0x48, 0x7, 0x3, 0x2, 0x2, 0x48, 0xd, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 
    0x7, 0x10, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x14, 0xb, 0x2, 0x4b, 0x4c, 0x7, 
    0x3, 0x2, 0x2, 0x4c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x12, 
    0x2, 0x2, 0x4e, 0x4f, 0x5, 0x14, 0xb, 0x2, 0x4f, 0x50, 0x7, 0x3, 0x2, 
    0x2, 0x50, 0x11, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x13, 0x2, 0x2, 
    0x52, 0x53, 0x5, 0x14, 0xb, 0x2, 0x53, 0x54, 0x7, 0x3, 0x2, 0x2, 0x54, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x8, 0xb, 0x1, 0x2, 0x56, 0x5f, 
    0x7, 0x4, 0x2, 0x2, 0x57, 0x5f, 0x7, 0x6, 0x2, 0x2, 0x58, 0x5f, 0x7, 
    0x5, 0x2, 0x2, 0x59, 0x5f, 0x7, 0x2a, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x2c, 
    0x2, 0x2, 0x5b, 0x5c, 0x5, 0x14, 0xb, 0x2, 0x5c, 0x5d, 0x7, 0x2d, 0x2, 
    0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0xc, 0xd, 0x2, 0x2, 0x61, 0x62, 0x7, 
    0x7b, 0x2, 0x2, 0x62, 0x73, 0x5, 0x14, 0xb, 0xe, 0x63, 0x64, 0xc, 0xc, 
    0x2, 0x2, 0x64, 0x65, 0x7, 0x7c, 0x2, 0x2, 0x65, 0x73, 0x5, 0x14, 0xb, 
    0xd, 0x66, 0x67, 0xc, 0xb, 0x2, 0x2, 0x67, 0x68, 0x7, 0x7d, 0x2, 0x2, 
    0x68, 0x73, 0x5, 0x14, 0xb, 0xb, 0x69, 0x6a, 0xc, 0xa, 0x2, 0x2, 0x6a, 
    0x6b, 0x7, 0x7e, 0x2, 0x2, 0x6b, 0x73, 0x5, 0x14, 0xb, 0xb, 0x6c, 0x6d, 
    0xc, 0x9, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x7f, 0x2, 0x2, 0x6e, 0x73, 0x5, 
    0x14, 0xb, 0xa, 0x6f, 0x70, 0xc, 0x8, 0x2, 0x2, 0x70, 0x71, 0x7, 0x80, 
    0x2, 0x2, 0x71, 0x73, 0x5, 0x14, 0xb, 0x9, 0x72, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x63, 0x3, 0x2, 0x2, 0x2, 0x72, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x69, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x73, 0x76, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7e, 0x7, 0x2e, 
    0x2, 0x2, 0x78, 0x7a, 0x5, 0x14, 0xb, 0x2, 0x79, 0x7b, 0x7, 0x65, 0x2, 
    0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x2f, 0x2, 0x2, 0x82, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x8a, 0x7, 0x30, 0x2, 0x2, 0x84, 0x86, 0x5, 0x1a, 0xe, 
    0x2, 0x85, 0x87, 0x7, 0x65, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x31, 
    0x2, 0x2, 0x8e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x2a, 0x2, 
    0x2, 0x90, 0x91, 0x7, 0x61, 0x2, 0x2, 0x91, 0x92, 0x5, 0x14, 0xb, 0x2, 
    0x92, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x2b, 0x2, 0x2, 0x94, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x21, 0x2d, 0x3e, 0x5e, 0x72, 0x74, 0x7a, 
    0x7e, 0x86, 0x8a, 
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
