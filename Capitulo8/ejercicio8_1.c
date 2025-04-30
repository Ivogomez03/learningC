/********************************************************************
 * Ejercicio 8-1                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										   *
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escribir un programa que imprima un tablero de ajedrez (una      *
 * cuadricula de 8x8) Cada casilla debe tener un tamaño de 5 c   *
 * caracteres de ancho por 3 de alto                               *
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(){
	for(int i = 0;i<8;i++){
		for(int j=0;j<8;j++){
			printf("+-----");
		}
		printf("+\n");
		for(int k = 0 ;k<3;k++){
			for(int j = 0;j<8;j++){
				printf("|     ");
			
			}
			printf("|\n");
		}
		
		
	}
	for(int i = 0;i<8;i++){
		printf("+-----");
	}
	printf("+\n");
	

	

	return 0;
}