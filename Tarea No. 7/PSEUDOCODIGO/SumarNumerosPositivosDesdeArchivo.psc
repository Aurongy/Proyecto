Algoritmo SumarNumerosPositivosDesdeArchivo
	
	Definir suma Como Real
    suma <- 0
	
	// Abrir el archivo para leer
	Abrir "numeros.txt" Para Leer Como archivo
	
	// Leer cada n�mero del archivo
	Mientras No FinDeArchivo(archivo) Hacer
		Definir numero Como Real
		Leer numero Desde archivo
		
		// Comprobar si el n�mero es positivo
		Si numero > 0 Entonces
			suma <- suma + numero
		Fin Si
	Fin Mientras
	
	// Mostrar la suma de los n�meros positivos
	Escribir "La suma de los n�meros positivos es: ", suma
	
FinAlgoritmo
