#Calcular la media de cincuenta números e imprimir su resultado

# Crear una lista con cincuenta números
numeros = [float(input(f"Introduce el número {i+1}: ")) for i in range(50)]

# Calcular la suma de los números
suma = sum(numeros)

# Calcular la media
media = suma / 50

# Imprimir el resultado
print(f"La media de los cincuenta números es: {media}")
