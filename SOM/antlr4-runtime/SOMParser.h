
// Generated from SOM.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  SOMParser : public antlr4::Parser {
public:
  enum {
    KEYWORD = 1, IDENTIFIER = 2, WHITESPACE = 3, COMMENT = 4, INTEGER = 5, 
    DOUBLE = 6, STRING = 7, PLUS = 8, MINUS = 9, MULT = 10, DIV = 11, MOD = 12, 
    EQUALS = 13, GREATER = 14, LESS = 15, GREATER_EQ = 16, LESS_EQ = 17, 
    ASSIGN = 18, SEPARATOR = 19, VBAR = 20, SIMPLE_QUOTE = 21, COLON = 22, 
    COMMA = 23, RETURN = 24, PERIOD = 25, POUND = 26, OPEN_PAR = 27, CLOSE_PAR = 28, 
    NEW_BLOCK = 29, CLOSE_BLOCK = 30
  };

  enum {
    RuleClassDefinition = 0, RuleSuperclass = 1, RuleInstanceFields = 2, 
    RuleClassFields = 3, RuleMethod = 4, RuleMethodBlock = 5, RuleBlockContents = 6, 
    RuleLocalDefinitions = 7, RuleBlockBody = 8, RuleResult = 9, RuleExpression = 10, 
    RuleAssignation = 11, RuleAssignments = 12, RuleAssignment = 13, RuleEvaluation = 14, 
    RulePrimary = 15, RuleMessages = 16, RuleUnaryMessage = 17, RuleBinaryMessage = 18, 
    RuleBinaryOperand = 19, RuleKeywordMessage = 20, RuleFormula = 21, RuleNestedTerm = 22, 
    RuleNestedBlock = 23, RuleBlockPattern = 24, RuleBlockArgs = 25, RuleVariable = 26, 
    RulePattern = 27, RuleUnaryPattern = 28, RuleUnarySelector = 29, RuleBinaryPattern = 30, 
    RuleKeywordPattern = 31, RuleBinarySelector = 32, RuleArgument = 33, 
    RuleLiteral = 34, RuleLiteralNumber = 35, RuleLiteralString = 36, RuleLiteralArray = 37, 
    RuleLiteralSymbol = 38, RuleSelector = 39, RuleKeywordSelector = 40
  };

  explicit SOMParser(antlr4::TokenStream *input);
  ~SOMParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ClassDefinitionContext;
  class SuperclassContext;
  class InstanceFieldsContext;
  class ClassFieldsContext;
  class MethodContext;
  class MethodBlockContext;
  class BlockContentsContext;
  class LocalDefinitionsContext;
  class BlockBodyContext;
  class ResultContext;
  class ExpressionContext;
  class AssignationContext;
  class AssignmentsContext;
  class AssignmentContext;
  class EvaluationContext;
  class PrimaryContext;
  class MessagesContext;
  class UnaryMessageContext;
  class BinaryMessageContext;
  class BinaryOperandContext;
  class KeywordMessageContext;
  class FormulaContext;
  class NestedTermContext;
  class NestedBlockContext;
  class BlockPatternContext;
  class BlockArgsContext;
  class VariableContext;
  class PatternContext;
  class UnaryPatternContext;
  class UnarySelectorContext;
  class BinaryPatternContext;
  class KeywordPatternContext;
  class BinarySelectorContext;
  class ArgumentContext;
  class LiteralContext;
  class LiteralNumberContext;
  class LiteralStringContext;
  class LiteralArrayContext;
  class LiteralSymbolContext;
  class SelectorContext;
  class KeywordSelectorContext; 

  class  ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUALS();
    SuperclassContext *superclass();
    InstanceFieldsContext *instanceFields();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    std::vector<MethodContext *> method();
    MethodContext* method(size_t i);
    antlr4::tree::TerminalNode *SEPARATOR();
    ClassFieldsContext *classFields();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class  SuperclassContext : public antlr4::ParserRuleContext {
  public:
    SuperclassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuperclassContext* superclass();

  class  InstanceFieldsContext : public antlr4::ParserRuleContext {
  public:
    InstanceFieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VBAR();
    antlr4::tree::TerminalNode* VBAR(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstanceFieldsContext* instanceFields();

  class  ClassFieldsContext : public antlr4::ParserRuleContext {
  public:
    ClassFieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VBAR();
    antlr4::tree::TerminalNode* VBAR(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassFieldsContext* classFields();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    antlr4::tree::TerminalNode *EQUALS();
    MethodBlockContext *methodBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodContext* method();

  class  MethodBlockContext : public antlr4::ParserRuleContext {
  public:
    MethodBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    BlockContentsContext *blockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodBlockContext* methodBlock();

  class  BlockContentsContext : public antlr4::ParserRuleContext {
  public:
    BlockContentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockBodyContext *blockBody();
    std::vector<antlr4::tree::TerminalNode *> VBAR();
    antlr4::tree::TerminalNode* VBAR(size_t i);
    LocalDefinitionsContext *localDefinitions();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContentsContext* blockContents();

  class  LocalDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    LocalDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalDefinitionsContext* localDefinitions();

  class  BlockBodyContext : public antlr4::ParserRuleContext {
  public:
    BlockBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ResultContext *result();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PERIOD();
    BlockBodyContext *blockBody();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockBodyContext* blockBody();

  class  ResultContext : public antlr4::ParserRuleContext {
  public:
    ResultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PERIOD();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultContext* result();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignationContext *assignation();
    EvaluationContext *evaluation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  AssignationContext : public antlr4::ParserRuleContext {
  public:
    AssignationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentsContext *assignments();
    EvaluationContext *evaluation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignationContext* assignation();

  class  AssignmentsContext : public antlr4::ParserRuleContext {
  public:
    AssignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentsContext* assignments();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  EvaluationContext : public antlr4::ParserRuleContext {
  public:
    EvaluationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    MessagesContext *messages();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EvaluationContext* evaluation();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    NestedTermContext *nestedTerm();
    NestedBlockContext *nestedBlock();
    LiteralContext *literal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  MessagesContext : public antlr4::ParserRuleContext {
  public:
    MessagesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnaryMessageContext *> unaryMessage();
    UnaryMessageContext* unaryMessage(size_t i);
    std::vector<BinaryMessageContext *> binaryMessage();
    BinaryMessageContext* binaryMessage(size_t i);
    KeywordMessageContext *keywordMessage();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessagesContext* messages();

  class  UnaryMessageContext : public antlr4::ParserRuleContext {
  public:
    UnaryMessageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryMessageContext* unaryMessage();

  class  BinaryMessageContext : public antlr4::ParserRuleContext {
  public:
    BinaryMessageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinarySelectorContext *binarySelector();
    BinaryOperandContext *binaryOperand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryMessageContext* binaryMessage();

  class  BinaryOperandContext : public antlr4::ParserRuleContext {
  public:
    BinaryOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    std::vector<UnaryMessageContext *> unaryMessage();
    UnaryMessageContext* unaryMessage(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryOperandContext* binaryOperand();

  class  KeywordMessageContext : public antlr4::ParserRuleContext {
  public:
    KeywordMessageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> KEYWORD();
    antlr4::tree::TerminalNode* KEYWORD(size_t i);
    std::vector<FormulaContext *> formula();
    FormulaContext* formula(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordMessageContext* keywordMessage();

  class  FormulaContext : public antlr4::ParserRuleContext {
  public:
    FormulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinaryOperandContext *binaryOperand();
    std::vector<BinaryMessageContext *> binaryMessage();
    BinaryMessageContext* binaryMessage(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormulaContext* formula();

  class  NestedTermContext : public antlr4::ParserRuleContext {
  public:
    NestedTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedTermContext* nestedTerm();

  class  NestedBlockContext : public antlr4::ParserRuleContext {
  public:
    NestedBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW_BLOCK();
    antlr4::tree::TerminalNode *CLOSE_BLOCK();
    BlockPatternContext *blockPattern();
    BlockContentsContext *blockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedBlockContext* nestedBlock();

  class  BlockPatternContext : public antlr4::ParserRuleContext {
  public:
    BlockPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockArgsContext *blockArgs();
    antlr4::tree::TerminalNode *VBAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockPatternContext* blockPattern();

  class  BlockArgsContext : public antlr4::ParserRuleContext {
  public:
    BlockArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockArgsContext* blockArgs();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryPatternContext *unaryPattern();
    KeywordPatternContext *keywordPattern();
    BinaryPatternContext *binaryPattern();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternContext* pattern();

  class  UnaryPatternContext : public antlr4::ParserRuleContext {
  public:
    UnaryPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnarySelectorContext *unarySelector();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryPatternContext* unaryPattern();

  class  UnarySelectorContext : public antlr4::ParserRuleContext {
  public:
    UnarySelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnarySelectorContext* unarySelector();

  class  BinaryPatternContext : public antlr4::ParserRuleContext {
  public:
    BinaryPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinarySelectorContext *binarySelector();
    ArgumentContext *argument();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryPatternContext* binaryPattern();

  class  KeywordPatternContext : public antlr4::ParserRuleContext {
  public:
    KeywordPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> KEYWORD();
    antlr4::tree::TerminalNode* KEYWORD(size_t i);
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordPatternContext* keywordPattern();

  class  BinarySelectorContext : public antlr4::ParserRuleContext {
  public:
    BinarySelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VBAR();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *GREATER_EQ();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESS_EQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinarySelectorContext* binarySelector();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralNumberContext *literalNumber();
    LiteralStringContext *literalString();
    LiteralArrayContext *literalArray();
    LiteralSymbolContext *literalSymbol();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  LiteralNumberContext : public antlr4::ParserRuleContext {
  public:
    LiteralNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralNumberContext* literalNumber();

  class  LiteralStringContext : public antlr4::ParserRuleContext {
  public:
    LiteralStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralStringContext* literalString();

  class  LiteralArrayContext : public antlr4::ParserRuleContext {
  public:
    LiteralArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *NEW_BLOCK();
    antlr4::tree::TerminalNode *CLOSE_BLOCK();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralArrayContext* literalArray();

  class  LiteralSymbolContext : public antlr4::ParserRuleContext {
  public:
    LiteralSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *STRING();
    SelectorContext *selector();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralSymbolContext* literalSymbol();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinarySelectorContext *binarySelector();
    KeywordSelectorContext *keywordSelector();
    UnarySelectorContext *unarySelector();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectorContext* selector();

  class  KeywordSelectorContext : public antlr4::ParserRuleContext {
  public:
    KeywordSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> KEYWORD();
    antlr4::tree::TerminalNode* KEYWORD(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordSelectorContext* keywordSelector();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

