## Programacion en Java (POO)

### ¿Qué es POO?

POO -> Programacion Orientada a Objetos

Los objetos son el simil de las estructuras/struct en C

---
### Modificador de acceso + Estatic o Estatico

Modificador de acceso: Indica la forma de acceder a un atributo/variable/metodo en concreto, un simil serian los permisos de acceso a un fichero.
+ public	-> Accesible por todas las clases creadas dentro del paquete en el que se ejecuta.
+ private	-> Accesible solo por la clase que ha declarado ese atributo/variable/metodo.
+ protected	-> Accesible por la clase que ha declarado ese atributo/variable/metodo y clases hijas que hereden.

Static o Estatico: Indica que el atributo/variable/metodo es solo de la clase donde se declara o es de todos por asi decir, indicar algo como static/estactico es parecido pero no lo mismo al modificador de acceso public, pero igual a declarar una variable global, la cual puede usar toda la clase.

---
### Objetos

Los objetos siempre van ligados a una clase, la cual le proporciona los atributos de los que está compuesto el objeto y los metodos que se hayan declarado en ella.

PD: Si se va a crear un objeto de una clase *__SIEMPRE__* se ha de definir el metodo constructor de la clase de la que se va a crear un objeto.

---
### Estructura

```
	package nombrePaquete;		// Nombre del paquete en el que la clase (que se esta escribiendo)
					// esta alojada, es como poner la ruta del archivo


	import ruta.del.Paquete;	// OPCIONAL -> Indica los import de los paquetes que se van a usar en la clase

	public class nombreClase {
		static nombreVariable;	// OPCIONAL -> Declara variables static/estaticas
		
		public static void main(String[] args) {
			instrucciones/código
		}
		
		// Declaracionde los metodos que se vayan a usar
	}
```
