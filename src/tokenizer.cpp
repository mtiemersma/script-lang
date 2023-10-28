#pragma once

#include <vector>
#include <optional>
#include <string>

enum class TokenType {
    // literals
    StringLiteral,
    IntegerLiteral,
    FloatLiteral,
    // identifier
    Identifier,
    // punctuation
    SemiColon,
    Colon,
    Dot,
    // math operators
    Add,
    Sub,
    Mul,
    Div,
    Mod,
    AddAssign,
    SubAssign,
    MulAssign,
    DivAssign,
    ModAssign,
    // logical operators
    // misc operators
    Assign
};

struct Token {
    TokenType type;
    std::optional<std::string> content;
};

class Tokenizer {
public:
    std::vector<Token> Tokenize() {}
};