#include <iostream>
#include <string>
using namespace std;

int main()
{

    int segundos;
    cout << "Segundos hasta reinicio: ";
    cin >> segundos;

    for (int i = segundos; i >= 0; i--)
    {
        cout << i << "\n";
    }
    cout << "Reinicio completado";
}
