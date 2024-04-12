# Clear
Cuando indicamos que un elemento tenga la propiedad float este "afecta" al resto, con `clear` "solucionamos" esto, ya que modificando el `CSS` correspondiente a una etiqueta que se va afectada por el `float` de otra, no se vera "afectada".

```
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
        <style>
            img {
                width: 100px;
                float: left;
            }

            .primero p {
                clear: left;
            }
        </style>
    </head>
    <body>
        <article class="primero">
            <h1>primero</h1>
            <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Illum rem iure voluptate quo ab? Modi laudantium voluptas, veritatis qui eum, distinctio nulla consequatur eligendi quibusdam optio quae, voluptates quas eius.</p>
            <img src="https://zoobarcelona.cat/sites/default/files/animal/2016-12/1400x846%20HYDHYD%202.jpg" alt="">
            <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Quo aspernatur dolorum in dolores, quaerat animi hic inventore, vero illum sed obcaecati vitae ut assumenda totam, a soluta quos consectetur ipsum?</p>
        </article>
    </body>
    </html>
```
PD: en la propiedad `clear` debemos indicar el mismo valor que en la propiedad `float`, o en su defecto poner el valor que puede tener un `float` y no queremos que esta se vea afectado por ello.

PD2: Usar la propiedad `clear`no solventar del todo el `float`por asi decir.

## FIX
Por asi decirlo hay como un arreglo a la hora de meter un elemento en el contenedor, el cual sobrepasa el ancho y/o largo del contenedor.

Este arreglo consiste en añadir la propiedad `overflow: auto;` en el CSS del contenedor para que ajuste sus tamaño a lo que contiene. Tambien puede servir `overflow: hidden;` que hace algo muy similar, pero en este caso no es que se adapte, si no que todo lo que este fuera del contenedor hace que este dentro "ajustando", mientras que el otro se limita solo a ajustar.
```
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
        <style>
            div {
                overflow: auto;
            }

            img {
                width: 250px;
                float: right;
            }
        </style>
    </head>
    <body>
        <div style="border: blueviolet 2px solid;">
            <p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Esse aliquid iste id expedita consectetur, libero cupiditate quas distinctio iusto dolorum veniam fugit rem sunt culpa maxime possimus quae magnam exercitationem.
            Voluptatum, odit harum iusto vitae sequi aperiam quod doloremque, nam porro recusandae minima autem sapiente facere nisi amet atque soluta possimus cumque, itaque numquam reprehenderit! Dolor repellat rem debitis vel!
            Voluptatem quibusdam a alias magnam, ducimus deserunt atque, quidem sint debitis tempora, officiis tempore sed? Possimus eius ipsam fugiat veritatis. Dignissimos sed quos distinctio nemo magni ipsa, maiores nulla minus?</p>
            <img src="https://zoobarcelona.cat/sites/default/files/animal/2016-12/1400x846%20HYDHYD%202.jpg" alt="">
        </div>
    </body>
    </html>
```
* Haciendo uso de la propiedad `overflow: hidden;` podemos ver el cambio "activando/desactivando" esta propiedad.