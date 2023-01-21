[Variables primitivas](./Variables)

## Programacion en Java (POO)

### ¿Qué es POO?

POO -> Programacion Orientada a Objetos

Los objetos son el simil de las estructuras/struct en C, son parecidos pero no iguales.

---
### [Objetos](./Objetos)

Los objetos siempre van ligados a una clase, la cual le proporciona los atributos de los que está compuesto el objeto y los metodos que se hayan declarado en ella.

+ PD: Si se va a crear un objeto de una clase *__SIEMPRE__* se ha de definir el metodo constructor de la clase de la que se va a crear un objeto.

EXTRA
+ PD: Por asi decir todas las variables derivan de una clase, por eso haciendo uso de una varible se puede acceder como si esta fuera un objeto, poniendo "." podemos acceder a metodos o a la informacion de estos.
+ PD: Por asi decir todo lo que creemeos (Ej: como las variables), van a ser objetos, los cuales van a contener una información, muchas veces esta informacion puede ser consultada y/o modificada, para acceder a estas opciones de consultar y/o modificar siempre haremos uso del "."
---
### Estructura

```
	package nombrePaquete;		// Nombre del paquete en el que la clase (que se esta escribiendo)
					// esta alojada, es como poner la ruta del archivo


	import ruta.del.Paquete;	// OPCIONAL -> Indica los import de los paquetes que se van a usar en la clase

	public class nombreClase {
		static String nombreVariable;	// OPCIONAL -> Declara variables static/estaticas
		
		public static void main(String[] args) {
			instrucciones/código
		}
		
		// Declaracionde los metodos que se vayan a usar
	}
```
