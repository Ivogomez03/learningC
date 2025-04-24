/********************************************************************
 * Ejercicio 7-1                     						*
 *         
 * Autor: Ivo Gómez Enrico
 * github: https://www.github.com/Ivogomez03                                              		*
 * 
 * Escribir un programa que convierta unidades a metricas        *
 * (millas a kilometros, galones a litros, pulgadas a cm
 * libras a kg)      										*

 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double valor; /* unidad a metricas*/
int opcion; /* opcion a elegir para convertir valor a metrica */
char linea[80]; /* input buffer */

int main(){


	/* bandera para cortar el bucle */
	bool seguir = 1;

	while(seguir){
		printf("¿Que unidades quieres pasar?\n 1: millas - km \n 2: galones - litros \n 3: pulgadas - cm \n 4: libras - kg.\n 0: Salir \n");

		printf("Ingresa la opcion: ");


		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d",&opcion);

		if(opcion < 0 || opcion > 4){
			printf("Opcion no válida, prueba otra vez.\n");
			continue;
		}

		if(!opcion){
			seguir = 0;
			printf("Gracias por utilizar mi programa.\n");
			continue;
		}

		printf("Ingresa el valor a convertir con notación punto decimal: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%lf",&valor);



		if(opcion == 1)
			printf("%f millas son %f km\n",valor,valor*1.60934);
		if(opcion == 2)
			printf("%f galones son %f litros\n",valor,valor*3.785);
		if(opcion == 3)
			printf("%f pulgadas son %f cm\n",valor,valor*2.54);
		if(opcion == 4)
			printf("%f libras son %f kg\n",valor,valor*0.4536);
		
		
			
		
	}

	return 0;
}
