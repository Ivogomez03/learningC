/********************************************************************
 * Ejercicio 7-2                     							  *
 *         
 * Autor: Ivo Gómez Enrico										*
 * github: https://www.github.com/Ivogomez03                       *                         		*
 * 
 * Escribir un programa que realice calculos aritmeticos      		*
 * con fechas, como cuantos dias hay entre el 6/6/90 y el 3/4/92	*
 * Restricciones: 
 * 	- Hay 31 dias en todos los meses.							 *
 * 	- No hay años bisiestos.										*

 *******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dia1; /* dia de la fecha 1 */
int mes1; /* mes de la fecha 1 */
int año1; /* año de la fecha 1 */
int diasDesdeOrigen1; /* cantidad de dias de la fecha1 desde el origen */

int dia2; /* dia de la fecha 2 */
int mes2;/* mes de la fecha 2 */
int año2; /* año de la fecha 2 */
int diasDesdeOrigen2; /* cantidad de dias de la fecha2 desde el origen */


int dias; /* cantidad de dias entre las 2 fechas */

char linea[80]; /* input buffer */

int main(){
	
	bool seguir = 1;

	while(seguir){
		
		printf("Ingresa la fecha 1 con el siguiente formato DD/MM/AAAA: ");
		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d/%d/%d",&dia1,&mes1,&año1);

		/* valido dia, mes y año */

		if( dia1 < 1 || dia1 > 31 || mes1 > 12 || mes1 < 1 || año1 < 1){
			printf("La fecha 1 es inválida, prueba otra vez.\n");
			continue;
		}

		printf("Ingresa la fecha 2 con el siguiente formato DD/MM/AAAA: ");
		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d/%d/%d",&dia2,&mes2,&año2);

		/* valido dias, mes y año */

		if( dia2 < 1 || dia2 > 31 || mes2 > 12 || mes2 < 1 || año2 < 1){
			printf("La fecha 2 es inválida, prueba otra vez.\n");
			continue;
		}

		diasDesdeOrigen1 = año1 * 12 * 31 + (mes1-1)*31 + dia1;
		diasDesdeOrigen2 = año2 * 12 * 31 + (mes2-1)*31 + dia2;

		if(diasDesdeOrigen1 > diasDesdeOrigen2){
			printf("Hay %d dias entre las 2 fechas.\n",(diasDesdeOrigen1 - diasDesdeOrigen2));
		}
		else{
			printf("Hay %d dias entre las 2 fechas.\n",(diasDesdeOrigen2 - diasDesdeOrigen1));
		}

		printf("Si desea salir ingrese 0, sino 1: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d", &seguir);


	}

	return 0;
}