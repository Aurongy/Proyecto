#include <iostream>
using namespace std;

int main() {
    int menos_40kg = 0;
    int entre_40_y_50kg = 0;
    int entre_50_y_60kg = 0;
    int mas_o_igual_60kg = 0;

    int numero_de_alumnos;
    
    // Solicitar al usuario el número de alumnos
    cout << "Introduce el numero de alumnos: ";
    cin >> numero_de_alumnos;
    
    // Procesar el peso de cada alumno
    for (int i = 0; i < numero_de_alumnos; ++i) {
        float peso;
        cout << "Introduce el peso del alumno " << (i + 1) << " en kg: ";
        cin >> peso;

        if (peso < 40) {
            menos_40kg++;
        } else if (peso >= 40 && peso < 50) {
            entre_40_y_50kg++;
        } else if (peso >= 50 && peso < 60) {
            entre_50_y_60kg++;
        } else {
            mas_o_igual_60kg++;
        }
    }

    // Mostrar los resultados
    cout << "Numero de alumnos de menos de 40 kg: " << menos_40kg << "\n";
    cout << "Numero de alumnos entre 40 y 50 kg: " << entre_40_y_50kg << "\n";
    cout << "Numero de alumnos entre 50 y 60 kg: " << entre_50_y_60kg << "\n";
    cout << "Numero de alumnos de 60 kg o mas: " << mas_o_igual_60kg << "\n";

    return 0;
}
