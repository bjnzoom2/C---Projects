#include <iostream>

int main() {
    int score;
    std::cout << "Enter score: ";
    std::cin >> score;

    score >= 50 ? std::cout << "You passed" << '\n' : std::cout << "You failed" << '\n';

    return 0;
}