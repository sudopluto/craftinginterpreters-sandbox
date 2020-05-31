#include "iostream"
#include "string"

#include "Lox.h"


int main(int argc, char** argv) {

    if (argc > 2) {
        std::cout << "Usage: lox [script]\n";
        return 64;
    }
    
    if (argc == 2) {
        std::string path(argv[1]);
       return Lox::runFile(path);
    }
    else {
        return Lox::runRepl();
    }
}
