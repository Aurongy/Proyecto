
# Solicitar al usuario que introduzca el ángulo en grados
angulo = float(input("Introduce el angulo en grados: "))

# Determinar el tipo de ángulo
if angulo < 90:
    print("El angulo es agudo")
elif angulo == 90:
    print("El angulo es recto")
elif angulo > 90:
    print("El angulo es obtuso")
else:
    print("Angulo inválido")
