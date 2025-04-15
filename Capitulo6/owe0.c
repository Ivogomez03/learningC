#include <stdio.h>

char linea[80]; /* linea de entrada */

int balanceAdeudado; 

int main(int argc, char const *argv[])
{
	printf("Ingresa el numero de pesos adeudados:");

	fgets(linea,sizeof(linea),stdin);

	sscanf(linea,"%d",&balanceAdeudado);

	if(balanceAdeudado = 0)
		printf("Tu no adeudas nada.\n");
	else
		printf("Tu adeudas %d dolares.\n",balanceAdeudado);

	return 0;
}

/*-----------------------------------------------------------------------
* Pregunta del libro: ¿Porque el programa siempre dice que
* debes 0 dolares?
* El error esta en el if, ya que falta un =, la condicion es equivalente
* a lo siguiente:
* 	balanceAdeudado = 0;
* 	if(balanceAdeudado != 0)
* como la condicion es falsa, entre en el else y la salida siempre es:
* 	Tu adeudas 0 dolares. 
*
----------------------------------------------------------------------*/