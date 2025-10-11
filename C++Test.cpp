#include <iostream>
#include <windows.h>

int counter = 0;

class Object {
    public:
        double mass = 1; // kg
        double speed = 0; // m/s
        double acceleration = 0; // m/s

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
    
    Object(double mass, double speed, double acceleration) {
        this -> mass = mass;
        this -> speed = speed;
        this -> acceleration = acceleration;
    }
};

int main() {
    bool running = true;

    double mass;
    std::cout << "Enter mass: ";
    std::cin >> mass;

    double acceleration;
    std::cout << "Enter acceleration: ";
    std::cin >> acceleration;
    std::cout << '\n';

    Object ball(mass, 0, acceleration);

    while (running) {
        ball.run();
        Sleep(1000);
    }

    return 0;
}