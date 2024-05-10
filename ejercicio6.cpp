#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int i = 100; 

    while (i <= 200) {
        suma += i;
        i += 2; 
    }

    cout << "La suma de los numeros pares entre 100 y 200 es " << suma << endl;

    return 0;
}
