/********************************************************************
 * Ejercicio 7-3                     							  *
 *                                                                *
 * Autor: Ivo Gómez Enrico										*
 * github: https://www.github.com/Ivogomez03                       *                         		
 *                                                               *
 * Una linea de transmisión en serie puede transmitir 960          *
 * caracteres por segundo.                                        *
 * Escribir un programa que dado el tamaño de un archivo calcule   *
 * el tiempo requerido para que sea enviado                   	*           
 *                                                                *
 * Como restricción propia solo puedo usar los conceptos aprendidos *
 * hasta el capitulo del libro del ejercicio dado.                 *
 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* 1 caracter = 1 byte , se transmite 960 bytes cada segundo*/

int tamaño; /* tamaño del archivo */
int unidad; /* numero que representa la unidad del tamaño del archivo */
long long int tiempo; /* tiempo que demanda el archivo en ser enviado */
long int tiempoUnidades[] = {60,3600,86400,2678400}; /* si el tiempo es mayor a 60, se imprime en minutos, si es mayor a 3600, se imprime en horas
														, si es mayor a 86400 en dias, y si es mayor a 2592000 en meses.*/

char linea[80]; /* input buffer */

int main(){
	
	bool seguir = 1;
	
	while(seguir){

		printf("Ingresa la unidad del tamaño del archivo:\n 1- bits\n 2- bytes\n 3- KB\n 4- MB\n 5- GB\n 6- TB\n 0- Salir\n");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d",&unidad);

		if(!unidad){
			seguir = 0;
		}
		else if(unidad < 0 || unidad > 6){
			printf("Unidad invalida, elija otra vez.\n");
		}
		else {

			printf("Ingrese el tamaño del archivo: \n");

			fgets(linea,sizeof(linea),stdin);
			sscanf(linea, "%d",&tamaño);

			/* paso a bytes el tamaño y a partir de ahi calculo el tiempo */

			if(unidad == 1){
				tiempo = (tamaño / 8) / 960;
			}
			if(unidad == 2){
				tiempo = tamaño/960;
			}
			if(unidad == 3){
				tiempo = (tamaño * 1024) / 960;
			}
			if(unidad == 4){
				tiempo = (tamaño * 1024 * 1024) / 960;
			}
			if(unidad == 5){
				tiempo = (tamaño  * 1024 * 1024 * 1024) / 960;
			}
			if(unidad == 6){

				tiempo = ((long long int)tamaño * 1024 * 1024 * 1024 * 1024) / 960;
			}

			/* imprimo el tiempo en las unidades correspondientes */
			
			if(tiempo < tiempoUnidades[0]){
					printf("El archivo demora %d segundos en ser enviado.\n",tiempo);
			}
			else if(tiempo < tiempoUnidades[1]){

				int segundos = tiempo % 60;
				tiempo /= 60;

				printf("El archivo demora %d",tiempo);
				printf("minutos y %d segundos en ser enviado.\n", segundos);
			}
			else if(tiempo < tiempoUnidades[2]){
					
				int minutos = (tiempo % 3600)/60;
				int segundos = tiempo % 60;
				printf("%d\n",segundos);
				tiempo /= 3600;

				printf("El archivo demora %d",tiempo);
				printf(" horas, %d minutos y %d segundos en ser enviado.\n", minutos,segundos);

			}
			else if(tiempo < tiempoUnidades[3]){

				int horas = (tiempo%86400) / 3600;
				tiempo /= 86400;

				printf("El archivo demora %d dias",tiempo);
				printf(" y %d horas en ser enviado.\n", horas);

			}
			else{

				int dias = (tiempo % tiempoUnidades[3]) / 86400;

				tiempo /= tiempoUnidades[3];

				printf("El archivo demora %d meses",tiempo);
				printf(" y %d dias en ser enviado.\n", dias);
			}

		
		}
			


	}

	return 0;
}