#include <iostream>
#include <ctime>

void rollDice(int times) {
    srand(time(NULL));
    int dice;

    for (int i = 1; i <= times; i++) {
        dice = (rand() % 6) + 1;
        std::cout << dice << '\n';
    }
}

int main() {
    rollDice(4);

    return 0;
}