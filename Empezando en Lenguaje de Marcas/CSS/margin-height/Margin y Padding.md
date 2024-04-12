Para los siguientes ejemplos hagamos lo siguiente, imaginemos que creamos una "caja" con una etiqueta `<div>`, la cual va a tener un border negro de 1 pixel de ancho y 500 pixeles de ancho total, que contenga una etiquet `<p>` para poner un texto.

# Margin
Si indicamos un `margin: 3px;`, a la etiqueta `<div>`, esta tendra 3 pixeles de marganes desdde el bordded la caja que conforma hacia afuera
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
                width: 500px;
                border: 1px solid black;
                marging: 3px;
            }

            p {
                border: 1px solid blue;
            }
        </style>
    </head>
    <body>
        <div>
            <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Quidem omnis repudiandae iusto?</p>
        </div>
    </body>
    </html>
```

# Padding
Vendria a ser algo similar pero en este caso los pixeles van desde el bordde hacia dentro, por lo que en este caso veremos moverse el texto escrito
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
                width: 500px;
                border: 1px solid black;
                padding: 3px;
            }

            p {
                border: 1px solid blue;
            }
        </style>
    </head>
    <body>
        <div>
            <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Quidem omnis repudiandae iusto?</p>
        </div>
    </body>
    </html>
```
---

PD: Recalacar que ca ddireccion (es decir arriba, abajo, izq. y dch.) tienen su pripio ajuste, es decir que podemos usar diferentes margin/pading para cada lao dde nuestra caja
* `margin-top/padding-top` -> arriba
* `margin-bottom/padding-bottom` -> abajo
* `margin-left/padding-left` -> izq.
* `margin-right/padding-right` -> dch.
* `margin/padding` -> toddas las posiciones