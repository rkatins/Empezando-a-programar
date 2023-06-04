package ordenar;

public class Municipio {
    private String nombre;
    private String provincia;

    public Municipio(String nombre, String provincia) {
        this.nombre = nombre;
        this.provincia = provincia;
    }

    public String getNombre() {
        return nombre;
    }

    public String getProvincia() {
        return provincia;
    }

	@Override
	public String toString() {
		return "Municipio [nombre=" + nombre + ", provincia=" + provincia + "]";
	}
}
