#include <iostream>

int main(){
    int score = 15;
    int maxScore = 20;

    std::cout << score / (double) maxScore * 100 << "%" << '\n';

    return 0;
}