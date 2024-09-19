
#do-while equivalente

suma = 0
contador = 1

while True:
    suma += contador
    contador += 1
    if contador > 100:
        break

print("La suma de los numeros del 1 al 100 es:", suma)
