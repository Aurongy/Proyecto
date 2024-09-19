Algoritmo SumarNumerosPositivosDesdeArchivo
	
	Definir suma Como Real
    suma <- 0
	
	// Abrir el archivo para leer
	Abrir "numeros.txt" Para Leer Como archivo
	
	// Leer cada número del archivo
	Mientras No FinDeArchivo(archivo) Hacer
		Definir numero Como Real
		Leer numero Desde archivo
		
		// Comprobar si el número es positivo
		Si numero > 0 Entonces
			suma <- suma + numero
		Fin Si
	Fin Mientras
	
	// Mostrar la suma de los números positivos
	Escribir "La suma de los números positivos es: ", suma
	
FinAlgoritmo
