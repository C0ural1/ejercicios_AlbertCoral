// ex04_06.cpp
// Ejercicio 4.6: ¿Qué hace este código?
// Imprime un patrón rectangular de 10 filas por 5 columnas usando el carácter '@'.

#include <iostream>
using namespace std;

int main()
{
    // Bucle exterior: controla el número de filas (10 filas en total)
    for (int i = 1; i <= 10; i++)
    {
        // Bucle interior: imprime 5 caracteres '@' en la misma línea
        for (int j = 1; j <= 5; j++)
        {
            cout << '@';
        }
        // Salto de línea después de completar cada fila
        cout << '\n';
    }

    return 0;
}