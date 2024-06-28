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