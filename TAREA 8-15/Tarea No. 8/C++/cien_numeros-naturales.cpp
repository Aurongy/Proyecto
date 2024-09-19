#include <iostream>
using namespace std;

#include <vector>

int main() {
    // Crear un vector de 100 números naturales
    vector<int> numeros(100);
    
    // Leer los 100 números naturales desde la entrada estándar
    cout << "Introduce 100 numeros naturales:\n";
    for (int i = 0; i < 100; ++i) {
        cin >> numeros[i];
    }

    // Inicializar contadores
    int menoresDe15 = 0;
    int mayoresDe50 = 0;
    int entre25y45 = 0;
    
    // Contar según las condiciones dadas
    for (int i = 0; i < 100; ++i) {
        if (numeros[i] < 15) {
            ++menoresDe15;
        }
        if (numeros[i] > 50) {
            ++mayoresDe50;
        }
        if (numeros[i] >= 25 && numeros[i] <= 45) {
            ++entre25y45;
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de numeros menores de 15: " << menoresDe15 << "\n";
    cout << "Cantidad de numeros mayores de 50: " << mayoresDe50 << "\n";
    cout << "Cantidad de numeros comprendidos entre 25 y 45 (inclusive): " << entre25y45 << "\n";

    return 0;
}
