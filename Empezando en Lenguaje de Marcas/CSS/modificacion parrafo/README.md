# [font-size](./font-size)
Con esta propiedad `CSS` podemos cambiar el tamaño de la letra escrita, imagenemos por algun casual que queremos escribir la letra pequeña de un contrato por ejemplo, pues hariamos uso de esta propiedad `CSS` para variar el tamaño de la letra.

No hay un tamaño predeterminado que indique el tamaño de letra de un documento `HTML`, este viene definido por los ajustes del navegador y otros ajustes establecidos por el usuario final.

En este caso se indica un tamaño de `40px` a todos las etiquetas `<p>` definidas en el documento.

## Valores
Sirve cualqer numero seguido de una unidad de medida medida.
* `px` (píxeles): Es la unidad más común y fácil de entender. Define el tamaño de la fuente en píxeles, que son unidades fijas en la pantalla.
* `pt` (puntos): Un punto equivale a 1/72 de pulgada. Se utiliza principalmente en impresión.
* `pc` (picas): Una pica equivale a 12 puntos. También se utiliza principalmente en impresión.
* `in` (pulgadas): Define el tamaño de la fuente en pulgadas.
* `cm` (centímetros): Define el tamaño de la fuente en centímetros.
* `mm` (milímetros): efine el tamaño de la fuente en milímetros.

Unidades relativas:
* `em`: Relativo al tamaño de fuente del elemento padre. 1em es igual al tamaño de fuente actual del elemento.
* `rem`: Relativo al tamaño de fuente del elemento raíz (normalmente el elemento <html>).
* `%:` Relativo al tamaño de fuente del elemento padre.
* `ch`: Relativo al ancho del carácter "0" en la fuente actual.
* `ex`: Relativo a la altura de la letra "x" en la fuente actual.

---
# color
Muy similar a la anterior, ya que esta modifica tambien a las letras escritas, pero en este caso modifica el color de esta.

## Valores
Se puede indicar cualquier color primario o comun (Escrito en inglés) o escribir el valor `RGB` del color o hexadecimal o HSL.
`RGB` -> Grupo de 3 numeros del 0 al 255 envueltos en un parentesis y separados por comas.
    EJ: rgb(255, 0, 0)
`Hexadecimal` -> tres grupos de dos digitos precedidos del digito`#`, los digitos van de 0 a 9 seguido de A hasta la F (cada par de dígitos representa la intensidad de rojo (R), verde (G) y azul (B)).
    EJ: #FF0000
`HSL` -> Representa los colores en términos de tono (hue), saturación (saturation) y luminosidad (lightness). El tono es un ángulo en la rueda de color (0-360 grados), la saturación es un porcentaje (0-100%) y la luminosidad es un porcentaje (0-100%). Se considera más intuitivo para los humanos, ya que se basa en cómo percibimos los colores (tono, intensidad y brillo). Esto facilita ajustar los colores y crear paletas de colores armoniosas.
Se ve muy similar a RGB a la hora de mostrar los datos del color.
    EJ: hsl(0, 100%, 50%)

PD: Todos representan el rojo, yo paersonalemte prefioro usar `RGB` o `Hexadecimal`.

---
# font-family
Haciendo uso de esta propieda, le indicamos al parrafo escrito que la fuente/tipo de letra que debe usar es la indicada en el argumento de la propiedad.

Aparte de que se indique un nombre a la fuente de letra se pueden usar los siguientes atributos de forma que "especifican" el tipo de letra a usar, como `serif`, `sans-serif`, `monospace`, `cursive`o `fantasy`, que esto seria como para reforzar que tipo de fuente quieres usar o que tipo de fuente de ltra usar dentro de la fuente de letra indicada.

Por ejemplo la fuente de letra `Arial`, `Helvetica`, `Times New Roman` vienen por defecto, pero se puede indicar una personalizada (Si es para un proyecto propio creo que con que se indique el nombre de una fuente instalada en el equipo sirve, pero si se quiere hacer uso de una fuente de letra externa porque vaya a ser un proyecto que se vaya a compartir con mas personas y no se sepa si estas personas tienen la fuente de letra indicada instalada, se puede indicar un ruta que redirija al archivo de fuente de letra para "traducir" los caracteres de esta). Para indicar una personalizada indicando la ruta de esta, primero debremos definir este tipo de letra así como donde se ubica el archivo de instalacion de la fuente.

EJ:
```
    @font-face{
        font-family: 'VarelaRound-Regular';
        src: url(../FONTS/VarelaRound-Regular.ttf);
    }
```

