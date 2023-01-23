package objetos;

public class Aula {
    
    public static void main(String[] args) {
        // Metodo constructor por defecto
        Alumno alumno1 = new Alumno();

        // Metodo constructor con parametros
        Alumno alumno2 = new Alumno("Ruben", "Katins", 503);
        
        System.out.println("NIA -> valor por defecto: " + alumno1.getNia());
        System.out.println("NIA -> valor establecido por parametros: " + alumno2.getNia());
        
        System.out.println("Nombre -> valor por defecto: " + alumno1.nombre);
        System.out.println("Nombre -> valor establecido por parametros: " + alumno2.nombre);
    }
    
}
