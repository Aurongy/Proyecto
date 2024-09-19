#include <iostream>
using namespace std;

#include <fstream>
#include <sstream>

int main() {
    // Nombre del archivo de entrada
    const string filename = "datos.txt";
    
    // Abrir el archivo en modo lectura
    ifstream file(filename);
    
    // Verificar si el archivo se abrió correctamente
    if (!file.is_open()) {
        cout << "Error al abrir el archivo: " << filename << endl;
        return 1;
    }
    
    // Variable para almacenar el número actual y la suma de los números positivos
    int number;
    int sum = 0;
    
    // Leer números del archivo
    while (file >> number) {
        // Sumar solo los números positivos
        if (number > 0) {
            sum += number;
        }
    }
    
    // Cerrar el archivo
    file.close();
    
    // Mostrar el resultado
    cout << "La suma de los numeros positivos es: " << sum << endl;
    cout << number;
    return 0;
}
