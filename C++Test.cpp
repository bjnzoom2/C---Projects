#include <iostream>

int main() {
    std::string string = "Hello";
    int num = 12;
    bool boolean = true;

    std::cout << &string << '\n';
    std::cout << &num << '\n';
    std::cout << &boolean << '\n';

    return 0;
}