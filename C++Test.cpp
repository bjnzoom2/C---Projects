#include <iostream>

int main() {
    int array2d[][2] = {{1, 2},
                        {3, 4}};
    int rows = sizeof(array2d) / sizeof(array2d[0]);
    int columns = sizeof(array2d[0]) / sizeof(array2d[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << array2d[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}