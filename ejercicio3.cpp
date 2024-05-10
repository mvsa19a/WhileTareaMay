#include <iostream>
using namespace std;

#define MAX 100

int main()
{
    int suma = 0; 
    int i = 1; 

    while (i <= MAX) {
        suma += i * i; 
        i++; 
    }

    cout << "La suma de los cuadrados es: " << suma << endl;

    return 0;
}
