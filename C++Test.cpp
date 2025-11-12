#include <iostream>

class Vec2 {
    private:
    float x, y;

    public:
    Vec2(float _x, float _y) : x(_x), y(_y) {}
    float getX() {return x;}
    float getY() {return y;}
    Vec2 operator+(Vec2& other) {
        return Vec2(x + other.x, y + other.y);
    }
};

int main() {
    Vec2 vector1(10, 5);
    Vec2 vector2(-2, 8);

    Vec2 vec = vector1 + vector2;

    std::cout << vec.getX() << ' ' << vec.getY() << '\n';

    return 0;
}