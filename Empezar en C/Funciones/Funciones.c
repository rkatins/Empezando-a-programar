/*
	- Autor: 		rkatins
	- Descripcion: 	Funciones
					Haremos uso del comparador IF-ELSE_IF para elegir entre cada una de nuestra funciones que hemos creado
	- Correo: 		katinsruben.98@gmail.com
*/

#include <stdio.h>

float suma();
float resta();
float multiplicacion();
float division();
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
	
    if(menu == 1){
    	printf("Eliges sumar\n--------\n");
    	printf("El resoultado es -> %f", suma());
	}else if(menu == 2){
		printf("Eliges restar\n-------\n-");
    	printf("El resoultado es -> %f", resta());
	}else if(menu == 3){
		printf("Eliges multiplicar\n--------\n");
		printf("El resoultado es -> %f", multiplicacion());
	}else if(menu == 4){
		printf("Eliges dividir\n--------\n");
    	printf("El resoultado es -> %f", division());	
	}
    

    return 0;
}

float suma(){
   	float suma1;
	float suma2;
	
	printf("Dame un numero: ");
	scanf("%f", &suma1);
	printf("Dame otro numero: ");
	scanf("%f", &suma2);
	
	return (suma1 + suma2);
}

float resta(){
	float resta1;
	float resta2;
	
	printf("Dame un numero: ");
	scanf("%f", &resta1);
	printf("Dame otro numero: ");
	scanf("%f", &resta2);
	
	return (resta1 - resta2);
}

float multiplicacion(){
	float multi1;
	float multi2;

	printf("Dame un numero: ");
	scanf("%f", &multi1);
	printf("Dame otro numero: ");
	scanf("%f", &multi2);
	
	return (multi1 * multi2);
}

float division(){
	float divi1;
	float divi2;

	printf("Dame un numero: ");
	scanf("%f", &divi1);
	printf("Dame otro numero: ");
	scanf("%f", &divi2);
	
	return (divi1 / divi1);
}


