#include "Token.h"

#include <sstream>

namespace Token {

    Token::Token(TokenType type, const std::string& type_as_str, const std::string& lexme, bool lit, int line)
        : type{type}, type_as_str{type_as_str}, lexme{lexme}, lit{lit}, line{line} {}


    const std::string Token::toString() {
        std::stringstream buff;
        
        buff << this->type_as_str << " " << this->lexme << " " << this->lit;
        
        return buff.str();
    }

}
