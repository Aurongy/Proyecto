

#include <iostream>
using namespace std;

int main() {
    const int NUM_EMPLEADOS = 50;
    double salarios[NUM_EMPLEADOS];
    int conteoAltos = 0, conteoMedios = 0, conteoBajos = 0;

    // Ingreso de salarios
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        cout << "Ingrese el salario del empleado " << (i + 1) << ": ";
        cin >> salarios[i];
    }

    // Clasificación de salarios
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        if (salarios[i] > 300000) {
            conteoAltos++;
        } else if (salarios[i] >= 100000 && salarios[i] <= 300000) {
            conteoMedios++;
        } else {
            conteoBajos++;
        }
    }

    // Resultados
    cout << "Numero de empleados con salarios altos (mas de 300,000): " << conteoAltos << "\n" ;
    cout << "Numero de empleados con salarios medios (entre 100,000 y 300,000): " << conteoMedios << "\n" ;
    cout << "Numero de empleados con salarios bajos (menos de 100,000): " << conteoBajos << "\n" ;

    return 0;
}
