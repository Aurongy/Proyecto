#include <iostream>
using namespace std;

int main() {
    float distancia, tiempo;

    cout << "Introduce la distancia: ";
    cin >> distancia;

    if (distancia > 20 && distancia < 35) {
        cout << "Introduce el valor de tiempo: ";
        cin >> tiempo;
    }

    return 0;
}
