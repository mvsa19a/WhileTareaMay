#include <iostream>
using namespace std;

int main()
{
    int op, filas, columnas;
    int i = 0, j = 0; 
    int matriz[100][100];
    int matrizTranspuesta[100][100];

    cout << "1. Calcular transposicion de una matriz\n";
    cout << "Ingrese su opcion: ";
    cin >> op;

    if (op != 1)
    {
        cout << "tu opcion no es disponible....\n";
        return 0;
    }

    cout << "Dame el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Dame el numero de columnas de la matriz: ";
    cin >> columnas;

    cout << "Dime los elementos de la matriz:\n";
    while (i < filas) 
    {
        j = 0;  
        while (j < columnas) 
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            j++; 
        }
        i++; 
    }

    i = 0; 
    while (i < filas)
    {
        j = 0; 
        while (j < columnas)
        {
            matrizTranspuesta[j][i] = matriz[i][j];
            j++; 
        }
        i++; 
    }

    i = 0; 
    while (i < columnas)
    {
        j = 0; 
        while (j < filas)
        {
            cout << matrizTranspuesta[i][j] << " ";
            j++; 
        }
        cout << "\n";
        i++; 

    return 0;
}
}