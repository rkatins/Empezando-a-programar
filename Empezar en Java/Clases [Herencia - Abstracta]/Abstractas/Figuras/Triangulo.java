public class Triangulo extends Figuras {
    private double base;
    private double altura;

    public Triangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    @Override
    public double mArea() {
        return (base * altura) / 2;
    }
}