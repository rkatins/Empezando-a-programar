# text-overflow
Controla cómo se muestra el texto que desborda el contenedor. Imaginemos que tenomos una etiqueta `<div>` de un ancho de 100px y que contiene una etiqueta `<p>` de unos 200px de ancho. Por defectio veriamos nuestro texto cortado en el punto que llega a los 100px, haciendo uso de `text-overflow` podemos solventarlo sustituiynedo este texto "sobrante" o que no puede ser representado por `...`.

## Valores
* `clip` (predeterminado): Simplemente recorta el texto que desborda, sin mostrar ningún indicador visual de que hay más contenido.
* `ellipsis`: Agrega puntos suspensivos (...) al final del texto visible para indicar que hay más contenido oculto.

PD: No confundir con `overflow`.