PD: podemos definir tantas fuentes de letras como queramos, y asignarla a cada apartado contenedor de texto. Es decir que podemos hacer uso de varios tipos de letra en un mismo documento `HTML`.

* `font-family` -> Indica el nombre que se asigna a la fuente de letra.
* `src` -> Indica la ubicacion de la fuente de letra a usar.

---
# font-style
Esta prpiedad no tiene mucho mistrio aunque se puede confundir su uso con el de `font-family`, ya que ambas modifican la letra en si, pero esta vendria a ser como un extra a la hora de escribir, dependiendo de la opcion que indiquemos a la propiedad afectará de una manera u otra al texto.

PD: `italic` y `oblique` son identicas. Indicar `font-style: normal;` es un poco tonteria, ya que el valor que indica para hacer la modificacion del texto e la por defecto

## Valores
* `normal` -> Normal
* `italic` -> Inclinado/Cursiva
* `oblique` -> Inclinado/Cursiva

---
# text-decoration
Este vendria a ser una modificacion de `font-style`, pero este se encarga del tipo de "rallado" (lo que podrian ser decoraciones en el texto, no confundir con la fuente de letra si añade algun caracter especial por ejemplo) en el texto, es decir si esta subrayado, tachado, ...

## Valores
* `normal/none` -> Son muy parecidos, `normal` restablece al valor por defecto y `none` pone el valor por defecto
* `overline` -> Super-rayado
* `underline` -> Sub-rayado
* `line-through` -> Tachado

---
# font-weight
Esta propiedad vendria a indicar el grosor de la letra.
Siempre he sido muy reacio en cuanto a psicologos, pero aunque no me gusten llevo con Yolanda como un año, con los anteriores da gracias si llegaba a los 3 meses. Yolanda tiene algo que no me ha hecho irme a la primera que he podido. En general solo puedo decir que muy contento con ella y creo que porfin he encontrado alguien con quien ir al psicólogo y no dejarlo.
## Valores
* `normal` -> (predeterminado) Grosor normal de la letra.
* `bold` -> Grosor negrita.
* `lighter` -> Más delgado que el elemento padre.
* `bolder` -> Más grueso que el elemento padre.

Realmente `normal` y `lighter` son muy similares por no decir identicos, lo mismo con `bold` y `bolder`.

---
# letter-spacing
Ajusta el espacio entre letras. Es decir que puede cambiar el valor (indicaado en numeros + unidad de medida, los mismos que para `font-size`) para separar o juntar las letras.

Indicanddo el valor `normal` se restablecerá el valor por defecto.

---
# word-spacing
Ajusta el espacio entre palabras. Muy parecido a `letter-spacing`, solo que este indica el espacio entre palabras.

Indicanddo el valor `normal` se restablecerá el valor por defecto.

---
# line-height
Controla el interlineado (espacio entre líneas de texto). Es decir el espacio entre linea y linea de un parrafo.

## Valores
* Número (sin unidad):
    EJ: line-height: 1.5; -> El interlineado será 1.5 veces el tamaño de la fuente.
* Longitud (con unidad):
    EJ: line-height: 20px; -> establecerá un interlineado fijo de 20 píxeles.
* Porcentaje (%):
    EJ: line-height: 150%; -> es equivalente a line-height: 1.5;
* Palabras clave:
    `normal`: El valor predeterminado, que suele ser alrededor de 1.2 veces el tamaño de la fuente, dependiendo del navegador y la fuente.
    `inherit`: Hereda el valor de line-height del elemento padre.

---
# text-align
Alinea el texto (izquierda, derecha, centro, justificado tiene que escribirse en ingles).

## Valores
* `left` -> Texto alineado a la izquierda
* `right` -> Texto alineado a la derecha
* `center` -> Texto alineado en el centro
* `justify` -> Se utiliza para alinear el texto de manera que los bordes izquierdo y derecho de cada línea (excepto la última) estén alineados con los márgenes del contenedor

---
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

---
# text-transform
Transforma el texto a mayúsculas (uppercase), minúsculas (lowercase) o versalitas (capitalize).

## Valores
* none: No se aplica ninguna transformación al texto (valor predeterminado).
* capitalize: La primera letra de cada palabra se convierte en mayúscula.
* uppercase: Todas las letras se convierten en mayúsculas.
* lowercase: Todas las letras se convierten en minúsculas.
* full-width: Los caracteres se convierten en caracteres de ancho completo (esto es más relevante para algunos idiomas asiáticos).
* inherit: El elemento hereda el valor de text-transform de su elemento padre.

---
# text-shadow
Añade una sombra al texto.

