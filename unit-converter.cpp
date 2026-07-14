#include <iostream>

double celsiustoFarenheit(double celsius);
double fahrenheitoCelsius(double farenheit);
double temp;
int choice;

int main () 
{
    // OPENING MESSAGE
    std::cout << "====================================\n";
    std::cout << "        TEMPERATURE CONVERTER \n";
    std::cout << "====================================\n";
    std::cout << "[1] Celsius to Farenheit\n";
    std::cout << "[2] Farenheit to Celsius\n";

    // USER INPUT
    std::cout << "What unit would you like to convert to (1-2): ";
    std::cin >> choice;

    if(choice == 1)
    {
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;
        temp = celsiustoFarenheit(temp);

        std::cout << "Temperature in Farenheit: " << temp << "F\n";
    }
    else if(choice == 2)
    {
        std::cout << "Enter the temperature in Farenheit: ";
        std::cin >> temp;
        temp = fahrenheitoCelsius(temp);

        std::cout << "Temperature in Celsius: " << temp << "C\n";
    }
    else
    {
        std::cout << "Invalid. Please choose between 1 and 2.\n";
    }

    return 0;
}

// Function for Celsius to Fahrenheit
// Using the formula: fahrenheit = (celsius * 9 / 5) + 32;
double celsiustoFarenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function for Fahrenheit to Celsius
// Using the formula: celsius = (fahrenheit - 32) * 5 / 9;
double fahrenheitoCelsius(double farenheit)
{
    return (farenheit - 32) * 5 / 9;
}