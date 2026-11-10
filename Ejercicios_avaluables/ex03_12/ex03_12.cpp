// ex03_12.cpp

#include <iostream>
using namespace std;

int main()
{
    int row{10}; // La variable row empieza en 10.

    // Este bucle controla las filas y se repite hasta llegar a 1.
    while (row >= 1)
    {
        int column{1}; // El contador de columnas empieza en 1 en cada fila.

        // Este bucle imprime 10 símbolos en cada fila.
        while (column <= 10)
        {
            // Si row es par, imprime >; si es impar, imprime <.
            cout << (row % 2 == 1 ? "<" : ">");

            ++column; // Aumenta el contador de columnas.
        }

        --row; // Disminuye el número de fila en 1.
        cout << "\n"; 
    }
}