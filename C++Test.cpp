#include <iostream>

int main(){
    int x = 5;
    int y = 2;
    double z = 6.3;
    char grade = 'A';
    bool alive = true;

    std::string text = "This is C++";

    std::cout << x + y + z << '\n';
    std::cout << grade << '\n';
    std::cout << alive << '\n';
    std::cout << "Hello, " << text << '\n';

    return 0;
}