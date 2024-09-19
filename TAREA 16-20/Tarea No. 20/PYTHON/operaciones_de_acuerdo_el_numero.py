
# Solicitar al usuario que introduzca dos números reales
num1 = float(input("Introduce el primer número: "))
num2 = float(input("Introduce el segundo número: "))

# Solicitar al usuario que introduzca el código de selección
codigo = int(input("Introduce el código de selección (1 para suma, 2 para multiplicación, 3 para división): "))

# Realizar la operación según el código de selección
if codigo == 1:
    # Sumar los dos números
    resultado = num1 + num2
    print(f"El resultado de la suma es: {resultado}")
elif codigo == 2:
    # Multiplicar los dos números
    resultado = num1 * num2
    print(f"El resultado de la multiplicación es: {resultado}")
elif codigo == 3:
    # Dividir el primer número por el segundo
    if num2 != 0:
        resultado = num1 / num2
        print(f"El resultado de la división es: {resultado}")
    else:
        print("Error: División por cero no permitida.")
else:
    # Código de selección no válido
    print("Código de selección no válido. Por favor, introduce 1, 2 o 3.")
