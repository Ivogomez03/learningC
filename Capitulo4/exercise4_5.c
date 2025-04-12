/*--------------------------------------------------------------------------------------------------
*
* Escribir un programa que comete lo siguientes errores:
* 	Imprime un flotante usando la conversion %d 
* 	Imprime un entero usando la conversion %f
* 	Imprime un caracter usando la conversion %d
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

float flotante;
char caracter;
int entero;

int main(){	
	
	entero = 3;
	flotante = 1.5;
	caracter = 'A';

	printf("El punto flotante es: %d\n",flotante );
	printf("El entero es: %f\n",entero );
	printf("El caracter es: %d\n",caracter );
	
	return 0;
}