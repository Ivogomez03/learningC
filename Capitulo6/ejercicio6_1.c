/*--------------------------------------------------------------------------------------------------
*
* Escribe un programa que encuentre el cuadrado de la distancia entre 2 puntos (para un programa
* mas avanzado halla la distancia real)
* 
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char linea[1000];

double punto1[2]; /* primer punto, la primera posicion corresponde a la posicion en X y la segunda a la posicion en Y */

double punto2[2]; /* segundo punto, la primera posicion corresponde a la posicion en X y la segunda a la posicion en Y */

double distancia;

double distanciaCuadrado;

int main(){	
	
	printf("Ingresa las posiciones en X e Y del primer punto separadas por un espacio: ");

	fgets(linea,sizeof(linea),stdin);

	sscanf(linea, "%lf %lf", &punto1[0], &punto1[1]);

	printf("Ingresa las posiciones en X e Y del segundo punto separadas por un espacio: ");

	fgets(linea,sizeof(linea),stdin);

	sscanf(linea, "%lf %lf", &punto2[0], &punto2[1]);

	distanciaCuadrado = ( (punto2[0] - punto1[0])*(punto2[0] - punto1[0]) + (punto2[1] - punto1[1])*(punto2[1] - punto1[1]) ); 
	
	distancia = sqrt( distanciaCuadrado );
	
	printf("La distancia de punto1( %f , %f ) a punto2( %f , %f ) es %f",punto1[0],punto1[1],punto2[0],punto2[1],distancia);
	
	return 0;
}