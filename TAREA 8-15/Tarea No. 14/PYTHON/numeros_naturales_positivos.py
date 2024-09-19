# Inicializar el contador
contador = 0

# Solicitar números enteros al usuario
print("Introduce números enteros positivos (introduce un número negativo o cero para detener):")

while True:
    # Leer un número entero del usuario
    numero = int(input("Introduce un número: "))

    # Comprobar si el número es negativo o cero para detener el bucle
    if numero <= 0:
        break

    # Incrementar el contador si el número es positivo
    contador += 1

# Mostrar el número de enteros positivos introducidos
print(f"Número de enteros positivos introducidos: {contador}")
