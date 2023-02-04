## FOR

Sintaxis (Como se escribe):
```
		  int i; // Declarar variable i
		  
		  for(i = asignar_valor_i; i < 10; i++){
		  	código/instrucciones
		  }
```

En resumen podriamos decir que podemos usar este bucle cuando conocemos una longitud (es decir va a dar un numero determinado de vueltas, el cual deberemos indicar en el segundo "apartado" del FOR, este biene indicado por "punto y coma").

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

---
*PD: Podramos pensar que el bucle WHILE y el bucle DO-WHILE son iguales, la diferencia entre esto es que el bucle DO-WHILE simpre se vas a ejecutar minimo una vez si o si.*

---

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
