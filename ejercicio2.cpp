#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 99;

    while (i >= 1) {
        cout << i;
        i -= 2; // se reduce i en 2 en cada iteración
    }

    cout << endl;
    return 0;
}
