## ORDENACION (de la burbuja)
---
---

La ordenacion de la burbuja que es el que vamos a ver, es uno de los tantos metodos de ordenacion que existen.

Basicamente podriamos resumir la ordenacion de la burbuja en usar una variable auxiliar en la que poder guardar/almacenar de forma temporal la variable que se quiere cambiar,

---
### Sintaxis
```
	int temporal;
	
	for (i = 0;i < numero; i++){
		for (j = 0; j < numero; j++){
			if (edades[i] >= edades[j]) {
				temporal = edades[i];
				edades[i] = edades[j];
				edades[j] = temporal;
			}
		}
	}
```

Para llevar a cabo esta ordenacion es comun usar un array (o similar que almacene datos) para en un futuro ordenarlos, ya se con este algoritmo de ordenacion u otro.

No **SIEMPRE** es necesario el que se use pra ordenar numeros (como en este caso), podemos declarar un array que contenga estructuras y ordenar estas en base a un numero que contenga.
Lo que **SIEMPRE** va a ocurrir es lo que se tendra en cuenta a la hora de ordenar.