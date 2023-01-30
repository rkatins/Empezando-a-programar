/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ejercicio02modelo;

/**
 *
 * @author ruben.katins
 */
public class Principal {
    public static void main(String[] args) {
        Televisor teleSalon = new Televisor();
        teleSalon.setNombre(Televisor.Nombre.SAMSUNG);
        teleSalon.setModelo("Paradise");
        teleSalon.setPulgadas(50);
        teleSalon.setPais("Alemania");
                
        Televisor teleCocina = new Televisor(Televisor.Nombre.SAMSUNG, "Paradise", 50, "Alemania");
        
//        System.out.println(teleSalon.toString());
        System.out.println(teleSalon.getModelo()); 
        System.out.println("---- ++++ ----");
        System.out.println(teleCocina.toString());
    }
}
