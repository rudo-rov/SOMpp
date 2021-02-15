grammar SOM;

/* Classes */
classDefinition:
    IDENTIFIER EQUALS superclass
    instanceFields method*
    (SEPARATOR classFields method*) ?
    CLOSE_PAR
;

superclass: IDENTIFIER? OPEN_PAR;

instanceFields: (VBAR variable* VBAR)?;
classFields: (VBAR variable* VBAR)?;

method: pattern EQUALS methodBlock;

methodBlock: OPEN_PAR blockContents? CLOSE_PAR;
blockContents:
    (VBAR localDefinitions VBAR)?
    blockBody;
localDefinitions: variable*;
blockBody: 
      RETURN result
    | expression (PERIOD blockBody?)?;
result: expression PERIOD?;
expression: assignation | evaluation;
assignation: assignments evaluation;
assignments: assignment+;
assignment: variable ASSIGN;
evaluation: primary messages?;

primary: variable | nestedTerm | nestedBlock | literal;

messages:
      unaryMessage+ binaryMessage* keywordMessage?
    | binaryMessage+ keywordMessage?
    | keywordMessage;
unaryMessage: IDENTIFIER;
binaryMessage: binarySelector binaryOperand;
binaryOperand: primary unaryMessage*;
keywordMessage: (KEYWORD formula)+;
formula: binaryOperand binaryMessage*;
nestedTerm: OPEN_PAR expression CLOSE_PAR;

nestedBlock:
    NEW_BLOCK blockPattern? blockContents? CLOSE_BLOCK;
blockPattern: blockArgs VBAR;
blockArgs: (COLON argument)+;

variable: IDENTIFIER;

// Pattern for method calling
pattern: unaryPattern | keywordPattern | binaryPattern;
unaryPattern: unarySelector;
unarySelector: IDENTIFIER;
// Some special binary operators
binaryPattern: binarySelector argument;
keywordPattern: (KEYWORD argument)+;
binarySelector: 
    VBAR | PLUS | MINUS | EQUALS | MULT | DIV | MOD |
    GREATER | GREATER_EQ | LESS | LESS_EQ;
argument: variable;

/* Literals */
literal: literalNumber | literalString | literalArray | literalSymbol;

literalNumber: MINUS? (INTEGER | DOUBLE);

literalString: STRING;

literalArray: POUND NEW_BLOCK literal* CLOSE_BLOCK;

literalSymbol: POUND (STRING | selector);

selector: binarySelector | keywordSelector | unarySelector;
keywordSelector: KEYWORD+;

KEYWORD: IDENTIFIER COLON;
IDENTIFIER: [\p{Alpha}] [\p{Alpha}0-9_]*;

/* TERMINAL SYMBOLS */
WHITESPACE: [\t\r\n]* -> skip;
COMMENT: '"' ~["]* '"' -> skip;

INTEGER: [0-9]+;
DOUBLE: [0-9]+ '.' [0-9]+;
STRING:
    SIMPLE_QUOTE
    ( '\\t'                     // Tab
    | '\\n'                     // New line
    | '\\\''                    // \'
    | '\\\\'                    // \\
    | ~('\'' | '\\') 
    )*
    SIMPLE_QUOTE
;

PLUS: '+';
MINUS: '-';
MULT: '*';
DIV: '/';
MOD: '\\';
EQUALS: '=';

GREATER: '>';
LESS: '<';
GREATER_EQ: '>=';
LESS_EQ: '<=';

ASSIGN: ':=';
SEPARATOR: '----';
VBAR: '|';
SIMPLE_QUOTE: '\'';
COLON: ':';
COMMA: ',';
RETURN: '^';
PERIOD: '.';
POUND: '#';

OPEN_PAR: '(';
CLOSE_PAR: ')';
NEW_BLOCK: '[';
CLOSE_BLOCK: ']';
