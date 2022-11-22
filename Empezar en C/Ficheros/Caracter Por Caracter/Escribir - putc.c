#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:
*/

main(){
	FILE *fichero;
	
	fichero = fopen("prueba.txt", "w");
	
	putc('P', fichero);
	putc('r', fichero);
	putc('u', fichero);
	putc('e', fichero);
	putc('b', fichero);
	putc('a', fichero);
	
	fclose(fichero);
}

