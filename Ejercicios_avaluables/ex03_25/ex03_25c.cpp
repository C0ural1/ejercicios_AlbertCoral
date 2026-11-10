// ex03_25c.cpp
// Ejercicio 3.25 c): Cálculo del valor de e^x mediante serie.

#include <iostream>
using namespace std;

int main()
{
    double x = 0.0;
    int terminos = 0;

    cout << "Introduce el valor de x: ";
    cin >> x;

    cout << "Introduce el número de términos para la aproximación: ";
    cin >> terminos;

    if (terminos <= 0)
    {
        cout << "El número de términos debe ser mayor que 0.\n";
        return 1;
    }

    double resultado = 1.0; // Empieza con el primer término (1)
    double potencia = 1.0;  // Para calcular x^n
    double factorial = 1.0; // Para calcular n!
    int contador = 1;

    // Bucle while para calcular la serie de e^x
    while (contador < terminos)
    {
        potencia *= x;                       // Multiplica por x para obtener x^n
        factorial *= contador;               // Calcula el factorial n!
        resultado += (potencia / factorial); // Suma (x^n / n!)
        ++contador;
    }

    cout << "El valor aproximado de e^" << x << " con " << terminos << " términos es: " << resultado << "\n";

    return 0;
}