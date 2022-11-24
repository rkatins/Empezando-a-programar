/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Hoja 7
*/


#include <stdio.h>

int main(){
    int menu = 0;
    
    printf("---- CALCULADORA BRUTAL ----\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");

    printf("Elige una opcion: ");
    scanf("%i", &menu);
    
    //Tenia pensado declarar las siguientes variables dentro de cada caso
	//del switch para que estas fuesen declaradas solo cundo es necesario,
	//pero si lo hago asi no deja
	
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
	
    switch(menu){
    	case 1:
    		printf("Eliges sumar\n--------\n");
    		printf("Dame un numero: ");
    		scanf("%f", &suma1);
    		printf("Dame otro numero: ");
    		scanf("%f", &suma2);
    		
    		if (suma1 > suma2){
    			printf("El primer numero introducido es mayor\n");
			}else if(suma2 > suma1){
				printf("El segundo numero introducido es mayor\n");
			}
			
			printf("%2.f + %2.f = %2.f\n", suma1, suma2, (suma1 + suma2));
    		
    		break;
		case 2:
			printf("Eliges restar\n-------\n-");
    		printf("Dame un numero: ");
    		scanf("%f", &resta1);
    		printf("Dame otro numero: ");
    		scanf("%f", &resta2);
    		
    		if (resta1 > resta2){
    			printf("El primer numero introducido es mayor, se peude hacer la resta");
    			printf("La resta de %2.f menos %2.f es = %2.f\n", resta1, resta2, (resta1 - resta2));
			}else if(resta2 > resta1){
				printf("El segundo numero introducido es mayor\n");
			}
			 	
			printf("%2.f - %2.f = %2.f\n", resta1, resta2, (resta1 - resta2));  		
    		
			break;
		case 3:
			printf("Eliges multiplicar\n--------\n");
    		printf("Dame un numero: ");
    		scanf("%f", &multi1);
    		printf("Dame otro numero: ");
    		scanf("%f", &multi2);
    		
    		if (multi1 > multi2){
    			printf("El primer numero introducido es mayor\n");
				printf("La multiplicacion de %2.f por %2.f es = %2.f\n", multi1, multi2, (multi1 * multi2));
			}else if(multi1 < multi2){
				printf("El segundo numero introducido es mayor\n");
				printf("La multiplicacion de %2.f por %2.f es = %2.f", multi1, multi2, (multi1 * multi2));
			} 
				
			printf("%2.f x %2.f = %2.f\n", multi1, multi2, (multi1 * multi2));
    		
			break;
		case 4:
			printf("Eliges dividir\n--------\n");
    		printf("Dame un numero: ");
    		scanf("%f", &divi1);
    		printf("Dame otro numero: ");
    		scanf("%f", &divi2);
    		
    		if (divi1 > divi2){
    			printf("El primer numero introducido es mayor\n");
				printf("La division de %2.f entre %2.f es = %2.f\n", divi1, divi2, (divi1 / divi2));
			}else if(divi1 < divi2){
				printf("El segundo numero introducido es mayor\n");
				printf("La division no se puede llevar a cabo\n");
			}
			
			printf("%2.f / %2.f = %2.f\n", divi1, divi1, (divi1 / divi2));
					
			break;
		default:
			break;
	}

    return 0;
}


