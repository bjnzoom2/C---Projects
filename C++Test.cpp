#include <iostream>

void findElement(double array[], int size, double numChoice) {
    for (int i = 0; i < size; i++) {
        if (array[i] == numChoice) {
            std::cout << numChoice << " has been found at index " << i << " of " << array << '\n';
            break;
        } else if (i == size - 1) {
            std::cout << numChoice << " was not found in " << array << '\n';
        }
    }
}

int main() {
    double array[] = {13, 2, 65, 101};
    int size = sizeof(array) / sizeof(array[0]);

    double numChoice;
    std::cout << "Enter number: ";
    std::cin >> numChoice;

    findElement(array, size, numChoice);

    return 0;
}