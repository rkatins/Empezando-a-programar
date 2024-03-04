# Posicionamiento CSS

## Position
---
* `position: static`
Por asi decirlo es el
mas basico de todas las opciones que tiene position, ya que esta es la propiedad que tiene un elemento al ser creado, basicamente actua en referencia a lo que ya haya anteriormente puesto (siempre y cuando no dependa de otra etiqueta). Imaginemos que escribimos una hoja, vamos hacerlo de izquierda a derecha y de arriba abajo, pero nunca escribir por encima de algo.
```
    .static {
      position: static;
      background-color: blue;
    }
```
---
* `position: relative`

Se comporta de forma muy similar a `position: static`, con la diferencia que este vera alterado su "comportamiento" si hacemos uso de otras propiedades css como serian `top`y `left` (arriba e izquierda respectivamente), las cuales indicaran la distancia a la posicion en referencia al centro de la pagina.
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
    .relative1 {
        width: 100px;
        height: 100px;
        position: relative;
        background-color: blue;
    }
    .relative2 {
        width: 100px;
        height: 100px;
        position: relative;
        top: -75px;
        left: 20px;
        background-color: red;
    }
    </style>
</head>
<body>
    <div class="relative1">position: relative1</div>
    <div class="relative2">position: relative2</div>
</body>
</html>
```
En este ejemplo tenemos dos etiquetas, las cuales podermos ver como que `relative2`esta superpuesta a `relative1`. Esto se debe a que `relative1`no tiene una posicion establecida (por defecto coge a continuacion de lo que haya en la pagina HTML) y `relative2`se ve "por encima" porque es la posicion que le hemos indicado con `top`y `left`. (Tambien se pueden usar `bottom`y `right` (abajo y derecha respectivamente) por si se quiere ser mas concreto con la posición).

---
* `position: fixed`

Vendria a ser simalar a `relative`con la diferencia de que este en el momento que se le asigna una posicion se quedara ahi, independiente de como este organizada la pagina HTML, si hacemos scroll de arriba a abajo, etc
Imaginemoslo como poner una lupa encima de un libro para leer mejor las letras, aunque movamos el libro por lo que sea, la lupa va a seguir en su sitio.
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
   .fixed {
        background-color: blueviolet;
        width: 200px;
        height: 200px; 
        position: fixed;
        bottom: 0;
        right: 0;
        
    } 
    </style>
</head>
<body>
    <div class="fixed">position: fixed</div>
</body>
</html>
```
PD: Al igual con una etiqueta afectada por `relative`, `fixed` no afectara con su posicion a las demas etiquetas HTML, se superpone.

---

* `position: absolute`

Es muy parecido a `position: relative`, ya que se comporta igual, con la diferencia de que `position: absolute` necesita estar contenida dentro de un contendor con la propiedad `position: relative` para poder funcionar.

La diferencia entre `position: relative` y `position: absolute` es que `position: relative` no depende de estar en un contenedor, mientras que `position: absolute` si, y que el contenedor debe tener la propieda `position: relative`.
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        .relative {
            background-color: blueviolet;
            position: relative;
            width: 600px;
            height: 400px;
        }
        .absolute {
            background-color: aquamarine;
            position: absolute;
            top: 120px;
            right: 0;
            width: 300px;
            height: 200px;
        }
    </style>
</head>
<body>
    <div class="relative">position: relative<div class="absolute">position: absolute</div></div>
</body>
</html>
```


https://learnlayout.com/position.html