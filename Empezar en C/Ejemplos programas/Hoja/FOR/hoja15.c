/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	
*/

#include <stdio.h>

int main() {
	int primero;
	int segundo;
	int tercero;
	
	int num1;
	int num2;
	int num3;
	
	printf ("Escribe primer numero\n");
	scanf ("%d",&num1);
	printf ("Escribe segundo numero\n");
	scanf ("%d",&num2);
	printf ("Escribe tercer numero\n");
	scanf ("%d",&num3);
	if (num1 < num2) {
		if (num2 < num3) {
			primero = num3;
		}else {
			primero = num2;
		} 
	}else {
		if (num1 < num3) {
			primero = num3;
		}else {
			primero = num1;
		} 
	}
	
	if (num1 > num2) {
		if (num2 < num3) {
			segundo = num3;
		}else {
			segundo = num2;
		} 
	}else {
		if (num1 < num3) {
			segundo = num3;
		}else {
			segundo = num1;
		} 
	}
	
	if (num1 > num2) {
		if (num2 > num3) {
			tercero = num3;
		}else {
			tercero = num2;
		} 
	}else {
		if (num1 > num3) {
			tercero = num3;
		}else {
			tercero = num1;
		} 
	}
	
	printf("Orden -> %i %i %i", primero, segundo, tercero);
	
	return 0;
}

