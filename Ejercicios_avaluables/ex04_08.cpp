// ex04_08.cpp
// Ejercicio 4.8: Cálculo del producto de los enteros impares del 1 al 15.

#include <iostream>
using namespace std;

int main()
{
    long long producto = 1; // Variable acumuladora para la multiplicación

    // Bucle for que recorre los números impares del 1 al 15
    for (int i = 1; i <= 15; i += 2)
    {
        producto = producto * i; // Multiplica el valor actual por el impar
    }

    // Muestra el resultado final por pantalla
    cout << "El producto de los enteros impares del 1 al 15 es: " << producto << "\n";

    return 0;
}