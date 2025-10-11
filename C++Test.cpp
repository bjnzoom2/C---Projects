#include <iostream>
#include <ctime>

void drawBoard(char *spaces) {
    std::cout << '\n';
    std::cout << "       |       |       " << '\n';
    std::cout << "   " << spaces[0] << "   |   " << spaces[1] << "   |   " << spaces[2] << "   " << '\n';
    std::cout << "_______|_______|_______" << '\n';
    std::cout << "       |       |       " << '\n';
    std::cout << "   " << spaces[3] << "   |   " << spaces[4] << "   |   " << spaces[5] << "   " << '\n';
    std::cout << "_______|_______|_______" << '\n';
    std::cout << "       |       |       " << '\n';
    std::cout << "   " << spaces[6] << "   |   " << spaces[7] << "   |   " << spaces[8] << "   " << '\n';
    std::cout << "       |       |       " << '\n';
}

void playerMove(char *spaces, char player) {
    int number;

    do {
        std::cout << "Enter position number (1 to 9): ";
        std::cin >> number;

        if (spaces[number - 1] == ' ') {
            spaces[number - 1] = player;
            break;
        }
    } while (number > 9 || number < 1);
    
    drawBoard(spaces);
}

void computerMove(char *spaces, char computer) {
    srand(time(NULL));

    int number;

    while (true) {
        number = rand() % 9;

        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        } 
    }

    drawBoard(spaces);
}

char checkWinner(char *spaces, char player, char computer) {
    if ((spaces[0] == player && spaces[1] == player && spaces[2] == player) || (spaces[3] == player && spaces[4] == player && spaces[5] == player)
        || (spaces[6] == player && spaces[7] == player && spaces[8] == player) || (spaces[0] == player && spaces[3] == player && spaces[6] == player)
        || (spaces[1] == player && spaces[4] == player && spaces[7] == player) || (spaces[2] == player && spaces[5] == player && spaces[8] == player)
        || (spaces[0] == player && spaces[4] == player && spaces[8] == player) || (spaces[2] == player && spaces[4] == player && spaces[6] == player)) {
        
        return player;
    } else if ((spaces[0] == computer && spaces[1] == computer && spaces[2] == computer) || (spaces[3] == computer && spaces[4] == computer && spaces[5] == computer)
        || (spaces[6] == computer && spaces[7] == computer && spaces[8] == computer) || (spaces[0] == computer && spaces[3] == computer && spaces[6] == computer)
        || (spaces[1] == computer && spaces[4] == computer && spaces[7] == computer) || (spaces[2] == computer && spaces[5] == computer && spaces[8] == computer)
        || (spaces[0] == computer && spaces[4] == computer && spaces[8] == computer) || (spaces[2] == computer && spaces[4] == computer && spaces[6] == computer)) {

        return computer;
    } else {
        return ' ';
    }
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
            if (spaces[i] == ' ') {
                return false;
            }
        }

    return true;
}

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    bool running = true;

    char player;
    char computer;
    std::cout << "Enter player icon (X / O): ";
    std::cin >> player;

    switch(player) {
        case 'X':
            computer = 'O';
            break;
        case 'O':
            computer = 'X';
            break;
        default:
            std::cout << "Invalid icon" << '\n';
            running = false;
    }

    drawBoard(spaces);

    while (running) {
        bool tie;
        char winner;
        playerMove(spaces, player);
        winner = checkWinner(spaces, player, computer);
        tie = checkTie(spaces);

        if (winner == player) {
            std::cout << "Player has won\n";
            break;
        } else if (winner == computer) {
            std::cout << "Computer has won\n";
            break;
        } else if (tie) {
            std::cout << "It's a tie\n";
            break;
        }

        computerMove(spaces, computer);
        winner = checkWinner(spaces, player, computer);
        tie = checkTie(spaces);

        if (winner == player) {
            std::cout << "Player has won\n";
            break;
        } else if (winner == computer) {
            std::cout << "Computer has won\n";
            break;
        } else if (tie) {
            std::cout << "It's a tie\n";
            break;
        }
    }

    return 0;
}