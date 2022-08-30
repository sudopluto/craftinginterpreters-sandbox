#pragma once

#include <string>

namespace Error {

    extern bool hadError;

    void report(int line, const std::string& where, const std::string& msg);

    void error(int line, const std::string& msg);
}
