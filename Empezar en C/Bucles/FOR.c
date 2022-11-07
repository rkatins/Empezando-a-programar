/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Ejemplo sencillo para ver el bucle FOR
*/

#include <stdio.h>

int main(){	
	int i;
	
	for(i = 0; i < 10; i++){	// Al poner i++ incrementamos en uno su valor en uno
								// Lo mismo pasaria si ponemos i-- poero al reves,
								// decrementamos en uno su valor.
								// Por ejemplo, queremo aumentar su valor en dos, pondremos +=2
		printf(" %i ", i);
	}
	
	return 0;
}
