/*
	- Autor: 		rkatin
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Calculadora con funciones void
					Haremos uso del comparador IF-ELSE_IF
					para elegir entre cada una de nuestra 
					funciones que hemos creado
*/

#include <stdio.h>

void suma();
void resta();
void multiplicacion();
void division();
// Siempre declarar las funciones/procedimientos (procedimientos -> siempre precedidos de void)
// En C no hay funciones y procedimientos, solo funciones void
// Se declaran la funciones/procedimientos siempre fuera del main

int main(){
    int menu = 0;
    
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");

    printf("Dime una opcion/numero del menu: ");
    scanf("%i", &menu);
	
    if(menu == 1){
		printf("Eliges sumar\n--------\n");
		suma();
	}else if(menu == 2){
		printf("Eliges restar\n-------\n-");
		resta();
	}else if(menu == 3){
			printf("Eliges multiplicar\n--------\n");
			multiplicacion();
	}else if(menu == 4){
			printf("Eliges dividir\n--------\n");
    		division();
	}else {
		printf("Numero no valido\nHasta luego");
	}
	
	// Cada vez que llamamos a una fincion() sera igual que en el IF-ELSE_IF anterior,
	// estamos en el main() y entramos en una funcion(), ejecuto las instrucciones/codigo que tiene la funcion() void

    return 0;
}

void suma(){
   	float suma1;
	float suma2;
	
	printf("Dame un numero: ");
	scanf("%f", &suma1);
	printf("Dame otro numero: ");
	scanf("%f", &suma2);
	
	printf("La suma de %2.f + %2.f es = %2.f", suma1, suma2, (suma1 + suma2));
}

void resta(){
	float resta1;
	float resta2;
	
	printf("Dame un numero: ");
	scanf("%f", &resta1);
	printf("Dame otro numero: ");
	scanf("%f", &resta2);
	
	printf("La resta de %2.f menos %2.f es = %2.f", resta1, resta2, (resta1 - resta2));
}

void multiplicacion(){
	float multi1;
	float multi2;

	printf("Dame un numero: ");
	scanf("%f", &multi1);
	printf("Dame otro numero: ");
	scanf("%f", &multi2);
	
	printf("La multiplicacion de %2.f por %2.f es = %2.f", multi1, multi2, (multi1 * multi2));
}

void division(){
	float divi1;
	float divi2;

	printf("Dame un numero: ");
	scanf("%f", &divi1);
	printf("Dame otro numero: ");
	scanf("%f", &divi2);
	
	printf("La division de %2.f entre %2.f es = %2.f", divi1, divi2, (divi1 / divi2));
}


