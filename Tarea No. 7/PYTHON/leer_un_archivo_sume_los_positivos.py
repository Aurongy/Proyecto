
#Escribir un algoritmo que lea los datos de entrada de un archivo que sólo contiene
#números y sume los números positivos

def sumar_numeros_positivos(filename):
    try:
        # Abrir el archivo en modo lectura
        with open(filename, 'r') as file:
            # Inicializar la suma de números positivos
            suma_positivos = 0
            
            # Leer cada línea del archivo
            for linea in file:
                # Separar la línea en partes usando cualquier espacio en blanco como delimitador
                partes = linea.split()
                
                # Convertir cada parte en número y sumar si es positivo
                for parte in partes:
                    try:
                        numero = float(parte)  # Puedes usar float para manejar números decimales
                        if numero > 0:
                            suma_positivos += numero
                    except ValueError:
                        # Si la conversión falla, se ignora la parte
                        continue
        
        # Mostrar el resultado
        print(f'La suma de los números positivos es: {suma_positivos}')
    
    except FileNotFoundError:
        print(f'Error: El archivo {filename} no se encuentra.')

# Nombre del archivo de entrada
nombre_archivo = 'datos.txt'

# Llamar a la función
sumar_numeros_positivos(nombre_archivo)
