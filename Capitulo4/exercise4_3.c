/*--------------------------------------------------------------------------------------------------
*
* Escribir un programa que calcule el perimetro y el area de un rectangulo, de 7,6cm de ancho
* y 12,7cm de alto. 
* 
* ¿Que cambios se deben realizar en el programa para que funcione con un rectangulo de 17,2cm 
* de ancho y 5,8 cm de alto?.
* 
* Plantie el programa para que solo haya que cambiar los valores del ancho y el alto del rectangulo.
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>

float ancho,alto,area,perimetro;

int main(){	
	ancho = 7.6;
	alto = 12.7;

	perimetro = ancho*2 + alto*2;
	area = ancho * alto;

	printf("El perimetro del rectangulo es: %f\n",perimetro );
	printf("El area del rectangulo es: %f\n",area );
	
	return 0;
}