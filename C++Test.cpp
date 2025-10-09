#include <iostream>

int main() {
    int array[] = {23, 19, 2006};
    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        std::cout << array[i] << '\n';
    }

    return 0;
}