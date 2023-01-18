# Variables primitivas
Al igual que en muchos lenguajes de programación tenemos los siguientes tipos de variables:

+ int -> numeros enteros
+ float -> numeros decimales
+ double -> numeros decimales (mas largos)
+ char -> caracter
+ byte -> un digito
+ long -> numero entero (mas largo)
+ short -> numero entero (mas corto)
+ boolean -> solo dos valores (true/false)
+ String -> cadena de caracteres

A diferencia de lenguajes como C o C++, no hay que hacer un array de char para introducir una cadena de caracteres, en java tenemos por ejemplo la "varible" String (que sei nos ponemos muy tecnicos no es una variable como tal, si no una clase, sabemos que es una clase porque su caracter inicial está escrito en mayusculas)

### EXTRA
PD: Por asi decir todas las variables derivan de una clase, por eso haciendo uso de una varible se puede acceder como si esta fuera un objeto, poniendo "." podemos acceder a metodos o a la informacion de estos.

Ej:
Accediendo a una variable array usando el "." podemos obtener la longitud de este.
```  
nombreArray.length
```

Esto por ejemplo nos puede servir al hacer un bucle FOR para recorrer la longitud del array.
```
  for (int i = 0; i < nombreArray.length; i++) {
	  Sytem.out.printl(nombreArray[i])		
  }
```
