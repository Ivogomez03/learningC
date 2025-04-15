/*--------------------------------------------------------------------------------------------------
*
* Un año bisiesto es un año que es divisible por 4, excepto que el año sea divisible 
* por 100 y no por 400. Determinar si un año dado es bisiesto.
*
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

char linea[1000];

long int año;

int main(){	
	
	while(1){
		printf("Ingresa el año o -1 para salir: ");

		fgets(linea,sizeof(linea),stdin);

		sscanf(linea, "%ld", &año);

		if ( año == -1)
			break;
		if ( año < 0){
			printf("El año no es valido\n");
			continue;
		}
		if(año % 4 == 0){
			if(año % 100 == 0){

				if(año % 400 == 0)
					printf("El año %ld es bisiesto \n",año);
				else printf("El año %ld no es bisiesto \n",año);
			}
			else printf("El año %ld es bisiesto \n",año);
		}
		else printf("El año %ld no es bisiesto \n",año);
		
		
		
	}
	

	return 0;
}