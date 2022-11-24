/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 5
*/

#include <stdio.h>

int main() {
	int opcion;
	
	printf("Introduzca un dia de la semana en numero (del 1 al 7): ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1:
			printf("---- 1 ----\n");
			printf("El dia %i corresponde al lunes\n", opcion);
			break;
		case 2:
			printf("---- 2 ----\n");
			printf("El dia %i corresponde al martes\n", opcion);
			break;
		case 3:
			printf("---- 3 ----\n");
			printf("El dia %i corresponde al miercoles\n", opcion);
			break;
		case 4:
			printf("---- 4 ----\n");
			printf("El dia %i corresponde al jueves\n", opcion);
			break;
		case 5:
			printf("---- 5 ----\n");
			printf("El dia %i corresponde al viernes\n", opcion);
			break;
		case 6:
			printf("---- 6 ----\n");
			printf("El dia %i corresponde al sabado\n", opcion);
			break;
		case 7:
			printf("---- 7 ----\n");
			printf("El dia %i corresponde al domingo\n", opcion);
			break;
		default:
			printf("Numero no valido");
			break;
	}
	return 0;
}

