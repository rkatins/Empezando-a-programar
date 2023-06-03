package lecturayescritura;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Lectura {
    public static void main(String[] args) {
        FileReader archivo = null;
        BufferedReader br = null;
        String linea; 
        try{
            archivo = new FileReader("fichero.txt");
            br = new BufferedReader(archivo);
            
            while((linea=br.readLine())!=null){
                System.out.println(linea);
            }
            
            br.close();
        }catch(FileNotFoundException e){
            e.printStackTrace();
        }
    }
}
