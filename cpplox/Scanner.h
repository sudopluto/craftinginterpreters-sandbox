#pragma once

#include <string>
#include <vector>

#include "Token.h"

namespace Scanner {
    class Scanner {
    public:
        Scanner(const std::string& source);
    private:
        const std::string& source;
        std::vector<Token::Token> tokens;
    };
}
