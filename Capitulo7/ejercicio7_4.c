/********************************************************************
 * Ejercicio 7-4                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										*
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * Escribir un programa que agregue un impuesto sobre las ventas
 * del 8% a un monto dado y redondear al centavo mas cercano.      	*
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float monto; /* monto de las ventas */

char linea[80]; /* input buffer */

int main(){
	
	bool seguir = 1;

	while(seguir){
		
		printf("Ingrese el monto o 0 para salir: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%f",&monto);

		if(monto < 0){
			printf("Monto inválido, intentelo de vuelta.\n");
			continue;
		}
		if(!monto){
			seguir = 0;
			printf("Gracias por utilizar mi programa.\n");
			continue;
		}

		monto *= 1.08;

		printf("El monto total es $%.2f \n",monto);



	}

	return 0;
}