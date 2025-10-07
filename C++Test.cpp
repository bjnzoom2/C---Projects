#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    int counter = 0;
    if (!text.empty()) {
        while (counter < text.length()) {
            counter += 1;
            std::cout << counter << ' ';
        }
    } else {
        std::cout << "No text detected" << '\n';
    }

    return 0;
}