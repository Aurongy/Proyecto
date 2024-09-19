#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar al usuario que ingrese el número máximo
    cout << "Ingrese un numero maximo para la tabla de multiplicar: ";
    cin >> n;

    // Imprimir la cabecera de la tabla
    for (int i = 1; i <= n; i++) {
        cout << i << "\t";  // Imprimir los números en la cabecera
    }
    cout << "\n";

    // Imprimir la tabla de multiplicar
    for (int i = 1; i <= n; i++) {
        cout << i << "*\t"; // Imprimir el número de la fila
        for (int j = 1; j <= n; j++) {
            cout << (i * j) << "\t"; // Imprimir el resultado de la multiplicación
        }
        cout << "\n"; // Nueva línea para la siguiente fila
    }

    return 0;
}
