#include <iostream>

#include <array>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

int main() {
    srand(time(NULL));

    std::array<int, 5> array = {1, 2, 3, 4, 5};
    std::cout << array.size() << '\n';

    std::vector<int> vector = {1, 2, 3, 4, 5};
    vector.push_back(6);

    for (int i : vector) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::list<int> list = {1, 2, 3, 4, 5};
    for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++) {
        std::cout << &*iterator << ' ';
    }
    list.push_front(6);
    std::cout << '\n';
    for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++) {
        std::cout << &*iterator << ' ';
    }
    std::cout << '\n';

    std::deque<int> deque = {1, 2, 3, 4, 5};
    for (int i = 0; i < 3; i++) {
        deque.push_back(deque.back() + 1);
    }
    for (int i = 0; i < deque.size(); i++) {
        std::cout << &deque[i] << ' ';
    }
    std::cout << '\n';

    std::set<int> set;
    for (int i = 0; i <= 10; i++) {
        set.insert(rand() % 100 + 1);
    }
    for (int i : set) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::unordered_set<int> unSet;
    for (int i = 0; i <= 10; i++) {
        unSet.insert(rand() % 100 + 1);
    }
    for (int i : unSet) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::map<std::string, int> map = {
        {"Key1", 10},
        {"Key2", 5},
        {"Key3", 21}
    };

    for (auto i : map) {
        std::cout << i.first << " = " << i.second << '\n';
    }

    std::cout << '\n';

    std::unordered_map<std::string, int> unMap = {
        {"Key1", 10},
        {"Key2", 5},
        {"Key3", 21}
    };

    for (auto i : unMap) {
        std::cout << i.first << " = " << i.second << '\n';
    }

    return 0;
}