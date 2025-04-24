/********************************************************************
 * Ejercicio 7-5                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										*
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escribir un programa que diga si un numero es primo.         *
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int numero;

char linea[80]; /* input buffer */

int main(){
	
	bool seguir = 1;

	while(seguir){
		
		printf("Ingrese el numero o 0 para salir: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d",&numero);

		if(numero < 0){
			printf("Número inválido, intentelo de vuelta.\n");
			continue;
		}
		if(!numero){
			seguir = 0;
			printf("Gracias por utilizar mi programa.\n");
			continue;
		}

		if(numero == 2){
			printf("2 es primo.\n");
			continue;
		}
		if (numero == 3){
			printf("3 es primo.\n");
			continue;
		}
		if (numero % 2 == 0){
			printf("El numero %d no es primo\n",numero );
			continue;
		}

		int divisor = 3;
		bool bandera = 1;


		while(bandera && divisor <= sqrt(numero)){
			if(numero % divisor == 0){
				printf("El numero %d no es primo.\n",numero );
				bandera = 0;
			}
			divisor+=2;
		}

		if(bandera)
			printf("El numero %d es primo.\n",numero );



	}

	return 0;
}