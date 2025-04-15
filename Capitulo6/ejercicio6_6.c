/*--------------------------------------------------------------------------------------------------
*
* Dadas las horas trabajadas por un empleado y el salario por hora, calcular su salario semanal.
* Las horas que excedan de 40 horas se consideraran horas extras a tiempo y medio.
*
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

char linea[1000];

int horas; /* horas trabajadas por el empleado */

float salarioPorHora;

int horasExtras;


int main(){	
	
	while(1){
		printf("Ingresa las horas trabajadas y el salario por hora separados por un espacio, o 0 en cualquiera de las 2 para salir: ");

		fgets(linea,sizeof(linea),stdin);

		sscanf(linea, "%d %f", &horas,&salarioPorHora);

		if ( horas == 0 || salarioPorHora == 0)
			break;
		if ( horas < 0 || salarioPorHora < 0){
			printf("Ingrese horas y salarios mayores o iguales a 0(para salir).\n");
			continue;
		}

		horasExtras = horas - 40;

		if(horasExtras > 0){
			printf("El salario semanal es %f\n",(horas*salarioPorHora + horasExtras*salarioPorHora*1.5));
		}
		else printf("El salario semanal es %f\n",(horas*salarioPorHora));
		
		
		
	}
	

	return 0;
}