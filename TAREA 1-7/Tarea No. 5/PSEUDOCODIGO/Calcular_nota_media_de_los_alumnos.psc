Algoritmo Calcular_nota_media_de_los_alumnos
	Definir n,c Como Entero
	Definir sumaTotal,nota Como Real
	Definir media Como Real
	Definir sumaNotas Como Real
	// Solicitar el número de alumnos
	Escribir 'Ingrese el número de alumnos: '
	Leer n
	sumaTotal <- 0
	// Para cada alumno
	Para i<-1 Hasta n Hacer
		Escribir 'Ingrese el número de notas para el alumno ',i,': '
		Leer c
		sumaNotas <- 0
		// Para cada nota del alumno
		Para j<-1 Hasta c Hacer
			Escribir 'Ingrese la nota ',j,' del alumno ',i,': '
			Leer nota
			sumaNotas <- sumaNotas+nota
		FinPara
		// Calcular la media de las notas del alumno
		Si c>0 Entonces
			media <- sumaNotas/c
			Escribir 'La media de notas del alumno ',i,' es: ',media
			sumaTotal <- sumaTotal+media
		SiNo
			Escribir 'No se ingresaron notas para el alumno ',i
		FinSi
	FinPara
	// Calcular la media total de la clase
	Si n>0 Entonces
		mediaTotal <- sumaTotal/n
		Escribir 'La media total de la clase es: ',mediaTotal
	SiNo
		Escribir 'No se ingresaron alumnos.'
	FinSi
FinAlgoritmo
