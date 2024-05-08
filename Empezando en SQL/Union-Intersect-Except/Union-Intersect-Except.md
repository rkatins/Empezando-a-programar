# UNION, INTERSECT, EXCEPT
Ambos son diferentes entre si pero, pero tiene algo en comun que es juntar dos tablas en una misma columna.

## UNION
Combina los resultados de dos consultas. Obviando los duplicaddos, es decir que no muestra mas de una vez un mismo resultado, con que aparezca una vez ya le sirve pra mostrarlo.

PD: Dentro de `UNION` esxiste una ligera variacion que es `UNION ALL`, que hace lo mismo pero muestra los duplicados, el anterior los obviaba y este no.

## INTERSECT
Solo muestra aquellos que esten tanto en una columna como en la otra. Muestra los semejantes en ambas columnas.

## EXCEPT
Muy similar al anterior, pero en este caso a la inversa, es decir que solo mostrará los que no coinciden.

En el momento en el que un valor aparece en una columna y no en la otra, ya mostraria este valor.

**IMPORTANTE**: Si es cierto, que para este último caso es muy importante la "orientacion" que indiquemos. Se indicara a la izquierda la columna "principal", es decir que si no aparece en esta el valor es mostrado en el resultado devuelto.

---
![UNION, INTERSECT, EXCEPT](https://www.c-sharpcorner.com/article/the-complete-reference-set-operations-in-ms-sql-union-all-intersect-excep/Images/e6.png)

---

PD: En otros gestores de BD en vez de `except` podemos encontrar que se ponga `minus`.

<!-- Imagen obtenida de https://www.c-sharpcorner.com -->