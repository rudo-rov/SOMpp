
// Generated from SOM.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "SOMVisitor.h"


/**
 * This class provides an empty implementation of SOMVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SOMBaseVisitor : public SOMVisitor {
public:

  virtual antlrcpp::Any visitClassDefinition(SOMParser::ClassDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuperclass(SOMParser::SuperclassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstanceFields(SOMParser::InstanceFieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassFields(SOMParser::ClassFieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod(SOMParser::MethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodBlock(SOMParser::MethodBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockContents(SOMParser::BlockContentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalDefinitions(SOMParser::LocalDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockBody(SOMParser::BlockBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResult(SOMParser::ResultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SOMParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignation(SOMParser::AssignationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignments(SOMParser::AssignmentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(SOMParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEvaluation(SOMParser::EvaluationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(SOMParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessages(SOMParser::MessagesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryMessage(SOMParser::UnaryMessageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryMessage(SOMParser::BinaryMessageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryOperand(SOMParser::BinaryOperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywordMessage(SOMParser::KeywordMessageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormula(SOMParser::FormulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedTerm(SOMParser::NestedTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedBlock(SOMParser::NestedBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockPattern(SOMParser::BlockPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockArgs(SOMParser::BlockArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(SOMParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPattern(SOMParser::PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryPattern(SOMParser::UnaryPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnarySelector(SOMParser::UnarySelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryPattern(SOMParser::BinaryPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywordPattern(SOMParser::KeywordPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinarySelector(SOMParser::BinarySelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(SOMParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(SOMParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralNumber(SOMParser::LiteralNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralString(SOMParser::LiteralStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralArray(SOMParser::LiteralArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralSymbol(SOMParser::LiteralSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelector(SOMParser::SelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywordSelector(SOMParser::KeywordSelectorContext *ctx) override {
    return visitChildren(ctx);
  }


};

