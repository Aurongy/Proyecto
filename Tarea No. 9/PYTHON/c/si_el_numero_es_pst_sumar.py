# Inicializar los totales
total_positivos = 0
total_negativos = 0

# Obtener el valor del número
numero = float(input("Introduce un numero: "))

# Verificar la condición y sumar al total correspondiente
if numero > 0:
    total_positivos += numero
else:
    total_negativos += numero

# Mostrar los totales
print("Total de positivos:", total_positivos)
print("Total de negativos:", total_negativos)
