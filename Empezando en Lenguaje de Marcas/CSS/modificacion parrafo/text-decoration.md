# text-decoration
Este vendria a ser una modificacion de `font-style`, pero este se encarga del tipo de "rallado" (lo que podrian ser decoraciones en el texto, no confundir con la fuente de letra si añade algun caracter especial por ejemplo) en el texto, es decir si esta subrayado, tachado, ...
```
    <!DOCTYPE html>
    <html>
    <head>
    <title>Prueba CSS</title>

    <style>
        .uno {
            text-decoration: overline;
        }

        .dos {
            text-decoration: underline;
        }

        .tres {
            text-decoration: line-through;
        }
    </style>
    </head>
    <body>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
        <p class="uno">Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
        <p class="dos">Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
        <p class="tres">Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
    </body>
    </html>
```
## Valores
* `normal/none` -> Son muy parecidos, `normal` restablece al valor por defecto y `none` pone el valor por defecto
* `overline` -> Super-rayado
* `underline` -> Sub-rayado
* `line-through` -> Tachado