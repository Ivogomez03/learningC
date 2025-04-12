/*--------------------------------------------------------------------------------------------------
*
* Escribe un programa que toma minutos como input y luego imprime el total de horas y minutos:
* 	90 minutos = 1 hora 30 minutos
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int horas;

int minutos;

int minutosTotales; /* minutos a convertir */

char line[100];

int main(){	
	
	printf("Ingresa los minutos a convertir: ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%d",&minutosTotales);
	horas = minutosTotales / 60;

	minutos = minutosTotales - horas*60;
	

	printf("%d minutos son %d horas %d minutos.\n",minutosTotales,horas,minutos );
	
	return 0;
}
/*--------------------------------------------------------------------------------------------------------
* Podria usar condicionales para que cuando las horas sean 0 o 1, imprimir con las palabras apropiadas.
* pero los condiciones se ven en los siguientes capitulos del libro asi que preferi hacer el programa con
* lo que se vio hasta ahora.
--------------------------------------------------------------------------------------------------------*/