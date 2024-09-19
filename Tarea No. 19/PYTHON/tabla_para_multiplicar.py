

def imprimir_tabla_multiplicar(n):
    # Imprimir la cabecera de la tabla
    for i in range(1, n + 1):
        print(i, end="\t")
    print()  # Nueva línea

    # Imprimir la tabla de multiplicar
    for i in range(1, n + 1):
        print(f"{i}*", end="\t")  # Imprimir el número de la fila
        for j in range(1, n + 1):
            print(i * j, end="\t")  # Imprimir el resultado de la multiplicación
        print()  # Nueva línea para la siguiente fila

# Solicitar al usuario que ingrese el número máximo
n = int(input("Ingrese un número máximo para la tabla de multiplicar: "))
imprimir_tabla_multiplicar(n)
