#include <iostream>
using namespace std;

int main()
{
    int filas1, columnas1, filas2, columnas2;

    cout << "Dame el numero de filas de la matriz 1: ";
    cin >> filas1;
    cout << "Dame el numero de columnas de la matriz 1: ";
    cin >> columnas1;

    cout << "Dame el numero de filas de la matriz 2: ";
    cin >> filas2;
    cout << "Dame el numero de columnas de la matriz 2: ";
    cin >> columnas2;

    if (columnas1 != filas2)
    {
        cout << "Las matrices no son compatibles para la multiplicacion";
        return 0;
    }

    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int matrizResultado[filas1][columnas2];

    cout << "Dame los elementos de la matriz 1: ";
    int i = 0;
    while (i < filas1)
    {
        int j = 0;
        while (j < columnas1)
        {
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << "Dame los elementos de la matriz 2: ";
    i = 0;
    while (i < filas2)
    {
        int j = 0;
        while (j < columnas2)
        {
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    cout << "La matriz resultante es:\n";
    while (i < filas1)
    {
        int j = 0;
        while (j < columnas2)
        {
            matrizResultado[i][j] = 0;
            int k = 0;
            while (k < columnas1)
            {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            cout << matrizResultado[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
