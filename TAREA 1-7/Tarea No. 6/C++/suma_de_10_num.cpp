
//Escribir la suma de los diez primeros números pares.

#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // Calcular la suma de los primeros 10 números pares
    for (int i = 0; i < 10; ++i) {
        suma += 2 * i; // Cada número par es 2 * índice (0, 2, 4, ...)
    }

    // Mostrar el resultado
    cout << "La suma de los primeros 10 numeros pares es: " << suma << endl;

    return 0;
}
