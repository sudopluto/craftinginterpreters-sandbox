#include "Tokenizer.h"

#include <sstream>


namespace Tokenizer {

    int tokenize(const std::string& input, std::vector<std::string>& buff) {

        int l = 0;
        int r = 0;
        std::string temp;

        while (r < input.length()) {
            // starting new window
            if (l == r) {
                if (delims.find(input[r]) == std::string::npos) {
                    temp.push_back(input[r]);
                    ++r;
                } else {
                    if (punc.find(input[r]) != std::string::npos) {
                        buff.push_back(std::string{input[r]});
                    }
                    ++l;
                    ++r;
                }
            } else {
                // check to see if good char in r window 
                if (delims.find(input[r]) == std::string::npos) {
                    temp.push_back(input[r]);
                    ++r;
                } else {
                    // reload the things
                    buff.push_back(temp);
                    temp.clear();
                    if (punc.find(input[r]) != std::string::npos) {
                        buff.push_back(std::string{input[r]});
                    }
                    ++r;
                    l = r;
                }
            }
        }

        if (buff.size() > 0 || temp.length() > 0) {
            buff.push_back(temp);
        }
        return buff.size();
    }
}
