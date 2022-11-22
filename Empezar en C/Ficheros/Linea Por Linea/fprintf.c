#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:
*/

main(){
	FILE *fichero;
	
	char linea[80];
	
	fichero = fopen("datos.txt", "a");
	
	printf("Escribe algo:");
	gets(linea);

	fprintf(fichero,"%s",linea);  // fprintf escribe en relacion a lo indicado en el array[80] correspondiente a la variable char linea
	
	fclose(fichero);
}

