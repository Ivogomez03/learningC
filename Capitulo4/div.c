#include <stdio.h>

float result; /* resultado de la division */

int main(){
	
	result = 7.0 / 22.0;

	printf("The result is %d\n", result );
	return 0;
}

/*----------------------------------------------------------------------------------------------
*
*
* Pregunta: ¿Porque el resultado que se imprime no es el esperado?
* Es porque %d espera un parametro de tipo entero, al pasarse un decimal, se producen 
* resultados inesperados.
*																							   
----------------------------------------------------------------------------------------------*/