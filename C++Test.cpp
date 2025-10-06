#include <iostream>

int main() {
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    num % 2 ? std::cout << "Number is odd" << '\n' : std::cout << "Number is even" << '\n';

    return 0;
}