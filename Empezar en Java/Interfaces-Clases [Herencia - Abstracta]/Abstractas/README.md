# Clase Abtract (Abstracta) *No confundir con HERENCIA*
Antes de todo, podemes resumir muy resumido que las clase abstractas son como moldes.

Las clases abstractas no se pueden crear ejemplares de la clase.
Se usan para definir subclases (es decir que extiendan de esta).
Usamos clases abstractas cuando englobamos objetos de distintos tipos y queremos usar polimorfismo.

* Podriamos resumir una clase abtracta como un molde para crear objetos
* Esta puede contener atributos, metodos tanto abstractos como no.

# Metodod Abtract (Abstracta)
Este debe de ser contenido por una clase, y de esta clase debe extender otra clase para por usar este metodo.

* Podrimaos decir que no tienen contenido alguno hasta que sea usado, cada clase/objeto que haga uso de este tipo de metodos.
Un ejemplo de esto anterior podria ser:
	Una carrera de vehiculos (coche, moto, camion), cada uno tiene una aceleracion diferente, cada uno usara el metodo a su manera. A lo mejor uno acelera de 10 en 10, el otro de 20 en 20 y el restante de 15 en 15.

	Ejemplo Sintaxis:
	public abstract double maAcelerar();

	+ Ejemplo en *Clase Coche*:
	```
		public mAcelerar(){
			return velocidad + 10;
		} 
	```
	+ Ejemplo en *Clase Moto*:
	```
		public mAcelerar(){
			return velocidad + 20;
		}
	```

	+ Ejemplo en *Clase Camion*:
	```
		public mAcelerar(){
			return velocidad + 15;
		}
	```

	Siguiendo con los ejemplos anteriores, tenemos otra clase para visializar el resultado, en cualquier caso previamente hemos creado objetos para estas clase, para este ejemplo se llamaran igual que las clases a las que pertenecen para identificarlas rapidamente. (Para crear objetos necesitamos que previamente se haya hecho un metodo constructor (con parametros o sin ellos, ambas clases tenran un metodo constructor el cual recibira por paramtro la velocidadd a la que se encuentra el vehiculo actualmente)).
	```
	    Coche coche = new coche(0);
        System.out.println("La velocidadd de coche es: " + coche.mAcelerar());

        Moto motouadrado = new moto(0);
        System.out.println("La velocidadd de moto es: " + moto.mAcelerar());

        Camion camion = new camion(0);
        System.out.println("La velocidadd de camion es: " + camion.mAcelerar());
	```
    *Metodo constructor de las clases usadas en el ejemplo*
    + Ejemplo en *Clase Coche*:
    ```
    public Coche(int velocidad) {
        super(velocidad);
    }
    ```
    + Ejemplo en *Clase Moto*:

    ```
        public Moto(int velocidad) {
        super(velocidad);
    }
    ```
    + Ejemplo en *Clase Camion*:
    ```
        public Camion(int velocidad) {
        super(velocidad);
    }
    ```
