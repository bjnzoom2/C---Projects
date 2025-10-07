#include <iostream>
#include <string>

int main() {
    std::string text;
    
    do {
        std::cout << "Enter text: ";
        std::getline(std::cin, text);
    } while (text.empty());

    for (int i = 1; i <= text.length(); i++) {
        std::cout << i << ' ';
    }

    return 0;
}