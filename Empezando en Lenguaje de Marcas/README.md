# Lengauje de marcas
El lenguaje de marcas se caracteriza principalmente por el uso de marcas/etiquetas mediante las que se define una estructura.

## [HTML](./HTML)
* Esqueleto principal de una pagina Web

## [CSS](./CSS)
* Parte gráfica, maquillar o modificar el estilo de la web.

## [XML](./XML)
* XML es un lenguaje de marcado que se utiliza para estructurar información.
* Define una estructura jerárquica de elementos y atributos para organizar datos.
---
Las marcas/etiquetas se ponen por pares, esto quiere decir que tiene una apertura y un cierre, la marca/etiqueta que indicara el inicio va precedida de `<` y finaliza en `>` y el fin se indica con `</` y finaliza por `>`. Entremedias ira el nombre de lamarca/etiqueta a usar.
No es obligatorio ni un regla escrita, se da el caso de que una marca/etiqueta contiene otra marca/etiqueta y asi sucesivamente cuantas sea necesarias.

Ha diferencia de los lengaujes de programcion, los lengaujes de marcas siempre tienen un incio y fin (a excepcion de algunas etiquetas que solo tienen fin, o no es necesario esscribir el incio)

La estructura a seguir siempre por una pagina web es la siguiente:
```
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	...
	...
	...
<body>
 	 ...
 	 ...
 	 ...
</body>
</html>
```

Todo lo que se escriba dentro de la apertura/cierre de la etiqueta sera visible. Ha excepcion de si se habre una nueva etiqueta la cual debe estar comprendida dentro de la etiqueta. Nunca una parte de la marca/etiqueta dentro y la otra fuera, una vez se abre una etiqueta se debe cerrar para empezar otra etiqueta nueva la cual no tenga nada que ver con la anterior.
	EJ: 
 	* SI -> `<ETIQUETA_A><ETIQUETA_B> ... </ETIQUETA_B></ETIQUETA_A>`
  	* NO -> `<ETIQUETA_A><ETIQUETA_B> ... </ETIQUETA_A></ETIQUETA_B>`
   
Simpre que se siga la lógica del ejemplo SI, cualquier convinacion es correcta.
