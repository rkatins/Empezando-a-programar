/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 6
*/

#include <stdio.h>

int main() {
	int opcion;
	
	printf("Introduzca un dia de mes en numero (del 1 al 12): ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1:
			printf("---- 1 ----\n");
			printf("El mes de enero tiene 31 dias\n");
			break;
		case 2:
			printf("---- 2 ----\n");
			printf("El mes de febrero tiene 28 29 dias\n");
			break;
		case 3:
			printf("---- 3 ----\n");
			printf("El mes de marzo tiene 31 dias\n");
			break;
		case 4:
			printf("---- 4 ----\n");
			printf("El mes de abril tiene 30 dias\n");
			break;
		case 5:
			printf("---- 5 ----\n");
			printf("El mes de mayo tiene 31 dias\n");
			break;
		case 6:
			printf("---- 6 ----\n");
			printf("El mes de junio tiene 30 dias\n");
			break;
		case 7:
			printf("---- 7 ----\n");
			printf("El mes de julio tiene 31 dias\n");
			break;
		case 8:
			printf("---- 8 ----\n");
			printf("El mes de agosto tiene 31 dias\n");
			break;
		case 9:
			printf("---- 9 ----\n");
			printf("El mes de septiembre tiene 30 dias\n");
			break;
		case 10:
			printf("---- 10 ----\n");
			printf("El mes de octubre tiene 31 dias\n");
			break;
		case 11:
			printf("---- 11 ----\n");
			printf("El mes de noviembre tiene 30 dias\n");
			break;
		case 12:
			printf("---- 12 ----\n");
			printf("El mes de diciembre tiene 31 dias\n");
			break;
		default:
			printf("Numero no valido");
			break;
	}
	return 0;
}

