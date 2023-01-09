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