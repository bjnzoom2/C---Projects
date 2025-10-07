#include <iostream>
#include <ctime>

void rollDice() {
    srand(time(NULL));

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;

    std::cout << dice1 << '\n';
    std::cout << dice2 << '\n';
    std::cout << dice3 << '\n';
}

int main() {
    rollDice();

    return 0;
}