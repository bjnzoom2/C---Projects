#include <iostream>

double sum(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return sum;
}

int main() {
    double array[3];
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        std::cout << "Enter #" << i + 1 << ": ";
        std::cin >> array[i];
    }

    std::cout << sum(array, size) << '\n';

    return 0;
}