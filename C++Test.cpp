#include <iostream>

int main(){
    int score;
    std::cout << "Enter score: ";
    std::cin >> score;

    int maxScore;
    std::cout << "Enter max score: ";
    std::cin >> maxScore;

    std::cout << score / (double) maxScore * 100 << "%" << '\n';

    return 0;
}