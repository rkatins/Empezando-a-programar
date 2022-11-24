/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 2
*/

#include <stdio.h>

main(){
	int i;
	
	for(i = 1; i < 1001; i++){
		if(i%17 == 0){
			printf("%i ", i);
			if(i%10 == 0){
				printf("\n");
			}
		}
	}
}
