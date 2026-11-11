// ex04_15.cpp
// Ejercicio 4.15: Cálculo del valor de pi mediante serie infinita.

#include <iostream>
#include <iomanip> // Para controlar la precisión de los decimales

using namespace std;

int main()
{
    int terminosMaximos = 200000;
    double pi = 0.0;
    long long denominador = 1;
    bool signo = true; // true para sumar (+), false para restar (-)

    int terminosPara314159 = 0;
    bool encontrado314159 = false;

    cout << "Accuracy set at: " << terminosMaximos << "\n\n";
    cout << "term\tpi\n";

    // Bucle para calcular los 200,000 términos
    for (int i = 1; i <= terminosMaximos; ++i)
    {
        if (signo)
        {
            pi += 4.0 / denominador;
        }
        else
        {
            pi -= 4.0 / denominador;
        }

        // Mostrar los primeros términos para que veas la tabla igual al ejemplo del libro
        if (i <= 5 || i == terminosMaximos)
        {
            cout << i << "\t" << fixed << setprecision(9) << pi << "\n";
        }
        else if (i == 6)
        {
            cout << "...\n";
        }

        // Comprobar cuántos términos se necesitan para que empiece por 3.14159
        if (!encontrado314159)
        {
            long long truncado = static_cast<long long>(pi * 100000);
            if (truncado == 314159)
            {
                terminosPara314159 = i;
                encontrado314159 = true;
            }
        }

        denominador += 2; // El denominador aumenta de 2 en 2 (1, 3, 5, 7...)
        signo = !signo;   // Alterna el signo entre positivo y negativo
    }

    cout << "\nNúmero de términos necesarios para obtener por primera vez un valor que empiece por 3.14159: " << terminosPara314159 << "\n";

    return 0;
}