public static void ejercicio14(){
        System.out.println("Introduzca un carácter: ");
        char caracter = sc.nextLine().charAt(0);
        System.out.println("Introduzca un número de filas: ");
        int fila = sc.nextInt();sc.nextLine();
        System.out.println("Introduzca un número de columnas: ");
        int columna = sc.nextInt();sc.nextLine();
        
        for (int i = 0; i < fila; i++) {
            for (int j = 0; j < columna; j++) {
                System.out.print(caracter);
            }
            System.out.print("\n");
        }
    } 