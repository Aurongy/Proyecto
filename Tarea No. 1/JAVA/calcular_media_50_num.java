/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

// En java, el nombre de un archivo fuente debe coincidir con el nombre de la clase que contiene,
// por lo que este archivo debería llamarse "CALCULAR_MEDIA_50_NUM.java."

import java.io.*;

public class calcular_media_50_num {

	public static void main(String args[]) throws IOException {
		BufferedReader bufEntrada = new BufferedReader(new InputStreamReader(System.in));
		int i;
		double media;
		double numero;
		double suma;
		suma = 0;
		for (i=1;i<=50;i++) {
			System.out.println("Ingrese el número "+i+": ");
			numero = Double.parseDouble(bufEntrada.readLine());
			suma = suma+numero;
		}
		media = suma/50;
		System.out.println("La media de los cincuenta números es: "+media);
	}


}

