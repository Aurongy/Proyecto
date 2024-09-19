

def clasificar_salarios():
    num_empleados = 50
    salarios = []

    # Ingreso de salarios
    for i in range(num_empleados):
        salario = float(input(f"Ingrese el salario del empleado {i + 1}: "))
        salarios.append(salario)

    # Clasificación de salarios
    conteo_altos = sum(1 for s in salarios if s > 300000)
    conteo_medios = sum(1 for s in salarios if 100000 <= s <= 300000)
    conteo_bajos = sum(1 for s in salarios if s < 100000)

    # Resultados
    print(f"Número de empleados con salarios altos (más de 300,000): {conteo_altos}")
    print(f"Número de empleados con salarios medios (entre 100,000 y 300,000): {conteo_medios}")
    print(f"Número de empleados con salarios bajos (menos de 100,000): {conteo_bajos}")

# Llamar a la función
clasificar_salarios()
