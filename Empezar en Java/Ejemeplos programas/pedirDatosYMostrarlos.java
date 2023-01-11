package pqtCarolinaPerimetro;

import java.util.Scanner;

public class Ejercicio1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a;
        int b;
        int c;
        String s;

        System.out.println("Valor de a: ");
        a = sc.nextInt();sc.nextLine();
        System.out.println("Valor de b: ");
        b = sc.nextInt();sc.nextLine();
        System.out.println("Valor de c: ");
        c = sc.nextInt();sc.nextLine();
        System.out.println("Valor de String: ");
        s = sc.nextLine();

        System.out.println("a = " + a + " b = " + b + " c = " + c + " s = " + s);

        System.out.println("\n\n");

        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        System.out.println("s = " + s);

        System.out.println("\n\n");

        System.out.println("a = " + a + "\nb = " + b + "\nc = " + c + "\ns = " + s);
    }
}
