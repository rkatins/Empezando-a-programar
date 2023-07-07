# Fichero de propiedades
La estrtuctura de un fichero de propiedades es diferente a lo que podriamos considerar un fichero de texto normal. 

Lo podriamos considerar como un fichero de configuracion, aunque exactamente no es eso, si no que dependiendo de un valor que se le de hara una cosa u otra. Es mas bien un fichero que modifica los parametros de configuracion.

Este debe de ser de los pocos casos en los que se necesita que previamente tenga informacion que se pueda mirar (si no no serviria de mucho).

---
Para entender la estructura a la hora de escribir un fichero de propiedades, lo podemos entender como la asignacion de un valor a una variable, pero seria mas correcto decir que definimos una clave y esta se le asigna un valor.

+ EJ sintaxis del propio fichero de propiedades:
```
	telefono=676890124
	localidad=Guadalajara
	apellido=Delgado
	nombre=Gonzalo
	id=11442
```
+ EJ metodo que lee fichero de propiedades antes rellenado.

Explico el ultimo ejemplo para saber como se esta manejando el fichero de propiedades.

1. Creamos una variable nueva de tipo ```Properties``` que se encargará de manejar las claves del fichero de propiedades que indiquemos, a su vez declararemos una variable de tipo InputStream que contendrá el fichero, pero esta la inicializaremos a null en un principio, ya que _SI o SI_ deberemos hacer uso de un bloque ```try-catch``` donde la llamaremos y haremos uso de esta variable. -> 2 primeras lineas de código

2. Dentro del bloque ```try-catch``` indicaremos a nuestra variable de tipo ```InputStream``` el fichero que usará (para lo cual le pasaremos por parametro la variable que contiene el fichero de propiedades). -> 2 prmeras lineas del bloque ```try```.
   Entendamos esto, inicializamos nuestra variable ficheroPropiedades (de tipo InputStream) la cual usaremos como parametro para la siguiente linea, la cual hace uso de la variable propiedades (de tipo properties) que a su vez hace uso de su propio metodo load() al que le pasaremos por parametro la variable ```InputStream``` que hemos nombrado antes.


3. Mostraremos el contenido de la clave (en este caso la clave localidad), la cual deberemos indicar como parametro del metodo getProperty() de la variable de tipo Properties declarada antes. -> Ultima linea del bloque ```try```.

```
	public void mLeerPropiedades() {
	    Properties propiedades = new Properties();
	    InputStream ficheroPropiedades = null;

	    try {
	        ficheroPropiedades = new FileInputStream("reglas.properties");
	        propiedades.load(ficheroPropiedades);

	        System.out.println(propiedades.getProperty(localidad));
		// Mostrara: Guadalajara
	    } catch (FileNotFoundException e) {
	        System.out.println("mLeerPropiedades -> No se encontro el fichero");
	    } catch (IOException e) {
	        System.out.println("mLeerPropiedades -> No se pudo leer el fichero");
	    }
	}
```

PD: No es obligatorio pero se suele poner un nombre cualquiera que tenga una extension ```.properties```, esto es asi por el mero echo de identificarlo entre los ficheros de nuestro programa. En el caso que creemos/manejemos varios ficheros yo aconsejo tenerlos todos en una misma carpeta y cada uno con su nombre.
