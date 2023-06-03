# Lectura y Escritura
## Fichero no legible (Fichero de objetos o serializables)
Podriassmos definirlo como guardar un objeto en un fichero para que este se mantenga a lo largo del tiempo y pueda ser usado en otro sitio haciondo uso del mismo objeto que se genero en un principio.

**Remarcar** que al escreibir en un fichero se debe implementar la interfaz ```Serializable``` en la clase que se usara para crear el objeto que se escriba(si fuera necesario se deberia importar el paquete contenedor de la interfaz ```Serializable```  con ```import java.io.Serializable```).

EJ sintaxis:
* Clase para crear el objeto a escribir
```
	import java.io.Serializable;

	public class Persona implements Serializable{}
```