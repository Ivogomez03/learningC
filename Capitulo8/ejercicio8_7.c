/********************************************************************
* Ejercicio 8-7                     							  *
*         														  *
* Autor: Ivo Gómez Enrico										   *
* github: https://www.github.com/Ivogomez03                       *                     
* 																  *
* El numero 85 se pronuncia en ingles "eighty-five" 			  *
* no "eight five", modifique el ejercicio 8-6 para que gestione    *
* los numeros hasta el 100.								           * 
*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


long long int numero; /* numero que se ingresa */
char linea[80]; /* input buffer */
const char arregloDeNumeros[][10] = {"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ",
"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen ","twenty "};

const char arregloDeDecenas[][8] = {"twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};

int main(){

	bool seguir = 1;

	while(seguir){
		printf("Ingrese un numero entre -100 y 100: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%lld",&numero);

		if(numero < -100 || numero > 100){
			printf("Numero inválido.\n");
			continue;
		}

		if(numero < 0){
			printf("minus ");
			numero = -numero;
		}

		if(numero == 100)
			printf("one hundred\n");
		else if(numero <= 20 && numero >= 0)
			printf("%s\n",arregloDeNumeros[numero]);
		else{

			int ultimoDigito = numero % 10;

			numero /= 10;

			
			printf("%s", arregloDeDecenas[numero-2] );

			printf("%s\n",arregloDeNumeros[ultimoDigito]);

		}

		printf("Si desea salir escriba 0, en caso contrario 1: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%d",&seguir);

		if(!seguir)
			printf("Gracias por utilizar mi programa.\n");
	}

	
		

	return 0;
}