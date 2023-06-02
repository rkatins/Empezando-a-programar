# Herencia *No confundir con ABSTRACTA*
Solo afecta a las Clases.

Para verlo dded una forma mas grafic y entenderlo, podeddmos hacer un simil con la herencia en la vida real, lo que tiene un padre se lo pasa a su hijo, y asi sucesivamente.
Es decir que si una clase tiene X metodos y N propiedades, estas podran ser usadas por las clases que hereden/extiendadan de ella.

*Siempre* que una clase quiere heredar/extender de otra clase se debe usar la palbra reservada junto con el nombre dde la cles a la que hace referencia:  ```extends "nombre_ClasePadre"```, se debe poner en la declaracion de una clase "Hija".
+ Ejemplo:

*Clase Padre*
```
	public class Persona {
	    protected String nombre;
	    protected int edad;

	    public Persona(String nombre, int edad) {
	        this.nombre = nombre;
	        this.edad = edad;
	    }

	    public String getNombre() {
	        return nombre;
	    }

	    public int getEdad() {
	        return edad;
	    }
	}
```
*Clase Hija*
```

	public class Empleado extends Persona {
	    private double salario;

	    public Empleado(String nombre, int edad, double salario) {
	        super(nombre, edad);
	        this.salario = salario;
	    }

	    public double getSalario() {
	        return salario;
	    }
	}
```

En este caso la clase empleado hereda/extiende de la clase Persona, vemos uso de las propiedades de la clase padre en el metodo constructor de la clase Hija.
Si puede hacer uso de sus propiedades por heredar de ella, pero si se hubiera declarado las propiedades como ```private``` no las podria ver. 
(Se pueden mezclar. 
	EJ: 2 propiedas protecte y 1 private, veria 2 y la otra no).
