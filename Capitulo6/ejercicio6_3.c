/*--------------------------------------------------------------------------------------------------
*
* Un profesor genera calificaciones con letras, dada una calificacion numerica imprimir la letra.
* 0-60 -->   F
* 61-70 -->  D
* 71-80 -->  C
* 81-90 -->  B
* 91-100 --> A
* 
* Imprimir + o - despues de la letra, basado en el ultimo digito del puntaje.
* Nota: Una F es solamente una F. No hay F+ o F-
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char linea[1000];

int calificación;
int ultimoDigito; /* ultimo digito de calificacion */
int main(){	
	
	while(1){
		printf("Ingresa la calificación númerica o -1 para salir: ");

		fgets(linea,sizeof(linea),stdin);

		sscanf(linea, "%d", &calificación);
		
		ultimoDigito = calificación % 10;

		if(calificación == -1)
			break;


		else if(calificación >= 0 && calificación <= 60){
			printf("La calificación es F\n");
			continue;
		}
		else if(calificación > 60 && calificación <= 70)
			printf("La calificación es D");
		else if(calificación > 70 && calificación <= 80)
			printf("La calificación es C");
		else if(calificación > 80 && calificación <= 90)
			printf("La calificación es B");
		else if(calificación > 90 && calificación <= 100)
			printf("La calificación es A");
		else {
			printf("El número ingresado no es válido.\n");
			continue;
		}
		
		if(ultimoDigito > 0 && ultimoDigito < 4)
			printf("-\n");
		if(ultimoDigito > 3 && ultimoDigito < 8)
			printf("\n");
		if(ultimoDigito > 8 || ultimoDigito == 0)
			printf("+\n");
		
	}
	

	return 0;
}