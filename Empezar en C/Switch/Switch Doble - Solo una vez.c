#include <stdio.h>

/*
	- Autor: 	rkatins
	- Fecha: 	04/10/22
	- Titulo: 	MenuDoble: switch anidado
	- Correo: 	katinsruben.98@gmail.com
*/	

int main(){
    int menu = 5;
    int prPlato = 0;
    int sgPlato = 0;
	int trPlato = 0;
	int bebida = 0;
	   
    printf("1. Comida\n");
    printf("2. Bebida\n");

    printf("Dime una opcion del menu: ");
    scanf("%i", &menu);
	
    switch(menu){
    	case 1:
    		printf("-- Primer Plato --\n");
    		printf("1. Gazpacho\n");
    		printf("2. Arroz\n");

		    printf("Dime una opcion del menu: ");
		    scanf("%i", &prPlato);
		    
		    switch(prPlato){
		    	case 1:
		    		prPlato = 1;
		    		break;
		    	case 2:
		    		prPlato = 2;
		    		break;
				default:
					prPlato = 0;
					break;
			}
			
			printf("-- Segundo Plato --\n");
    		printf("1. Carne\n");
    		printf("2. Pescado\n");

		    printf("Dime una opcion del menu: ");
		    scanf("%i", &sgPlato);
		    
		    switch(sgPlato){
		    	case 1:
		    		sgPlato = 1;
		    		break;
		    	case 2:
		    		sgPlato = 2;
		    		break;
				default:
					sgPlato = 0;
					break;
			}
			
			printf("-- Postre --\n");
    		printf("1. Natillas\n");
    		printf("2. Tarta de queso\n");

		    printf("Dime una opcion del menu: ");
		    scanf("%i", &trPlato);
		    		    
		    switch(trPlato){
		    	case 1:
		    		trPlato = 1;
		    		break;
		    	case 2:
		    		trPlato = 2;
		    		break;
				default:
					trPlato = 0;
					break;
			}
			break;
		case 2:
			printf("-- Bebida --\n");
			printf("1. Agua\n");
    		printf("2. Refresco\n");
    		printf("Elige una bebida: ");
		    scanf("%i", &bebida);
    		switch(bebida){
		    	case 1:
		    		bebida = 1;
		    		break;
		    	case 2:
		    		bebida = 2;
		    		break;
				default:
					prPlato = 0;
					break;
			}
			break;
		case 0:
			printf("-- SALIR --\n");
		    prPlato = 0;
		    sgPlato = 0;
			trPlato = 0;
			printf("Hasta luego\n");
		break;
	}
	
	printf("Has pedido un menu %i%i%i + %i", prPlato, sgPlato, trPlato, bebida);

    return 0;
}


