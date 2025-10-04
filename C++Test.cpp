#include <iostream>
using namespace std;

namespace radius2{
    double radius = 7;
}

int main(){
    double radius = 5;
    const double PI = 3.1415962;
    double circumference = 2 * PI * radius2::radius;

    cout << circumference << "cm" << '\n';

    return 0;
}