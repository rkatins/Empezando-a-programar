/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:	Practica Final de Trimestre
*/

#include <stdio.h>
#include <string.h>			// libreria encqargada de los stringdo cadena de char
// Libreria descartada 		#include <ctype.h>	tolower() -> al final no usada

struct multimedia {
  char nombre[80];
  char tipo[80];
  int duracion;
  char plataforma[80];
  int agno;
  char imagen[80];
};

void mPuntoUno();
void mPuntoDosMenu();
void mPuntoDosUno();
void mDatosString(char *pregunta, char *persona);
int mDatosEnteros(char *pregunta);
void mPuntoDosDos();
void mPuntoDosTres();
void mPuntoDosCuatro();
void mPuntoDosCinco();
void mPuntoDosSeis();
void mMuestraArray();
void mMuestraArrayExtendido();
void mOpcionesPuntoCuatro(int pulsa, int nOpcion);
void mMuestraArrayParametro(int pulsa, struct multimedia mPuntoDosCuatro[]);

struct multimedia multimedia[20];		// variable global
int contadorMultimedia = 0;				// variable global
int contadorMultimediaExtendido = 0;	// variable global

main(){
	
	mPuntoUno();
	
	mPuntoDosMenu();
}

void mPuntoUno(){
	printf("---- CARGAR FICHERO ARRAY ----\n");
	
	int i = 0;	// Declaro dos variables con valor cero, las cuales se van
				// a usar en el bucle WHILE como si fuera un bucle FOR que
				// incrementa las variables en cada vuelta

	int j = 0;	// Declaro dos variables con valor cero, las cuales se van
				// a usar en el bucle WHILE como si fuera un bucle FOR que
				// incrementa las variables en cada vuelta
	
	FILE *fichero;
	
	char linea[80];	// Indico la longitud maxima que puede tener cada linea
	
	fichero = fopen("fSeriesPeliculas.txt", "r");
	
	while ((fgets(linea, 80, fichero)) != NULL){
		
		//printf("caso -> %i - %s\n", i, linea);
		
		switch(i){
			case 0:
				strcpy(multimedia[j].nombre, linea);
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 1:
				strcpy(multimedia[j].tipo, linea);
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 2:
				multimedia[j].duracion = atoi(linea);	// atoi(linea) == (int) strtol (linea, NULL, 10)
														// Si no lo he entendido mal la funcion atoi() lee/interpreta
														// directamente como int el contendo de fila mientras
														// que la funcion (int) strtol() hace un cast del contenido
														// de linea para transformarlo en un dato int
														//
														// strtol -> String to long, se le pone (int) de lante para hacer un cast a int del resultado devuelto por la funcion
														// La funcion strtol convierte la variable linea en un long sin ningun tipo de
														// alteracion y la cual es interpretada en base 10 (o decimal), seguidamente este
														// resultado le hace un cast para convertirlo a int
														//
														// Basicamente ambas funciones hacen lo mismo, convierten un String en un int
				
				//printf("caso -> %i - %s\n", i, linea);
				break;
				
			case 3:
				strcpy(multimedia[j].plataforma, linea);
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 4:
				multimedia[j].agno = (int) strtol(linea, NULL, 10);	// atoi(linea) = (int) strtol (linea, NULL, 10)
				//printf("caso -> %i - %s\n", i, linea);
				break;
			case 5:
				strcpy(multimedia[j].imagen, linea);
				//printf("caso -> %i - %s\n", i, linea);
				contadorMultimedia++;
				contadorMultimediaExtendido++;
				j++;		// La variable j tiene un valor estatico por asi decir, el cual solo se incrementa cuando llega al caso 5 que coincide con que es el ultimo caso que se puede dar, ya que se rigue de forma incremental por la variable i hasta llegar a 5.
				break;
		}
		i++;				// La variable i se encarga de controlar el numero de la fila que copiar cada vez que se incrementa la i
		if(i > 5){i = 0;}	// Una vez que la variable i llega a 5, quiere decir que ha dado una "vuelta", osea que ha recorrido la info de una pelicula/serie y pasa a la siguiente pelicula/serie
	}
	
	
	if(contadorMultimedia <= 1){
		printf("%i array completo escrito", contadorMultimedia);
	} else{
		printf("%i array completos escritos", contadorMultimedia);
	}
	
	fclose(fichero);
	
	//mMuestraArray();
}	

