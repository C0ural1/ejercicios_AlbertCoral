// ex03_25b.cpp
// Ejercicio 3.25 b): Aproximación de la constante matemática e mediante serie.

#include <iostream>
using namespace std;

int main()
{
    int terminos = 0;
    int contador = 1;
    double e = 1.0;         // Acumulador para el valor de e
    double factorial = 1.0; // Para calcular el factorial de cada término

    cout << "Introduce el número de términos para aproximar e: ";
    cin >> terminos;

    if (terminos <= 0)
    {
        cout << "El número de términos debe ser mayor que 0.\n";
        return 1;
    }

    // Bucle para sumar los términos de la serie
    while (contador < terminos)
    {
        factorial *= contador;  // Calcula el factorial del término actual
        e += (1.0 / factorial); // Suma 1 / i!
        ++contador;
    }

    cout << "El valor aproximado de e con " << terminos << " términos es: " << e << "\n";

    return 0;
}