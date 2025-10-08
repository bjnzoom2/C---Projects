#include <iostream>
#include <string>

std::string concatString(std::string string1, std::string string2) {
    return string1 + ' ' + string2;
}

int main() {
    std::string string1;
    std::string string2;

    do {
        std::cout << "Enter first string: ";
        std::getline(std::cin, string1);
    } while (string1.empty());

    do {
        std::cout << "Enter second string: ";
        std::getline(std::cin, string2);
    } while(string2.empty());

    std::cout << concatString(string1, string2) << '\n';

    return 0;
}