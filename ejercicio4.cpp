#include <iostream>
using namespace std;

#define MAX_ESTUDIANTES 10

int main()
{
    int notas[MAX_ESTUDIANTES];
    int suma = 0;
    int i = 0; 
    int promedio;

    cout << "Dame las notas de los estudiantes..." << endl;
    while (i < MAX_ESTUDIANTES) {
        cout << "Nota del estudiante " << i + 1 << ":";
        cin >> notas[i];
        suma += notas[i];
        i++; 
    }

    promedio = suma / MAX_ESTUDIANTES;
    cout << "El promedio general del aula es " << promedio << endl;

    return 0;
}
