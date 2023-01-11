package pqtCarolina;

import java.util.Scanner;

public class Ejercicio5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String sNombre;
		int iAltura;
		int iPeso;
		
		System.out.println("Dime tu nombre: ");
			sNombre = sc.nextLine();
		System.out.println("Dime la altura: ");
			iAltura = sc.nextInt();sc.nextLine();
		System.out.println("Dime peso: ");
			iPeso = sc.nextInt();sc.nextLine();
			
		System.out.println("IMC de " + sNombre + " = " + (iPeso/Math.pow(iAltura, 2)));
	}
}
