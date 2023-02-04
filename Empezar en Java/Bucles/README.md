# Bucles
Esto es muy parecio (por no ddecir iddentico) a muchos lenguajes de programacion, y podriamos decir que funciona igual en todos los caso (aunque varie un poco a la hora de escribir).

## FOR

Sintaxis (Como se escribe):
```
		  int i; // Declarar variable i
		  
		  for(i = asignar_valor_i; i < 10; i++){
		  	código/instrucciones
		  }
```

En resumen podriamos decir que podemos usar este bucle cuando conocemos una longitud (es decir va a dar un numero determinado de vueltas, el cual deberemos indicar en el segundo "apartado" del FOR, este biene indicado por "punto y coma").

Para que nos sea mas simple el entender el funcionamiento de un FOR "leamoslo" como si de un texto se tratara. -> Para la variable i con valor x; mientras que sea menor a 10; en cada vuelta que de sumas 1 a la variable i.

A diferencia de lenguajes de progrramacion como podria ser C, no es extrictamente necesario el declarar la variable i antes (o fuera del bucle, como mejor lo entendamos), esta varianle i la podremos declarar e inicializar dentro del propio bucle al escribirlo.
Sintaxis alternativa:
```
		for(int i = asignar_valor_i; i < 10; i++){
			código/instrucciones
		}
```

---

## WHILE

Sintaxis (Como se escribe):
```
		while(condicion){
			código/instrucciones
		}
```

En resumen podriamos decir que podemos usar este bucle cuando no conocemos una longitud (es decir va a dar un numero indefinido de vueltas de vueltas), las vueltas que da van a estar definidas *__MIENTRAS__* se cumpla la condicion indicada entre los parentesis.

PD: para evitar hacer un bucle infinito, deberemos SIEMPRE incrementar la varible con la que comparamos en el WHILE.

---

## DO WHILE

Sintaxis (Como se escribe):
```
		do{
			código/instrucciones
		}while(condicion);
```

En resumen podriamos decir que podemos usar este bucle cuando no conocemos una longitud (es decir va a dar un numero indefinido de vueltas de vueltas, pero siempre va a dar minimo una), las vueltas que da van a estar definidas *__MIENTRAS__* se cumpla la condicion indicada entre los parentesis.

PD: Podramos pensar que el bucle WHILE y el bucle DO-WHILE son iguales, la diferencia entre esto es que el bucle DO-WHILE simpre se vas a ejecutar minimo una vez si o si.

PD: Yo en mi caso, no soy partidario de usar el DO-WHILE simplemente porque lo comprendo mucho mejor haciendo un WHILE que hace lo mismo:
```
		System.out.println(Mensaje para la peticion de dato/condicion en un caso inicial);
		int introducido = sc.nextInt();sc.nextLine();

		while (introducido < 3 || introducido > 9) {            
			System.out.println(Mensaje para la peticion de dato/condicion en un caso en el que el anterior no cumpla la condicion indicada en el WHILE);
			introducido = sc.nextInt();sc.nextLine();
		}

		Código que se ejecutara una vez se cumpla la condicion del WHILE
```

Si nos ponemos muy tecnicos, con esta forma se repiten 2 lineas para volver a pedir los datos (o la condicion), por la cual se debe ejecutar el WHILE.

## IF 

(Se puede catalogar mejor como compardor o condicional)

Sintaxis (Como se escribe):
```
		if(condicion/comparador){
			código/instrucciones -> Caso verdadero
			(Es verdadero en cuestion de lo comparado)
		}else{
			código/instrucciones -> Caso falso 
			(Es falso en cuestion de lo comparado)
		}
		
```

En resumen podriamos decir que IF lo podemo usar para compara cosas mas que ser un bucle. El aprtado referente al ELSE es opcional, igual que sus variantes como podria ser el ELSE IF.    
