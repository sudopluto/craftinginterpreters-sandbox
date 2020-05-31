#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Lox {
    static int run(const std::string& prg) {
        std::cout << prg;
        if (prg.back() != '\n') {
            std::cout << "\n";
        }

        return 0;
    }
public:

    static int runRepl() {
        std::string line;
        int ret = 0;
        while (!ret) {
            std::cout << "> ";
            std::getline(std::cin, line);
            ret = run(line);
        }
        return ret;
    }

    static int runFile(const std::string& path) {
        std::stringstream input;
        std::ifstream file(path);

        input << file.rdbuf();
        file.close();

        return run(input.str());
    }
};
