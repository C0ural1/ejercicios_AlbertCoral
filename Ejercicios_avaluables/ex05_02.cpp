// ex05_02.cpp
// Ejercicio 5.2: Cálculo de tarifas de aparcamiento.

#include <iostream>
#include <iomanip> // Para dar formato a la tabla con decimales

using namespace std;

// Función para calcular los cargos de aparcamiento según las horas
double calculateCharges(double horas)
{
    double cargo = 0.0;

    if (horas <= 3.0)
    {
        cargo = 20.0; // Tarifa mínima para 3 horas o menos
    }
    else
    {
        cargo = 20.0 + (horas - 3.0) * 5.0; // 20 base + 5 por cada hora extra o fracción
    }

    if (cargo > 50.0)
    {
        cargo = 50.0;
    }

    return cargo;
}

int main()
{
    double horas1 = 0.0;
    double horas2 = 0.0;
    double horas3 = 0.0;

    // Solicitar las horas de estacionamiento de cada cliente
    cout << "Introduce las horas estacionadas para el coche 1: ";
    cin >> horas1;
    cout << "Introduce las horas estacionadas para el coche 2: ";
    cin >> horas2;
    cout << "Introduce las horas estacionadas para el coche 3: ";
    cin >> horas3;

    // Calcular los cargos individuales usando la función
    double cargo1 = calculateCharges(horas1);
    double cargo2 = calculateCharges(horas2);
    double cargo3 = calculateCharges(horas3);

    // Calcular totales
    double totalHoras = horas1 + horas2 + horas3;
    double totalCargo = cargo1 + cargo2 + cargo3;

    // Mostrar los resultados en formato tabular
    cout << "\n"
         << left << setw(10) << "Car" << setw(10) << "Hours" << "Charge" << "\n";
    cout << fixed << setprecision(2);

    cout << left << setw(10) << 1 << setw(10) << horas1 << cargo1 << "\n";
    cout << left << setw(10) << 2 << setw(10) << horas2 << cargo2 << "\n";
    cout << left << setw(10) << 3 << setw(10) << horas3 << cargo3 << "\n";
    cout << left << setw(10) << "TOTAL" << setw(10) << totalHoras << totalCargo << "\n";

    return 0;
}