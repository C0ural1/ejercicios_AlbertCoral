#include <iostream>
#include <string>
// Include per el smallest i largest (min & max).
#include <algorithm>

// Ejercicio 4, Suma promedio producto mínimo y máximo

int main()
{
    int numero1;
    int numero2;
    int numero3;

    std::cout << "Input three diferent integers:";
    std::cin >> numero1 >> numero2 >> numero3;

    int sum = numero1 + numero2 + numero3;
    int average = (numero1 + numero2 + numero3) / 3;
    int product = numero1 * numero2 * numero3;

    int largest = std::max(numero1, std::max(numero2, numero3));
    int smallest = std::min(numero1, std::min(numero2, numero3));

    std::cout << "Sum is: " << sum << "\n";
    std::cout << "Average is: " << average << "\n";
    std::cout << "Sum is: " << product << "\n";
    std::cout << "Prodcut is: " << sum << "\n";
    std::cout << "Smallest is: " << largest << "\n";
    std::cout << "Largest is: " << smallest << "\n";

    return 0;
}