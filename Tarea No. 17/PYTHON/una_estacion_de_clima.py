

def contar_empleados_mayores(filename):
    try:
        with open(filename, 'r') as archivo:
            contador_mayores_65 = 0
            
            for linea in archivo:
                # Supongamos que cada línea contiene el nombre y la edad separados por espacio
                datos = linea.strip().split()
                if len(datos) != 2:
                    continue  # Saltar líneas mal formadas

                nombre, edad_str = datos
                edad = int(edad_str)

                if edad > 65:
                    contador_mayores_65 += 1

        print(f"Existen trabajadores mayores de 65 años en un número de: {contador_mayores_65}")
    
    except FileNotFoundError:
        print("Error: El archivo no se encontró.")
    except ValueError:
        print("Error: La edad debe ser un número entero.")
    except Exception as e:
        print(f"Se produjo un error: {e}")

# Llamar a la función
contar_empleados_mayores("EMPRESA.txt")
