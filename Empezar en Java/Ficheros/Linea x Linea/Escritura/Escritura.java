package lecturayescritura;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;

public class Escritura {
    public static void main(String[] args) {
        File archivo = new File("eeefichero.txt");
        PrintWriter pw = null;
        
        try{
            pw = new PrintWriter(archivo);
            pw.println("Iván");
            pw.println(24);
            pw.println(true);
            pw.println("Cuenca");
            
            System.out.println("Fichero escrito correctamente");
        }catch(FileNotFoundException e){
            e.printStackTrace();
        }finally{
            if(pw != null){
                pw.close();
            }
        }
    }
}
