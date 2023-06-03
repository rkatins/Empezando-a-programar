package prueba;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

public class Escritura {
    public void mEscribirObjeto() {
        FileOutputStream fos = null;

        // Se crea un objeto de tipo Persona con unos datos dados por parametro
        Persona personaParaGuardar = new Persona("Josefina", "Pontevedra", 23);

        try {
            fos = new FileOutputStream("datos.txt");
            ObjectOutputStream oos = new ObjectOutputStream(fos);

            oos.writeObject(personaParaGuardar);

            System.out.println("Fichero guardado correctamente");
            oos.close();
        } catch (FileNotFoundException ex) {
            ex.printStackTrace();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
