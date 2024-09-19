
#Calcular los N primeros múltiplos de 4 (4 inclusive), donde N es un valor introducido por
#teclado en python

# Solicitar al usuario que introduzca el valor de N
N = int(input("Introduce el valor de N: "))

# Verificar que N sea un número positivo
if N <= 0:
    print("Por favor, introduce un número entero positivo.")
else:
    # Calcular y mostrar los primeros N múltiplos de 4
    for i in range(1, N + 1):
        print(4 * i)

