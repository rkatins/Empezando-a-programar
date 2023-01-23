package Mascotas;

import java.time.LocalDate;
import java.util.Scanner;

public class Mascotas {
    
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String nombre;
        String animal; 
        String raza;
        
        Animal defecto = new Animal();
        Animal perro = new Animal("Alan", "19/04/2018", "Perro", "Damata", 78934);
        Animal gato = new Animal("Yeremy", "08/10/2019", "Gato", "Esfinge", 11264);
        Animal loro = new Animal("Nicolás", "23/01/2020", "Loro", "Turco", 23230);
        
        System.out.println(defecto.toString());
        System.out.println("----");
        System.out.println(perro.toString());
        System.out.println("----");
        System.out.println(gato.toString());
        System.out.println("----");
        System.out.println(loro.toString());
        System.out.println("---- ++++ ----");
        
        System.out.println("Dime un nombre que le pongas a tu mascota ideal");
        nombre = sc.nextLine();
        System.out.println("¿Qure animal es?");
        animal = sc.nextLine();
        System.out.println("Que raza es tu " + animal);
        raza = sc.nextLine();
        
        Animal nuevaMascota = new Animal(nombre, "23/01/2023", animal, raza, 0);
        System.out.println(nuevaMascota.toString());
    }
}