## Valores
* Desplazamiento horizontal (offset-x):
Un valor numérico + unidad de medida indicada en `font-size` que indica la distancia horizontal de la sombra desde el texto.
    Valores positivos mueven la sombra hacia la derecha, valores negativos hacia la izquierda.

* Desplazamiento vertical (offset-y):
Un valor numérico (con unidad) que indica la distancia vertical de la sombra desde el texto.
    Valores positivos mueven la sombra hacia abajo, valores negativos hacia arriba.

* Radio de desenfoque (blur-radius):
Un valor numérico (con unidad) opcional que determina qué tan borrosa o difusa es la sombra.
    Un valor de 0 (o si se omite) significa que la sombra no tiene desenfoque.

* Color (color):
Un valor de color opcional que especifica el color de la sombra.
Puedes usar nombres de colores (red, blue, etc.). Valores `hexadecimales` (#RRGGBB), valores `RGB` (rgb(R, G, B)), valores `HSL` (hsl(H, S, L)).
Si se omite, el color de la sombra se toma del color del texto.

---
# vertical-align
Alinea el texto verticalmente (superior, inferior, línea base, etc.).

## Valores
* Palabras clave:
    * `baseline` (predeterminado): Alinea la línea base del elemento con la línea base del elemento padre.
    * `sub`: Alinea la línea base del elemento con la línea de subíndice del elemento padre.
    * `super`: Alinea la línea base del elemento con la línea de superíndice del elemento padre.
    * `text-top`: Alinea la parte superior del elemento con la parte superior de la fuente del elemento padre.
    * `text-bottom`: Alinea la parte inferior del elemento con la parte inferior de la fuente del elemento padre.
    * `middle`: Alinea el centro vertical del elemento con el centro vertical de la línea de texto del elemento padre.
    * `top`: Alinea la parte superior del elemento con la parte superior del elemento más alto de la línea.
    * `bottom`: Alinea la parte inferior del elemento con la parte inferior del elemento más bajo de la línea.

* Valores de longitud:
Puedes usar cualquier valor de longitud válido (px, em, %, etc.) para desplazar el elemento verticalmente desde su posición predeterminada. Los valores positivos mueven el elemento hacia abajo, mientras que los valores negativos lo mueven hacia arriba.

* Porcentaje (%):
Similar a los valores de longitud, pero se calcula como un porcentaje de la altura de línea del elemento.

---
# text-overflow
Controla cómo se muestra el texto que desborda el contenedor. Imaginemos que tenomos una etiqueta `<div>` de un ancho de 100px y que contiene una etiqueta `<p>` de unos 200px de ancho. Por defectio veriamos nuestro texto cortado en el punto que llega a los 100px, haciendo uso de `text-overflow` podemos solventarlo sustituiynedo este texto "sobrante" o que no puede ser representado por `...`.

## Valores
* `clip` (predeterminado): Simplemente recorta el texto que desborda, sin mostrar ningún indicador visual de que hay más contenido.
* `ellipsis`: Agrega puntos suspensivos (...) al final del texto visible para indicar que hay más contenido oculto.

PD: No confundir con `overflow`.

---
# white-space
Controla cómo se manejan los espacios en blanco en el texto.

## Valores
* `normal` (predeterminado): 
    * Colapsa múltiples espacios en blanco en uno solo.
    * Ignora los saltos de línea en el código fuente.
    * El texto se ajusta automáticamente al final de la línea.

* `nowrap`: 
    * Colapsa múltiples espacios en blanco en uno solo.
    * Ignora los saltos de línea en el código fuente.
    * El texto no se ajusta al final de la línea y se desborda si es necesario.

* `pre`: 
    * Conserva todos los espacios en blanco y saltos de línea tal como están en el código fuente.
    * El texto no se ajusta al final de la línea y se desborda si es necesario.

* `pre-wrap`: 
    * Conserva todos los espacios en blanco y saltos de línea tal como están en el código fuente.
    * El texto se ajusta al final de la línea.

* `pre-line`: 
    * Colapsa múltiples espacios en blanco en uno solo.
    * Conserva los saltos de línea en el código fuente.
    * El texto se ajusta al final de la línea.

* `break-spaces`: 
    * Similar a pre-wrap, pero trata los espacios en blanco como caracteres que pueden romper la línea.

* `inherit`: 
    * Hereda el valor de white-space del elemento padre.

---
# direction
Establece la dirección del texto (de izquierda a derecha o de derecha a izquierda) (como en árabe o hebreo).

## Valores
* `ltr` (left-to-right) (predeterminado): Establece la dirección del texto de izquierda a derecha.
* `rtl` (right-to-left): Establece la dirección del texto de derecha a izquierda.
