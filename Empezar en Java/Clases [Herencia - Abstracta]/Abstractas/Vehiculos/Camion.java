public class Camion extends Vehiculo {
    public Camion(int velocidad) {
        super(velocidad);
    }

    @Override
    public void mAcelerar() {
        return velocidad + 15;
    }

    @Override
    public void mFrenar() {
        return velocidad - 10;
    }
}