#include <iostream>

int main() {
    int age;
    std::cout << "How old are you?" << '\n';
    std::cin >> age;

    if (age < 21) {
        std::cout << "You are not allowed to vote" << '\n';
    } else {
        std::cout << "You are allowed to vote" << '\n';
    }

    return 0;
}