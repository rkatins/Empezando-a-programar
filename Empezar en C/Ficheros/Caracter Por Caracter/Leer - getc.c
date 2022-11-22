#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:
*/

main(){
	FILE *fichero;
		
	fichero = fopen("Mona.txt", "r");
	// Leemos la primera letra
	char letra=getc(fichero);
	
	// LEER TODOS LOS CARACTERES, COMO NO SABEMOS LA LONGITUD ES UN BUCLE WHILE
	while(letra != EOF){
		if (letra==EOF) {
			printf("Fichero no encontrado");
		} else {
			printf("%c", letra);
		}
		letra=getc(fichero);
	}
	fclose(fichero);
}

