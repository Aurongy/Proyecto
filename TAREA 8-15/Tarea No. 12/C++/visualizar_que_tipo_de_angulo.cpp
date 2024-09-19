#include <iostream>
using namespace std;

int main() {
    // Variable para almacenar el ángulo
    float angulo;

    // Solicitar al usuario que introduzca el ángulo en grados
    cout << "Introduce el angulo en grados: ";
    cin >> angulo;

    // Determinar el tipo de ángulo
    if (angulo < 90) {
        cout << "El angulo es agudo" << "\n";
    } else if (angulo == 90) {
        cout << "El angulo es recto" << "\n";
    } else if (angulo > 90) {
        cout << "El angulo es obtuso" << "\n";
    } else {
        cout << "Angulo invalido" << "\n";
    }

    return 0;
}
