#include <iostream>
using namespace std;

int main()
{
    int longitud;
    int i = 0;

    cout << "Dame la longitud de las matrices: ";
    cin >> longitud;

    int matriz1[longitud];
    int matriz2[longitud];
    int matrizSuma[longitud];

    cout << "Dame los elementos de la primera matriz: ";
    while (i < longitud)
    {
        cin >> matriz1[i];
        i++;
    }

    i = 0; // i para el segundo bucle

    cout << "Dame los elementos de la segunda matriz: ";
    while (i < longitud)
    {
        cin >> matriz2[i];
        i++;
    }

    cout << "La suma de las dos matrices es: ";
    i = 0; // i para el tercer bucle
    while (i < longitud)
    {
        matrizSuma[i] = matriz1[i] + matriz2[i];
        cout << matrizSuma[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}
