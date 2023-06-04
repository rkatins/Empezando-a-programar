import java.util.Collections;
import java.util.ArrayList;

public class Principal {
    public static void main(String[] args) {
        ArrayList<Municipio> municipios = new ArrayList<>();

        Municipio municipio1 = new Municipio("Fuenlabrada", "Madrid");
        municipios.add(municipio1);

        Municipio municipio2 = new Municipio("Mostoles", "Madrid");
        municipios.add(municipio2);

        Municipio municipio3 = new Municipio("Sevilla", "Sevilla");
        municipios.add(municipio3);

        Municipio municipio4 = new Municipio("Valencia", "Valencia");
        municipios.add(municipio4);

        Collections.sort(municipios, new ClaseOrdenar());
        for (int i = 0; i < municipios.size(); i++) {
        	System.out.println(municipios.get(i).toString());
	}
    }
}
