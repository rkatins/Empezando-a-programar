## FICHEROS
---
---

Podemos definir los ficheros como una forma de mantener las cosas en el tiempo, es decir que va a ser identico tanto en un sitio como en otro aunque cerremos su ejecuccion.

---
### Sintaxis
```
	FILE nombreFichero;

	// fopen(char *nombreFichero, char *modo);
	Ej: fopen("miFichero.txt", "r");
	Ej: fopen("miFichero.txt", "w");
	Ej: fopen("miFichero.txt", "a");
	Ej: fopen("miFichero.txt", "r+");
	Ej: fopen("miFichero.txt", "a+");

	fclose(nombreFichero);
```
Con FILE creamos una nueva variable la cual podrá contener el valor de un fichero.

Modo:
+ "r" ->	Lectura.
+ "w" ->	Escritura. En caso de haber cosas escritas las borra y escribe (o sobreescribe).
+ "a" ->	Añadido (append), es decir que si tiene algo 
			añade mas contenido.
+ "r+" ->	Lectura y escritura (no borra el fichero,
			parecido al modo "a").
+ "a+" ->	Crea el fichero si no existe.

_IMPORTANTE:_ SIEMPRE cerrar el fichero -> fclose(nombreFichero);

---
### Leer un Fichero (caracter a caracter)
Lectura de un carácter (devuelve EOF si llega al final):
```
int putc(int c, FILE *fichero);int getc(FILE *fichero);
```
Por ejemplo al leerlo de caracter en caracter va a llegar un momento en el que llegue al final del fichero representado por un caracter invisible llamado EOF (End Of File -> Fin del Fichero).
```
	FILE *miFichero;
		
	miFichero = fopen("prueba.txt", "r");
	// Leemos la primera letra
	char letra=getc(miFichero);
	
	// Leer todos los caracteres, como no sabemos la longitud es un bucle WHILE
	while(letra != EOF){
		if (letra==EOF) {
			printf("Fichero no encontrado");
		} else {
			printf("%c", letra);
		}
		letra=getc(miFichero);
	}
	fclose(miFichero);
```
---
### Escribir un Fichero (caracter a caracter)
Escritura de un carácter:
```
int putc(int c, FILE *fichero);
```
Ha diferencia de la lectura (caracter a caracter), no hace falta indicarle el fin del fichero, ya que va a escribir en este desde el inicio, y en caso de haber algo previamente escrito lo sobreescribe.
```
	FILE *fichero;

	fichero = fopen("002_PrimerFichero.txt", "w");

	putc('P', fichero);
	putc('r', fichero);
	putc('u', fichero);
	putc('e', fichero);
	putc('b', fichero);
	putc('a', fichero);

	fclose(fichero);
```
---
#### Leer un Fichero (linea a linea)
Escritura de una línea:
```
int fscanf(FILE *fichero, char *formato, char *cadena);
```
Por ejemplo al leerlo de linea en linea va a llegar un momento en el que llegue al final del fichero representado por una linea invisible llamada EOF (End Of File -> Fin del Fichero). (Muy similar a la lectura caracter a caracter)
```
	FILE *fichero;
	
	// A continuacion indica el numero de caracteres que cogera por linea
	char linea[5];	// Coge los caracteres hasta encontrar un salto de linea con el que pasa a la siguiente linea
	
	fichero = fopen("BancoMain.txt", "r");
	//LECTURA DE UNA LINEA
	fscanf(fichero, "%s", linea);
	
	printf("%s\n",linea);
	//LECTURA DE TODAS LAS LINEAS

	while ((fscanf(fichero, "%s", linea))!=EOF){	// fscanf ->	Hay que tener en cuenta que cada vez que encuentre un
													// 				espacio en blanco generará un salto de linea al mostrarlo
	
		printf("%s\n",linea);
	
	}
	fclose(fichero);
```
---
## Escribir un Fichero (linea a linea)
Escritura de una línea:
```
int fprintf(FILE *fichero, char *formato, char *cadena);
```
Ha diferencia de la lectura (linea a linea), no hace falta indicarle el fin del fichero, ya que va a escribir en este desde el inicio, y en caso de haber algo previamente escrito lo sobreescribe. (Muy similar a la lectura caracter a caracter)
```
	FILE *fichero;

	char linea[80];

	fichero = fopen("datos.txt", "w");

	printf("Escribe algo:");
	gets(linea);

	fprintf(fichero,"%s",linea); 	// fprintf -> escribe en relacion a lo indicado 
									// en el array[80] correspondiente a la variable char linea
	fclose(fichero);
```

---
---

+ _APUNTE1:_ El fichero que se escribirá, en caso de no existir lo creara. Y en todos los casos el fichero se encontrara en el mismo lugar que nuestro codigo c.

+ _APUNTE2:_ Hay que tener en cuenta que se escribirá en una linea a no ser que se indique lo contario de escribir un salto de linea.

+ _APUNTE3:_ Si quieres probar los ejemplos no olvides descargar todo el contenido.

+ _APUNTE4:_ Los carpetas contienen los ejemplos de este documento de texto.

