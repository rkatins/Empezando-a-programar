public class Jefe extends Persona {
    private double bonificacion;

    public Jefe(String nombre, int edad, double bonificacion) {
        super(nombre, edad);
        this.bonificacion = bonificacion;
    }

    public double getBonificacion() {
        return bonificacion;
    }
}