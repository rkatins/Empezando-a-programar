public static void ejercicio17dowhile() {
    int introducido;
    
    do {
        System.out.println("Introduzca un número entre 3 y 9: ");
        introducido = sc.nextInt();sc.nextLine();
    } while (introducido < 3 || introducido > 9);
    
    for (int i = 1; i < introducido + 2; i++) {
        for (int j = 1; j < i; j++) {
            System.out.print(j);
        }
        System.out.print("\n");
    }
}

/*---- ---- ----*/

public static void ejercicio17while() {
    System.out.println("Introduzca un número entre 3 y 9: ");
    int introducido = sc.nextInt();sc.nextLine();
   
    while (introducido < 3 || introducido > 9) {            
        System.out.println("Introduzca un número entre 3 y 9: ");
        introducido = sc.nextInt();sc.nextLine();
    }
    
    for (int i = 1; i < introducido + 2; i++) {
        for (int j = 1; j < i; j++) {
            System.out.print(j);
        }
        System.out.print("\n");
    }
}