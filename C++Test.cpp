#include <iostream>

typedef std::string string_t;

int main(){
    double radius = 5;
    const double PI = 3.1415962;
    double circumference = 2 * PI * radius;

    string_t string = "Typedef testing";

    std::cout << string << '\n';
    std::cout << circumference << "cm" << '\n';

    return 0;
}