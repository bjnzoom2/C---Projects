#include <iostream>

struct object {
    double mass; // kg
    double volume; // m^3
};

double getDensity(object object) {
    return object.mass / object.volume;
}

int main() {
    object ball;
    ball.mass = 12;
    ball.volume = 5;

    double density = getDensity(ball);

    std::cout << ball.mass << " kg" << '\n';
    std::cout << ball.volume << " m^3" << '\n';
    std::cout << density << " kg/m^3" << '\n';

    return 0;
}