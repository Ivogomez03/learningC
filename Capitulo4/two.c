#include <stdio.h>

/* variable para resultados computacionales */

int answer;

int main(){
	answer = 2 + 2;
	
	printf("The answer is %d\n");
	return 0;
}
/*----------------------------------------------------------------------------------------------
*
*
* Pregunta: ¿Porque la respuesta que se imprime no es la esperada?
* Según el libro es porque claramente no se paso un argumento a la función printf, y C 
* "construye un parametro". Segun los conocimientos que obtuve de reverse engineering y exploit
* development, %d va a tomar el valor almacenado en el tope de la pila.
*
----------------------------------------------------------------------------------------------*/