
#include <iostream>
using namespace std;

int main() {
    float maxTemp, minTemp;
    int dias = 0, errores = 0;
    float sumaMax = 0, sumaMin = 0;

    while (true) {
        cout << "Ingrese la temperatura maxima y minima (0 0 para terminar): ";
        cin >> maxTemp >> minTemp;

        if (maxTemp == 0 && minTemp == 0) {
            break; // Fin del ingreso de datos
        }

        if (maxTemp == 9 || minTemp == 9) {
            errores++; // Contar errores
        } else {
            dias++;
            sumaMax += maxTemp;
            sumaMin += minTemp;
        }
    }

    float mediasMax = (dias > 0) ? sumaMax / dias : 0;
    float mediasMin = (dias > 0) ? sumaMin / dias : 0;
    float porcentajeErrores = (dias + errores > 0) ? (errores * 100.0) / (dias + errores) : 0;

    // Mostrar resultados
    cout << "Numero de días registrados: " << dias << "\n";
    cout << "Media de temperaturas maximas: " << mediasMax << "\n";
    cout << "Media de temperaturas minimas: " << mediasMin << "\n";
    cout << "Numero de errores (temperaturas de 9 grados): " << errores << "\n";
    cout << "Porcentaje de errores: " << porcentajeErrores << "%" << "\n";

    return 0;
}
