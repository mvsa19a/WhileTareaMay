#include <iostream>
using namespace std;

int main()
{
    int numEstudiantes;
    int notaMinimaAprobacion;
    int aprobados = 0, reprobados = 0, suma = 0;
    int promedio;
    
    cout << "Dame el numero de estudiantes: ";
    cin >> numEstudiantes;
    cout << "Dame la nota minima para aprobar: ";
    cin >> notaMinimaAprobacion;
    
    int i = 0; 
    int notas[numEstudiantes]; 

    cout << "Dame las notas de los estudiantes " << numEstudiantes << endl;
    while (i < numEstudiantes) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
        
        if (notas[i] >= notaMinimaAprobacion) {
            ++aprobados;
        } else {
            ++reprobados;
        }
        
        i++; 
    }

    promedio = suma / numEstudiantes;
    if (suma % numEstudiantes >= numEstudiantes / 2) {
        ++promedio;
    }
    
    cout << "Los alumnos aprobados son: " << aprobados << endl;
    cout << "Los alumnos reprobados son: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
