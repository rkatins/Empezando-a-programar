# Variables primitivas
Al igual que en muchos lenguajes de programación tenemos los siguientes tipos de variables:

+ int -> numeros enteros
+ float -> numeros decimales
+ double -> numeros decimales (mas largos, parecido a un float)
+ char -> caracter
+ char[n] -> cadena de caracteres

Podremos ver el valor de nuestras variables haciendo uso de la funcion *printf()*.

+ Para usar printf(Solo mostrar mensaje) es de la siguiente manera:
```
	int main() {
		printf("Hola Mundo\n");	// Esto imprime hola mundo por pantalla
   
    		return 0; 
  	}
```
---
+ Para usar printf(mensaje con variables) es de la siguiente manera:
  Cada variable se escribe en su orden de aparicion dentro de los parentesis de la funcion *printf()*
  despues de escribir el mensaje tras una coma, para separar en dos partes, es decir mensaje por un lado
  y variables por el otro (si existen mas de una variable estas se separn por comas entre si)
	+ int -> %i o %d
	+ float -> %f (%.c -> Elimina los decimales en la visualizacion, %.nf (n es un numero indeterminado) mostrará tantos decimales como el numero antes de la f)
	+ double -> %d o %f numeros decimales (mas largos, parecido a un float si se quiere modificar la cantidad de decimales)
	+ char -> WIP
	+ char[n] -> WIP
```
	int main() {
		float peso = 65.45;
		float altura = 1.69;
	
		printf("Me llamo Ruben, peso: %.2f kg, mido %.2f m", peso, altura);
   
    		return 0; 
  	}
```
