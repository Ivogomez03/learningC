/*--------------------------------------------------------------------------------------------------
*
* Escribe un programa que toma horas y minutos como input y luego imprime el total de minutos:
* 	1 hora 30 minutos = 90 minutos
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int horas;

int minutos;

int minutosTotales; /* horas y minutos convertido a minutos */

char line[100];

int main(){	
	
	printf("Ingresa las horas separados de los minutos: ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%d %d",&horas,&minutos);

	minutosTotales = horas *60 + minutos;
	

	printf("Las horas y minutos ingresadas son en total %d minutos.\n",minutosTotales );
	
	return 0;
}
