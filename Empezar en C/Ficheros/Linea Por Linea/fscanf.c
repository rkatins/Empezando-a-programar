#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:		katinsruben.98@gmial.com
  - Descripcion:	Lee un fichero y muestra la linea que lee
*/

main(){
	FILE *fichero;
	
	// A continuacion indica el numero de caracteres que cogera por linea
	char linea[5];	// Coge los caracteres hasta encontrar un salto de linea con el que pasa a la siguiente linea
	
	fichero = fopen("BancoMain.txt", "r");
	//LECTURA DE UNA LINEA
	fscanf(fichero, "%s", linea);
	
	printf("%s\n",linea);
	//LECTURA DE TODAS LAS LINEAS
	while ((fscanf(fichero, "%s", linea))!=EOF){	// fscanf ->	Hay que tener en cuenta que cada vez que encuentre un
							// 		espacio en blanco generará un salto de linea al mostrarlo
	
		printf("%s\n",linea);
	}
	fclose(fichero);
}

