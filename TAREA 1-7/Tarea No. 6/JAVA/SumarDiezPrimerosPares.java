/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

// En java, el nombre de un archivo fuente debe coincidir con el nombre de la clase que contiene,
// por lo que este archivo deber�a llamarse "SUMARDIEZPRIMEROSPARES.java."

import java.io.*;

public class sumardiezprimerospares {

	public static void main(String args[]) {
		int contador;
		int suma;
		suma = 0;
		contador = 0;
		while (contador<10) {
			contador = contador+1;
			// Cada n�mero par es el doble del contador
			suma = suma+(contador*2);
		}
		System.out.println("La suma de los diez primeros n�meros pares es: "+suma);
	}


}

