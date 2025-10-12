#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector1 = {1, 2, 3, 4, 5};
    vector1.insert(vector1.begin() + 1, 6);
    vector1.erase(vector1.begin() + 3);

    for (int value : vector1) {
        std::cout << value << ' ';
    }

    std::cout << '\n';

    return 0;
}