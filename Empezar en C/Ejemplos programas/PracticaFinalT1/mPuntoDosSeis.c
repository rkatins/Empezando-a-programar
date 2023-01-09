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