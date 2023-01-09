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

void mPuntoUno(struct multimedia multimedia[]);

main(){
	struct multimedia arrayStruct[20];
	
	mPuntoUno(arrayStruct);
}

void mPuntoUno(struct multimedia multimedia[]) {
	int i = 0;
	int j = 0;
	
	FILE *fichero;
	
	char linea[80];
	
	fichero = fopen("fSeriesPeliculas.txt", "r");
	
	while ((fgets(linea, 80, fichero)) != NULL){
		
		//printf("caso -> %i - %s\n", i, linea);
		
		switch(i){
			case 0:
				strcpy(multimedia[j].nombre, linea);
				printf("caso -> %i - %s\n", i, linea);
				break;
			case 1:
				strcpy(multimedia[j].tipo, linea);
				printf("caso -> %i - %s\n", i, linea);
				break;
			case 2:
				multimedia[j].duracion = (int) strtol (linea, NULL, 10);
				printf("caso -> %i - %s\n", i, linea);
				break;
			case 3:
				strcpy(multimedia[j].plataforma, linea);
				printf("caso -> %i - %s\n", i, linea);
				break;
			case 4:
				multimedia[j].agno = (int) strtol (linea, NULL, 10);
				printf("caso -> %i - %s\n", i, linea);
				break;
			case 5:
				strcpy(multimedia[j].imagen, linea);
				printf("caso -> %i - %s\n", i, linea);
				j++;
				break;
		}
		i++;
		if(i > 5){i = 0;}	
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
