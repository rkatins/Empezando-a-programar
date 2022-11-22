/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Algoritmo de la burbuja o intercambio directo (para ordenar) 
*/

#include <stdio.h>
#include <conio.h>	// Al importar esta libreria no da acceo a herramientas/funciones como getch()

void muestra();

int numero = 10;
int i;
int j;

int edades[] = {18, 20, 8, 2, 8, 1, 15, 77, 25, 3};

main(){
	printf ("Antes de ordenar\n");
	
	muestra();
	
	int temporal;
	
	for (i = 0; i < numero; i++){
		for (j = 0; j < numero;j++){
			if (edades[i] >=edades[j]){
				temporal= edades[i];
				edades[i] = edades[j];
				edades[j] = temporal;
			}
		}
	}
		
	printf ("Despues de ordenar\n");
	muestra();
	
	getch();	// Esta funcion sirve para hacer una pusa en el codigo,
				// es decir que hasta que no se pulse cualquier tecla no continua
				// Si quisieramos podriamos omitir la libreria que hemos importado
				// para usar esta funcion
}
void muestra(){
	for (i=0;i<numero;i++){
		printf("%d\n", edades[i]);
	}
}
