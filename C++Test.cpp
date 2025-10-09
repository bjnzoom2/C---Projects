#include <iostream>

int main() {
    const int SIZE = 50;

    int array[SIZE];
    std::fill(array, array + SIZE / 2, 50);
    std::fill(array + SIZE / 2, array + SIZE, 100);

    for (int num : array) {
        std::cout << num << '\n';
    }

    return 0;
}