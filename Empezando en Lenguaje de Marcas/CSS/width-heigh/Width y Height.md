# Width y Height
Lo podemos resumir en que permiten modificaRr el ancho y largo que ocupa un etiqueta HTML.

* `widht` -> indica el ancho de la etiqueta
* `height` -> indica el alto/largo de la etiqueta

Se puede expresar en pixeles (`px`), porcentaje (el porcentaje ser siempre repecto al tamaño de la pagina) o unidades relativas (como `em`).

```
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
        <style>
            * {
                margin: auto;
            }

            div {
                width: 50%;
                height: 200px;
                border: 1px solid black;
            }
        </style>
    </head>
    <body>
        <div>
            <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Quidem omnis repudiandae iusto?</p>
        </div>
    </body>
    </html>

<div>
    Este es un div con un ancho del 50% y un alto de 200 píxeles.
</div>
```
PD:
* `max-width` y `max-height` establecen el ancho y alto máximos de la etiqueta.
* `min-width` y `min-height` establecen el ancho y alto minimo de la etiqueta.