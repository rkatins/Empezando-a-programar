/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 3
*/

#include <stdio.h>

int main() {
	int i;
	int contador = 0;
	
	for (i = 1; i < 101; i++){
		contador++;
		printf("%i ", i);
		if(contador%10 == 0){
			printf("\n");
		}
	}

	return 0;
}

