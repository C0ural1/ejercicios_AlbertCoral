#include <iostream>
#include <string>

// Ejercicio 2, expresiones algebraicas

int main()
{

    std::cout << "Dada la ecuacion algebraica y = ax³ + 7, indica cuales son expressiones son correctas\n\n";
    std::cout << "a) y = a * x * x * x + 7 ---> Correcto \n";
    std::cout << "b) y = a * x * x * (x + 7) ---> Incorrecto, el resultado de esta expression es: ax³ + 7ax² \n";
    std::cout << "c) y = (a * x) * x * (x + 7) ---> Incorrecto, el resultado de esta expression es: ax³ + 7ax² \n";
    std::cout << "d) y = (a * x) * x * x + 7 ----> Correcto \n";
    std::cout << "e) y = a * (x * x * x) + 7 ----> Correcto \n";
    std::cout << "f) y = a * x * (x * x + 7) ----> Incorrecto, el resultado de esta expression es: ax³ + 7ax \n";

    return 0;
}