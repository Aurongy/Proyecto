
# Solicitar al usuario que introduzca dos números
num1 = int(input("Introduce el primer numero: "))
num2 = int(input("Introduce el segundo numero: "))

# Verificar si num2 es divisor de num1 o si num1 es divisor de num2
if num2 != 0 and num1 % num2 == 0:
    print(f"{num2} es divisor de {num1}")
elif num1 != 0 and num2 % num1 == 0:
    print(f"{num1} es divisor de {num2}")
else:
    print("Ninguno de los numeros es divisor del otro")
