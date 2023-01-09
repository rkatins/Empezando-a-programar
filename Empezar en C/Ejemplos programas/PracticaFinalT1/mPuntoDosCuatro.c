void mPuntoDosCuatro(){
	int nOpcion;
	
	printf("\n---------- MENU2 ----------");
	printf("\n1. Mostrar ordenado (primero peliculas + getch())");
	printf("\n2. Mostrar ordenado por nombre");
	printf("\n3. Mostrar oprdenado por plataforma");
	printf("\n0. SALIR\n");
	
	printf("\nDime un numero de opcion \n");
	scanf("%i", &nOpcion);
			
	while(nOpcion != 0) {
		switch (nOpcion) {
			case 1:
				//printf("\nMostrar ordenado (primero peliculas)");
				mOpcionesPuntoCuatro(0,nOpcion);
				break;
			case 2:
				//printf("\nMostrar ordenado por nombre");
				mOpcionesPuntoCuatro(1,nOpcion);
				break;
			case 3:
				//printf("\nMostrar oprdenado por plataforma");
				mOpcionesPuntoCuatro(1,nOpcion);
				break;
		}
		
		printf("\n\n---------- MENU2 ----------");
		printf("\n1. Mostrar ordenado (primero peliculas + getch())");
		printf("\n2. Mostrar ordenado por nombre");
		printf("\n3. Mostrar oprdenado por plataforma");
		printf("\n0. SALIR\n");	
		
		printf("\nDime un numero de opcion \n");
		scanf("%i", &nOpcion);
	}
	
	if(nOpcion == 0){printf("\nVuelta al otro menu\n");}
}