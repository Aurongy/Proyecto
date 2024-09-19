
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream archivo("EMPRESA.txt");
    if (!archivo.is_open()) {
        cerr << "Error al abrir el archivo." << "\n";
        return 1;
    }

    string nombre;
    int edad;
    int contadorMayores65 = 0;

    // Leer los datos del archivo
    while (archivo >> nombre >> edad) {
        if (edad > 65) {
            contadorMayores65++;
        }
    }

    archivo.close(); // Cerrar el archivo

    // Mensaje final
    cout << "Existen trabajadores mayores de 65 años en un número de: " << contadorMayores65 << "\n";

    return 0;
}
