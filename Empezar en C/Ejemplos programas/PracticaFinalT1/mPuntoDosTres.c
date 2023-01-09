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