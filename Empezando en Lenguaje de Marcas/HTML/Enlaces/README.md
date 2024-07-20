
# Enlaces `<a> ... </a>`
Como su nombre indica, esta etiqueta `HTML` sirve para poner enlaces en los que podemos distinguir

* Enlace a una zona en concreto de la misma pagina
* Enlace a otra pagina web
* Enlace a una zona en concreto de otra pagina web

## Enlace a una zona en concreto de la misma pagina
Se compone de dos "apartados", la zona a la que se desplaza y el propio enlace, por asi decirlo.
Definir zona -> `<a name="nombre_zona"> ... </a>`
Enlace -> `<a href="#nombre_zona"> texto del enlace </a>`

## Enlace a otra pagina web
Solo con indicar el enlace serviria perfectamente, ya que este solo se va a encargar de 
Enlace -> `<a href="https://www.ejemplo.com"> texto del enlace </a>`

## Enlace a una zona en concreto de otra pagina web
Es como una mezcla de los dos anteriores po asi decir, pero es sumamente obligatorio saber que la pagina web a la que se hace referencia en el enlace tiene zonas definidas y el nombre de estas. 
Enlace -> `<a href="https://www.ejemplo.com#nombre_zona"> texto del enlace </a>`

## PD:
* El atributo `href` es **obligatorio**, a excepcion de que si se quiere definir una zona en cuyo caso se debe indicar el atributo `name`.

* El atributo `target` define el como se va a abrir la pestaña a la que hace referencia el enlace.
	* `_self` (predeterminado) -> Abre el enlace en la misma nueva pestaña del navgador.
	* `_blank`: Abre el enlace en una nueva ventana o pestaña.
		* Por defecto lo abre en una nueva ventana por la cofiguaracion del navegador. Se puede "modificar" haciendo uso de sodigo JS:
		### HTML
		```
			<a href="https://www.ejemplo.com" onclick="openInNewWindow('https://www.ejemplo.com'); return false;">Abrir en nueva ventana</a>
		```
		### JS
		```
			function openInNewWindow(url) {
			  window.open(url, '_blank', 'noopener,noreferrer');
			}
		```

			Basicamente la etiqueta `<a>` del HTML es como un botón el cual dispone de un evento `onclick` el cual se ejecuta al pulsar sobre el, el cual ejecuta una funcion JS a la cual se le pasa por paramtro una url de una pagina web.
	* `_parent`: Abre el enlace en el marco padre.
		marco se refiere a la etiqueta `<frame>`
	* `_top`: Abre el enlace en el cuerpo completo de la ventana.
	* `nombre_del_marco`: Abre el enlace en un marco específico con ese nombre. 
		marco se refiere a la etiqueta `<frame>`

		`_self` y `_top` son muy parecidos, a dia de hoy hay mu poca diferencia entre ellos.

	* `rel` -> Especifica la relación entre el documento actual y el documento enlazado. Algunos valores comunes son:
		* `noopener` -> Evita que la nueva página tenga acceso a la ventana que la abrió (importante para seguridad).
		* `noreferrer` -> Evita que el navegador envíe la cabecera Referer al sitio enlazado (protege la privacidad del usuario).
		* `nofollow` -> Indica a los motores de búsqueda que no sigan el enlace (útil para enlaces de afiliados o publicidad).
	* `title` -> Proporciona un texto descriptivo que aparece como una sugerencia cuando el usuario pasa el ratón sobre el enlace. Mejora la accesibilidad y la experiencia del usuario.
	* `download` -> Si está presente, indica al navegador que descargue el recurso enlazado en lugar de abrirlo en el navegador.

## Enlaces con imágenes:
Puedes usar la etiqueta `<img>` dentro de un enlace `<a>` para crear un enlace que se active al hacer clic en la imagen:
````
	<a href="https://www.ejemplo.com">
	  <img src="imagen.jpg" alt="Descripción de la imagen">
	</a>
````

## Enlaces de correo electrónico:
Puedes crear enlaces que abran el cliente de correo electrónico del usuario con un mensaje predefinido:
```
<a href="mailto:correo@ejemplo.com">Enviar correo electrónico</a>
````

## Enlaces de teléfono:

Puedes crear enlaces que, al hacer clic en ellos, inicien una llamada telefónica en dispositivos móviles:
```
<a href="tel:+1234567890">Llamar al 1234567890</a>
```