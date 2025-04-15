/*--------------------------------------------------------------------------------------------------
*
* Dado un monto de dinero (menor a $1.00), calcula la cantidad de monedas de
* 25 centavos, de 10 centavos, de 5 centavos y de un centavo que se necesita.
*
* Autor: Ivo Gómez Enrico
* github: https://www.github.com/Ivogomez03
---------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char linea[1000];

double monto; /* monto de dinero < a $1.00 */
int cant25;
int cant10;
int cant5;
int cant1;

int main(){	
	
	while(1){
		printf("Ingresa el monto o -1 para salir: ");

		fgets(linea,sizeof(linea),stdin);

		sscanf(linea, "%lf", &monto);

		if ( monto == -1)
			break;
		if(monto < -1 || monto >= 1 || monto == 0 || (monto > -1 && monto < 0)){
			printf("El monto no es válido ingrese un monto entre 0 y 1, no incluidos.\n");
			continue;
		}
		
		cant25 = 0;
		cant10 = 0;
		cant5 = 0;
		cant1 = 0;


		
		while(monto >= 0.25){
			monto -= 0.25;
			++cant25;
		}
		while(monto >= 0.10){
			monto -= 0.10;
			++cant10;
		}
		while(monto >= 0.05){
			monto -= 0.05;
			++cant5;
		}
		printf("%f \n",monto);
		while(monto >= 0.01){
			monto -= 0.01;
			++cant1;
		}
		
		
		printf("La cantidad de monedas de 25, 10, 5, 1 centavos son %d, %d, %d, %d respectivamente.\n",
			cant25,cant10,cant5,cant1);
		
	}
	

	return 0;
}