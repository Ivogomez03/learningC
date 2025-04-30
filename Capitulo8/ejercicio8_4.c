/********************************************************************
 * Ejercicio 8-4                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										   *
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escriba un programa que imprima la tabla de multiplicar.         * 
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10; ++j){
				if((i+1) * (j+1) >= 10)
					printf("%d ", (i+1) * (j+1));
				else
					printf("%d  ", (i+1) * (j+1));
		}
		printf("\n");	
	}

	return 0;
}