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
public class Televisor {
    enum Nombre {SAMSUNG, LG, PHILIPS, SONY};
    private Nombre nombre;
    private String modelo;
    private int pulgadas;
    private String pais;

    public Televisor() {
    nombre = nombre.SAMSUNG;
    modelo = "Alcaparra";
    pulgadas = 0;
    pais = "Marruecos";
    }

    public Televisor(Nombre nombre, String modelo, int pulgadas, String pais) {
        this.nombre = nombre;
        this.modelo = modelo;
        this.pulgadas = pulgadas;
        this.pais = pais;
    }

    public Nombre getNombre() {
        return nombre;
    }

    public void setNombre(Nombre nombre) {
        this.nombre = nombre;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getPulgadas() {
        return pulgadas;
    }

    public void setPulgadas(int pulgadas) {
        this.pulgadas = pulgadas;
    }

    public String getPais() {
        return pais;
    }

    public void setPais(String pais) {
        this.pais = pais;
    }

    @Override
    public String toString() {
        return "Televisor{" + "nombre=" + nombre + ", modelo=" + modelo + ", pulgadas=" + pulgadas + ", pais=" + pais + '}';
    }
}
