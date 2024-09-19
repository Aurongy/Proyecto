# Inicialización de contadores
menos_40kg = 0
entre_40_y_50kg = 0
entre_50_y_60kg = 0
mas_o_igual_60kg = 0

# Solicitar al usuario el número de alumnos
numero_de_alumnos = int(input("Introduce el número de alumnos: "))

# Procesar el peso de cada alumno
for i in range(numero_de_alumnos):
    peso = float(input(f"Introduce el peso del alumno {i + 1} en kg: "))

    if peso < 40:
        menos_40kg += 1
    elif 40 <= peso < 50:
        entre_40_y_50kg += 1
    elif 50 <= peso < 60:
        entre_50_y_60kg += 1
    else:
        mas_o_igual_60kg += 1

# Mostrar los resultados
print(f"Número de alumnos de menos de 40 kg: {menos_40kg}")
print(f"Número de alumnos entre 40 y 50 kg: {entre_40_y_50kg}")
print(f"Número de alumnos entre 50 y 60 kg: {entre_50_y_60kg}")
print(f"Número de alumnos de 60 kg o más: {mas_o_igual_60kg}")
