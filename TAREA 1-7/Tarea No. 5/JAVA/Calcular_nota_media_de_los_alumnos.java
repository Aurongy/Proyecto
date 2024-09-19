/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

// En java, el nombre de un archivo fuente debe coincidir con el nombre de la clase que contiene,
// por lo que este archivo debería llamarse "CALCULAR_NOTA_MEDIA_DE_LOS_ALUMNOS.java."

import java.io.*;

public class calcular_nota_media_de_los_alumnos {

	public static void main(String args[]) throws IOException {
		BufferedReader bufEntrada = new BufferedReader(new InputStreamReader(System.in));
		int c;
		double i;
		double j;
		double media;
		double mediatotal;
		int n;
		double nota;
		double sumanotas;
		double sumatotal;
		// Solicitar el número de alumnos
		System.out.println("Ingrese el número de alumnos: ");
		n = Integer.parseInt(bufEntrada.readLine());
		sumatotal = 0;
		// Para cada alumno
		for (i=1;i<=n;i++) {
			System.out.println("Ingrese el número de notas para el alumno "+i+": ");
			c = Integer.parseInt(bufEntrada.readLine());
			sumanotas = 0;
			// Para cada nota del alumno
			for (j=1;j<=c;j++) {
				System.out.println("Ingrese la nota "+j+" del alumno "+i+": ");
				nota = Double.parseDouble(bufEntrada.readLine());
				sumanotas = sumanotas+nota;
			}
			// Calcular la media de las notas del alumno
			if (c>0) {
				media = sumanotas/c;
				System.out.println("La media de notas del alumno "+i+" es: "+media);
				sumatotal = sumatotal+media;
			} else {
				System.out.println("No se ingresaron notas para el alumno "+i);
			}
		}
		// Calcular la media total de la clase
		if (n>0) {
			mediatotal = sumatotal/n;
			System.out.println("La media total de la clase es: "+mediatotal);
		} else {
			System.out.println("No se ingresaron alumnos.");
		}
	}


}

