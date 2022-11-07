/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Condicional IF, en este ejemplo vemos como usar la condicion IF
					para determinar diferentes resultados dependiendo de la nota
*/

#include <stdio.h>

int main() {
	float notaAlumno;	
	
	printf("Dame una nota del alumno \n");
	scanf("%f", &notaAlumno);
		
	if (notaAlumno < 5) {
		printf("El alumno esta suspenso\n");
	}else if (notaAlumno >= 5 && notaAlumno <= 6) {
		printf("El alumno esta aprovado por los pelos\n");
	}else if (notaAlumno > 6 && notaAlumno < 7) {
		printf("El alumno tiene un bien\n");
	}else if (notaAlumno >= 7 && notaAlumno < 9) {
		printf("El alumno tiene un notable\n");
	}else if (notaAlumno >= 9 && notaAlumno <= 10) {
		printf("El alumno tiene un sobresaliente\n");
	}
	/*
	 En las lineas anteriores vemos la estructura de un IF-ELSE IF,
	 esto es en reumen que dependiendo de algo que se compara
	 (En este caso el numero de la nota de un alumno), le repondermos 
	 de una forma diferente dependiendo del valor que comparemos.
	*/
	return 0;
}
