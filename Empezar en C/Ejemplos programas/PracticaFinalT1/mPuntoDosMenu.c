/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:	Practica Final de Trimestre
*/

#include <stdio.h>
#include <string.h>

struct multimedia {
  char nombre[80];
  char tipo[80];
  int duracion;
  char plataforma[80];
  int agno;
  char imagen[80];
};

void mPuntoUno();
void mPuntoDosMenu();
void mPuntoDosUno(nOpcion);

struct multimedia multimedia[20];	// viariable global par no tenerque pasarla todo el rato por
									// parametro el las funciones

main(){
	
	
	printf("---- CARGAR FICHERO ARRAY ----\n");
	mPuntoUno();
	printf("\n---------- MENU ----------\n");
	mPuntoDosMenu();
}

void mPuntoUno(){
	int i = 0;
	int j = 0;
	int contador = 0;
	
	FILE *fichero;
	
	char linea[80];
	
	fichero = fopen("fSeriesPeliculas.txt", "r");
	
	while ((fgets(linea, 80, fichero)) != NULL){
		
		//printf("caso -> %i - %s\n", i, linea);
		
		switch(i){
			case 0:
				strcpy(multimedia[j].nombre, linea);
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 1:
				strcpy(multimedia[j].tipo, linea);
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 2:
				multimedia[j].duracion = atoi(linea);	// atoi(linea) == (int) strtol (linea, NULL, 10)
														// Si no lo he entendido mal la funcion atoi() lee/interpreta
														// directamente como int el contendo de fila mientras
														// que la funcion (int) strtol() hace un cast del contenido
														// de linea para transformarlo en un dato int
														//
														// strtol -> String to long, se le pone (int) de lante para hacer un cast a int del resultado devuelto por la funcion
														// La funcion strtol convierte la variable linea en un long sin ningun tipo de
														// alteracion y la cual es interpretada en base 10 (o decimal), seguidamente este
														// resultado le hace un cast para convertirlo a int
														//
														// Basicamente ambas funciones hacen lo mismo, convierten un String en un int
				
				//printf("caso -> %i - %s\n", i, linea);
				break;
				
			case 3:
				strcpy(multimedia[j].plataforma, linea);
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 4:
				multimedia[j].agno = (int) strtol(linea, NULL, 10);	// atoi(linea) == (int) strtol (linea, NULL, 10)
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 5:
				strcpy(multimedia[j].imagen, linea);
				//printf("caso -> %i - %s\n", i, linea);
				contador++;
				j++;
				break;
		}
		i++;
		if(i > 5){i = 0;}
	}
	
	
	if(contador == 1){
		printf("%i array completo escrito", contador);
	} else{
		printf("%i array completos escritos", contador);
	}
	
	fclose(fichero);
	
	
	printf("\n------------\n");
	for(i = 0; i < 2; i++){
		printf("\n- %i -\n", i+1);
		printf("Nombre: %s", multimedia[i].nombre);
		printf("Tipo: %s", multimedia[i].tipo);
		printf("Duracion: %i\n", multimedia[i].duracion);
		printf("Plataforma: %s", multimedia[i].plataforma);
		printf("Agno: %i\n", multimedia[i].agno);
		printf("Imagen: %s", multimedia[i].imagen);		
	}
	printf("\n\n------------\n");
	
}

void mPuntoDosMenu(){
	int nOpcion;
	
	printf("Dime un numero de opcion \n");
	scanf(" %i", &nOpcion);
		
	while(nOpcion != 0) {
		switch (nOpcion) {
			case 1:
				//printf("Hola soy el caso %i\n", nOpcion);
				mPuntoDosUno(nOpcion);
				break;
			case 2:
				//printf("Hola soy el caso %i\n", nOpcion);
				mPuntoDosUno(nOpcion);
				break;
			case 3:
				//printf("Hola soy el caso %i\n", nOpcion);
				mPuntoDosUno(nOpcion);
				break;
			case 4:
				//printf("Hola soy el caso %i\n", nOpcion);
				mPuntoDosUno(nOpcion);
				break;
			case 5:
				//printf("Hola soy el caso %i\n", nOpcion);
				mPuntoDosUno(nOpcion);
				break;
			case 6:
				//printf("Hola soy el caso %i\n", nOpcion);
				mPuntoDosUno(nOpcion);
				break;
			defult:
				printf("Opcion no valida");
				break;
		}
		
		printf("Dime un numero de opcion \n");
		scanf(" %i", &nOpcion);
	}
	
	if(nOpcion == 0){printf("\nHasta luego\n");}
}

void mPuntoDosUno(int nOpcion){
	printf("Hola soy el caso %i\n", nOpcion);
}
