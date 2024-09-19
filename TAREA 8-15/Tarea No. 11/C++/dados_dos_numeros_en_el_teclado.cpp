#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicitar al usuario que introduzca dos números
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    // Verificar si num1 es divisor de num2 o si num2 es divisor de num1
    if (num2 != 0 && num1 % num2 == 0) {
        cout << num2 << " es divisor de " << num1 << "\n";
    } else if (num1 != 0 && num2 % num1 == 0) {
        cout << num1 << " es divisor de " << num2 << "\n";
    } else {
        cout << "Ninguno de los numeros es divisor del otro" << "\n";
    }

    return 0;
}
