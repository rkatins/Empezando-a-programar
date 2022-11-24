## ARRAY STRUCT (Enunciado)
---
---

+ Mediante la creacion de un array de structuras, pedir los datos para la nueva persona.
+ Eligiremos si queremos crear una nuieva persona en base a una pregunta/condicion: 
	+ Si la respuesta es 's' o 'S' -> Pedir datos para crear la estructura
	+ Si la respuesta es 'n' o 'N' -> No pedir datos y rehacer la pregunta o salir del programa (a eleccion del programador).
+ Guardar la structura creada en el array de estructuras.
+ Ordenar el array (**sin mostrarlo**).
+ Mostrar por pantalla el contenido del array (no interesa que muestre las structuras que tendra en blanco) (El array a tenido que ser previamente ordenado).

_RESUMEN:_ Crear un array que contenga structuras > las cuales tenemos que crear nosotros en vase a una pregunta (S/N) > Guardar la structura creada en el array de estructuras >Mostrar el contenido del array de estructuras (no interesa que muestre las structuras que tendra en blanco) > Ordenar el array (**sin mostrarlo**) > Mostrar el array (no mostrar los vacios)

---

_El siguiente codigo hace referencia a la structura que debemos crear para el ejercicio._
```
	struct persona {
		char nombre[20];
		char apellido[20];
		char ciudad[20];
	};
```