# Interface (Interfaz)
Las interfaces son algo similares a las clases "normales" o abstractas, solo que estas no se identifican directamente como una clase, y **_se puede usar mas de una vez_**.

EJ:
* Interfaz - Clase "Padre"*
```
	public interface Animal {
	    public void nombreEspecie(String nombre);

	    public void continente();
	}
```
*Clase imlementadora - Clase "Hija"*
```
	public class Mamifero implements Animal{
	    @Override
	    public void nombreEspecie(String nombre) {
	        System.out.println("Especie: " + nombre);
	    }

	    @Override
	    public void continente() {
	        System.out.println("Texto o código correspondiente a este método");
	    }
	    
	}
```