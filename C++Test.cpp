#include <iostream>
#include <cmath>

int main(){
    double opposite;
    std::cout << "Enter opposite length: ";
    std::cin >> opposite;

    double adjacent;
    std::cout << "Enter adjacent length: ";
    std::cin >> adjacent;

    double hypotenuse = sqrt(pow(opposite, 2) + pow(adjacent, 2));

    std::cout << "Hypotenuse length is " << hypotenuse << '\n';

    return 0;
}