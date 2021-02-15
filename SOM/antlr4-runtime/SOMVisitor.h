
// Generated from SOM.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "SOMParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SOMParser.
 */
class  SOMVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SOMParser.
   */
    virtual antlrcpp::Any visitClassDefinition(SOMParser::ClassDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitSuperclass(SOMParser::SuperclassContext *context) = 0;

    virtual antlrcpp::Any visitInstanceFields(SOMParser::InstanceFieldsContext *context) = 0;

    virtual antlrcpp::Any visitClassFields(SOMParser::ClassFieldsContext *context) = 0;

    virtual antlrcpp::Any visitMethod(SOMParser::MethodContext *context) = 0;

    virtual antlrcpp::Any visitMethodBlock(SOMParser::MethodBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockContents(SOMParser::BlockContentsContext *context) = 0;

    virtual antlrcpp::Any visitLocalDefinitions(SOMParser::LocalDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitBlockBody(SOMParser::BlockBodyContext *context) = 0;

    virtual antlrcpp::Any visitResult(SOMParser::ResultContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SOMParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignation(SOMParser::AssignationContext *context) = 0;

    virtual antlrcpp::Any visitAssignments(SOMParser::AssignmentsContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(SOMParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitEvaluation(SOMParser::EvaluationContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(SOMParser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitMessages(SOMParser::MessagesContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMessage(SOMParser::UnaryMessageContext *context) = 0;

    virtual antlrcpp::Any visitBinaryMessage(SOMParser::BinaryMessageContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperand(SOMParser::BinaryOperandContext *context) = 0;

    virtual antlrcpp::Any visitKeywordMessage(SOMParser::KeywordMessageContext *context) = 0;

    virtual antlrcpp::Any visitFormula(SOMParser::FormulaContext *context) = 0;

    virtual antlrcpp::Any visitNestedTerm(SOMParser::NestedTermContext *context) = 0;

    virtual antlrcpp::Any visitNestedBlock(SOMParser::NestedBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockPattern(SOMParser::BlockPatternContext *context) = 0;

    virtual antlrcpp::Any visitBlockArgs(SOMParser::BlockArgsContext *context) = 0;

    virtual antlrcpp::Any visitVariable(SOMParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitPattern(SOMParser::PatternContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPattern(SOMParser::UnaryPatternContext *context) = 0;

    virtual antlrcpp::Any visitUnarySelector(SOMParser::UnarySelectorContext *context) = 0;

    virtual antlrcpp::Any visitBinaryPattern(SOMParser::BinaryPatternContext *context) = 0;

    virtual antlrcpp::Any visitKeywordPattern(SOMParser::KeywordPatternContext *context) = 0;

    virtual antlrcpp::Any visitBinarySelector(SOMParser::BinarySelectorContext *context) = 0;

    virtual antlrcpp::Any visitArgument(SOMParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SOMParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitLiteralNumber(SOMParser::LiteralNumberContext *context) = 0;

    virtual antlrcpp::Any visitLiteralString(SOMParser::LiteralStringContext *context) = 0;

    virtual antlrcpp::Any visitLiteralArray(SOMParser::LiteralArrayContext *context) = 0;

    virtual antlrcpp::Any visitLiteralSymbol(SOMParser::LiteralSymbolContext *context) = 0;

    virtual antlrcpp::Any visitSelector(SOMParser::SelectorContext *context) = 0;

    virtual antlrcpp::Any visitKeywordSelector(SOMParser::KeywordSelectorContext *context) = 0;


};

