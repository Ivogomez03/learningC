/*--------------------------------------------------------------------------------------------------
*
* Un profesor genera calificaciones con letras, dada una calificacion numerica imprimir la letra.
* 0-60 -->   F
* 61-70 -->  D
* 71-80 -->  C
* 81-90 -->  B
* 91-100 --> A
*
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char linea[1000];

int calificación;

int main(){	
	
	while(1){
		printf("Ingresa la calificación númerica o -1 para salir: ");

		fgets(linea,sizeof(linea),stdin);

		sscanf(linea, "%d", &calificación);
		
		if(calificación == -1)
			break;

		else if(calificación >= 0 && calificación <= 60)
			printf("La calificación es F\n");
		else if(calificación > 60 && calificación <= 70)
			printf("La calificación es D\n");
		else if(calificación > 70 && calificación <= 80)
			printf("La calificación es C\n");
		else if(calificación > 80 && calificación <= 90)
			printf("La calificación es B\n");
		else if(calificación > 90 && calificación <= 100)
			printf("La calificación es A\n");
		else printf("El número ingresado no es válido.\n");
		
	}
	

	return 0;
}