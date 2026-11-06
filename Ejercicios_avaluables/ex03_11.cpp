// ex03_11.cpp

#include <iostream>
using namespace std;

int main()
{
    int count{1}; // El contador empieza en 1.

    // El bucle se repite mientras count sea menor o igual que 10.
    while (count <= 10)
    {

        // Comprueba si el número es impar o par.
        // Si es impar, imprime *****; si es par, imprime +++++++.
        cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";

        // Aumenta el contador en 1.
        ++count;
    }
}