void mMuestraArray(){
	int i;
	
	printf("\n------------------------------\n");
	for(i = 0; i < contadorMultimedia; i++){
		printf("\n- %i -\n", i+1);
		printf("Nombre: %s", multimedia[i].nombre);
		printf("Tipo: %s", multimedia[i].tipo);
		printf("Duracion: %i\n", multimedia[i].duracion);
		printf("Plataforma: %s", multimedia[i].plataforma);
		printf("Agno: %i\n", multimedia[i].agno);
		printf("Imagen: %s", multimedia[i].imagen);
		
		if(i != (contadorMultimediaExtendido-1)){
			printf("\nPulsa una tecla para continuar.\n");	// | Tambien se puede usar -> system("pause"); el cual ahorraria una linea
			getch();										// | Lo que no me gusta es que para ejecutar esta linea de comando se apoya
															// | en la terminal MS2 de Windows la cual ejecuta un alias llamado ShellExecute
															// | al que se le pasan unos parametros en concreto.
		}
	}
	mMuestraArrayExtendido();
}

void mMuestraArrayExtendido(){
	int i;
	
	for(i = contadorMultimedia; i < contadorMultimediaExtendido; i++){
		printf("\n- %i -\n", i+1);
		printf("Nombre: %s\n", multimedia[i].nombre);
		printf("Tipo: %s\n", multimedia[i].tipo);
		printf("Duracion: %i\n", multimedia[i].duracion);
		printf("Plataforma: %s", multimedia[i].plataforma);
		printf("Agno: %i\n", multimedia[i].agno);
		printf("Imagen: %s", multimedia[i].imagen);
		
		if(i != (contadorMultimediaExtendido)){
			printf("\n\nPulsa una tecla para continuar.\n");	// | Tambien se puede usar -> system("pause"); el cual ahorraria una linea
			getch();											// | pero te arriesgas a que el programa no sea compatible
																// | con el sistema en el que se ejecuta, ya que este hace
																// | uso de una varible del propio sistema MS2
		}
	}
	printf("\n\n-------------------------------\n");
}

void mPuntoDosMenu(){
	int nOpcion;
	
	printf("\n\n---------- MENU ----------");
	printf("\n1. Agregar serie o pelicula");
	printf("\n2. Mostrar series o peliculas en la lista");
	printf("\n3. Mostrar series y peliculas (solo nombre)");
	printf("\n4. Ordenacion (Menu desplegable)");
	printf("\n5. Genera HTML (de una pelicula en concreto)");
	printf("\n6. Genera HTML + HTML de cada pelicula");
	printf("\n0. SALIR\n");
	
	printf("\nDime un numero de opcion \n");
	scanf("%i", &nOpcion);
			
	while(nOpcion != 0) {
		switch (nOpcion) {
			case 1:
				mPuntoDosUno();
				break;
			case 2:
				mPuntoDosDos();
				break;
			case 3:
				mPuntoDosTres();
				break;
			case 4:
				mPuntoDosCuatro();
				break;
			case 5:
				mPuntoDosCinco();
				break;
			case 6:
				mPuntoDosSeis();
				break;
			defult:								// |
				printf("Opcion no valida");		// | Daria igual poner este caso
				break;							// |
		}
		
		printf("\n---------- MENU ----------");
		printf("\n1. Agregar serie o pelicula");
		printf("\n2. Mostrar series o peliculas en la lista");
		printf("\n3. Mostrar series y peliculas (solo nombre)");
		printf("\n4. Ordenacion (Menu desplegable)");
		printf("\n5. Genera HTML (de una pelicula en concreto)");
		printf("\n6. Genera HTML + HTML de cada pelicula");
		printf("\n0. SALIR\n");	
		
		printf("\nDime un numero de opcion \n");
		scanf("%i", &nOpcion);
	}
	
	if(nOpcion == 0){printf("\nHasta luego\n");}
}

