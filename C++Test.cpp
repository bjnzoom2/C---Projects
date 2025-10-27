#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile {"Read.txt"};

    if (!inFile) {
        std::cerr << "File could not be opened for reading\n";
        return -1;
    }
    std::string fileInput = "";
    while (inFile >> fileInput) {
        std::cout << fileInput << ' ';
    }
    
    std::ofstream file {"File.txt"};

    if (!file) {
        std::cerr << "File could not be opened for writing\n";
        return -1;
    }

    file << "Hello\n";
    file << "I am a file\n";

    return 0;
}