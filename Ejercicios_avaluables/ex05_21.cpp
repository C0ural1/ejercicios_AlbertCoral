// ex05_21.cpp
// Ejercicio 5.21: Simulación de lanzamiento de una moneda.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función flip que no recibe argumentos y devuelve 0 (cruz) o 1 (cara)
int flip()
{
    return rand() % 2; // Devuelve aleatoriamente 0 o 1
}

int main()
{
    // Inicializar la semilla para los números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    int contadorCaras = 0;
    int contadorCruces = 0;

    cout << "Simulando 100 lanzamientos de moneda:\n\n";

    // Bucle para lanzar la moneda 100 veces
    for (int i = 1; i <= 100; ++i)
    {
        int resultado = flip();

        if (resultado == 1)
        {
            cout << "Lanzamiento " << i << ": Cara (Heads)\n";
            contadorCaras = contadorCaras + 1;
        }
        else
        {
            cout << "Lanzamiento " << i << ": Cruz (Tails)\n";
            contadorCruces = contadorCruces + 1;
        }
    }

    // Mostrar los resultados finales
    cout << "\n--- RESUMEN ---\n";
    cout << "Total de Caras (Heads): " << contadorCaras << "\n";
    cout << "Total de Cruces (Tails): " << contadorCruces << "\n";

    return 0;
}