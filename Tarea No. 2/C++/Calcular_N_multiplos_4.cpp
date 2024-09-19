
//Calcular los N primeros múltiplos de 4 (4 inclusive), donde N es un valor introducido por
//teclado.

#include <iostream>
using namespace std;

int main() {
    int N;

    // Solicitar al usuario que introduzca el valor de N
    cout <<"Introduce el valor de N: ";
    cin >>N;

    // Verificar que N sea un número positivo
    if (N <= 0) {
        cout <<"Por favor, introduce un número entero positivo."<< endl;
    } else {
        // Calcular y mostrar los primeros N múltiplos de 4
        for (int i = 1; i <= N; ++i) {
            cout << 4 * i << endl;
        }
    }

    return 0;
}
