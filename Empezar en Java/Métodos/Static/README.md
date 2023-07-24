## Static

### ¿Qué es hacer un metodo/variable static?

Un metodo/variable ```static``` es como que esta presente en la clase y solo lo puede usar la clase. Es similar a declarar metodo/variable privado, pero en este caso forma parte de la propia clase.

``` 
public class Coche {
    private String matrícula;
    private float precio;
    private String color;
    private static float descuento;
}
```

+ Pongamos un ejemplo -> Tenemos una clase Coche con las propiedades matrícula, precio, color y descuento. El descuento siempre va a ser el mismo para todos, no queremos que se reserve un hueco específico siempre que creemos un objeto, por así decir es como si la propiedad descuento *siempre* fuera junto con la clase Coche; podemos crear mil y un tipo de métodos constructores pero este siempre dispondrá de la propiedad descuento.

+ Otro ejemplo (esta vez con un metodo) -> Es muy similar al ejemplo anterior, imágenes que seguimos con la clase Coche y está va a tener un método llamado mAnularDescuento(), este método será static.
```
    public static void mAnularDescuento() {
        Coche.descuento = 0;
    }
```
En el caso de los métodos no sería necesario indicar que es ```static```, porque está modificando a una propiedad ```static``` de la clase a la que pertenece, pero siempre viene bien ponerlo para evitar posibles problemas y entender mejor el código.

---

PD: Cuando se quiere hacer referencia a una variable/método static (como en el código anterior) se debe poner ```el nombre de la clase``` en vez de ```this```, ya que a lo que se está accediendo es algo "propio" de la clase.

PD²: Una vez que un método se indica como ```static``` solo podrá hacer referencia a variables/métodos que sean ```static``` a su vez, por ejemplo el método del código anterior no podría hacer referencia a las propiedades matrícula o pintura.