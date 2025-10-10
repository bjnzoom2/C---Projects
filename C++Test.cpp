#include <iostream>
#include <ctime>

std::string generateCardNumber(const int length) {
    std::string cardNumber = "";
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        char randomNum = rand() % 10 + '0';
        cardNumber += randomNum;
    }

    return cardNumber;
}

int getDigits(const int number) {
    int result = (number % 10) + (number / 10 % 10);
    return result;
}

int sumEven(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        int digit = getDigits(cardNumber[i] * 2);
        sum += digit;
    }

    return sum;
}

int sumOdd(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = getDigits(cardNumber[i]);
        sum += digit;
    }

    return sum;
}

int main() {
    while (true) {
        std::string cardNumber = generateCardNumber(16);
        int result = sumEven(cardNumber) + sumOdd(cardNumber);

        if (result % 10 == 0) {
            std::cout << cardNumber << " is valid";
            break;
        }
    }

    return 0;
}