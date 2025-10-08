#include <iostream>
#include <cmath>

double getVolume(double length) {
    double volume = pow(length, 3);

    return volume;
}

double getVolume(double length, double width, double height) {
    double volume = length * width * height;

    return volume;
}

int main() {
    double length;
    double width;
    double height;

    std::cout << "Enter length: ";
    std::cin >> length;

    std::cout << "Enter width: ";
    std::cin >> width;

    std::cout << "Enter height: ";
    std::cin >> height;

    std::cout << getVolume(length) << "cm^3" << '\n';
    std::cout << getVolume(length, width, height) << "cm^3" << '\n';

    return 0;
}