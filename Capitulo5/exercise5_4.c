/*--------------------------------------------------------------------------------------------------
*
* Convertir kilometros por hora a millas por hora:
* 	millas = kilometros * 0.6213712
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

double kilometros; /* kilometros por hora */

const double cte = 0.6213712; /* constante por la cual hay que multiplicar para pasar los kilometros a millas */

double millas; /* millas por hora */ 

char line[100];

int main(){	
	
	printf("Ingresa los kilometros por hora: ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%lf",&kilometros);

	millas = cte * kilometros;
	

	printf("%f kilometros por hora son %f millas por hora.\n",kilometros,millas );
	
	return 0;
}


/* --------------------------------------------------
* %lf es una conversion de double solo para scanff
* para convetir un double en printf, segun un usuario 
* de stackoverflow, hay que usar *f
---------------------------------------------------*/