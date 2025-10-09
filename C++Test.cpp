#include <iostream>

int main() {
    const int SIZE = 50;

    int array[SIZE];
    std::fill(array, array + SIZE, 50);

    for (int num : array) {
        std::cout << num << '\n';
    }

    return 0;
}