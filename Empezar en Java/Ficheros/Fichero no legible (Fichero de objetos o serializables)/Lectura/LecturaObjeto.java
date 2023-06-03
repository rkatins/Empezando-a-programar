package prueba;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;

public class Escritura {
    public static void main(String[] args) {
        Persona personaParaLeer;
        
        FileInputStream ficheroEntrada = null;
        try{            
            ficheroEntrada = new FileInputStream("datos.txt");
            ObjectInputStream tuberiaEntrada = new ObjectInputStream(ficheroEntrada);
            
            personaParaLeer = (Persona)tuberiaEntrada.readObject();
            System.out.println(personaParaLeer.toString());
            
            ficheroEntrada.close();
        }catch(FileNotFoundException e){
            e.printStackTrace();
        }catch(IOException e){
            e.printStackTrace();
        }catch(ClassNotFoundException e){
            e.printStackTrace();
        }
    }
}