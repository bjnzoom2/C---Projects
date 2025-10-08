#include <iostream>
#include <iomanip>

void showBalance(double balance) {
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit() {
    double amount;
    std::cout << "Enter deposit amount: $";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        std::cout << "Invalid amount" << '\n';
        return 0;
    }

    return amount;
}

double withdraw(double balance) {
    double amount;
    std::cout << "Enter withdrawal amount: $";
    std::cin >> amount;

    if (balance >= amount && amount > 0) {
        return amount;    
    } else {
        std::cout << "Insufficient funds" << '\n';
        return 0;
    }
}

int main() {
    double balance = 0;
    int choice;

    do {
        std::cout << "Choose an option:" << '\n';
        std::cout << "1. Show Balance" << '\n';
        std::cout << "2. Deposit" << '\n';
        std::cout << "3. Withdraw" << '\n';
        std::cout << "4. Exit" << '\n';

        std::cin >> choice;

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                break;
            default:
                std::cout << "Invalid choice" << '\n';
        }
    } while (choice != 4);

    return 0;
}