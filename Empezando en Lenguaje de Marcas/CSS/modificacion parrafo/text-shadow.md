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