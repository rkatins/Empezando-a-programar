# Ordenar ArrayList
Tenemos 2 interfaces a elgir:
+ Comparable -> Un solo criterio de ordenacion
Siguiendo el ejemplo anterior (con su variaciones)
Solo permitiria ordenar por Nombre, no por Nombre y Provincia a la vez.

+ Comparator -> Puede usar 1 o varios criterios de ordenacion a la vez, este puede ser mas versatil.

## Comparator (Forma 1)
La ordenacion hacienddo uso de la Clase/Interfaz Comparator es algo compleja y tiene varios pasos a seguir (Como practicamente todo).

1. Creamos una Clase que contendra el metodo (o metodos; para ordenar dee formas diferente) para ordenar, esta clase debe implementar la Clase/Interfaz Comparator (la cual se debe definir igual que un ArrayList).
Recordar que en las Clases que implementen una Clase/Interfaz, estas deben conetener los metodos que han sido definidos en ella, como es con el caso del metodo compare().
```
	public class ClaseOrdenar implements Comparator<Municipio> {
		@Override
		public int compare(Municipio m1, Municipio m2) {
			return 0;
		}
	}
```
2. Dentro de nuestra clase anteriormente creada, crearemos un nuevo metodo (o metodos, dependiendo de nuestros gustos a la hora de ordenar), en este caso un metodo que ordenara por municipio y seguidamente por provincia; es decir que si existen 2 o mas municipios iguales, entre ellos se ordenaran por provincia, podriamos decir que es una ordenación dentre de un segmento de la ordenación. Este metodo tendra una caracteristica en los parametros, el cual usará la saida del metodo de una clase que creará al llamarse al metodo (el metodo de la Clase del parametro será una modificacion del metodo de la Clase/Interfaz implementada).
Esto ultimo es algo raro y deberia quedar tal que así:
```
	public class ClaseOrdenar implements Comparator<Municipio> {
		public void mOrdenar(ArrayList<Municipio> municipios){
			Collections.sort(municipios, new Comparator<Municipio>() {
				@Override
				public int compare(Municipio m1, Municipio m2) {
					return new String(m1.getProvincia().concat(m1.getNombre())).compareTo(m2.getProvincia().concat(m2.getNombre()));
				}
			});
		}
		
		@Override
		public int compare(Municipio m1, Municipio m2) {
			return 0;
		}
	}
``` 

3. Explicacion del método raro que hemos creado:
El método-funcion/parámetro devuelbe un objeto de tipo String (el cual crea) que tiene como parametros la obtencion de las propiedades del objeto (concatena estas porque tiene en cuenta las dos para hacer la ordenacion) y seguidamente hace uso del metodo compareTo() pasandole por parametro los mismos datos indicados anteriormente.
```
	public void mOrdenar(ArrayList<Municipio> municipios){
		Collections.sort(municipios, new Comparator<Municipio>() {
			@Override
			public int compare(Municipio m1, Municipio m2) {
				return new String(m1.getProvincia().concat(m1.getNombre())).compareTo(m2.getProvincia().concat(m2.getNombre()));
			}
		});
	}
```

PD: En ningun momento debemos indicar la posicion del ArrayList o cualquier otra cosa relacionada al ArrayList que se pasa al metodo ```mOrdenar()```, Collections.sort se encargar de todo, no hay porque preocuparse de nada de la ordenacion, el solo se encargara de todo.

PD2: hasta que no se llame al metodo mOrdenar(), el ArrayList se verá tal cual ha sido rellenado.

## Comparator (Forma 2)
La Forma 1 puede ser un poco liosa de entender, y existe una segunda forma la cual puede ser algo mas sencilla de entender, en vez de crear metodos los cuales ordenaran de una formna diferente cada uno, en este caso creamos varias clases las cuales tendran su propio criterio de ordenacion cada una modificando el metodo implementado por la interfaz.

```
	public class Ordenar implements Comparator<Municipio>{
		@Override
		public int compare (Municipio m1, Municipio m2){
			if (m1.getNombre().compareTo(m2.getNombre()) > 0) {
				return -1;
			} else if (m1.getNombre().compareTo(m2.getNombre()) == 0) {
				return 0;
			} else {
				return 1;
			}
		}
	}
```
Explicacion:
Se está utilizando una lógica inversa para la comparación de nombres. Si el nombre de m1 es mayor que el nombre de m2, se devuelve -1, lo que indica que m1 debe estar antes que m2 en la ordenación. Si los nombres son iguales, se devuelve 0, y si el nombre de m1 es menor que el nombre de m2, se devuelve 1.

---

Existe una alternativa, pero basicamente hacen lo mismo pero usan una logica de ordenacion diferente.
```
	public class Ordenar implements Comparator<Municipio> {
	    @Override
	    public int compare(Municipio m1, Municipio m2) {
	        return m1.getNombre().compareTo(m2.getNombre());
	    }
	}
```
Explicacion:
Se realiza una comparación directa de los nombres utilizando el método compareTo() de String. Si el nombre de m1 es menor que el nombre de m2, se devuelve un valor negativo. Si son iguales, se devuelve 0, y si el nombre de m1 es mayor que el nombre de m2, se devuelve un valor positivo.
