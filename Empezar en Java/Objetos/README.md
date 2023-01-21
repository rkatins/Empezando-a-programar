## Crear un objeto

### ¿Qué es un objeto?
Antes de crear un objeto debemos saber que es, podriamos decir que es una forma de almacenar informacion propia en un unico sitio.
Los objetos van a depender de lo indicado en la clase (asi como atributos y/o métodos) que se usa ara crear el mismoo objeto.

Pongamos como ejemplo que tenemos el objeto ```alumno1```. Al tener un objeto (en este caso el objeto ```alumno1```) podemos ver sus atributos (podremos ver los atributos y modificarlos sin necesidad de usar metodos extra por asi llamarlos (no se presentara esta dificultad si los atributos han sido declarados como public), estos metodos se conocen metodos accesores y/o mutadores otra forma metodos getters y setters)).
```
public class Alumno {
    public String nombre;
    public String apellido;
    private int nia;

    // Metodo constructor por defecto
    public Cuenta() {
        nombre = "Sin nombre";
        apellido = "Sin apellido";
        nia = 0;
    }

    // Metodo constructor con parametros
    public Cuenta(String nombre, String apellido, int nia) {
        this.nombre = nombre;
        this.nombre = apellido;
        this.nia = nia;
    }
```

PD: se pueden hacer tantos metodos constructor como uno quiera

---
### Crear un objeto
```Tipo-o-Clase nombreObjeto = new Clase-o-NombreMetodo_Constructor(OPCIONAL -> poner parametros si lo requiere)```

Sigamos con el ejemplo anterior, para crear un objeto de su clase tenemos 2 formas ahora mismo.

```
// Metodo constructor por defecto
Alumno alumno1 = new Alumno()
```
```
// Metodo constructor con parametros
Alumno alumno1 = new Alumno("Ruben", "Katins", 503)
```

---
## Métodos accesores y/o mutadores (Getter y Setter)
Cuando en una clase se declaran unos atributos con modificadores de acceso de tipo ```private``` este es no puede ser visto (haciendo uso del ".") por otras clases, sigamos con el ejemplo anterior.
Tenemos la clase alumno de la cual hemos creado el metodo constructpr para poder crear objetos de esta clase, ahora nos encontrmos en la clase ```Aula```, imaginemos que hemos creado un objeto Alumno llamado alumno1 y queremos ver la información que tiene el propio objeto.
En este ejemplo al tenerrrr solo un atributo prrivate declarado, es solo de este del que tendremos que crear los métodos correspondientes, de los demas no haria falta ya que han sido declarados como public.

+ PD: Cabe recalcar que estos métodos deben de ser creados en la misma clase de la que se crea el objeto y estos deben ser si o 

```
    // Metodo accesor o Getter
    public int getDni() {
        return dni;
    }

    // Metodo mutador o Setterr
    public void setDni(int dni) {
        this.dni = dni;
    }
```

+ Método accesor-(Getter) -> Consultar
+ Método mutador-(Setterr) -> Modificar
