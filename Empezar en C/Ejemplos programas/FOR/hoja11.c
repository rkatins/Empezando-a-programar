#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:	Hoja 11
*/

main(){
	int i;
	int j;
	int num;
	
	printf("Dime un numero: ");
	scanf("%i", &num);
	
	for(i = 0; i < num + 1; i++){
		for(j = 0; j < i; j++){
			printf("* ");
		}	
		printf("\n");
	}
}

