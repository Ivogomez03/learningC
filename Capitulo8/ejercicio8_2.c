/********************************************************************
 * Ejercicio 8-2                     							  *
 *         														  *
 * Autor: Ivo Gómez Enrico										   *
 * github: https://www.github.com/Ivogomez03                       *                     
 * 																  *
 * La resistencia total de n resistores en paralelo es:          *
 * 1/R = 1/R1 + 1/R2 + ... + 1/Rn                                  *
 * Escribir un programa que calcule la resistencia total para n   * 
 * resistores en paralelo                                        *
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int numeroDeResistores; /* numero de resistores en paralelo */
double resistor; /* corresponde a la potencia de un resistor */
char linea[80]; /* input buffer */
double resistenciaTotal; /* resistencia total de n resistores en paralelo */

int main(){
	bool seguir = 1;

	while(seguir){
		printf("Ingrese la cantidad de resistores en paralelo o 0 para salir: ");
		
		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%d",&numeroDeResistores);

		if(numeroDeResistores == 0){
			seguir = 0;
			printf("Gracias por utilizar mi programa.\n");
			continue;
		}
		if(numeroDeResistores < 0){
			printf("Numero de resistores invalido, intentelo de vuelta.\n");
			continue;
		}



		resistenciaTotal = 0.00;

		for(int i = 0;i<numeroDeResistores;i++){
			printf("Ingrese la potencia del resistor %d: ",i+1);
		
			fgets(linea,sizeof(linea),stdin);
			sscanf(linea,"%lf",&resistor);

			resistenciaTotal += 1.00/resistor;
		}

		resistenciaTotal = 1/resistenciaTotal;

		printf("La resistencia total es: %f\n",resistenciaTotal);
	}

	

	return 0;
}