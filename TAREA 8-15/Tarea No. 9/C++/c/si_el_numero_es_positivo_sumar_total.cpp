#include <iostream>
using namespace std;

int main() {
    int numero;
    int total_positivos = 0;
    int total_negativos = 0;

    cout << "Introduce un numero: ";
    cin >> numero;

    if (numero > 0) {
        total_positivos += numero;
    } else {
        total_negativos += numero;
    }

    cout << "Total de positivos: " << total_positivos << "\n";
    cout << "Total de negativos: " << total_negativos << "\n";

    return 0;
}
