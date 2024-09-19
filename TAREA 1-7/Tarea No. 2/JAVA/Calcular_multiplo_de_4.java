/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

// En java, el nombre de un archivo fuente debe coincidir con el nombre de la clase que contiene,
// por lo que este archivo debería llamarse "CALCULAR_MULTIPLO_DE_4.java."

import java.io.*;

public class calcular_multiplo_de_4 {

	public static void main(String args[]) throws IOException {
		BufferedReader bufEntrada = new BufferedReader(new InputStreamReader(System.in));
		int i;
		int n;
		System.out.println("Ingrese el valor de N: ");
		n = Integer.parseInt(bufEntrada.readLine());
		System.out.println("Los primeros "+n+" múltiplos de 4 son:");
		for (i=1;i<=n;i++) {
			System.out.println(4*i);
		}
	}


}

