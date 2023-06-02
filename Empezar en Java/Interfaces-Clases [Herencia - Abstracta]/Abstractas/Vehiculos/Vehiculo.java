public abstract class Vehiculo {
    protected int velocidad;

    public Vehiculo(int velocidad) {
        this.velocidad = velocidad;
    }

    public abstract void acelerar();

    public abstract void frenar();
}