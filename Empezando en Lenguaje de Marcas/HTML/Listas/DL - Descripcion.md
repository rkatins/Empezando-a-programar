# Listas de descripción <dl> ... </dl>

Esta forma de listar elementos se caracteriza por mostrar pares de términos y sus descripciones, como en un glosario o una lista de preguntas frecuentes (FAQ). A diferencia de las listas ordenadas y desordenadas, no se utilizan números ni viñetas.

Cada término se indica con la etiqueta <dt> ... </dt> (definition term), y su descripción correspondiente se indica con la etiqueta <dd> ... </dd> (definition description). El orden de los términos y descripciones es importante, ya que cada término debe ir seguido de su descripción.

Etiquetas
* `<dl>` (Description List): Define la lista de descripción completa.
* `<dt>` (Definition Term): Define el término a describir.
* `<dd>` (Definition Description): Define la descripción del término correspondiente.

Nota: No se suele aplicar la propiedad `list-style-position en listas de descripción, ya que los navegadores suelen mostrar las descripciones (<dd>) con una sangría automática para distinguirlas de los términos (<dt>).

## Estructura
```
	<dl>
	    <dt>Tiburón Blanco</dt>
		    <dd>
		        Descripcion: El tiburón blanco (Carcharodon carcharias) es uno de los depredadores marinos más grandes y conocidos.
		    </dd>
	    <dt>Tiburón Tigre</dt>
		    <dd>
		        Descripcion: El tiburón tigre (Galeocerdo cuvier) es otro gran depredador marino conocido por sus rayas oscuras verticales ...
	    </dd>
	</dl>
```
