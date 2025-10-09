#include <iostream>

double sum(double array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return sum;
}

int main() {
    double array[] = {23, 19, 2006};
    int size = sizeof(array) / sizeof(int);

    std::cout << sum(array, size) << '\n';

    return 0;
}