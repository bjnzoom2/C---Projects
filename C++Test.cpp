#include <iostream>

int main() {
    int num = 12;
    int *pNum = &num;

    int array[] = {1, 3, 5, 7, 9};
    int *pArray = array;

    std::cout << pNum << '\n';
    std::cout << *pNum << '\n';

    std::cout << pArray << '\n';
    std::cout << *pArray << '\n';

    return 0;
}