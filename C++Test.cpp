#include <iostream>

int main() {
    int age;
    std::cout << "How old are you?" << '\n';
    std::cin >> age;

    if (age >= 21) {
        std::cout << "You may vote" << '\n';
    } else if (age < 1) {
        std::cout << "You have not even been born yet" << '\n';
    } else {
        std::cout << "You are not old enough to vote" << '\n';
    }

    return 0;
}