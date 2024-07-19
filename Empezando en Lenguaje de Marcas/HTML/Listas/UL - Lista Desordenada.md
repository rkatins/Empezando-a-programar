
# Listas desordenadas `<ul> ... </ul>`
Esta forma de listar elementos se caracteriza por mostrar los elementos sin un orden específico, como en una lista de compras o características de un producto. A diferencia de las listas ordenadas, no se utilizan números, sino viñetas o símbolos para marcar cada elemento.

* Esto
* Es
* Un
* Ejemplo

Cada viñeta representa un elemento de la lista, los cuales se indican con la etiqueta `<li> ... </li>`. El orden de los elementos no tiene relevancia en este tipo de lista. La apariencia de la viñeta puede ser modificada usando la propiedad `CSS` `list-style-type` y afecta a la etiqueta `<ul>`.

## Valores
* `disc` (predeterminado) -> Viñeta circular rellena.
* `circle` -> Viñeta circular sin relleno.
* `square` -> Viñeta cuadrada.
* `none` -> Elimina cualquier marcador de lista.

## Personalización avanzada:
Puedes personalizar aún más el estilo de las viñetas utilizando las siguientes propiedades:

*  `list-style-image`: Permite usar una imagen personalizada como viñeta.
*  `list-style-position`: Controla la posición de la viñeta (dentro o fuera del contenido del elemento de lista).
*  `::marker` (pseudoelemento): La siguiente forma es relativamente nueva y es posible que no funcione en todos los navegadores. Permite un control más preciso sobre el estilo del marcador, como cambiar su color, tamaño o contenido.

```
    /* Cambiar el color y el tamaño del marcador */
    ul li::marker {
      color: red;
      font-size: 16px;
    }
```

```
    /* Usar emojis como marcadores */
    ul li::marker {
      content: "🐶 ";  /* Emoji de perro */
    }
```

Requiere que los párrafos de la lista sean medianamente largos para ver el cambio al afectar a estos:

```
    /* Añadir/quitar sangría al elemento marcador de cada párrafo */
    ul li {
      list-style-position: inside;
      padding-left: 10px;
    }

    /* Se puede indicar tanto outside (por defecto) como inside, el padding indica la separación de este */
```
