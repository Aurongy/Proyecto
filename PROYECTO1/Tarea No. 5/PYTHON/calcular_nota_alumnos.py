
# Leer el número de alumnos y el número de notas por alumno

n = int(input("Introduce el numero de alumnos: "))
c = int(input("Introduce el numero de notas por alumno: "))

# Validar entradas
if n <= 0 or c <= 0:
    print("El numero de alumnos y el número de notas deben ser mayores que cero.")
else:
    # Inicializar variables
    suma_notas_totales = 0
    total_notas = 0

    # Leer las notas de cada alumno
    for i in range(n):
        print(f"Notas del alumno {i + 1}:")
        suma_notas_alumno = 0

        for j in range(c):
            nota = float(input(f"Introduce la nota {j + 1}: "))
            suma_notas_alumno += nota
            suma_notas_totales += nota
            total_notas += 1

        # Calcular y mostrar la media de las notas del alumno
        media_notas_alumno = suma_notas_alumno / c
        print(f"La media de las notas del alumno {i + 1} es: {media_notas_alumno:.2f}")

    # Calcular y mostrar la media general
    if total_notas > 0:
        media_general = suma_notas_totales / total_notas
        print(f"La media general de todas las notas es: {media_general:.2f}")
    else:
        print("No se introdujeron notas.")