void mPuntoDosUno(){
	while(getchar()!='\n');
	
	printf("\n-- AGREGAR SERIE/PELICULA --\n");
	mDatosString("Nombre: ", multimedia[contadorMultimediaExtendido].nombre);
	mDatosString("Serie/Pelicula: ", multimedia[contadorMultimediaExtendido].tipo);
	multimedia[contadorMultimediaExtendido].duracion = mDatosEnteros("Duracion (en minutos): ");
	while(getchar()!='\n');
	mDatosString("Donde se emite?: ", multimedia[contadorMultimediaExtendido].plataforma);
	multimedia[contadorMultimediaExtendido].agno = mDatosEnteros("Agno de inicio de emision: ");
	while(getchar()!='\n');
	mDatosString("Escribe el nombre de la imagen/portada: ", multimedia[contadorMultimediaExtendido].imagen);
	contadorMultimediaExtendido++;
	
	FILE *fichero;
	
	fichero = fopen("fSeriesPeliculas.txt", "a");
	
	if(contadorMultimedia == 0){
		fprintf(fichero,"%s\n",multimedia[contadorMultimediaExtendido-1].nombre);
	} else{
		fprintf(fichero,"\n%s\n",multimedia[contadorMultimediaExtendido-1].nombre);
	}	
	fprintf(fichero,"%s\n",multimedia[contadorMultimediaExtendido-1].tipo);
	fprintf(fichero,"%i\n",multimedia[contadorMultimediaExtendido-1].duracion);
	fprintf(fichero,"%s\n",multimedia[contadorMultimediaExtendido-1].plataforma);
	fprintf(fichero,"%i\n",multimedia[contadorMultimediaExtendido-1].agno);
	fprintf(fichero,"%s",strcat(multimedia[contadorMultimediaExtendido-1].imagen,".jpg"));
	
	fclose(fichero);
}

void mDatosString(char *pregunta, char *multimedia){
	printf("%s", pregunta);
	gets(multimedia);
}

int mDatosEnteros(char *pregunta){
	int dato;
	
	printf("%s", pregunta);
	scanf("%i", &dato);
	return dato;
}

void mPuntoDosDos(){	
	mMuestraArray();
}

void mPuntoDosTres(){
	int i;
	char buscarNombre[50];
	
	printf("Dime el nombre de lo que buscas: ");
	scanf("%s", &buscarNombre);
	
	for(i = 0; i < contadorMultimediaExtendido; i++){
		if(strcmpi(buscarNombre,multimedia[i].nombre) == (-10)){
			printf("\n%s",multimedia[i].nombre);
			printf("%s",multimedia[i].tipo);
			printf("%i\n",multimedia[i].duracion);
			printf("%s",multimedia[i].plataforma);
			printf("%i\n",multimedia[i].agno);
			printf("%s\n",multimedia[i].imagen);
		}
	}
}

void mPuntoDosCuatro(){
	int nOpcion;
	
	printf("\n---------- MENU2 ----------");
	printf("\n1. Mostrar ordenado (primero peliculas + getch())");
	printf("\n2. Mostrar ordenado por nombre");
	printf("\n3. Mostrar oprdenado por plataforma");
	printf("\n0. SALIR\n");
	
	printf("\nDime un numero de opcion \n");
	scanf("%i", &nOpcion);
			
	while(nOpcion != 0) {
		switch (nOpcion) {
			case 1:
				//printf("\nMostrar ordenado (primero peliculas)");
				mOpcionesPuntoCuatro(0,nOpcion);
				break;
			case 2:
				//printf("\nMostrar ordenado por nombre");
				mOpcionesPuntoCuatro(1,nOpcion);
				break;
			case 3:
				//printf("\nMostrar oprdenado por plataforma");
				mOpcionesPuntoCuatro(1,nOpcion);
				break;
		}
		
		printf("\n\n---------- MENU2 ----------");
		printf("\n1. Mostrar ordenado (primero peliculas + getch())");
		printf("\n2. Mostrar ordenado por nombre");
		printf("\n3. Mostrar oprdenado por plataforma");
		printf("\n0. SALIR\n");	
		
		printf("\nDime un numero de opcion \n");
		scanf("%i", &nOpcion);
	}
	
	if(nOpcion == 0){printf("\nVuelta al otro menu\n");}
}

