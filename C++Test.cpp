#include <iostream>

template <typename T, typename U>

auto max(T x, U y) {
    return (x > y) ? x : y;
}

template <typename T, typename U>

auto min(T x, U y) {
    return (x < y) ? x : y;
}

int main() {
    std::cout << max(1, 1.2) << '\n';
    std::cout << min(1, 1.2) << '\n';

    return 0;
}