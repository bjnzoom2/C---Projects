#include <iostream>

int main() {
    int num = 12;
    double num2 = 10.2;
    char character = 'A';
    bool boolean = true;
    std::string string = "String";
    int array[] = {1, 2, 3, 4};

    std::cout << sizeof(num) << " bytes\n";
    std::cout << sizeof(num2) << " bytes\n";
    std::cout << sizeof(character) << " bytes\n";
    std::cout << sizeof(boolean) << " bytes\n";
    std::cout << sizeof(string) << " bytes\n";
    std::cout << sizeof(array) << " bytes\n";

    return 0;
}