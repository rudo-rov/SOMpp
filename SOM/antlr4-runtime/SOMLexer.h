
// Generated from SOM.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  SOMLexer : public antlr4::Lexer {
public:
  enum {
    KEYWORD = 1, IDENTIFIER = 2, WHITESPACE = 3, COMMENT = 4, INTEGER = 5, 
    DOUBLE = 6, STRING = 7, PLUS = 8, MINUS = 9, MULT = 10, DIV = 11, MOD = 12, 
    EQUALS = 13, GREATER = 14, LESS = 15, GREATER_EQ = 16, LESS_EQ = 17, 
    ASSIGN = 18, SEPARATOR = 19, VBAR = 20, SIMPLE_QUOTE = 21, COLON = 22, 
    COMMA = 23, RETURN = 24, PERIOD = 25, POUND = 26, OPEN_PAR = 27, CLOSE_PAR = 28, 
    NEW_BLOCK = 29, CLOSE_BLOCK = 30
  };

  explicit SOMLexer(antlr4::CharStream *input);
  ~SOMLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

