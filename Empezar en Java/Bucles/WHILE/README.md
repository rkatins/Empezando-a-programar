## WHILE
El WHILE lo podemos usar para cosas que queramos que serpitan indefinidamente mientras coincida o mejor dicho que ejecute el codigo de su interior un numero indefinido de veces el cual no sabemos, si conocemos este numero de veces que queremos que se haga es recomendable usarr un FOR aunque tambien se puede hacer con un WHILE declarando e inicializando una varaiable que se encargue de sumar en uno el valor cada vez que se da una vuelta. Si lo leemos para comprenderlo mejorr seria, da vueltas mientras que la variable contador sea menor o igual a 10.

```
		int contador = 0;

		while(contador <= 10){
			System.out.printl("Vamos por la vuelta: " + contador);
			contador++;					
		}

		// Al poner i++ incrementamos en uno su valor en uno cada vez que este llega al final del recorrido.
		// Si llega al fial del recorrido significa que ha dado una vuelta.
```