void mOpcionesPuntoCuatro(int pulsa, int nOpcion){
	int i;
	int j;
	int pulsaMuestraArray = pulsa;
	struct multimedia temporal;
	struct multimedia mPuntoDosCuatro[20];
	
	for(i = 0; i < contadorMultimediaExtendido; i++){
		mPuntoDosCuatro[i] = multimedia[i];	// Realizo una copia para que asi no toque el que seria el array original que contiene todas las series/peliculas
	}
	
	switch (nOpcion) {
		case 1:
			for (i = 0; i < contadorMultimediaExtendido; i++){
				for (j = 0; j < contadorMultimediaExtendido; j++){
					if (strcmp(mPuntoDosCuatro[i].tipo, mPuntoDosCuatro[j].tipo) < 0) {
						temporal = mPuntoDosCuatro[i];
						mPuntoDosCuatro[i] = mPuntoDosCuatro[j];
						mPuntoDosCuatro[j] = temporal;
					}
				}
			}
			mMuestraArrayParametro(pulsaMuestraArray, mPuntoDosCuatro);
			break;
		case 2:
			for (i = 0; i < contadorMultimediaExtendido; i++){
				for (j = 0; j < contadorMultimediaExtendido; j++){
					if (strcmp(mPuntoDosCuatro[i].nombre, mPuntoDosCuatro[j].nombre) < 0) {
						temporal = mPuntoDosCuatro[i];
						mPuntoDosCuatro[i] = mPuntoDosCuatro[j];
						mPuntoDosCuatro[j] = temporal;
					}
				}
			}
			mMuestraArrayParametro(pulsaMuestraArray, mPuntoDosCuatro);
			break;
		case 3:
			for (i = 0; i < contadorMultimediaExtendido; i++){
				for (j = 0; j < contadorMultimediaExtendido; j++){
					if (strcmp(mPuntoDosCuatro[i].plataforma, mPuntoDosCuatro[j].plataforma) < 0) {
						temporal = mPuntoDosCuatro[i];
						mPuntoDosCuatro[i] = mPuntoDosCuatro[j];
						mPuntoDosCuatro[j] = temporal;
					}
				}
			}
			mMuestraArrayParametro(pulsaMuestraArray, mPuntoDosCuatro);
			break;
	}
}

void mMuestraArrayParametro(int pulsa, struct multimedia mPuntoDosCuatro[]){
	int i;
	
	printf("\n------------------------------\n");
	for(i = 0; i < contadorMultimediaExtendido; i++){
		printf("Nombre: %s", mPuntoDosCuatro[i].nombre);
		printf("Tipo: %s", mPuntoDosCuatro[i].tipo);
		printf("Duracion: %i\n", mPuntoDosCuatro[i].duracion);
		printf("Plataforma: %s", mPuntoDosCuatro[i].plataforma);
		printf("Agno: %i\n", mPuntoDosCuatro[i].agno);
		printf("Imagen: %s\n", mPuntoDosCuatro[i].imagen);
		
		if(pulsa == 0){
			printf("Pulsa una tecla para continuar.\n");
			getch();
		}
	}
	printf("\n------------------------------\n");
}

