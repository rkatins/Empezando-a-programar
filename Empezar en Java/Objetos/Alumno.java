package objetos;

public class Alumno {
    public String nombre;
    public String apellido;
    private int nia;

    // Metodo constructor por defecto
    public Alumno() {
        nombre = "Sin nombre";
        apellido = "Sin apellido";
        nia = 0;
    }

    // Metodo constructor con parametros
    public Alumno(String nombre, String apellido, int nia) {
        this.nombre = nombre;
        this.nombre = apellido;
        this.nia = nia;
    }
    
    // Metodo accesor o Getter
    public int getNia() {
        return nia;
    }
    
    // Metodo mutador o Setterr
    public void setNia(int nia) {
        this.nia = nia;
    }
    
}
