public class Circulo extends Figuras {
    private double radio;

    public Circulo(double radio) {
        this.radio = radio;
    }

    @Override
    public double mArea() {
        return Math.PI * radio * radio;
    }
}