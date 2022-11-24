/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 8
*/

#include <stdio.h>

int main() {
	int i;	// fila
	int j;	// columna
	char letra;
	
	for (i = 1; i < 9; i++){
		if(i == 1){
			letra = 'A';
		}else if(i == 2){
			letra = 'B';
		}else if(i == 3){
			letra = 'C';
		}else if(i == 4){
			letra = 'D';
		}else if(i == 5){
			letra = 'E';
		}else if(i == 6){
			letra = 'F';
		}else if(i == 7){
			letra = 'G';
		}else if(i == 8){
			letra = 'H';
		}
		
		for(j = 1; j < 9; j++){
			printf("%c%i ", letra, j);
		}
		
		printf("\n");
	}

	return 0;
}

