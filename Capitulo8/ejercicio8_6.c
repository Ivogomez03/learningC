/********************************************************************
* Ejercicio 8-6                     							  *
*         														  *
* Autor: Ivo Gómez Enrico										   *
* github: https://www.github.com/Ivogomez03                       *                     
* 																  *
* Escriba un programa que convierta numeros en palabras            *
* por ejemplo, 895 se convierte a "eight nine five".                * 
*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


long long int numero; /* numero que se ingresa */
char linea[80]; /* input buffer */
const char arregloDeNumeros[][7] = {"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};

int main(){

	bool seguir = 1;

	while(seguir){
		printf("Ingrese el numero: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%lld",&numero);

		if(numero < 0){
			printf("minus ");
			numero = -numero;
		}

		if(numero < 10 && numero >= 0){
			printf("%s\n",arregloDeNumeros[numero]);
		}
		else{
			int digitos[500];

			int i = 0;
			while(numero != 0){
				int ultimoDigito = numero % 10;

				digitos[i] = ultimoDigito;

				numero /= 10;
				i++;
			}
					


			for(i=i-1; i>= 0;i--){
				printf("%s ", arregloDeNumeros[digitos[i]]);
			}
			printf("\n");
		}

		printf("Si desea salir escriba 0, en caso contrario 1: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%d",&seguir);

		if(!seguir)
			printf("Gracias por utilizar mi programa.\n");
	}

	
		

	return 0;
}