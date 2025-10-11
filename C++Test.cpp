#include <iostream>

enum Animal {dog = 0, cat = 1, bird = 2, fish = 3, hamster = 4};

int main() {
    Animal pet = dog;

    switch(pet) {
        case 0:
            std::cout << "It's a dog\n";
            break;
        case 1:
            std::cout << "It's a cat\n";
            break;
        case 2:
            std::cout << "It's a brid\n";
            break;
        case 3:
            std::cout << "It's a fish\n";
            break;
        case 4:
            std::cout << "It's a hamster\n";
            break;
        default:
            std::cout << "Invalid pet\n";
    }

    return 0;
}