public static void ejercicio15() {
        System.out.println("Dime un numero: ");
        int introducido = sc.nextInt();sc.nextLine();
        
        for (int i = 0; i < introducido; i++) { 
            for (int j = 0; j < introducido; j++) {
                if ((j > 0 && j < introducido - 1) && (i > 0 && i < introducido - 1)) {
                    System.out.print("0");
                }else {
                    System.out.print("*");
                }
                        
            }

            System.out.print("\n");
        }
    }