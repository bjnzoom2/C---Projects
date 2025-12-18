#include <iostream>
#include <vector>
#include <string>
#include <fstream>

const std::string ret = "return";

enum TokenType {RETURN, NUMBER, UNKNOWN};

struct Token {
    TokenType tokenType = UNKNOWN;
    std::string text;
};

std::vector<Token> tokenise(const std::string& input) {
    std::vector<Token> tokens;
    int i = 0;
    while (i < input.size()) {
        if (std::isspace(input[i])) {
            i++;
            continue;
        }

        if (input.substr(i, ret.size()) == ret && (i + ret.size() == input.size() || std::isspace(input[i + ret.size()]))) {
            tokens.push_back({TokenType::RETURN, ret});
            i += ret.size();
            continue;
        }

        if (std::isdigit(input[i])) {
            std::string num;
            while (i < input.size() && std::isdigit(input[i])) {
                num += input[i];
                i++;
            }
            tokens.push_back({TokenType::NUMBER, num});
            continue;
        }
    }

    return tokens;
}

int main() {
    std::ifstream codeFile{"File.hy"};

    if (codeFile.is_open()) {
        std::string inputLine;
        while (std::getline(codeFile, inputLine)) {
            std::vector<Token> tokens = tokenise(inputLine);
            for (int i = 0; i < tokens.size(); i++) {
                Token token = tokens[i];
                if (token.tokenType == TokenType::NUMBER && tokens[i-1].tokenType == TokenType::RETURN && i > 0) {
                    std::cout << token.text << '\n';
                }
            }
        }
    } else {
        std::cerr << "Failed to open File.hy\n";
    }

    return 0;
}