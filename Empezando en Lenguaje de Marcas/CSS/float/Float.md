# Float
Otra propiedad CSS, utilizada para el diseño.
Float está pensada para "envolver" imagenes (o similares, como podria ser un contenedor formado por un `<div>`).
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
              float: inline-start;
          }
      </style>
  </head>
  <body>
      <div class="relative1"><img src="cascos.jpg" alt="">Lorem ipsum, dolor sit amet consectetur adipisicing elit. Deleniti a laboriosam nobis neque vero sequi, maxime exercitationem, id minus provident repellendus sed quis, amet quisquam sint eveniet voluptate soluta praesentium!
      Temporibus nisi officiis ducimus sapiente? Molestias a doloremque rem accusamus quidem. Quam nisi tempore animi tempora nemo consectetur quibusdam beatae, dolorem fuga placeat excepturi saepe iste quisquam, dolor expedita ipsum.
      Impedit necessitatibus aliquid consectetur itaque consequuntur quis praesentium, aut quasi ea eos expedita quam vitae, doloremque eius iusto ipsum voluptas veritatis soluta quos quibusdam illum accusamus animi? Minus, reiciendis accusamus?
      Doloribus ducimus accusantium repellat, distinctio accusamus perferendis corrupti, vitae voluptas repellendus incidunt, eligendi commodi pariatur dolor at mollitia sequi consequuntur ex natus officia. Magnam recusandae soluta dolores tempore molestias nihil!
      Ducimus vitae tempore dolore corporis ipsum sequi voluptas culpa necessitatibus natus. Consequatur nostrum aperiam debitis ducimus, exercitationem culpa quisquam molestiae voluptas corrupti eligendi natus officia recusandae rerum, mollitia atque quaerat.
      </div>
  </body>
  </html>
```
Estos son algunos dde los ejemplos usando float.
* `float: inline-start;`
* `float: inline-end;`
* `float: left;`
* `float: right;`

Aunque `float: right` y `float: inline-end`, puedan parecer similares (segun esta puesto en el codigo HTML) esto se ddebae a que muestran de forma muy similar (por no decir identica), porque al final muestran lo mismo. Al igual que `float: left` y `float: inline-start`

---
**IMPORTANTE** -> Aunque tengamos varios elementos, y que al menos haya 1 que tenga la propiedad `float`, este con la propiedad `float` estara por asi decir un paso por de lante de los demas, el resto estan por "detras", a menos que hagamos un `<div>` "contendor" que almacenará los elementos que se pongan dentro (cave mencionar que se le debe indicar un ancho y largo para evitar que se salga del contenedor)