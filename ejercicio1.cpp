#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int suma = 0;
    int i = num;

    cout << "Dame un numero: ";
    cin >> num;

    while (i >= 1) {
        suma += i;
        i--;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}