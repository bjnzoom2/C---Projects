#include <iostream>

class Shape {
    public:
    virtual void print() = 0;
};

class Triangle : public Shape{
    public:
    void print() {std::cout << "Triangle\n";}
};

int main() {
    Triangle tri;
    tri.print();

    return 0;
}