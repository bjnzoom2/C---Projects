#include <iostream>

int main() {
    char tempUnit;
    std::cout << "Enter temperature unit: ";
    std::cin >> tempUnit;
    
    char newTempUnit;
    std::cout << "Enter new temperature unit: ";
    std::cin >> newTempUnit;
    
    double temperature;
    std::cout << "Enter temperature: ";
    std::cin >> temperature;
    
    double newTemperature;
    
    bool invalid;
    
    if (tempUnit == 'C' && newTempUnit == 'F') {
        newTemperature = temperature * 1.8 + 32;
    } else if (tempUnit == 'C' && newTempUnit == 'K') {
        newTemperature = temperature + 273.15;
    } else if (tempUnit == 'F' && newTempUnit == 'C') {
        newTemperature = (temperature - 32) / 1.8;
    } else if (tempUnit == 'F' && newTempUnit == 'K') {
        newTemperature = (temperature + 459.67) / 1.8;
    } else if (tempUnit == 'K' && newTempUnit == 'C') {
        newTemperature = temperature - 273.15;
    } else if (tempUnit == 'K' && newTempUnit == 'F') {
        newTemperature = (temperature - 273.15) * 1.8 + 32;
    } else {
        std::cout << "Invalid temperature conversion" << '\n';
        invalid = true;
    }
    
    if (!invalid) {
        std::cout << newTemperature << " " << newTempUnit << '\n';   
    }

    return 0;
}