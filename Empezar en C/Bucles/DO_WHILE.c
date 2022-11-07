/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Ejemplo sencillo para ver el bucle DO-WHILE
*/

#include <stdio.h>

int main(){	
	int i = 0;
	
	do{
		printf(" %i ", i);
		i++;					
	}while (i < 10);
	//MUY IMPORTANTE -> Siempre pponer el punto y coma al final de un bucle DO-WHILE
	// Al poner i++ incrementamos en uno su valor en uno
	// Lo mismo pasaria si ponemos i-- poero al reves,
	// decrementamos en uno su valor.
	// Por ejemplo, queremo aumentar su valor en dos, pondremos +=2.
	//
	// PD: para evitar hacer un bucle infinito,
	// deberemos SIEMPRE incrementar la varible con la que comparamos en el WHILE
	
	return 0;
}
