#pragma once

#include <string>

namespace Lox {
    int run(const std::string& prg);
    int runRepl();
    int runFile(const std::string& path);
}
