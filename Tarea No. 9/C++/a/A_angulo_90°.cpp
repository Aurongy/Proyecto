#include <iostream>
using namespace std;

int main() {
    int angulo;
    cout << "Introduce el valor del angulo: ";
    cin >> angulo;

    if (angulo == 90) {
        cout << "El angulo es un angulo recto" << "\n";
    } else {
        cout << "El angulo no es un angulo recto" << "\n";
    }

    return 0;
}
