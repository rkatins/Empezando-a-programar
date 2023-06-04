# Array y ArrayList
Muy resumido son dos tipos de listas las cuales pueden contener un tipo. Se debe indicar el tipo que va almacenar.

## Array
Lista con una longitud definida, o un numero de datos finito que podemos almacenar.

Definición:
+ Declaracion sin asignacionde una longitud.
```
	String[] cars;
```

+ Se indica el numero de elemtentos que puede contener entre los corchetes depuest del igual.
```
	String[] cars = new String[4];
```

+ Se adapta al numero de elementos indicados al declararlo/inicializarlo, cada uno se guarda en la posicion en la que ha sido escrito, separado por comas. 
```
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
```

* Para indicar la posicion debemos tener en cuenta que se empieza a contar por el 0, haciendo uso del ejemplo anterior si queremos mostrar el String "BMW" deberemos indicar la posicion 1
```
	System.out.println(cars[1]);
	// Outputs BMW
```

* En el caso que queramos saber la longitud del array, podremos hacer uso de .length
```
	System.out.println(cars.length);
	// Outputs 4
```

## ArryList
Lista con una longitud indefinida, se adapta al contenido "añadiendo" o "quitando" a la longitud dependiendo del numero de datos que se almacenan, es "infinito" (puede almacenar un numero muy muy grande de cosas pero este tiene un limite, como las hojas de calculo de excel podriamos decir). Para hacer uso de una variable ArrayList deberemos importar el siguiente paquete -> ```import java.util.ArrayList;```

En este caso indicamos el tipo entre los primeros dimantes ```<>```.
* Definición:
```
	ArrayList<String> cars = new ArrayList<>();
```

* Para añadir nuevos atributos/elementos a nuestro ArrayList, haremos uso de .add, el cual siempre lo añadira al final de la lista en ese momento.
```
	cars.add("Volvo");
    cars.add("BMW");
    cars.add("Ford");
    cars.add("Mazda");
```

* Al igual que en unb Array, las posiciones empizanpor 0 -> 
```
	System.out.println(cars.get(0));
	// Outputs Volvo
```

* En el caso que queramos saber la longitud del array, podremos hacer uso de .size()
```
	System.out.println(cars.size());
	// Outputs 4
```

* Para borrar todos los elementos del ArrayList haremos uso de .clear()
```
	cars.clear();
```

* Para borrar un elemento que se encuentra en una posicion concreta del ArrayList,  haremos uso de remove(), indicando la posicion en el parametro del metodo remove()
```
	cars.remove(0);
```

* Podemos cambiar el valor de una posicion concreta, simepre y cuando sea del mismo tipo, haciendo uso de set(posicion, nuevo_valor)
```
	cars.set(0, "Opel");
```