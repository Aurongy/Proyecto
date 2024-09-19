Algoritmo calcular_media_50_num
	
	Definir suma,media Como Real
	Definir numero Como Real
	Definir i Como Entero
	suma <- 0
	
	Para i<-1 Hasta 50 Hacer
		Escribir 'Ingrese el número ',i,': '
		Leer numero
		suma <- suma+numero
	FinPara
	
	media <- suma/50
	Escribir 'La media de los cincuenta números es: ',media
	
FinAlgoritmo
