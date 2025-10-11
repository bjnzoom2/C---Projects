#include <iostream>

struct object {
    double mass; // kg
    double volume; // m^3
};

int main() {
    object ball;
    ball.mass = 12;
    ball.volume = 5;

    double ballDensity = ball.mass / ball.volume;

    std::cout << ball.mass << " kg" << '\n';
    std::cout << ball.volume << " m^3" << '\n';
    std::cout << ballDensity << " kg/m^3" << '\n';

    return 0;
}