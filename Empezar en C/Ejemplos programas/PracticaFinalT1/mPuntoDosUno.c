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