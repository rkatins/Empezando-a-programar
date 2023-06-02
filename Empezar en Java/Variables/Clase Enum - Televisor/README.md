## Clase Enum
No estaria bien meterlo como **VARIABLE**, pero la usamos principalmente como tal uanque la definamos como clase.

Al crear una variable de la clase Enum por asi decir estamos creando un objeto con un atributo con varias posibilidades.
```
	enum Nombre {SAMSUNG, LG, PHILIPS, SONY};
```

Si te has dado cuenta, las clases se suelen escribir con la primera en mayuscula, en este caso no ha sido así, en este caso podriamos decir que hemos creado una clase haciendo uso de una clase.
Para que lo entendamos: hacemos uso de la clase ```enum``` para crear una clase ```Nombre``` (La cual vamos a usar).

No es el ejemplo para la clase String, esta funciona de forma diferente en algunos aspectos.

PD/TIP: **SIEMPRE** que creemos una variable (provenga de una clase o no), **SIEMPRE** se dira que es de determinado tipo, en este caso nuestra variable que crearemos será de tipo ```enum```.

---

### Como usar
Dentro de nuestra clase "molde" (La que usaremos para crear objetos y la cual contiene el método constructor) deberemos declarar e inicializar nuestra variable de tipo ```enum```, este no sera un atributo como tal pero si generara uno.
```
	public class Televisor {
	    enum Nombre {SAMSUNG, LG, PHILIPS, SONY};
	    private Nombre nombre;
	}
```

Una vez declarado e inicializado nuestra variable de tipo ```enum``` (cuando decimos inicializar es dar/asignar datos, en este caso es aquello escrito entre las llaves ```{ }```, si se quiere asignar mas de un valor se separará por comas). Para que sea mas facil de entender, consideremos una variable de tipo ```enum``` como un array, recordemos que un array puede almacenar un numero finito de datos de un mismo tipo, en este caso no se indica el tipo entre comillas, los tipos son los declarados para inicilizar la variable.

Haciendo uso de la variable de tipo ```enum``` que hemos declarado e inicializado la usamos para asignar el tipo a una variable que declararemos de forma normal como el resto de veces.
```
	private Nombre nombre;
```
---

En este ejemplo lo tipos son: ```SAMSUNG, LG, PHILIPS, SONY```.
