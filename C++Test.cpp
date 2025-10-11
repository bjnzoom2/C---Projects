#include <iostream>

int factorial(int num) {
    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}

int main() {
    std::cout << factorial(5) << '\n';

    return 0;
}