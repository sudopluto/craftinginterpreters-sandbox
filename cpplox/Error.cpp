#include "Error.h"

#include <iostream>

namespace Error {

    bool hadError = false;

    void report(int line, const std::string& where, const std::string& msg) {
        std::cerr << "[line " << line << "] Error" << where << ": " << '\n';
        hadError = true;
    }

    void error(int line, const std::string& msg) {
        report(line, "", msg);
    }

}
