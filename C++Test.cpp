#include <iostream>
#include <Windows.h>

enum Food {carrot = 4, chicken = 6, beef = 8};

class Animal {
    public:
        bool alive = true;
        double hungerLevel = 10;

    void eat(Food food) {
        hungerLevel += food;
        std::cout << "Hunger level: " << hungerLevel << '\n';
    }
};

class Dog : public Animal {
    public:
    
    void bark() {
        if (alive) {
            std::cout << "Woof" << '\n';
        }
    }

    void checkHunger() {
        if (alive) {
            std::cout << "Hunger level: " << hungerLevel << '\n';

            if (hungerLevel <= 0) {
                alive = false;
            } else if (hungerLevel <= 3) {
                bark();
            } else if (hungerLevel > 10) {
                hungerLevel = 10;
            }

            hungerLevel -= 1;
        }
    }
};

int main() {
    bool running = true;

    Dog dog1;

    while (running) {
        dog1.checkHunger();
        Sleep(5000);
    }

    return 0;
}