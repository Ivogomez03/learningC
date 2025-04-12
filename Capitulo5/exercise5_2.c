/*--------------------------------------------------------------------------------------------------
*
* Calcular el volumen de una esfera:
* 	Volumen = 4/3 * pi * r ^ 3
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

double radio; /* radio de la esfera */

const double pi = 3.141592; /* numero pi */

double volumen; /* volumen de la esfera */

char line[100];

int main(){	
	
	printf("Ingresa el radio de la esfera: ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%lf",&radio);

	volumen = (4.00/3.00) * pi * radio * radio * radio;
	

	printf("El volumen de la esfera es : %f\n",volumen );
	
	return 0;
}


/* --------------------------------------------------
* %lf es una conversion de double solo para scanff
* para convetir un double en printf, segun un usuario 
* de stackoverflow, hay que usar *f
---------------------------------------------------*/