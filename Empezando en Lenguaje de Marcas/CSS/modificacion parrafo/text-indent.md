# text-indent
Indenta la primera línea de un párrafo. Es decir que marca el sangrado como si de un cuaderno se tratara.

## Valores
* Longitud (con unidad):
Acepta los mismos valores de unidades de medida que `font-size`. Esta valor indicara el espacio entre el borde de la etiqueta contenedor y el texto, es decir que si se indica `20px` habra 20 pixeles hasta que empiece ha escribir.
* Porcentaje (%):
Se calcula como un porcentaje del ancho del elemento contenedor. Por ejemplo, text-indent: 5%; establecerá una sangría del 5% del ancho del contenedor.
* Palabras clave:
La propiedad CSS text-indent solo acepta una palabra clave -> `inherit`
    Hereda el valor de text-indent del elemento padre.
    Es decir que si el elemento padre o etiquet contenedora tiene un valor en `text-indent`, esta usara el mismo. Imaginemos una etiqueta `<div>` con un `text-indent` con valor de `20px`, si esta contiene una etiqueta `<p>` en la que ponemos texto e indicamos el estilo CSS `text-indent: inherit;`, la etiqueta `<p>` tendra un `text-indent: 20px`.
* Valores negativos:
Puedes usar valores negativos para crear una sangría colgante, donde la primera línea se extiende más allá del margen izquierdo del contenedor.
    EJ: text-indent: -10px;