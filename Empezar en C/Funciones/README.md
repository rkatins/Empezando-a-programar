## Funciones y Funciones void 
---
### Funciones ¿Qué es?
Antes de empezar a explicar los diferentes tipos de funciones que hay expliquemos que es, podriamos decir que una funcion (sea del tipo que sea) es como una caja como la funcion() main, pero en este caso mas pequeña, la cual se encargará de repartir las tareas par que no la hagas todas.
Resumiendo las instrucciones/código generan (o no, dependiendo del tipo de funcion) un valor el cual se el asignado.

Tambien existen las funciones void, las cuales son similares a lo anterior pero en este caso no se les asigna un valor.

Sean del tipo que sean *__SIEMPRE__* se han de declara entes de ser usadas en nuestro código. Estas se delaran escribiendo solo su nombre precedido del valor que devulvan (en el caso que tenga return) (y en el caso que tengan parametros estos tambien se pondran como cuando mas abajo inicialicemos la funcion con su correspondido código)

```
	#include <stdio.h>

	float suma();
	float resta();
	float multiplicacion();
	float division();
		
	main(){}
```
---
---
### Funciones
Si tienen return -> Es decir, no devuelven ningun valor

```
		tipoDevuelto nombreFuncion(){
			instrucciones/código
			
			return variable;
		}
```

Unas cosas a explicar de la sintaxis de las funciones:

tipoDevuelto -> Hace referencia al tipo que va a ser devuelto por nuestra funcion

return variable -> La variable va a ser lo devuelto por nuestra funcion, lo cual debe ser del mismo tipo de tipoDevuelto que hemos indicado delante del nombre de la funcion (Esto último lo podemos simplificar, imaginemos que estamos en una calculadora, en vez de definir e inicilizar una varible nueva para que guarde el resultado de nuestra operacion aritmetica le podremos decir que la variable que devuelva sea nuestra operacion aritmetica)

Al decir que no tienen return o no devuelven ningun valor, se imagina como que las instrucciones/código no generan un valor el cual es asignado a la funcion() void en caso de ser llamada.
En este caso si quiere "devolver" algo, es tan simple como hacer un printf que imprima por pantalla aquello que queremos que se vea.

---

### Funciones void 
No tienen return -> Es decir, no devuelven ningun valor

```
		void nombreFuncion(){
			instrucciones/código
		}
```

Unas cosas a explicar de la sintaxis de las funciones:

void -> qiuere decir que nuestra funcion no va a devolver nada

Al decir que no tienen return o no devuelven ningun valor, se imagina como que las instrucciones/código no generan un valor el cual es asignado a la funcion() void en caso de ser llamada.
En este caso si quiere "devolver" algo, es tan simple como hacer un printf que imprima por pantalla aquello que queremos que se vea.

---

### Funciones + Parametros
Si tienen return -> Es decir, no devuelven ningun valor

```
		tipoDevuelto nombreFuncion(tipoParametro parametro){
			instrucciones/código
			
			return variable;
		}
```

Unas cosas a explicar de la sintaxis de las funciones:

tipoDevuelto -> Hace referencia al tipo que va a ser devuelto por nuestra funcion.

return variable -> La variable va a ser lo devuelto por nuestra funcion, lo cual debe ser del mismo tipo de tipoDevuelto que hemos indicado delante del nombre de la funcion (Esto último lo podemos simplificar, imaginemos que estamos en una calculadora, en vez de definir e inicilizar una varible nueva para que guarde el resultado de nuestra operacion aritmetica le podremos decir que la variable que devuelva sea nuestra operacion aritmetica)

tipoParametro -> Hace referencia al tipo de variable del que tiene que ser el parametro que le pasemos a nuestra funcion, es totalmente independiente de tipoDevuelto.

parametro -> Es una variable que le vamos a pasar a nuestra funcion. Se pueden poner tantos parametros como uno quiera y vea necesario.

Quitando algun extra en la sintaxis es igual a una funcion void.

---

### Funciones void + Parametros 
No tienen return -> Es decir, no devuelven ningun valor

```
		void nombreFuncion(tipoParametro parametro){
			instrucciones/código
		}
```

Unas cosas a explicar de la sintaxis de las funciones:

void -> qiuere decir que nuestra funcion no va a devolver nada

tipoParametro -> Hace referencia al tipo de variable del que tiene que ser el parametro que le pasemos a nuestra funcion, es totalmente independiente de tipoDevuelto (en este caso es una funcion void, por lo que nos puede dar aun mas igual).

parametro -> Es una variable que le vamos a pasar a nuestra funcion. Se pueden poner tantos parametros como uno quiera y vea necesario.

Quitando algun extra en la sintaxis es igual a una funcion void.

---

### EXTRA

Cualquier tipo de fuincion que devuelva un valor (es decir que tenga un return), por asi decir de le asigna un valor a esa funcion, y si se quiere ver este valor

---

### EXTRA Parametros    

Cualquier tipo de funcion (como si es void o no) pero con parametros es como una caja la cual requiere de algo si no no la pudes usar, por asi decir los parametros son prerequisitos.      








