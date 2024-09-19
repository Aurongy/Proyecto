

# Dados diez números enteros, visualizar la suma de los números pares de la lista,
#cuántos números pares existen y cuál es la media aritmética de los números impares

numeros = []
suma_pares = 0
conteo_pares = 0
suma_impares = 0
conteo_impares = 0

# Leer 10 números enteros del usuario
print("Introduce 10 numeros enteros:")
for _ in range(10):
    numero = int(input())
    numeros.append(numero)

# Procesar los números para encontrar pares e impares
for numero in numeros:
    if numero % 2 == 0:  # Verifica si el número es par
        suma_pares += numero
        conteo_pares += 1
    else:  # El número es impar
        suma_impares += numero
        conteo_impares += 1

# Mostrar resultados
print(f"Suma de los numeros pares: {suma_pares}")
print(f"Cantidad de numeros pares: {conteo_pares}")

# Calcular y mostrar la media aritmética de los números impares
if conteo_impares > 0:
    media_impares = suma_impares / conteo_impares
    print(f"Media aritmetica de los numeros impares: {media_impares:.2f}")
else:
    print("No hay numeros impares para calcular la media.")
