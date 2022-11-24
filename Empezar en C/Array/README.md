## Array

Podemos definir un array como una variable que puede guardar mas de un valor, es una lista que tiene un maximo definido de cosas que puede contener.

---
### Sintaxis (Como se escribe):
```
	// Array definido:
	// segun se escribe se indica el tipo de los valores que puede 
	// contener
	int numeros[] = {19, 10, 8, 17, 9};
---- ---- ---- ---- ---- ---- ---- ---- ----
	// Existe la siguiente forma para definair indicando la longitud del array
	// Pero seria algo redundante el hacerlo porque con los elemntos que
	// formaran el array 
	int numeros[5] = {19, 10, 8, 17, 9};
```

Tenemos varias formas de escribir un array, tenemos la forma en que solo lo decalaramos y la forma en la que lo inicilizamos, es decir que le asignamos un valor.

_IMPORTANTE:_ En un array se indicara que tiene una longitud 5 (como en el ejemmplo de la sintaxis), pero si nos queremos referir a una posicion en concreto tenemos que saber que se empieza desde 0 y no desde 1.

+ Desde 0 -> 0 1 2 3 4
+ Desde 1 -> 1 2 3 4 5

---
### Recorrer un array
De un array al saber su longitud es sencillo recorrerlo para mostrar lo que contiene, podemos hacer uso de un bucle FOR para esto (ya que el bucle for le indicamos una longitud). Suele ser habitual el querer recorrer el array para mostrar el contenido de este.
```
main() {
	int i;
	int matriz[6] ={3,4,5,8,1,9};
	
	for(i = 0; i < 6; i++){
		printf("%i ", matriz[i]);
	}
}
```
