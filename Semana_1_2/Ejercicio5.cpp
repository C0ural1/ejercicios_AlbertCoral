#include <iostream>
#include <string>
using namespace std;

int main()
{
    int integer[11];
    int square[11];
    int cube[11];

    for (int i = 0; i <= 10; i++)
    {
        integer[i] = i;
        square[i] = integer[i] * integer[i];
        cube[i] = integer[i] * integer[i] * integer[i];
    }

    cout << "integer square cube" << endl;

    for (int j = 0; j <= 10; j++)
    {
        cout << integer[j] << "\t";
        cout << square[j] << "\t";
        cout << cube[j] << endl;
    }

    return 0;
}