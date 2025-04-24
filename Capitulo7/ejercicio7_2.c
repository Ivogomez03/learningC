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

int dia1;
int mes1;
int año1;

int dia2;
int mes2;
int año2;

int dias;

char linea[80]; /* input buffer */

int main(){
	
	
	while(1){
		printf("Ingresa la fecha 1 con el siguiente formato DD/MM/AAAA: ");
		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d/%d/%d",&dia1,&mes1,&año1);

		printf("Ingresa la fecha 2 con el siguiente formato DD/MM/AAAA: ");
		fgets(linea,sizeof(linea),stdin);
		sscanf(linea, "%d/%d/%d",&dia2,&mes2,&año2);

		if(año1> año2)
			dias = (año1 - año2)*365 + (mes1*31 - mes2*31) + dia1 -dia2;
		else if(año1 == año2 && mes2 > mes1 )
			dias = (mes2 - mes1)*31 + dia2 - dia1;
		else if(año1 == año2 && mes2 < mes1 )
			dias = (mes1 - mes2)*31 + dia1 - dia2;
		else if(año1 == año2 && mes2 == mes1 && dia2 > dia1)
			dias = dia2 - dia1;
		else if(año1 == año2 && mes2 == mes1 && dia2 <= dia1)
			dias = dia1 - dia2;
		else if(año1 < año2)
			dias = (año2 - año1)*365 + (mes2*31 - mes1*31) + dia2 -dia1;

		printf("Hay %d dias entre las 2 fechas.\n",dias);


		


	}

	return 0;
}