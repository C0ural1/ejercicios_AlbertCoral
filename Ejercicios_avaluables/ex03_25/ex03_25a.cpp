// ex03_25a.cpp
// Ejercicio 3.25 a): Cálculo del factorial de un número entero no negativo.

#include <iostream>
using namespace std;

int main()
{
    int numero = 0;
    long long factorial = 1; // Usamos long long para permitir valores más grandes

    cout << "Introduce un entero no negativo: ";
    cin >> numero;

    // Validar que el número no sea negativo
    if (numero < 0)
    {
        cout << "El número debe ser mayor o igual a 0.\n";
        return 1;
    }

    // Guardar el valor inicial para ir decrementándolo en el bucle
    int contador = numero;

    // Calcular el factorial mediante un bucle while
    while (contador > 1)
    {
        factorial *= contador;
        --contador;
    }

    cout << numero << "! = " << factorial << "\n";

    return 0;
}