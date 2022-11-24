#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:
*/

main(){
	int i;
	int j;
	int num;
	
	printf("Dime un numero: ");
	scanf("%i", &num);
	
	for(i = 1; i < num + 1; i++){
		for(j = i; j < num; j++){
			printf(" ");
		}
		for(j = i; j > 0; j--){
			printf(" *");
		}			
		printf("\n");
	}
	
	for(i = 2; i < num + 1; i++){
		for(j = 1; j < i; j++){
			printf(" ");
		}
		for(j = num + 1; j > i; j--){
			printf(" *");
		}
		printf("\n");
	}
	
}

