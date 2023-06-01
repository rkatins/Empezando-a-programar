public class Moto extends Vehiculo {
    public Moto(int velocidad) {
        super(velocidad);
    }

    @Override
    public mAcelerar(){
        return velocidad + 20;
    }

    @Override
    public void mFrenar() {
        return velocidad - 15;
    }
}