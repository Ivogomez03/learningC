/********************************************************************
 * Ejercicio 8-5                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										   *
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escriba un programa que lea un caracter e imprime si es vocal   *
 * o consonante.                                                   * 
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char caracter; /* input buffer */

int main(){
	bool seguir = 1;

	while(seguir){
		printf("Ingrese el caracter o 0 para salir: ");

		scanf(" %c",&caracter);

		if(caracter == 48){
			seguir = 0;
			printf("Gracias por utilizar mi programa.\n");
			continue;
		}

		if(caracter < 'A' || (caracter > 'Z' && caracter < 'a') || caracter > 'z'){
			printf("Caracter inválido, intentelo de vuelta.\n");
			continue;
		}

		switch(caracter){
		case 'a': case 'e': case 'i': case'o': case 'u':
		case 'A': case 'E': case 'I': case'O': case 'U':
			printf("Vocal.\n");
			break;
		default:
			printf("Consonante.\n");
			break;
		}
	}

	return 0;
}