#pragma once
#include <string>
#include <vector>

namespace Tokenizer {

    const std::string whitespace = " \t\n";
    const std::string punc = ";";
    const std::string delims = whitespace + punc;

    int tokenize(const std::string& input, std::vector<std::string>& buff);
}
