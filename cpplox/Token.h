#pragma once

#include <string>
#include <vector>

namespace Token {

    enum class TokenType {
        // single char punc
        LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
        COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

        // 1+ char punc
        BANG, BANG_EQUAL,
        EQUAL, EQUAL_EQUAL,
        GREATER, GREATER_EQUAL,
        LESS, LESS_EQUAL,

        // lits
        IDENTIFIER, STRING, NUMBER,

        // keywords
        AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
        PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

        EEOF
    };

    class Token {
    public:
        Token(TokenType type, const std::string& type_as_str, const std::string& lexme, bool lit, int line);
        const std::string toString();
    private:
        TokenType type;
        //temp
        std::string type_as_str;
        std::string lexme;
        bool lit;
        int line;
    };
}
