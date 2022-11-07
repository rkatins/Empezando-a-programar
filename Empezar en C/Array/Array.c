/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	¿Que es un array?
					Definirlo e inicializarlo
					y recorrerlo
*/

#include <stdio.h>

int main() {
	int i;
	int matriz[6] ={3,4,5,8,1,9};
	
	for(i = 0; i < 6; i++){
		printf("%i ", matriz[i]);
	}
	return 0;
}

