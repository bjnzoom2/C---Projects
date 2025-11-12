#include <iostream>

class Square {
    private:
    int x;

    public:
    Square(int _x) : x(_x) {}

    void setX(int _x) {x = _x;}
    int getX() {return x;}
    virtual void printType() {std::cout << "Square\n";}
};

class Rectangle : public Square{
    private:
    int y;

    public:
    Rectangle(int _x, int _y) : Square(_x) {y = _y;}
    void setY(int _y) {y = _y;}
    int getY() {return y;}
    void printType() {std::cout << "Rectangle\n";}
};

void func(Square& square) {
    square.printType();
    std::cout << square.getX() << '\n';
}

int main() {
    Square square(5);
    Rectangle rect(2, 8);

    Square* sptr = &rect;
    sptr->printType();

    func(square);
    func(rect);

    return 0;
}