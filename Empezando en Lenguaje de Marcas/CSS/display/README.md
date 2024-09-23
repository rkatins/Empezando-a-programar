# Display
`display` es la propiedad más importante de CSS, la cual nos permite indicar el tipo de movimiento/organizacion.

---
## Valores
* `display: block`: Aunque es menos común, puedes utilizar Flexbox dentro de un elemento con `display: block` para controlar la disposición de sus hijos.
* `display: flex`: Te ayuda a crear layouts más flexibles y adaptables, facilitando la distribución de elementos en una página web.
* `display: grid`: Combina Flexbox con Grid para crear diseños más complejos que requieran tanto un flujo unidimensional como bidimensional.
* `display: inline-flex`: Convierte un elemento y sus hijos en un contenedor flexible de línea única. Es útil para crear menús horizontales o grupos de elementos alineados en línea.

	### Otros valores menos comunes:
	* `table`: El elemento se comporta como una tabla HTML.
	* `table-row`: El elemento se comporta como una fila de una tabla.
	* `table-cell`: El elemento se comporta como una celda de una tabla.
	* `table-caption`: El elemento se comporta como un título de una tabla.
	* `table-header-group`: El elemento se comporta como un grupo de encabezados de una tabla.
	* `table-footer-group`: El elemento se comporta como un grupo de pies de página de una tabla.
	* `table-column-group`: El elemento se comporta como un grupo de columnas de una tabla.
	* `table-column`: El elemento se comporta como una columna de una tabla.
	* `table-row-group`: El elemento se comporta como un grupo de filas de una tabla.

## Cuándo usar qué:
* `display: block`: Es ideal cuando necesitas que un elemento se comporte como un bloque independiente, ocupando todo el ancho disponible y generando saltos de línea.
* `display: flex`: Ideal para crear diseños unidimensionales, como filas o columnas de elementos.
* `display: grid`: Perfecto para crear diseños bidimensionales, como cuadrículas o layouts más complejos.
* `display: inline-flex`: Útil para crear elementos flexibles que se comporten como elementos en línea.

---

# `display: block`
Esta propiedad se aplica a un contenedor/etiqueta. Tambien se puede indicar para un solo elemento/etiqueta.

Por asi decirlo es el mas basico del atributo `display`.

* Elementos de bloque por defecto: Muchos elementos HTML son de bloque por defecto, como `<div>`, `<h1>`, `<p>`, etc.
* Ocupa todo el ancho disponible, este ancho viene definido por el contendor de la etiqueta/elemento.
* Por defecto, los elementos con `display: block` se apilan uno debajo del otro, ocupando toda la línea. Sin embargo, es posible modificar este comportamiento para colocarlos uno al lado del otro utilizando técnicas como `Flexbox`, `Grid` o `float`. `Flexbox`/`display: flex` y `Grid`/`display: grid` serian dos opciones a indicar en el contenedor de las etiquetas con `display: block`, mientras que `float` seria un atributo para  las etiquetas con `display: block`
* Si pueden usar las propiedades CSS `width`, `height`, `padding` y/o `border`.

EJ: 
	Si nosotros ponemos una etiqueta `<h2>` dentro de un contenedor/etiqueta `<div>`, al contenedor/etiqueta `<div>` le indicamos un ancho del 25% del ancho de la página, la etiqueta `<h2>` se vera afectada por el contenedor/etiqueta `<div>` adaptandose a su tamaño.

```
- HTML
		<body>
		    <div class="contendedor">
		        <div class="bloque-1">
		            <h2>Bloque 1</h2>
		        </div>
		        <div class="bloque-2">
		            <h2>Bloque 2</h2>
		        </div>
		    </div>
		</body>

- CSS
		.contendedor {
		    display: block;
		    border: 2px solid black;
		    /* width: 25%; */
		}

		.bloque-1 {
		    border: 2px solid blueviolet;
		    width: 25%;
		}

		.bloque-2 {
		    border: 2px solid red;
		    width: 25%;
		}
```

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
