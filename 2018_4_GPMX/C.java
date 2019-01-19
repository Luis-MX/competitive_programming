import java.io.*;
import java.util.*;

public class C {
	public static void main(String[] args) throws Exception {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int r,q,fechaInicio,fechaFin;
		String linea = bf.readLine();
		String[] elems = linea.split(" ");
		r = Integer.parseInt(elems[0]);
		q = Integer.parseInt(elems[1]);
		fechaInicio = fecha(elems[2]);
		fechaFin = fecha(elems[3]);
		TreeMap<Integer, Integer> rsq = new TreeMap<>();
		int fechaLeida, caloriasLeidas, totalActual = 0;
		for (int i = 0; i < r; i++) {
			linea = bf.readLine();
			fechaLeida = fecha(linea.substring(0, 12));
			caloriasLeidas = Integer.parseInt(linea.substring(13, linea.length()));
			totalActual += caloriasLeidas;
			rsq.put(fechaLeida, totalActual);
		}
		for (int i = 0; i < q; i++) {
			// Calculando sumas en rangos
		}
	}

	public static int fecha(String fecha) {
		return Integer.parseInt(fecha.substring(0, 4)) * 1000 +
						Integer.parseInt(fecha.substring(5, 7)) * 50 +
						Integer.parseInt(fecha.substring(8, 10));
	}
}