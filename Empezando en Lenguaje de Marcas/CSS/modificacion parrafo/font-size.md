# font-size
Con esta propiedad `CSS` podemos cambiar el tamaño de la letra escrita, imagenemos por algun casual que queremos escribir la letra pequeña de un contrato por ejemplo, pues hariamos uso de esta propiedad `CSS` para variar el tamaño de la letra.

No hay un tamaño predeterminado que indique el tamaño de letra de un documento `HTML`, este viene definido por los ajustes del navegador y otros ajustes establecidos por el usuario final.

En este caso se indica un tamaño de `40px` a todos las etiquetas `<p>` definidas en el documento.

```
    <!DOCTYPE html>
    <html>
    <head>
    <title>Prueba CSS</title>

    <style>
        p {
            font-size: 40px;
        }
    </style>
    </head>
    <body>
        <header>
            <p>Encabezado</p>
        </header>

        <ul>
            <li>Elemento de lista 1</li>
            <li>Elemento de lista 2</li>
        </ul>

        <footer>
            <p>Pie de página</p>
        </footer>
    </body>
    </html>
```