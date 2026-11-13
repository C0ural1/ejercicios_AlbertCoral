// ex05_26.cpp
// Ejercicio 5.26: Ej Torres de Hanói

#include <iostream>
using namespace std;

// Función recursiva para resolver el movimiento de los discos
void resolverTorresHanoi(int discos, int origen, int destino, int soporte)
{
    // Caso base: mover el último disco directamente
    if (discos == 1)
    {
        cout << origen << " -> " << destino << "\n";
        return;
    }

    // Mover n-1 discos al soporte auxiliar
    resolverTorresHanoi(discos - 1, origen, soporte, destino);

    // Mover el disco grande al destino
    cout << origen << " -> " << destino << "\n";

    // Mover los n-1 discos del soporte al destino final
    resolverTorresHanoi(discos - 1, soporte, destino, origen);
}

int main()
{
    int numeroDiscos = 3;

    cout << "Instrucciones para resolver las Torres de Hanói con " << numeroDiscos << " discos:\n";

    // Iniciar el algoritmo con 3 discos (origen 1, destino 3, soporte 2)
    resolverTorresHanoi(numeroDiscos, 1, 3, 2);

    return 0;
}