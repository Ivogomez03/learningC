/*--------------------------------------------------------------------------------------------------
*
* Calcular el perimetro de un rectangulo:
* 	Perimetro = 2* (ancho + largo)
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

double ancho; /* ancho del rectangulo */

double largo; /* largo del rectangulo */

double perimetro; /* perimetro del rectangulo */

char line[100];

int main(){	
	
	printf("Ingresa el ancho separado del largo del rectangulo: ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%lf %lf",&ancho,&largo);

	perimetro = 2.00 * (ancho + largo);
	

	printf("El perimetro del rectangulo es: %f\n",perimetro );
	
	return 0;
}


/* --------------------------------------------------
* %lf es una conversion de double solo para scanff
* para convetir un double en printf, segun un usuario 
* de stackoverflow, hay que usar *f
---------------------------------------------------*/