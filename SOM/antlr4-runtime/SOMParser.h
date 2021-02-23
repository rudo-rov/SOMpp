
// Generated from SOM.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  SOMParser : public antlr4::Parser {
public:
  enum {
    Comment = 1, Whitespace = 2, Primitive = 3, Identifier = 4, Equal = 5, 
    Separator = 6, NewTerm = 7, EndTerm = 8, Or = 9, Comma = 10, Minus = 11, 
    Not = 12, And = 13, Star = 14, Div = 15, Mod = 16, Plus = 17, More = 18, 
    Less = 19, At = 20, Per = 21, OperatorSequence = 22, Colon = 23, NewBlock = 24, 
    EndBlock = 25, Pound = 26, Exit = 27, Period = 28, Assign = 29, Integer = 30, 
    Double = 31, Keyword = 32, KeywordSequence = 33, STString = 34
  };

  enum {
    RuleClassdef = 0, RuleSuperclass = 1, RuleInstanceFields = 2, RuleClassFields = 3, 
    RuleClassMethod = 4, RuleMethod = 5, RulePattern = 6, RuleUnaryPattern = 7, 
    RuleBinaryPattern = 8, RuleKeywordPattern = 9, RuleMethodBlock = 10, 
    RuleUnarySelector = 11, RuleBinarySelector = 12, RuleIdentifier = 13, 
    RuleKeyword = 14, RuleArgument = 15, RuleBlockContents = 16, RuleLocalDefs = 17, 
    RuleBlockBody = 18, RuleResult = 19, RuleExpression = 20, RuleAssignation = 21, 
    RuleAssignments = 22, RuleAssignment = 23, RuleEvaluation = 24, RulePrimary = 25, 
    RuleVariable = 26, RuleMessages = 27, RuleUnaryMessage = 28, RuleBinaryMessage = 29, 
    RuleBinaryOperand = 30, RuleKeywordMessage = 31, RuleFormula = 32, RuleNestedTerm = 33, 
    RuleLiteral = 34, RuleLiteralArray = 35, RuleLiteralNumber = 36, RuleLiteralDecimal = 37, 
    RuleNegativeDecimal = 38, RuleLiteralInteger = 39, RuleLiteralDouble = 40, 
    RuleLiteralSymbol = 41, RuleLiteralString = 42, RuleSelector = 43, RuleKeywordSelector = 44, 
    RuleString = 45, RuleNestedBlock = 46, RuleBlockPattern = 47, RuleBlockArguments = 48
  };

  explicit SOMParser(antlr4::TokenStream *input);
  ~SOMParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ClassdefContext;
  class SuperclassContext;
  class InstanceFieldsContext;
  class ClassFieldsContext;
  class ClassMethodContext;
  class MethodContext;
  class PatternContext;
  class UnaryPatternContext;
  class BinaryPatternContext;
  class KeywordPatternContext;
  class MethodBlockContext;
  class UnarySelectorContext;
  class BinarySelectorContext;
  class IdentifierContext;
  class KeywordContext;
  class ArgumentContext;
  class BlockContentsContext;
  class LocalDefsContext;
  class BlockBodyContext;
  class ResultContext;
  class ExpressionContext;
  class AssignationContext;
  class AssignmentsContext;
  class AssignmentContext;
  class EvaluationContext;
  class PrimaryContext;
  class VariableContext;
  class MessagesContext;
  class UnaryMessageContext;
  class BinaryMessageContext;
  class BinaryOperandContext;
  class KeywordMessageContext;
  class FormulaContext;
  class NestedTermContext;
  class LiteralContext;
  class LiteralArrayContext;
  class LiteralNumberContext;
  class LiteralDecimalContext;
  class NegativeDecimalContext;
  class LiteralIntegerContext;
  class LiteralDoubleContext;
  class LiteralSymbolContext;
  class LiteralStringContext;
  class SelectorContext;
  class KeywordSelectorContext;
  class StringContext;
  class NestedBlockContext;
  class BlockPatternContext;
  class BlockArgumentsContext; 

  class  ClassdefContext : public antlr4::ParserRuleContext {
  public:
    ClassdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Equal();
    SuperclassContext *superclass();
    InstanceFieldsContext *instanceFields();
    antlr4::tree::TerminalNode *EndTerm();
    std::vector<MethodContext *> method();
    MethodContext* method(size_t i);
    antlr4::tree::TerminalNode *Separator();
    ClassFieldsContext *classFields();
    std::vector<ClassMethodContext *> classMethod();
    ClassMethodContext* classMethod(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassdefContext* classdef();

  class  SuperclassContext : public antlr4::ParserRuleContext {
  public:
    SuperclassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NewTerm();
    antlr4::tree::TerminalNode *Identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuperclassContext* superclass();

  class  InstanceFieldsContext : public antlr4::ParserRuleContext {
  public:
    InstanceFieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstanceFieldsContext* instanceFields();

  class  ClassFieldsContext : public antlr4::ParserRuleContext {
  public:
    ClassFieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassFieldsContext* classFields();

  class  ClassMethodContext : public antlr4::ParserRuleContext {
  public:
    ClassMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodContext *method();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassMethodContext* classMethod();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *Primitive();
    MethodBlockContext *methodBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodContext* method();

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
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordPatternContext* keywordPattern();

  class  MethodBlockContext : public antlr4::ParserRuleContext {
  public:
    MethodBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NewTerm();
    antlr4::tree::TerminalNode *EndTerm();
    BlockContentsContext *blockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodBlockContext* methodBlock();

  class  UnarySelectorContext : public antlr4::ParserRuleContext {
  public:
    UnarySelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnarySelectorContext* unarySelector();

  class  BinarySelectorContext : public antlr4::ParserRuleContext {
  public:
    BinarySelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Per();
    antlr4::tree::TerminalNode *OperatorSequence();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinarySelectorContext* binarySelector();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Primitive();
    antlr4::tree::TerminalNode *Identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Keyword();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  BlockContentsContext : public antlr4::ParserRuleContext {
  public:
    BlockContentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockBodyContext *blockBody();
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    LocalDefsContext *localDefs();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContentsContext* blockContents();

  class  LocalDefsContext : public antlr4::ParserRuleContext {
  public:
    LocalDefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalDefsContext* localDefs();

  class  BlockBodyContext : public antlr4::ParserRuleContext {
  public:
    BlockBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Exit();
    ResultContext *result();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Period();
    BlockBodyContext *blockBody();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockBodyContext* blockBody();

  class  ResultContext : public antlr4::ParserRuleContext {
  public:
    ResultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Period();


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
    antlr4::tree::TerminalNode *Assign();


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

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

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
    UnarySelectorContext *unarySelector();


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
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
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
    antlr4::tree::TerminalNode *NewTerm();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EndTerm();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedTermContext* nestedTerm();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralArrayContext *literalArray();
    LiteralSymbolContext *literalSymbol();
    LiteralStringContext *literalString();
    LiteralNumberContext *literalNumber();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  LiteralArrayContext : public antlr4::ParserRuleContext {
  public:
    LiteralArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pound();
    antlr4::tree::TerminalNode *NewTerm();
    antlr4::tree::TerminalNode *EndTerm();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralArrayContext* literalArray();

  class  LiteralNumberContext : public antlr4::ParserRuleContext {
  public:
    LiteralNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NegativeDecimalContext *negativeDecimal();
    LiteralDecimalContext *literalDecimal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralNumberContext* literalNumber();

  class  LiteralDecimalContext : public antlr4::ParserRuleContext {
  public:
    LiteralDecimalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralIntegerContext *literalInteger();
    LiteralDoubleContext *literalDouble();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralDecimalContext* literalDecimal();

  class  NegativeDecimalContext : public antlr4::ParserRuleContext {
  public:
    NegativeDecimalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Minus();
    LiteralDecimalContext *literalDecimal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NegativeDecimalContext* negativeDecimal();

  class  LiteralIntegerContext : public antlr4::ParserRuleContext {
  public:
    LiteralIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralIntegerContext* literalInteger();

  class  LiteralDoubleContext : public antlr4::ParserRuleContext {
  public:
    LiteralDoubleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Double();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralDoubleContext* literalDouble();

  class  LiteralSymbolContext : public antlr4::ParserRuleContext {
  public:
    LiteralSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pound();
    StringContext *string();
    SelectorContext *selector();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralSymbolContext* literalSymbol();

  class  LiteralStringContext : public antlr4::ParserRuleContext {
  public:
    LiteralStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralStringContext* literalString();

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
    antlr4::tree::TerminalNode *Keyword();
    antlr4::tree::TerminalNode *KeywordSequence();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordSelectorContext* keywordSelector();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STString();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  NestedBlockContext : public antlr4::ParserRuleContext {
  public:
    NestedBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NewBlock();
    antlr4::tree::TerminalNode *EndBlock();
    BlockPatternContext *blockPattern();
    BlockContentsContext *blockContents();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedBlockContext* nestedBlock();

  class  BlockPatternContext : public antlr4::ParserRuleContext {
  public:
    BlockPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockArgumentsContext *blockArguments();
    antlr4::tree::TerminalNode *Or();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockPatternContext* blockPattern();

  class  BlockArgumentsContext : public antlr4::ParserRuleContext {
  public:
    BlockArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockArgumentsContext* blockArguments();


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

