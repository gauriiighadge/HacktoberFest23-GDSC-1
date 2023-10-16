#include <iostream>

int main() {
    double celsius, fahrenheit;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees" << std::endl;

    return 0;
}
