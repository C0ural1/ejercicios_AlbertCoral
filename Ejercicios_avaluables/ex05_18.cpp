// ex05_18.cpp
// Ejercicio 5.18: Inversión de cifras mediante una función.

#include <iostream>
using namespace std;

// Función que recibe un entero y devuelve sus cifras en orden inverso
int invertirCifras(int numero)
{
    int invertido = 0;

    while (numero > 0)
    {
        int cifra = numero % 10;            // Extrae la última cifra
        invertido = invertido * 10 + cifra; // Añade la cifra al número invertido
        numero = numero / 10;               // Elimina la última cifra del número original
    }

    return invertido;
}

int main()
{
    int numeroOriginal = 0;

    cout << "Introduce un número entero para invertir sus cifras: ";
    cin >> numeroOriginal;

    int numeroInvertido = invertirCifras(numeroOriginal);

    cout << "El número con las cifras inversas es: " << numeroInvertido << "\n";

    return 0;
}