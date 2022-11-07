/*
	- Autor: 		rkatins
	- Correo: 		katinsruben.98@gmail.com
	- Descripcion: 	Ejemplo sencillo para ver el condicional IF
*/

#include <stdio.h>

int main() {
	float alturaRuben = 1.69;	// Declarmos e inicilizamos una varible
	float alturaMari = 1.65;	// Declarmos e inicilizamos una varible
	// Usaremos estas dos variables para compararlas en un IF
	
	if (alturaRuben < alturaMari){
		printf("Ruben es mas bajito que Mari");	// -> Caso verdadero
	}else {
		printf("Ruben es mas alto que Mari");	// -> Caso falso
	}
	/*
	Un condicional IF siempre va a tener como minimo un caso verdadero,
	el cual se va a realizar si se cumple la condicion, lo mismo pasaria
	si se indica un caso ELSE o caso "falso".
	Podriamos decir que un IF te hace decidir entre dos caminos (a no ser que
	se haga un ELSE IF)
	*/

	return 0;
}

