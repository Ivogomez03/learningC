/********************************************************************
 * Ejercicio 8-3                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										   *
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escriba un programa para promediar n numeros.                   * 
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long int n; /* cantidad de numeros */
double promedio; /* promedio de los n numeros */
char linea[80]; /* input buffer */

int main(){
	bool seguir = 1;

	while(seguir){
		printf("Ingrese la cantidad de numeros o 0 para salir: ");
		
		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%lld",&n);

		if(n == 0){
			seguir = 0;
			printf("Gracias por utilizar mi programa.\n");
			continue;
		}
		if(n < 0){
			printf("Cantidad de numeros invalida, intentelo de vuelta.\n");
			continue;
		}

		promedio = 0;

		for(int i = 0;i<n;i++){
			
			double numero;

			printf("Ingrese un numero de la serie: ");
		
			fgets(linea,sizeof(linea),stdin);
			scanf("%c",&caracter);

			promedio += numero;
		}

		promedio = promedio/n;

		printf("El promedio es: %f\n",promedio);
	}

	

	return 0;
}