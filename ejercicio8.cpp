#include <iostream>
using namespace std;

void multiVectores();

int main()
{
    multiVectores();
    return 0;
}

void multiVectores()
{
    const int longitud = 3;
    int arreglo1[longitud];
    int arreglo2[longitud];
    int resultado[longitud];
    int i = 0;

    cout << "Ingrese los " << longitud << " elementos del primer arreglo:\n";
    while (i < longitud)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo1[i];
        i++;
    }

    i = 0; //i para el segundo bucle

    cout << "Ingrese los " << longitud << " elementos del segundo arreglo:\n";
    while (i < longitud)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo2[i];
        i++;
    }

    cout << "El resultado de la multiplicación de los arreglos es:\n";
    i = 0; // i para el tercer bucle
    while (i < longitud)
    {
        resultado[i] = arreglo1[i] * arreglo2[i];
        cout << resultado[i] << " ";
        i++;
    }
}
