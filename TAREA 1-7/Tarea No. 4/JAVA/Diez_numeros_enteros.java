/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

// En java, el nombre de un archivo fuente debe coincidir con el nombre de la clase que contiene,
// por lo que este archivo deber�a llamarse "DIEZ_NUMEROS_ENTEROS.java."

import java.io.*;

public class diez_numeros_enteros {

	public static void main(String args[]) throws IOException {
		BufferedReader bufEntrada = new BufferedReader(new InputStreamReader(System.in));
		int contadorimpares;
		int contadorpares;
		double i;
		double mediaimpares;
		int numeros;
		int sumaimpares;
		int sumapares;
		sumapares = 0;
		contadorpares = 0;
		sumaimpares = 0;
		contadorimpares = 0;
		// Leer los 10 n�meros
		for (i=1;i<=10;i++) {
			System.out.println("Ingrese el n�mero "+i+": ");
			numeros = Integer.parseInt(bufEntrada.readLine());
			// Comprobar si el n�mero es par
			if (numeros%2==0) {
				sumapares = sumapares+numeros;
				contadorpares = contadorpares+1;
			} else {
				sumaimpares = sumaimpares+numeros;
				contadorimpares = contadorimpares+1;
			}
		}
		// Mostrar resultados
		System.out.println("La suma de los n�meros pares es: "+sumapares);
		System.out.println("La cantidad de n�meros pares es: "+contadorpares);
		// Calcular y mostrar la media de los n�meros impares
		if (contadorimpares>0) {
			mediaimpares = sumaimpares/contadorimpares;
			System.out.println("La media aritm�tica de los n�meros impares es: "+mediaimpares);
		} else {
			System.out.println("No hay n�meros impares para calcular la media.");
		}
	}


}

