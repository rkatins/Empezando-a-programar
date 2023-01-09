## PRACTICA FINAL DE TRIMESTRE
---
1. Leer al fichero y cargar los datos del fichero en el array de estructuras
El fichero debe contener la informacion que veremos a delante
2. Mostrar menu de opciones
	1. Agregar nueva serie/pelicula (abrir fichero en modo "a")
	2. Mostrar series y peliculas (haciendo uso del getch() mostrando toda la info de la structur)
	3. Consultar la ficha de una serie o película a partir de su nombre.
	4. Mostrar ordenado el array de structuras creado
		1. Mostrar primero las peliculas y luego las series (haciendo uso del getch())
		2. Mostrar ordenado por nombre
		3. Mostrar ordenado por director
	5. Generear HTML de una pelicula/serie concreta (El html se  tendra que llamar igual que la serie/pelicula
	la funcion() strcat acepta los espacios en caso de que las serie/pelicula este formada por dos palabras, el formato .html acepta los espacios en el nombre)
	6. Generar .html con todo el array de structuras, mostrando solo los nombres de las series/peliculas y generando un a href
	y a su vez todos los html de las series/peliculas.
	
### STRUCT
---
```
multimedia
  char nombre[80];
  char tipo[80];
  int duracion;
  char plataforma[80];
  int agno;
  char imagen[80];
};
```
### ENTREGA
---
1. .c
2. .txt
3. .jpg x 3

### EXTRA
---
__Todos los ficheros que empiezan por m son metodos usados, el archivo que se encarga de la ejecucion de todo el codigo es PracticaFinalTrimestre.c__