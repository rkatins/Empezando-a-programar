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

```
    <!DOCTYPE html>
    <html>
    <head>
    <title>Prueba CSS</title>

    <style>
        .uno {
            font-family: 'Helvetica';
            color: blue;
            font-size: 20px;
        }

        .dos {
            font-family: 'Arial';
            color: red;
            font-size: 30px;
        }
    </style>
    </head>
    <body>
        <p>Normal -> Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptates, incidunt.</p>
        <p>Helvetica -> <span class="uno">Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptates, incidunt.</span></p>
        <p>Arial -> <span class="dos">Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptates, incidunt.</span></p>
        <p>Normal -> Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptates, incidunt.</p>
    </body>
    </html>
```
* `font-family` -> Indica el nombre que se asigna a la fuente de letra.
* `src` -> Indica la ubicacion de la fuente de letra a usar.
