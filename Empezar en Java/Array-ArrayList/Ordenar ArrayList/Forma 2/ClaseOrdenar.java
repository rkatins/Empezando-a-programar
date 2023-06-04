import java.util.Comparator;

public class ClaseOrdenar implements Comparator<Municipio> {	
	@Override
	public int compare (Municipio m1, Municipio m2){
		if (m1.getNombre().compareTo(m2.getNombre()) > 0) {
			return -1;
		} else if (m1.getNombre().compareTo(m2.getNombre()) == 0) {
			return 0;
		} else {
			return 1;
		}
	}
}
