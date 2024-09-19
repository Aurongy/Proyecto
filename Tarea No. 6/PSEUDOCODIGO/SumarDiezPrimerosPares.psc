Algoritmo SumarDiezPrimerosPares
	Definir suma Como Entero
	Definir contador Como Entero
	suma <- 0
	contador <- 0
	Mientras contador<10 Hacer
		contador <- contador+1
		suma <- suma+(contador*2) // Cada número par es el doble del contador
	FinMientras
	Escribir 'La suma de los diez primeros números pares es: ',suma
FinAlgoritmo
