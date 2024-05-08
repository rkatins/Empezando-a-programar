# GROUP BY
Podremos esntender por su nombre que sirve para agrupar.

Para poder usar el `GRPOU BY`, se debe cumplir al menos una de las siguientes columnas de la tabla indicada en la sentencia `SELECT`:
* Una constante
* Una función de grupo (SUM, CONT, AVG, …)
* Una columna expresada en el GROUP BY
(Este ultimo caso es un poco innecesario debido a que no es expresamente neceserio, podemos indicar la columna solo por ver de una manera mas grafrica la agrupacion)

PD: Con constante nos referimos a un valor el cual nunca cambiara, pues este lo podemos usar para indicar algo por lo que agrupar.
EJ.: tenemos una columna que indica valor M o F, como este noo cambia lo podemos usar como "columna identificadora" para separar por grupos.
```
	SELECT nombre, sexo
	FROM alumnos
	GROUP BY sexo;
```

PD: No es necesario siempre poner la instruccion `GROUP BY` al hacer una sentencia `SELECT`