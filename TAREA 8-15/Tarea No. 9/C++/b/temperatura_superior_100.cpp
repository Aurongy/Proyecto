#include <iostream>
using namespace std;

int main() {
    float temperatura;
    cout << "Introduce la temperatura en grados: ";
    cin >> temperatura;

    if (temperatura > 100) {
    cout << "Por encima del punto de ebullicion del agua" << "\n";
    } else {
    cout << "Por debajo del punto de ebullicion del agua" << "\n";
    }

    return 0;
}
