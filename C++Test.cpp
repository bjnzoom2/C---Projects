#include <iostream>

struct Vec3 {
    float x, y, z;
};

namespace std {
    template <typename T>
    struct is_vec3 : std::false_type {};
    template <>
    struct is_vec3<Vec3> : std::true_type {};
};

int main() {
    int x = 5;
    float y = 0.1f;
    std::cout << std::is_floating_point_v<decltype(x)> << '\n';
    std::cout << std::is_floating_point_v<decltype(y)> << '\n';

    Vec3 vec3;
    std::cout << std::is_vec3<int>::value << '\n';
    std::cout << std::is_vec3<decltype(vec3)>::value << '\n';

    return 0;
}