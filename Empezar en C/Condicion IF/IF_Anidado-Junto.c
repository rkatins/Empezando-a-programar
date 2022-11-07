/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Condicional IF, en este ejemplo vemos como usar la condicion IF
					para determinar diferentes resultados dependiendo de la edad
*/

#include <stdio.h>
	
int main() {
	int numeroIntroducido;
	
	printf("Dame la edad del alumno");
	scanf("i%", &numeroIntroducido);
	
	if (numeroIntroducido < 18) {
		printf("El alumnno es menor de edad");
	}else {
		printf("El alumnno es mayor de edad");
		
		if (numeroIntroducido%2 == 0) {
			printf("La edad del alumno es un numero par");
		}else {
			printf("La edad del alumno es un numero impar");
		}
	}
	/*
	 En las lineas anteriores vemos un caso de IF anidado junto,
	 Este caso es parecido al de IF_Anidado-Separado pero en este caso
	 olo tenemos un IF con otro IF dentro. Esto nos hace saber que en
	 este caso si depende de lo que se haya dicho antes para mostrar un resultado
	*/
	return 0;
}
