# Listas ordenadas <ol> ... </ol>

Esta forma de listar elementos se ve carcterizada por mostra los elementos como si de una lista ordenada por numeros se tartara, como se ve en el ejemplo de debajo.

1. Esto
2. Es
3. Un
4. Ejemplo

Cada número representa un elemento de la lista, los cuales son indicados con la etiqueta <li> ... </li>. Y siempre los elementos de la lista se escribiran de arriba hacia abajo. El numero puede ser modificado haciendo uso de la propiedad `CSS` `list-style-type` y afecta a la etiqueta <ol>.

## Valores
* `decimal` (predeterminado) -> Números decimales (1, 2, 3, etc.).
* `lower-roman` -> Números romanos en minúscula (i, ii, iii, etc.).
* `upper-roman` -> Números romanos en mayúscula (I, II, III, etc.).
* `lower-alpha` -> Letras minúsculas (a, b, c, etc.).
* `upper-alpha` -> Letras mayúsculas (A, B, C, etc.).
* `none` -> Elimina cualquier marcador de lista.

### PD:
La siguiente forma es relativamente nueva y es posible que no funcione en todos los navegadores. Se trata del pseudoelemento `::marker`, el cual se puede usar oara mosificar el propio elemento "marcador" de la lista.
Este sirve tanto para listas ordenadas como listas deordenadas.

```
	/* Cambiar el color y el tamaño del marcador */
	ol li::marker {
	  color: blue;
	  font-size: 20px;
	}
```

```
	/* Usar emojis como marcadores */
	ul li::marker {
	  content: "✨ ";  /* Emoji de estrella brillante */
	}
```

Requiere que los parrafos de la lista sean medianamente largos para ver el cambio al afectar a estos
```
	/* Añadir/aquitar sangria al elemento marcador de cada parrafo */
	ol li {
	  list-style-position: inside;
	  padding-left: 10px;
	}

	/* Se puede indicar tanto outside (por defecto) como inside, el padding indica la separacion de este */
```