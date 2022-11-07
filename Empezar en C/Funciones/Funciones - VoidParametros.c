/*
	- Autor: 		rkatins
	- Descripcion: 	Funciones void (Con procedimientos con parametros)
					Haremos uso del comparador IF-ELSE_IF para elegir entre cada una de nuestra funciones que hemos creado
	- Correo: 		katinsruben.98@gmail.com
*/

#include <stdio.h>

void suma(float suma1, float suma2);
void resta(float resta1, float resta2);
void multiplicacion(float multi1, float multi2);
void division(float divi1, float divi2);
// Siempre declarar las funciones/procedimientos (procedimientos -> siempre precedidos de void)
// En C no hay funciones y procedimientos, solo funciones void
// Se declaran la funciones/procedimientos siempre fuera del main
//
// Los parametros son las varibles las cuales se van a pasar a nuestra funcion() ya sea void o no,
// La viariable que le vamos a entregar tiene que darse con el mismo orden y ser del mismo tipo
// que en la declaracion o inicializacion de las funciones

int main(){	
    int menu = 0;
	
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
    
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");

    printf("Dime una opcion del menu: ");
    scanf("%i", &menu);
	
	// Hemos declarado e inicilizado 8 varibles para diferenciarlas a la hora de pasarlas
	// por parametro, pero se podri hacer conn 2 variables simplemente
	// (a parte de la variable menu, la cual se incializara en el scanf)
		
	if(menu == 1){
		printf("Eliges sumar\n--------\n");
		printf("Dame un numero: ");
		scanf("%f", &suma1);
		printf("Dame otro numero: ");
		scanf("%f", &suma2);
		suma(suma1, suma2);
		printf("\n");
	}else if(menu == 2){
		printf("Eliges restar\n-------\n");
		printf("Dame un numero: ");
		scanf("%f", &resta1);
		printf("Dame otro numero: ");
		scanf("%f", &resta2);
		resta(resta1, resta2);
		printf("\n");
	}else if(menu == 3){
		printf("Eliges multiplicar\n--------\n");
		printf("Dame un numero: ");
		scanf("%f", &multi1);
		printf("Dame otro numero: ");
		scanf("%f", &multi2);
		multiplicacion(multi1, multi2);
		printf("\n");
	}else if(menu == 4){
		printf("Eliges dividir\n--------\n");
		printf("Dame otro numero: ");
		scanf("%f", &divi1);
		printf("Dame otro numero: ");
		scanf("%f", &divi2);
		division(divi1, divi2);
		printf("\n");
	}else {
		printf("Numero no valido\nHasta luego");
	}

    return 0;
}

void suma(float suma1, float suma2){	
	printf("La suma de %2.f + %2.f es = %2.f", suma1, suma2, (suma1 + suma2));
}

void resta(float resta1, float resta2){	
	printf("La resta de %2.f menos %2.f es = %2.f", resta1, resta2, (resta1 - resta2));
}

void multiplicacion(float multi1, float multi2){	
	printf("La multiplicacion de %2.f por %2.f es = %2.f", multi1, multi2, (multi1 * multi2));
}

void division(float divi1, float divi2){	
	printf("La division de %2.f entre %2.f es = %2.f", divi1, divi2, (divi1 / divi2));
}
