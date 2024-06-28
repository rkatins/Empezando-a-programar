# font-style
Esta prpiedad no tiene mucho mistrio aunque se puede confundir su uso con el de `font-family`, ya que ambas modifican la letra en si, pero esta vendria a ser como un extra a la hora de escribir, dependiendo de la opcion que indiquemos a la propiedad afectará de una manera u otra al texto.

```
    <!DOCTYPE html>
    <html>
    <head>
    <title>Prueba CSS</title>

    <style>
        .uno {
            font-style: normal;
        }

        .dos {
            font-style: italic;
        }

        .tres {
            font-style: oblique;
        }
    </style>
    </head>
    <body>
        <p class="uno">Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
        <p class="dos">Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
        <p class="tres">Lorem ipsum dolor sit amet consectetur adipisicing elit.</p>
    </body>
    </html>
```
PD: `italic` y `oblique` son identicas. Indicar `font-style: normal;` es un poco tonteria, ya que el valor que indica para hacer la modificacion del texto e la por defecto

## Valores
* `normal` -> Normal
* `italic` -> Inclinado/Cursiva
* `oblique` -> Inclinado/Cursiva