#include <iostream>
#include <windows.h>

int counter = 0;

class Object {
    public:
        double mass = 1; // kg
        double speed = 0; // m/s
        double acceleration = 0; // m/s

        void accelerate(double a) {
            acceleration = a;
        }

        double getAccelerationForce() {
            return mass * acceleration;
        }

        double getTotalForce() {
            return getAccelerationForce() * counter;
        }

        void run() {
            counter++;
            speed += acceleration;
            std::cout << "Mass: " << mass << " kg\n";
            std::cout << "Acceleration: " << acceleration << " m/s^2\n";
            std::cout << "Speed: " << speed << " m/s\n";
            std::cout << "Acceleration Force: " << getAccelerationForce() << " N\n";
            std::cout << "Total Force: " << getTotalForce() << " N\n\n";
        }
};

int main() {
    bool running = true;
    Object ball;

    ball.mass;
    std::cout << "Enter mass: ";
    std::cin >> ball.mass;

    double a;
    std::cout << "Enter acceleration: ";
    std::cin >> a;
    std::cout << '\n';

    while (running) {
        ball.accelerate(a);
        ball.run();
        Sleep(1000);
    }

    return 0;
}