void mPuntoDosCinco(){	
	int i;
	int j;
	char buscarNombre[50];
	int concretarNum = 1;
	char nombre[80];
	int coincidencias = 0;
	//Creo un nuevo array en el que guarda la copia para posteriormente escribirla en el fichero .html
	struct multimedia copiaHTML[20];
	
	printf("Dime el nombre de lo que buscas: ");
	scanf("%s", &buscarNombre);
	
	for(i = 0; i < contadorMultimediaExtendido; i++){
		if(strcmpi(buscarNombre,multimedia[i].nombre) == (-10)){
			printf("\n- %i -", coincidencias+1);
			printf("\n%s",multimedia[i].nombre);
			printf("%s",multimedia[i].tipo);
			printf("%i\n",multimedia[i].duracion);
			printf("%s",multimedia[i].plataforma);
			printf("%i\n",multimedia[i].agno);
			
			copiaHTML[coincidencias] = multimedia[i];
			
			coincidencias++;
		}
	}
	
	if(coincidencias >= 2){
		printf("\nDe la lista anterior, indica el numero de esta: ");
		scanf("%i", &concretarNum);
		while(getchar()!='\n');
	}
	
	if(coincidencias >= 1){	
		// Como segundo argumento se usa la funcion strtok() para quitar el caracter indicado del String pasado
		strcpy(nombre, strtok(copiaHTML[concretarNum-1].nombre, "\n"));
		strcat(nombre, ".html");
		
		FILE *fichero;
		
		//char linea[100];
		
		fichero = fopen(nombre, "w");
		
		fprintf(fichero, "<!DOCTYPE html>\n");
		fprintf(fichero, "<html>\n");
		fprintf(fichero, "<head>\n");
		fprintf(fichero, "	<meta charset=\"utf-8\">\n");	
		fprintf(fichero, "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n");
		fprintf(fichero, "	<title>%s</title>\n", copiaHTML[concretarNum-1].nombre);
		fprintf(fichero, "</head>\n");
		fprintf(fichero, "<body style=\"margin: 0\">\n");
		fprintf(fichero, "		<div align=\"center\" style=\"background-color: #004d43\">\n");
		fprintf(fichero, "			<h1 style=\"color: #fff\">MI BD MULTIMEDIA</h1>\n");
		fprintf(fichero, "		</div>\n");
		fprintf(fichero, "		<table>\n");
		fprintf(fichero, "			<tr>\n");
		fprintf(fichero, "				<td width=\"25%\" align=\"right\">\n");
		fprintf(fichero, "					<img src=\"%s\">\n", copiaHTML[concretarNum-1].imagen);
		fprintf(fichero, "				</td>\n");
		fprintf(fichero, "				<td width=\"500\">\n");
		fprintf(fichero, "					<ul>\n");
		fprintf(fichero, "			        	<li>Nombre: %s</li>\n", copiaHTML[concretarNum-1].nombre);
		fprintf(fichero, "			        	<li>Tipo: %s</li>\n", copiaHTML[concretarNum-1].tipo);
		fprintf(fichero, "			        	<li>Duracion: %i</li>\n", copiaHTML[concretarNum-1].duracion);
		fprintf(fichero, "			        	<li>Plataforma: %s</li>\n", copiaHTML[concretarNum-1].plataforma);
		fprintf(fichero, "			        	<li>Agno: %i</li>\n", copiaHTML[concretarNum-1].agno);
		fprintf(fichero, "			    	</ul>\n");	
		fprintf(fichero, "				</td>\n");	
		fprintf(fichero, "			</tr>\n");	
		fprintf(fichero, "		</table>\n");	
		fprintf(fichero, "</body>\n");	
		fprintf(fichero, "</html>\n");		
		
		fclose(fichero);
	}else {
		printf("Nada encontrado con ese nombre\n");
	}
}

