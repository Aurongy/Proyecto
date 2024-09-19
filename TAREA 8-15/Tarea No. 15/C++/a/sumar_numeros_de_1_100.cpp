
//do-while

#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int contador = 1;

    do {
        suma += contador;
        contador++;
    } while (contador <= 100);

    cout << "La suma de los numeros del 1 al 100 es: " << suma << "\n";
    return 0;
}
