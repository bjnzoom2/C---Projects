#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    int *pArray = nullptr;

    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    pArray = new int[size];
    
    for (int i = 0; i < size; i++) {
        pArray[i] = rand();
        std::cout << pArray[i] << ' ';
    }

    delete[] pArray;

    return 0;
}