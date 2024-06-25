# Estructura
A lo hora de escribir un documento `.html` para la creacion de una WEB (hay que recalcar que este tipo de ficheros pueden ser interpretados como un texto normal, por poder se puede usar el bloc de notas que viene preinstalado en la mayoria de ordenadores).

Se definen/identifican varias secciones por asi decir.

## <HTML> ... </HTML>
Esta es la mas basica y obligatoria a la hora de definir un fichero en el que se defina etiquetas HTML (como instruciones).

Esta se debe poner para indicar el principio y fin del fichero HTML, y dentro de ella el contenido del HTML. Por asi decir indica lo que esta dentro y/o se representa al visualizar la web.

## <HEAD> ... </HEAD>
No confundir con la etiqueta <HEADER> ... </HEADER>.

La etiqueta `<HEAD> ... </HEAD>` se indican lo que podriamos decir como los extras, en ella se indican cosas como el nombre que se vera en la pestaña correspondiente a nuestra web o la ruta indicando el fichero `CSS`, por ejemplo.

## <BODY> ... </BODY>
Al igual que la etiqueta `<HTML> ... </HTML>`, esta es semi obligatoria ya que va a contener lo que veremos de nuestra web, es decir el contenido de esta

---

La estructura final seria la siguiente:
```
	<!DOCTYPE html>
	<html>
		<head>
			...
			...
			...
		</head>
		<body>
			...
			...
			...
		</body>
	</html>
```

El poner `!DOCTYPE` en la partura de la etiqueta `<HTML> ... </HTML>` es para el uso de lo que se conoce como HTML5 (HTML5 es un version superior de el HTML basico, aunque comparte la mayoria de cosas).