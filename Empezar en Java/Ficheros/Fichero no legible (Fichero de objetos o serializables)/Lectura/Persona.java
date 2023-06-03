import java.io.Serializable;

public class Persona implements Serializable {
    private String nombre;
    private String lugar;
    private int edad;

    public Persona(String nombre, String lugar, int edad) {
        this.nombre = nombre;
        this.lugar = lugar;
        this.edad = edad;
    }

    @Override
    public String toString() {
        return "Persona{nombre=" + nombre + ", lugar='" + lugar + ", edad=" + edad + "}";
    }
}