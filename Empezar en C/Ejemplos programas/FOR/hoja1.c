/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 1
*/

#include <stdio.h>

void a();
void b();
void c();
void d();
void e();
void f(); 

main(){
	int loop = 1;
	char opcion;
	
	while(loop != 0){
		printf("\n---- MENU ---- \n");
		printf("a. Escribe del 1 al 10 \n");
		printf("b. Escribe del 10 al 1 \n");
		printf("c. Escribe del 1 al 10 (solo pares + modulo)\n");
		printf("d. Escribe del 1 al 10 (solo pares - modulo)\n");
		printf("e. Escribe del 1 al 10 (solo impares + modulo)\n");
		printf("f. Escribe del 1 al 10 (solo impares - modulo)\n");
		printf("0. Salir \n");
		printf("---------------- \n");
		
		printf("Dime una opcion del menu:  ");
		scanf("%c", &opcion);
		while(getchar()!='\n');		// Esta linea hace lo mismo que el nextLine() en Java
		
		switch(opcion){
			case 'a':
				a();
				break;
			case 'b':
				b();
				break;
			case 'c':
				c();
				break;
			case 'd':
				d();
				break;
			case 'e':
				e();
				break;
			case 'f':
				f();
				break;
			case '0':
				loop = 0;
				printf("Hasta luego");
				break;
		}
	}	
}

// Ejercicio 1
void a(){
	int i;
	
	for(i = 1; i < 11; i++){
		printf("%i ", i);
	}
}

void b(){
	int i;
	
	for(i = 11; i > 1; i--){
		printf("%i ", i);
	}
}

void c(){
	int i;
	
	for(i = 1; i < 11; i++){
		if(i%2 == 0){
			printf("%i ", i);
		}
	}
}

void d(){
	int i;
	
	for(i = 1; i < 12; i+=2){
		printf("%i ", i);
	}
}

void e(){
	int i;
	
	for(i = 1; i < 11; i+=2){
		if(i%2 != 0){
			printf("%i ", i);
		}
	}
}

void f(){
	int i;
	
	for(i = 1; i < 11; i+=2){
		printf("%i ", i);
	}
}
// FIN Ejercicio 1
