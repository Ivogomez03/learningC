/********************************************************************
 * Ejercicio 7-6                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										*
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escribir un programa que cuente la cantidad positivos y negativos *
 * de una serie de numeros.                                      	*
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float numero; /* representa cada numero que se ingresa */

int cantidadPositivos; /* representa la cantidad de positivos en la serie */

int cantidadNegativos; /* representa la cantidad de negativos en la serie */

char linea[100]; /* input buffer */

int main(){
	
	bool seguir = 1;

	while(seguir){
		
		cantidadNegativos=0;
		cantidadPositivos=0;

		printf("Ingrese la serie de numeros, cada uno separado por un salto de linea, 0 para terminar:\n");

		while(1){

			fgets(linea,sizeof(linea),stdin);
			sscanf(linea, "%f",&numero);

			if(numero > 0)
				++cantidadPositivos;
			if (numero < 0)
				++cantidadNegativos;
			if(numero == 0)
				break;
		}
		

		printf("La cantidad de positivos es %d y la cantidad de negativos es %d .\n",cantidadPositivos,cantidadNegativos);

		printf("Ingrese 1 para continuar o 0 para salir: ");
	 	fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d",&seguir);


	}

	printf("Gracias por utilizar mi programa.\n");

	return 0;
}