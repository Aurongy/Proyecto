
#include <iostream>
using namespace std;

int main() {
    int numero;        
    int contador = 0; 

    // Solicitar números enteros al usuario
    cout << "Introduce numeros enteros positivos (introduce un numero negativo o cero para detener):" << "\n";

    while (true) {
        cout << "Introduce un numero: ";
        cin >> numero;

        // Comprobar si el número es negativo o cero para detener el bucle
        if (numero <= 0) {
            break;
        }

        // Incrementar el contador si el número es positivo
        contador++;
    }

    // Mostrar el número de enteros positivos introducidos
    cout << "Numero de enteros positivos introducidos: " << contador << "\n";

    return 0;
}
