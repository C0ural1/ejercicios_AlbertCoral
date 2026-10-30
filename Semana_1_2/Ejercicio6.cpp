#include <iostream>
#include <string>

/*Muestra el patrón de tablero de ajedrez de la imagen utilizando ocho instrucciones de salida. Después, muestra
el mismo patrón utilizando el menor número posible de instrucciones.*/

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}