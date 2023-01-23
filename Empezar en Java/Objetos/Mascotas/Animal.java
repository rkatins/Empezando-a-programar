package Mascotas;
        
public class Animal {
    private String nombre; 
    private String fechaNacimiento; 
    private String animal; 
    private String raza;
    private int numeroChip;

    public Animal(String nombre, String fechaNacimiento, String animal, String raza, int numeroChip) {
        this.nombre = nombre;
        this.fechaNacimiento = fechaNacimiento;
        this.animal = animal;
        this.raza = raza;
        this.numeroChip = numeroChip;
    }

    public Animal() {
        this.nombre = "Abandonado";
        this.fechaNacimiento = "01/01/2023";
        this.animal = "Rata";
        this.raza = "Chunga";
        this.numeroChip = 0;
    }    

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getFechaNacimiento() {
        return fechaNacimiento;
    }

    public void setFechaNacimiento(String fechaNacimiento) {
        this.fechaNacimiento = fechaNacimiento;
    }

    public String getAnimal() {
        return animal;
    }

    public void setAnimal(String animal) {
        this.animal = animal;
    }

    public String getRaza() {
        return raza;
    }

    public void setRaza(String raza) {
        this.raza = raza;
    }

    public int getNumeroChip() {
        return numeroChip;
    }

    public void setNumeroChip(int numeroChip) {
        this.numeroChip = numeroChip;
    }

    @Override
    public String toString() {
        return nombre + "\n" + fechaNacimiento + "\n" + animal + "\n" + raza + "\n" + numeroChip;
    }
}