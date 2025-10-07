#include <iostream>
#include <string>

int main() {
    std::string text;

    int counter = 0;
    
    while (text.empty()) {
        std::cout << "Enter text: ";
        std::getline(std::cin, text);
    }

    while (counter < text.length()) {
        counter += 1;
        std::cout << counter << ' ';
    }

    return 0;
}