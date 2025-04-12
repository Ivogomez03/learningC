/*--------------------------------------------------------------------------------------------------
*
* Escribir un programa que convierta Centigrados a Farenheit:
* 	F = 9/5 * C + 32
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

double centigrados; /* grados centigrados */
double farenheit; /* grados farenheit */
char line[100];

int main(){	
	
	printf("Ingresa grados Centigrados: ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%lf",&centigrados);

	farenheit = (9.00/5.00) * centigrados + 32;
	

	printf("Los grados Farenheit son : %f\n",farenheit );
	
	return 0;
}


/* --------------------------------------------------
* %lf es una conversion de double solo para scanff
* para convetir un double en printf, segun un usuario 
* de stackoverflow, hay que usar *f
---------------------------------------------------*/