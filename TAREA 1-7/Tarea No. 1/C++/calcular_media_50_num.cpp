
//Calcular la media de cincuenta números e imprimir su resultado

#include <iostream>
using namespace std;

int main() {
    const int NUM_COUNT = 50;  // Número de elementos
    double numbers[NUM_COUNT]; // Arreglo para almacenar los números
    double sum = 0.0;          // Variable para almacenar la suma
    double average;            // Variable para almacenar la media

    // Solicitar al usuario que ingrese 50 números
    cout << "Introduce " << NUM_COUNT << " numeros:" << endl;
    for (int i = 0; i < NUM_COUNT; ++i) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Sumar el número al total
    }

    // Calcular la media
    average = sum / NUM_COUNT;

    // Imprimir el resultado
    cout << "La media de los " << NUM_COUNT << " numeros es: " << average << endl;

    return 0;
}
