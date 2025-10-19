#include <iostream>

#include <array>
#include <vector>
#include <list>

int main() {
    std::array<int, 5> array = {1, 2, 3, 4, 5};
    std::cout << array.size() << '\n';

    std::vector<int> vector = {1, 2, 3, 4, 5};
    vector.push_back(6);

    for (int i : vector) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::list<int> list = {1, 2, 3, 4, 5};
    for (int i : list) {
        std::cout << &i << ' ';
    }
    list.push_back(6);
    std::cout << '\n';
    for (int i : list) {
        std::cout << &i << ' ';
    }
    std::cout << '\n';

    return 0;
}