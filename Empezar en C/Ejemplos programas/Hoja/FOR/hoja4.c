/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 4
*/

#include <stdio.h>

int main() {
	int loop = 1;
	int opcion;
	
	do{
		printf("---- MENU ----\n");
		printf("1. Te daremos las buenas tardes\n");
		printf("2. Te daremos la posibilidad de sumar dos numeros\n");
		printf("3. Te recordaremosd que el grupo A siempre fue mejor que el grupo B\n");
		printf("0. Salir\n");
		printf("Por favor, elije una opcion\n");
		scanf("%i", &opcion);
		
		switch(opcion){
			case 1:
				printf("---- 1 ----");
				break;
			case 2:
				printf("---- 2 ----");
				break;
			case 3:
				printf("---- 3 ----");
				break;
			case 0:
				printf("Hasta luego");
				loop = 0;
				break;
		}
			
	}while (loop == 1);

	return 0;
}

