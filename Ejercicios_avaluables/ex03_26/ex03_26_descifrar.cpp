// ex03_26_descifrar.cpp
// Ejercicio 3.26: Descifrado de un entero de cuatro cifras.

#include <iostream>
using namespace std;

int main()
{
    int numeroCifrado = 0;

    cout << "Introduce un entero de cuatro cifras cifrado para recuperar el original: ";
    cin >> numeroCifrado;

    if (numeroCifrado < 0 || numeroCifrado > 9999)
    {
        cout << "Introduce un formato válido de 4 cifras.\n";
        return 1;
    }

    // Extraer las cifras del número cifrado
    int millar = numeroCifrado / 1000;
    int centena = (numeroCifrado / 100) % 10;
    int decena = (numeroCifrado / 10) % 10;
    int unidad = numeroCifrado % 10;

    // Revertir el intercambio: primera con tercera, y segunda con cuarta
    int temporal = millar;
    millar = decena;
    decena = temporal;

    temporal = centena;
    centena = unidad;
    unidad = temporal;

    // Revertir la operación matemática: si sumamos 7 y sacamos %,
    // para deshacerlo si el número es menor a 7 sumamos 10 antes de restar 7.
    millar = (millar >= 7) ? (millar - 7) : (millar + 10 - 7);
    centena = (centena >= 7) ? (centena - 7) : (centena + 10 - 7);
    decena = (decena >= 7) ? (decena - 7) : (decena + 10 - 7);
    unidad = (unidad >= 7) ? (unidad - 7) : (unidad + 10 - 7);

    // Mostrar el número original recuperado
    cout << "El número original recuperado es: " << millar << centena << decena << unidad << "\n";

    return 0;
}