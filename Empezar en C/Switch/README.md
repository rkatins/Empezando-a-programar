## Switch
---
---

Podemos definir un switch como un menu en el que eliges al menos una opcion (de lo que posiblemente se te ha mostrado con anterioridad).

---
### Sintaxis (Como se escribe):
Se ejcutara una soloa vez
```
	// Variable que se va a compara con el swicth para elegir opcion
	int opcion;
	
	printf("1. Opcion 1");
	printf("2. Opcion 2");
	printf("3. Opcion 3");
	printf("Cualquier otro numero - SALIR")
	
	printf("Dime una opcion del menu: ");
	scanf("%i", &opcion);
	
	switch(opcion){		// Lo que va entre parentesis es la variable opcion que vas a
				// comparar para elegir un caso/opcion del menu-switch
		case 1:
			...	
			...
			...
			break;
		case 2:
			...	
			...
			...
			break;
		case 3:
			...	
			...
			...
			break;
		default:	
			break;
	}
		
```

Todos los casos/opciones seran terminados con un break, de lo contrario ejecutara su codigo y el de los casos/opciones siguientes hasta encontrar un break que le obligue a terminar la ejecucion.

_CONSEJO:_ Hay que tener en cuenta que el código se ejecuta de arriba a bajo y si no encuentra naada con lo que pararse seguirá.

El caso/opcion default es el caso por defecto, el cual se realizara si no se ha cumplido ninguno de los casos/opciones anteriores. (En caso que uno quiera y lo vea conveniente este caso/opcion se puede omitir).

_CONSEJO2:_ El menu-switch que hemos visto solo se ejecuta una vez, al ser un menu tal vez nos interesa que se ejecute varias veces (mejor dicho que nos pida varias veces introducir la opcion que queremos), esto se podria hacer con un bucle while que hacemos que se ejcute de forma indefinida hasta que se cumpla el caso/opcion de fault por ejemplo.

---

### Sintaxis (Como se escribe, _CONSEJO2:_):
Se ejecutará mas de una vez.

```
	// Inicializo una varible par  el control del bucle while
	int loop = 1;

	while(loop == 1){
		// Variable que se va a compara con el swicth para elegir opcion
		int opcion;
		
		printf("1. Opcion 1");
		printf("2. Opcion 2");
		printf("3. Opcion 3");
		printf("Cualquier otro numero - SALIR")
		
		printf("Dime una opcion del menu: ");
		scanf("%i", &opcion);
		
		switch(opcion){
			case 1:
				...	
				...
				...
				break;
			case 2:
				...	
				...
				...
				break;
			case 3:
				...	
				...
				...
				break;
			default:
			printf("Hasta luego");
			loop = 0;	// Hago que se termine el bucle igualando a un
					// numero diferente a 1 la variable que compara el
					// bucle while
				break;
		}
	}
```
---

 