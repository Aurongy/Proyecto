#include <iostream>
using namespace std;

int main() {
    // Declarar las variables para los números y el código de selección
    double num1, num2;
    int codigo;

    // Solicitar al usuario que introduzca dos números reales
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    // Solicitar al usuario que introduzca el código de selección
    cout << "Introduce el codigo de seleccion (1 para suma, 2 para multiplicacion, 3 para division): ";
    cin >> codigo;

    // Realizar la operación según el código de selección
    switch (codigo) {
        case 1:
            // Sumar los dos números
            cout << "El resultado de la suma es: " << (num1 + num2) << "\n";
            break;
        case 2:
            // Multiplicar los dos números
            cout << "El resultado de la multiplicacion es: " << (num1 * num2) <<"\n";
            break;
        case 3:
            // Dividir el primer número por el segundo
            if (num2 != 0) {
                cout << "El resultado de la division es: " << (num1 / num2) << "\n";
            } else {
                cout << "Error: Division por cero no permitida." << "\n";
            }
            break;
        default:
            // Código de selección no válido
            cout << "Codigo de seleccion no valido. Por favor, introduce 1, 2 o 3." << "\n";
            break;
    }

    return 0;
}
