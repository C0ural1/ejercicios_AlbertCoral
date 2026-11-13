// ex05_06.cpp
// Ejercicio 5.6

#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()

using namespace std;

int main()
{
    int n = 0;

    // Inicializar la semilla para los números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    n = 1 + rand() % 2;      // a) 1 <= n <= 2
    n = 1 + rand() % 100;    // b) 1 <= n <= 100
    n = rand() % 10;         // c) 0 <= n <= 9
    n = 1000 + rand() % 113; // d) 1000 <= n <= 1112 (1112 - 1000 + 1 = 113 valores)
    n = -1 + rand() % 3;     // e) -1 <= n <= 1  (1 - (-1) + 1 = 3 valores)
    n = -3 + rand() % 15;    // f) -3 <= n <= 11 (11 - (-3) + 1 = 15 valores)

    return 0;
}