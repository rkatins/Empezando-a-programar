public class Cuadrado extends Figuras {
    private double lado;

    public Cuadrado(double lado) {
        this.lado = lado;
    }

    @Override
    public double mArea() {
        return lado * lado;
    }
}