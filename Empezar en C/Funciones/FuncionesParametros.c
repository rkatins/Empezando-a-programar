/*
	- Autor: 		rkatins
	- Descripcion: 	Funciones (Con procedimientos con parametros)
					Haremos uso del comparador IF-ELSE_IF para elegir entre cada una de nuestra funciones que hemos creado
	- Correo: 		katinsruben.98@gmail.com
*/

#include <stdio.h>

float suma(float suma1, float suma2);
float resta(float resta1, float resta2);
float multiplicacion(float multi1, float multi2);
float division(float divi1, float divi2);
// Siempre declarar las funciones/procedimientos (procedimientos -> siempre precedidos de void)
// En C no hay funciones y procedimientos, solo funciones void
// Se declaran la funciones/procedimientos siempre fuera del main
	
int main(){
	    int menu = 0;
	    
	    printf("1. Sumar\n");
	    printf("2. Restar\n");
	    printf("3. Multiplicar\n");
	    printf("4. Dividir\n");
	
	    printf("Dime una opcion del menu: ");
	    scanf("%i", &menu);
		
		//case 1
		float suma1;
		float suma2;	   	
		
		//case 2
		float resta1;
		float resta2;		
		
		//case 3
		float multi1;
		float multi2;	
		
		//case 4
		float divi1;
		float divi2;	
		
	    if (menu == 1){
    		printf("Eliges sumar\n--------\n");
    		printf("Dame un numero: ");
			scanf("%f", &suma1);
			printf("Dame otro numero: ");
			scanf("%f", &suma2);
			
    		printf("El resultado es -> %f \n", suma(suma1, suma2));
		}else if (menu == 2){
			printf("Eliges restar\n-------\n-");
			printf("Dame un numero: ");
			scanf("%f", &resta1);
			printf("Dame otro numero: ");
			scanf("%f", &resta2);
				
	    	printf("El resultado es -> %f \n", resta(resta1, resta2));
		}else if (menu == 3){
			printf("Eliges multiplicar\n--------\n");
			printf("Dame un numero: ");
			scanf("%f", &multi1);
			printf("Dame otro numero: ");
			scanf("%f", &multi2);
			
			printf("El resultado es -> %f \n", multiplicacion(multi1, multi2));	
		}else if (menu == 4){
			printf("Eliges dividir\n--------\n");
			scanf("%f", &divi1);
			printf("Dame otro numero: ");
			scanf("%f", &divi2);
			
    		printf("El resultado es -> %f \n", division(divi1, divi2));		
		}

    return 0;
}

float suma(float suma1, float suma2){	
	return(suma1 + suma2);
}

float resta(float resta1, float resta2){	
	return(resta1 - resta2);
}

float multiplicacion(float multi1, float multi2){	
	return(multi1 * multi2);
}

float division(float divi1, float divi2){	
	return(divi1 / divi2);
}
