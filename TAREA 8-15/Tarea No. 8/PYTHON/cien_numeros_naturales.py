#Desarrollar un algoritmo que determine en un conjunto de cien números naturales:
#a. ¿Cuántos son menores de 15?
#b. ¿Cuántos son mayores de 50?
#c. ¿Cuántos están comprendidos entre 25 y 45?

def analizar_numeros(numeros):
    # Inicializar contadores
    menores_de_15 = 0
    mayores_de_50 = 0
    entre_25_y_45 = 0
    
    # Contar según las condiciones dadas
    for numero in numeros:
        if numero < 15:
            menores_de_15 += 1
        if numero > 50:
            mayores_de_50 += 1
        if 25 <= numero <= 45:
            entre_25_y_45 += 1
    
    # Mostrar los resultados
    print(f'Cantidad de numeros menores de 15: {menores_de_15}')
    print(f'Cantidad de numeros mayores de 50: {mayores_de_50}')
    print(f'Cantidad de numeros comprendidos entre 25 y 45 (inclusive): {entre_25_y_45}')

def main():
    # Crear una lista para almacenar los 100 números naturales
    numeros = []
    
    print("Introduce 100 numeros naturales: ")
    
    # Leer los 100 números desde la entrada estándar
    while len(numeros) < 100:
        try:
            numero = int(input(f'Numero {len(numeros) + 1}: '))
            if numero < 0:
                print("Por favor, introduce solo numeros naturales (no negativos).")
                continue
            numeros.append(numero)
        except ValueError:
            print("Entrada invalida. Por favor, introduce un numero entero.")
    
    # Analizar los números
    analizar_numeros(numeros)

# Ejecutar el programa
if __name__ == "__main__":
    main()
