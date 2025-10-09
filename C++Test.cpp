#include <iostream>

const int QUESTIONAMOUNT = 3;

void askQuestions(std::string questions[][QUESTIONAMOUNT], int rows, int columns) {
    int score = 0;
    std::string answer;

    for (int i = 0; i <= rows; i++) {
        std::cout << questions[0][i];
        std::cin >> answer;

        if (answer == questions[1][i]) {
            std::cout << "Correct!\n";
            score++;
        } else {
            std::cout << "Incorrect! The correct answer was " << questions[1][i] << '\n';
        }
    }

    std::cout << "You score is " << score << " / " << columns << '\n';
}

int main() {
    std::string questions[2][QUESTIONAMOUNT] = {{"1. What is 1 + 1: ", "2. What coding language is this: ", "3. What is the speed of light in a vacuum: "},
                                               {"2", "C++", "299792458"}};
    int rows = sizeof(questions) / sizeof(questions[0]);
    int columns = sizeof(questions[0]) / sizeof(questions[0][0]);

    askQuestions(questions, rows, columns);

    return 0;
}