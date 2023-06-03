# Ficheros (La PD es muy importante)
Podemos definir los ficheros como una forma de mantener las cosas en el tiempo, es decir que va a ser identico tanto en un sitio como en otro aunque cerremos su ejecuccion.

# Tipos de Ficheros
Dentro de los ficheros encontramos 3 tipos (Podriamos contar un 4º tipo, pero puede ser un poco inservible y tardio para escribir lo que normalmente escribiriamos/leeriamos; y un 5º tipo que serian los ficheros binarios, estos sirven para leer/escribir ficheros cuando los datos se almacenan en su forma original de bytes, podriamos decir similar a los no legibles pero no tienen una finalidad igual).

---

## [Fichero de propiedades](./Objetos)
Podramos resumier este como un tipo de fichero con una determinada estructura para ser leido, la cual sera usada para seguir determinadas configuraciones, como configuracion se puede entender como mostrar un determinado mensaje o ejecutar un determinado metodo dependiendo lo que se elija previmente.

## [Fichero no legible (Fichero de objetos o serializables)](./Objetos)
Este tipo de fichero lo podemoes entender por el nombre. Como este indica es un fichero que no se puede leer, a lo que se refiere con no poderse leer es a que no puede ser leido de una forma natural como lo hariamos nosotros ya que este puede incluir cracteres desconocidos para nosotros.

Tambien podemos definirlo como serializable, obtiene este nombre debido a interfaz que debe implmentar para poder leer este tipo de ficheros.

Basicamente lo podemos entender como un fichero que puede almacenar informacion correspondiente a objetos.

## [Linea x Linea](./Objetos)
Al igual que en lenguajes como C, tambien disponemos de la posibilidad de leer por linea.

**PD**: 
Imaginemos que queremos _escribir_ y tenemos papel y boli.
¿Qué es lo primero que hacemos?
Quitar el capuchon al boli, esto lo simulamos con una variable PrintWriter por ejemplo.
Y una vez que terminemos ponemos de nuevo el capuchon del boli al terminar de escribir, esto lo simulamos con .close() sobre la variable que escribe, la variable PrintWriter en este caso.
Es importante cerrar cada boli con el que escribimos, y siempre cerrarlos en orden inverso en el que han sido abierto para asi evitar errores, si sabemos que no hay problema al cerrar podemos cerrar solo el primer boli que usamos.

Esto se extrapola a la lectura, pero en vez de abrir/destapar un boli abrimos y cerramos un libro.

Al igual que para otras muchas cosas, si no lo vamos a seguir usandolo, lo cerramos (en el caso que podamos), no queremos que nadie usmee en nuestras cosas.
