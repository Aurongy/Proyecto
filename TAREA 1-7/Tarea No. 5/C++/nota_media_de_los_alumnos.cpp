#include <iostream>
using namespace std;

#include <vector>

int main() {
    int n, c;

    // Leer el número de alumnos y el número de notas por alumno
    cout << "Introduce el numero de alumnos: ";
    cin >> n;
    cout << "Introduce el numero de notas por alumno: ";
    cin >> c;

    // Validar entradas
    if (n <= 0 || c <= 0) {
        cerr << "El numero de alumnos y el número de notas deben ser mayores que cero." << endl;
        return 1;
    }

    // Inicializar variables
    double sumaNotasTotales = 0;
    int totalNotas = 0;

    // Leer las notas de cada alumno
    for (int i = 0; i < n; ++i) {
        cout << "Notas del alumno " << (i + 1) << ":" << endl;
        double sumaNotasAlumno = 0;

        for (int j = 0; j < c; ++j) {
            double nota;
            cout << "Introduce la nota " << (j + 1) << ": ";
            cin >> nota;

            sumaNotasAlumno += nota;
            sumaNotasTotales += nota;
            ++totalNotas;
        }

        // Calcular y mostrar la media de las notas del alumno
        double mediaNotasAlumno = sumaNotasAlumno / c;
        cout << "La media de las notas del alumno " << (i + 1) << " es: " << mediaNotasAlumno << endl;
    }

    // Calcular y mostrar la media general
    if (totalNotas > 0) {
        double mediaGeneral = sumaNotasTotales / totalNotas;
        cout << "La media general de todas las notas es: " << mediaGeneral << endl;
    } else {
        cout << "No se introdujeron notas." << endl;
    }

    return 0;
}
