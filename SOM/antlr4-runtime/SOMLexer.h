
// Generated from SOM.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  SOMLexer : public antlr4::Lexer {
public:
  enum {
    Comment = 1, Whitespace = 2, Primitive = 3, Identifier = 4, Equal = 5, 
    Separator = 6, NewTerm = 7, EndTerm = 8, Or = 9, Comma = 10, Minus = 11, 
    Not = 12, And = 13, Star = 14, Div = 15, Mod = 16, Plus = 17, More = 18, 
    Less = 19, At = 20, Per = 21, OperatorSequence = 22, Colon = 23, NewBlock = 24, 
    EndBlock = 25, Pound = 26, Exit = 27, Period = 28, Assign = 29, Integer = 30, 
    Double = 31, Keyword = 32, KeywordSequence = 33, STString = 34
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

