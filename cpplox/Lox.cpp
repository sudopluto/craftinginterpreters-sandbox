#include "Lox.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Tokenizer.h"
#include "Error.h"

namespace Lox {
    
    const std::string exit = "quit()";
    const int runtime_err_exitcode = 65;

    int run(const std::string& prg) {
	    std::vector<std::string> tokens;

        Tokenizer::tokenize(prg, tokens);

        for (auto t : tokens) {
            std::cout << t << '\n';
        }

        if (Error::hadError) {
            return runtime_err_exitcode;
        } else {
            return 0;
        }
    }

    int runRepl() {
        std::string line;
        int ret = 0;

        while (!ret) {
            std::cout << "> ";
            std::getline(std::cin, line);
            if (line.empty() || line == exit) {
                return 0;
            }
            
            ret = run(line);
            // ignore errors for now
            if (Error::hadError) {
                Error::hadError = false;
                ret = 0;
            }
        }

        return ret;
    }

    int runFile(const std::string& path) {
        std::stringstream input;
        std::ifstream file(path);

        input << file.rdbuf();
        file.close();

        return run(input.str());
    }
}
