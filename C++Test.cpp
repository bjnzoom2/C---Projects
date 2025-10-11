#include <iostream>
#include <windows.h>

class Object {
    public:
        double mass = 1; // kg
        double speed = 0; // m/s
        double acceleration = 0; // m/s

        void accelerate(double aSpeed) {
            acceleration += aSpeed;
        }

        double getForce() {
            return mass * acceleration;
        }

        void run() {
            speed += acceleration;
            std::cout << "Acceleration: " << acceleration << " m/s\n";
            std::cout << "Speed: " << speed << " m/s\n";
            std::cout << "Force: " << getForce() << " N\n\n"; 
        }
};

int main() {
    bool running = true;
    Object ball;
    ball.mass = 10;

    while (running) {
        ball.run();
        ball.accelerate(1);
        Sleep(1000);
    }

    return 0;
}