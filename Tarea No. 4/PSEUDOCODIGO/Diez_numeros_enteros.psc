Algoritmo Diez_numeros_enteros
	Definir numeros Como Entero
	Definir sumaPares,contadorPares,sumaImpares Como Entero
	Definir contadorImpares Como Entero
	Definir mediaImpares Como Real
	sumaPares <- 0
	contadorPares <- 0
	sumaImpares <- 0
	contadorImpares <- 0
	// Leer los 10 n�meros
	Para i<-1 Hasta 10 Hacer
		Escribir 'Ingrese el n�mero ',i,': '
		Leer numeros
		// Comprobar si el n�mero es par
		Si numeros MOD 2=0 Entonces
			sumaPares <- sumaPares+numeros
			contadorPares <- contadorPares+1
		SiNo
			sumaImpares <- sumaImpares+numeros
			contadorImpares <- contadorImpares+1
		FinSi
	FinPara
	// Mostrar resultados
	Escribir 'La suma de los n�meros pares es: ',sumaPares
	Escribir 'La cantidad de n�meros pares es: ',contadorPares
	// Calcular y mostrar la media de los n�meros impares
	Si contadorImpares>0 Entonces
		mediaImpares <- sumaImpares/contadorImpares
		Escribir 'La media aritm�tica de los n�meros impares es: ',mediaImpares
	SiNo
		Escribir 'No hay n�meros impares para calcular la media.'
	FinSi
FinAlgoritmo
