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
    std::cout << uSmartPtr.get() << '\n';
    uSmartPtr->print();

    std::shared_ptr<Object> sSmartPtr = std::make_shared<Object>();
    {
        std::weak_ptr<Object> wSmartPtr = sSmartPtr;
        if (!wSmartPtr.expired()) std::cout << "Not Expired\n";
    }
    std::shared_ptr<Object> sPtr0 = sSmartPtr;

    std::cout << sSmartPtr.get() << '\n';
    sSmartPtr->print();
    std::cout << sPtr0.get() << '\n';
    sPtr0->print();

    return 0;
}