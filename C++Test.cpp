#include <iostream>

template <typename T, typename U>

class Vec2 {
    private:
    T x;
    U y;

    public:
    Vec2(T _x, U _y) : x(_x), y(_y) {}
    T getX() {return x;}
    U getY() {return y;}
    Vec2 operator+(Vec2& other) {
        return Vec2(x + other.x, y + other.y);
    }
};

int main() {
    Vec2 vector1(10, 5.8);
    Vec2<int, double> vector2(-2, 8);

    Vec2 vec = vector1 + vector2;

    std::cout << vec.getX() << ' ' << vec.getY() << '\n';

    return 0;
}