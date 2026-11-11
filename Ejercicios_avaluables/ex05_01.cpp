// ex05_01.cpp
// Ejercicio 5.1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 0.0;

    x = fabs(7.5);                     // a) x = 7.5
    x = floor(7.5);                    // b) x = 7.0
    x = fabs(0.0);                     // c) x = 0.0
    x = ceil(0.0);                     // d) x = 0.0
    x = fabs(-6.4);                    // e) x = 6.4
    x = ceil(-6.4);                    // f) x = -6.0
    x = ceil(-fabs(-8 + floor(-5.5))); // g) x = -14.0

    return 0;
}