void mPuntoDosSeis(){
	int i;
	char nombre[80];
	struct multimedia copiaHTML[20];
	//printf("Hola soy el caso %i\n", nOpcion);
	FILE *fichero;
	
	//char linea[100];
	
	fichero = fopen("multimedia.html", "w");
	
	fprintf(fichero, "<!DOCTYPE html>\n");
	fprintf(fichero, "<html>\n");
	fprintf(fichero, "<head>\n");
	fprintf(fichero, "	<meta charset=\"utf-8\">\n");	
	fprintf(fichero, "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n");
	fprintf(fichero, "	<title>MULTIMEDIA</title>\n");
	fprintf(fichero, "</head>\n");
	fprintf(fichero, "<body style=\"margin: 0\">\n");
	fprintf(fichero, "		<div align=\"center\" style=\"background-color: #004d43\">\n");
	fprintf(fichero, "			<h1 style=\"color: #fff\">MI BD MULTIMEDIA</h1>\n");
	fprintf(fichero, "		</div>\n");
	fprintf(fichero, "		<table>\n");
	for(i = 0; i < contadorMultimediaExtendido; i++){
	fprintf(fichero, "			<tr>\n");
	fprintf(fichero, "				<td width=\"25%\" align=\"right\">\n");
	fprintf(fichero, "					<img src=\"%s\">\n", multimedia[i].imagen);
	fprintf(fichero, "				</td>\n");
	fprintf(fichero, "				<td width=\"500\">\n");
	fprintf(fichero, "					<ul>\n");
	fprintf(fichero, "			        	<li>Nombre: %s</li>\n", multimedia[i].nombre);
	fprintf(fichero, "			        	<li>Tipo: %s</li>\n", multimedia[i].tipo);
	fprintf(fichero, "			        	<li>Duracion: %i</li>\n", multimedia[i].duracion);
	fprintf(fichero, "			        	<li>Plataforma: %s</li>\n", multimedia[i].plataforma);
	fprintf(fichero, "			        	<li>Agno: %i</li>\n", multimedia[i].agno);
	fprintf(fichero, "			    	</ul>\n");	
	fprintf(fichero, "				</td>\n");	
	fprintf(fichero, "			</tr>\n");							
	}	
	fprintf(fichero, "		</table>\n");	
	fprintf(fichero, "</body>\n");	
	fprintf(fichero, "</html>\n");
	
	fclose(fichero);
		
	for(i = 0; i < contadorMultimediaExtendido; i++){
		FILE *fichero;
		
		strcpy(nombre, strtok(multimedia[i].nombre, "\n"));
		strcat(nombre, ".html");
		
		fichero = fopen(nombre, "w+");
		
		fprintf(fichero, "<!DOCTYPE html>\n");
		fprintf(fichero, "<html>\n");
		fprintf(fichero, "<head>\n");
		fprintf(fichero, "	<meta charset=\"utf-8\">\n");	
		fprintf(fichero, "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n");
		fprintf(fichero, "	<title>MULTIMEDIA</title>\n");
		fprintf(fichero, "</head>\n");
		fprintf(fichero, "<body style=\"margin: 0\">\n");
		fprintf(fichero, "		<div align=\"center\" style=\"background-color: #004d43\">\n");
		fprintf(fichero, "			<h1 style=\"color: #fff\">MI BD MULTIMEDIA</h1>\n");
		fprintf(fichero, "		</div>\n");
		fprintf(fichero, "		<table>\n");
		fprintf(fichero, "			<tr>\n");
		fprintf(fichero, "				<td width=\"25%\" align=\"right\">\n");
		fprintf(fichero, "					<img src=\"%s\">\n", multimedia[i].imagen);
		fprintf(fichero, "				</td>\n");
		fprintf(fichero, "				<td width=\"500\">\n");
		fprintf(fichero, "					<ul>\n");
		fprintf(fichero, "			        	<li>Nombre: %s</li>\n", multimedia[i].nombre);
		fprintf(fichero, "			        	<li>Tipo: %s</li>\n", multimedia[i].tipo);
		fprintf(fichero, "			        	<li>Duracion: %i</li>\n", multimedia[i].duracion);
		fprintf(fichero, "			        	<li>Plataforma: %s</li>\n", multimedia[i].plataforma);
		fprintf(fichero, "			        	<li>Agno: %i</li>\n", multimedia[i].agno);
		fprintf(fichero, "			    	</ul>\n");	
		fprintf(fichero, "				</td>\n");	
		fprintf(fichero, "			</tr>\n");	
		fprintf(fichero, "		</table>\n");	
		fprintf(fichero, "</body>\n");	
		fprintf(fichero, "</html>\n");		
		
		fclose(fichero);	
	}
}
