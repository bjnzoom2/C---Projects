#include <iostream>

int main() {
    int array[] = {23, 19, 2006};
    for (int num : array) {
        std::cout << num << '\n';
    }

    return 0;
}