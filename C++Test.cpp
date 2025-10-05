#include <iostream>

int main() {
    char grade;
    std::cout << "Enter grade: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Well done!!" << '\n';
            break;
        case 'B':
            std::cout << "Not bad!" << '\n';
            break;
        case 'C':
            std::cout << "Its fine I suppose." << '\n';
            break;
        case 'D':
            std::cout << "You have to work harder." << '\n';
            break;
        case 'F':
            std::cout << "Leave." << '\n';
            break;
        default:
            std::cout << "Invalid grade" << '\n';
    }

    return 0;
}