public class Coche extends Vehiculo {
    public Coche(int velocidad) {
        super(velocidad);
    }

    @Override
    public mAcelerar(){
        return velocidad + 10;
    } 

    @Override
    public void mFrenar() {
        return velocidad - 5;
    }
}