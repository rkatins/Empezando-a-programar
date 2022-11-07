/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Condicional IF, en este ejemplo vemos como usar la condicion IF
					para determinar diferentes resultados dependiendo de la nota
*/

#include <stdio.h>

int main() {
	int numeroIntroducido;
	
	printf("Dime la nota del alumno");
	scanf("i%", &numeroIntroducido);
	
	
	if (numeroIntroducido <= 6 && numeroIntroducido > 0) {
		printf("Numero de 0-6");
	}else if (numeroIntroducido >= 7 && numeroIntroducido <= 9) {
		printf("Continue");
	}else if (numeroIntroducido == 0) {
		printf("El numero es 0, no me sirve");
	}else if (numeroIntroducido > 9) {
		printf("El numero es mayor de 9");
	}
	
	if (numeroIntroducido%2 == 0) {
		printf("El numero me da igual, pero es par");
	}else {
		printf("El numero me da igual, pero es impar");
	}
	/*
	 En las lineas anteriores vemos un caso de IF anidado pero separado.
	 Este caso es parecido al de IF_Anidado-Separado pero en este caso tenemos dos IF,
	 es decir: al IF que esta abajo le da igual el resultado del IF de arriba,
	 no le va a afectar en su decision.
	*/
	return 0;
}
