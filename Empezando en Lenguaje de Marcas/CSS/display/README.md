# Display
`display` es la propiedad más importante de CSS para controlar el **comportamiento** de una etiqueta o un conjunto de etiquetas.

---
* `display: block`
Por asi decirlo es el mas basico de todas las opciones que tiene display, lo que hace esta propieda es ocupar todo el ancho (a menos que se le indique un `with`).

* `display: inline`
Suele acompañar a etiquetas las cuales afectan a una sola palabra como podria ser la etiqueta `<span>`.
Al usar la propiedàd `display: inline` lo podemos ver como que la etiqueta a la que afecta no va a crear un salto de linea por asi decirlo, esta va a forzar el que la siguiente etiqueta empiece como si no hubiera nada a asu izquierda ocupando espacio.


El siguiente ejemplo que se va mostrar es una mezcla de `inline` y `block` (-> `ìnline-block`), a su vez el siguiente ejemplo funcionara de forma muy similar tanto si se indica `display: inline-block;` o `display: inline;`. Para que lo entenmdaos rapidamente `display: inline-block;` es una evolucion de `display: inline;`

Un ejemplo de esto podria ser los menu de seleccion que aparecen en horizontal en la parte superior de muchas paginas. Para que se entienda mejor en este caso (y en la mayoria de casos que vamos hacer) se usa una etiqueta `<li>` (por defecto esta eiqueta se coloca por debajo de la anterior haciendo var como si de una lista se tartara).

```
	<!DOCTYPE html>
	<html lang="en">
	<head>
		<meta charset="UTF-8">
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<title>Document</title>
		<style>
			#inline li {
				display: inline-block;
			}
		</style>
	</head>
	<body>
		<div id="inline">
			<ul>
				<li>WIP</li>
				<li>WIP</li>
				<li>ACERCA DE</li>
				<li>WIP</li>
				<li>WIP</li>
			</ul>
		</div>
	</body>
	</html>
```
En este ejemplo modificaremos las etiquetas `<li>` dentro de la etiqueta con `id="inline"`, como vemos el CSS de esta tiene la propiedad `display: inline-block` en vez de `display: inline`, para el resultado que buscamos la diferencia es minima, al usar `display: inline-block` nos permite el poder modificar mas parametros en cuanto ancho, altura, márgenes y rellenos.
El fin es el mismo y la iferencia minima, yo recomendaria usar `display: inline-block` siempre para evitar este tipo de "problemas" de ajuste de ancho, altura, márgenes y rellenos.

---
* `display: none;`
Basicamente lo podremos ver como ocultar en todos los aspectos el bloque al que afecta la propiedad. Si lo queremos ver graficamente, es como si directamente no se hubiera escrito las lineas de codigo correspondientes para verlo en la pagina HTML.

Se diferencia con la visibilidad del bloque en:
`display: none;` -> no afecta para nada al resto
`visibility: hidden;` -> el bloque/etiqueta existe y no se ve, pero ahi esta

Aunque no se vea una utilidad a esta propiedad, la puede tener en un futuro al usar JavaScript.
Basicamente lo podemos usar para cambiar su propiedad display:none (y/o otras propiedades) al pulsar sobre un boton el cual ejecuta una funcion JavaScript, sin afectar al resto del codigo de la pagina HTML.
