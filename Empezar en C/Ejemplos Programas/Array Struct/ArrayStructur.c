#include <stdio.h>

/*
  - Autor:         	rkatins
  - Correo:			katinsruben.98@gmial.com
  - Descripcion:
*/

struct persona {
	char nombre[20];
	char apellido[20];
	char ciudad[20];
};

void muestraPersona(struct persona persona);
void muestraArray(struct persona arrayStruct[], int contador);
void datosString(char *pregunta, char *persona);
void mOrdenacion(struct persona arrayStruct[], int contador);

main(){
	char letra;
	int contador = 0;
	struct persona arrayStruct[3];
	
	while(contador != 3){
		printf("Dime una letra: S/N\n");
		scanf("%c", &letra);
		while(getchar()!='\n');
		
		if(letra == 'S' || letra == 's'){
			struct persona persona;
			
			datosString("Introduce tu nombre: ", persona.nombre);
			datosString("Introduce tu apellido: ", persona.apellido);
			datosString("Introduce tu ciudad: ", persona.ciudad);
			
			arrayStruct[contador] = persona;
			contador++;
			
			mOrdenacion(arrayStruct, contador);
			muestraArray(arrayStruct, contador);
		}else {
			printf("Elige de nuevo\n");
		}
	}
	printf("No caben mas personas");
}

void muestraPersona(struct persona persona){
	printf("Nombre:%s\n", persona.nombre);
	printf("Apellido:%s\n", persona.apellido);
	printf("Ciudad:%s\n", persona.ciudad);
}

void muestraArray(struct persona arrayStruct[], int contador){
	int i;
	
	for(i = 0; i < contador; i++){
		printf("\n------------\n");
		printf("- %i -\n", i+1);
		printf("Nombre:%s\n", arrayStruct[i].nombre);
		printf("Apellido:%s\n", arrayStruct[i].apellido);
		printf("Ciudad:%s\n", arrayStruct[i].ciudad);		
	}
	printf("------------\n\n");
}

void datosString(char *pregunta, char *persona){
	printf("%s", pregunta);
	gets(persona);
}

void mOrdenacion(struct persona arrayStruct[], int contador){
	int i;
	int j;
	struct persona temporal;
	
	for (i = 0; i < contador; i++){
		for (j = 0; j < contador; j++){
			if (strcmp(arrayStruct[i].nombre, arrayStruct[j].nombre) < 0) {
				temporal = arrayStruct[i];
				arrayStruct[i] = arrayStruct[j];
				arrayStruct[j] = temporal;
			}
		}
	}
}

