
//for

#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int contador = 1; contador <= 100; contador++) {
        suma += contador;
    }

    cout << "La suma de los numeros del 1 al 100 es: " << suma << "\n";
    return 0;
}
