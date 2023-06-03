package prueba;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;

public class Escritura {
    public static void main(String[] args) {
        Persona personaParaLeer;
        FileInputStream fis = null;
        
        try{            
            fis = new FileInputStream("datos.txt");
            ObjectInputStream ois = new ObjectInputStream(fis);
            
            // Se hace un casting para cambiar el tipo de lo devuelto por -> ois.readObject();
            personaParaLeer = (Persona)ois.readObject();
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
