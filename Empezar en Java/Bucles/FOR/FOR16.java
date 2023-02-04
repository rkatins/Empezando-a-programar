public static void ejercicio16() {
        System.out.println("Introduzca un carácter: ");
        char caracter = sc.nextLine().charAt(0);
        System.out.println("Introduzca un número de filas: ");
        int fila = sc.nextInt();sc.nextLine();
        System.out.println("Introduzca un número de columnas: ");
        int columna = sc.nextInt();sc.nextLine();
        
        for (int i = 0; i < fila; i++) {    
            for (int j = 0; j < columna; j++) {
                if ((j > 0 && j < columna - 1) && (i > 0 && i < fila - 1)) {
                    System.out.print(caracter);
                }else {
                    if (j == 0 && (i > 0 && i < fila - 1) || j == columna - 1 && (i > 0 && i < fila - 1)) {
                        System.out.print("|");
                    }else {
                        System.out.print("-");
                    }
                    
                }
                        
            }

            System.out.print("\n");
        }
    }