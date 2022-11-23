## Condicional o Comparador
---
### Condicional o Comparador ¿Qué es?
Antes de empezar a explicar que es un condicional o comparador IF, resumiendo rapidamente podemos decir que un IF es como hacer una pregunta que se puede dividir en uno o mas caminos, *__SIEMPRE__* minimo un camino.

```
		SI Rubén es mas alto que Mari
			Haz esto -> Caso verdadero
		SI NO
			Haz esto -> Caso falso
			
```

En este ejemplo se puedn ver dos caminos, el caso falso solo se escribira en el caso que se quiera hacer algo especifico, de lo contraio las instrucciones/código seguira su curso.

---
---

#### IF 
Sintaxis (Como se escribe):
```
		if(condicion){
			código/instrucciones -> Caso verdadero
			(Es verdadero en cuestion de lo comparado)
		}else{
			código/instrucciones -> Caso falso 
			(Es falso en cuestion de lo comparado)
		}
```

Unas cosas a explicar de la sintaxis de los IF:

condicion -> Hace referencia a aquello que se le pregunta, se indica con caractertes aritmeticos como:

```
!= -> Distinto de
== -> Igual que
>= -> Mayor igual que
<= -> Menor igual que
<  -> Menor que
>  -> Mayor que
```
En resumen podriamos decir que IF lo podemo usar para compara cosas.

---

#### IF-ELSE IF 
Sintaxis (Como se escribe):
```
		if (condicion) {
			código/instrucciones -> Caso verdadero
		}else if (condicion2) {
			código/instrucciones -> Caso intermedio
		}else {
			código/instrucciones -> Caso falso
		}
```

Unas cosas a explicar de la sintaxis de los IF:

condicion y condicion2 -> Hace referencia a aquello que se le pregunta, se indica con caractertes aritmeticos como:

```
!= -> Distinto de
== -> Igual que
>= -> Mayor igual que
<= -> Menor igual que
<  -> Menor que
>  -> Mayor que
```

En este ejemplo de un IF-ELSE IF, vemos tres posibles caminos (se pueden poner tantos ELSE IF como un quiera y casos diferentes requira el programa).  Imaginemos que en este caso le hemos indicado una nota, si esta nota cumple la primera condicion, la realiza y no continua pasando por el reto de condiciones/comprovantes, en el caso de no cumplir la condicion pasa al siguiente el cual le indica una segunda condicion, en caso de cumplirla la realiza, en caso de que no la cumpla pasa a la siguiente y asi sucesivamente.

__IMPORTANTE:__ En el caso que queramos comparar una cadena de caracteres o String, deberemos hacer uso de la funcion strcmp() la cual devolvera un valor.
+ < 0 -> Las cadena de caracteres son diferentes, la primera va antes que la segunda.
+ = 0 -> Las cadena de caracteres son iguales.
+ < 0 -> Las cadena de caracteres son diferentes, la segunda va antes que la primera.
