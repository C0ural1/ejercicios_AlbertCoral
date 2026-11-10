// ex03_26_cifrar.cpp
// Ejercicio 3.26: Cifrado de un entero de cuatro cifras.

#include <iostream>
using namespace std;

int main()
{
    int numero = 0;

    cout << "Introduce un entero de cuatro cifras para cifrar: ";
    cin >> numero;

    // Validar que tenga 4 cifras
    if (numero < 1000 || numero > 9999)
    {
        cout << "El número debe tener exactamente 4 cifras.\n";
        return 1;
    }

    // Extraer cada cifra individualmente
    int millar = numero / 1000;
    int centena = (numero / 100) % 10;
    int decena = (numero / 10) % 10;
    int unidad = numero % 10;

    // Aplicar la regla: sumar 7 y sacar el resto de dividir entre 10
    millar = (millar + 7) % 10;
    centena = (centena + 7) % 10;
    decena = (decena + 7) % 10;
    unidad = (unidad + 7) % 10;

    // Intercambiar: primera con tercera, y segunda con cuarta
    int temporal = millar;
    millar = decena;
    decena = temporal;

    temporal = centena;
    centena = unidad;
    unidad = temporal;

    // Reconstruir el número cifrado (asegurando ceros a la izquierda si los hubiera con formato, o imprimiendo directo)
    cout << "El número cifrado es: " << millar << centena << decena << unidad << "\n";

    return 0;
}