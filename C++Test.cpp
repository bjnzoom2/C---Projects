#include <iostream>
#include <memory>

class Object {
    public:
    Object() {
        std::cout << "Created\n";
    }

    ~Object() {
        std::cout << "Destroyed\n";
    }

    void print() {
        std::cout << "Object\n";
    }
};

int main() {
    Object* rPtr = new Object;
    rPtr->print();
    delete rPtr;

    std::unique_ptr<Object> uSmartPtr = std::make_unique<Object>();
    uSmartPtr->print();

    std::shared_ptr<Object> sSmartPtr = std::make_shared<Object>();
    std::shared_ptr<Object> sPtr0 = sSmartPtr;

    sSmartPtr->print();
    sPtr0->print();

    return 0;
}