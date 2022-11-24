/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 9
*/

#include <stdio.h>

int main(){	
	int num;
	int i;
	int j;
	
	printf("Dime un numero: ");
	scanf("%i", &num);
	
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			printf(" * ");
		}
		printf("\n");	
	}
	
	return 0;
}

