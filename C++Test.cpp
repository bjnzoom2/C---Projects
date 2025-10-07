#include <iostream>
#include <string>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 10) {
            continue;
        }

        if (i == 15) {
            break;
        }

        std::cout << i << ' ';
    }

    return 0;
}