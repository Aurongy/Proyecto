
//Dados diez números enteros, visualizar la suma de los números pares de la lista,
//cuántos números pares existen y cuál es la media aritmética de los números impares

#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int sumaPares = 0;
    int conteoPares = 0;
    int sumaImpares = 0;
    int conteoImpares = 0;

    // Leer los 10 números enteros
    cout << "Introduce 10 numeros enteros:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }

    // Procesar los números para encontrar pares e impares
    for (int i = 0; i < 10; ++i) {
        if (numeros[i] % 2 == 0) { // Verifica si el número es par
            sumaPares += numeros[i];
            ++conteoPares;
        } else { // El número es impar
            sumaImpares += numeros[i];
            ++conteoImpares;
        }
    }

    // Mostrar resultados
    cout << "Suma de los numeros pares: " << sumaPares << endl;
    cout << "Cantidad de numeros pares: " << conteoPares << endl;

    // Calcular y mostrar la media aritmética de los números impares
    if (conteoImpares > 0) {
        double mediaImpares = static_cast<double>(sumaImpares) / conteoImpares;
        cout << "Media aritmetica de los numeros impares: " << mediaImpares << endl;
    } else {
        cout << "No hay numeros impares para calcular la media." << endl;
    }

    return 0;
}
