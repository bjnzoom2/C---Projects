#include <iostream>

int main() {
    int *pointer = nullptr;
    int num = 12;

    pointer = &num;

    if (pointer != nullptr) {
        std::cout << pointer << '\n';
        std::cout << *pointer << '\n';
    } else {
        std::cout << "Pointer is a null pointer\n";
    }

    return 0;
}