#include <iostream>
#include <string>

// Ejercicio 3, orden operaciones

int main()
{

    std::cout << "a) x = 7 + 3 * 6 / 2 - 1 ---> Orden: 1.Multiplicacion, 2.Division, 3.Suma 4.Resta \n";
    int x1 = 7 + 3 * 6 / 2 - 1;
    std::cout << "Resultado: " << x1 << "\n";

    std::cout << "b) x = 2 % 2 + 2 * 2 - 2 / 2 ---> Orden: 1.Modulo 2.Multiplicacion, 3.Division, 4.Suma 5.Resta \n";
    int x2 = 2 % 2 + 2 * 2 - 2 / 2;
    std::cout << "Resultado: " << x2 << "\n";

    std::cout << "c) (3 * 9 * (3 + (9 * 3 / (3)))) ---> Orden: 1.Parentesis interno: 9*3, 2.Division: 27/3, 3.Suma parentesis: 3+9, 4.Multipliaciones finales \n";
    int x3 = (3 * 9 * (3 + (9 * 3 / (3))));
    std::cout << "Resultado: " << x3 << "\n";
    return 0;
}