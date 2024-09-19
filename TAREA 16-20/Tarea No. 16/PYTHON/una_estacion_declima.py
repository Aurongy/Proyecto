


dias = 0
errores = 0
suma_max = 0
suma_min = 0

while True:
    # Leer las temperaturas
    max_temp, min_temp = map(float, input("Ingrese la temperatura máxima y mínima (0 0 para terminar): ").split())

    # Condición de fin
    if max_temp == 0 and min_temp == 0:
        break

    # Comprobar si hay un error
    if max_temp == 9 or min_temp == 9:
        errores += 1
    else:
        dias += 1
        suma_max += max_temp
        suma_min += min_temp

# Cálculo de medias y porcentaje
medias_max = suma_max / dias if dias > 0 else 0
medias_min = suma_min / dias if dias > 0 else 0
total_ingresos = dias + errores
porcentaje_errores = (errores * 100 / total_ingresos) if total_ingresos > 0 else 0

# Mostrar resultados
print("Número de días registrados:", dias)
print("Media de temperaturas máximas:", medias_max)
print("Media de temperaturas mínimas:", medias_min)
print("Número de errores (temperaturas de 9°):", errores)
print("Porcentaje de errores:", porcentaje_errores, "%")
