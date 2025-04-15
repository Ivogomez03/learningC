#include <stdio.h>

int numeroActual; /* numero actual Fibonacci */
int numeroAnterior; /* numero anterior Fibonacci */
int numeroSiguiente; /* numero siguiente Fibonacci */

int main(){
	
	numeroAnterior = 1;
	numeroActual = 1;

	printf("1\n");	/* comienza la secuencia */

	while(numeroActual < 100){

		printf("%d\n", numeroActual );

		numeroSiguiente = numeroActual + numeroAnterior;

		numeroAnterior = numeroActual;

		numeroActual = numeroSiguiente;
	
	}

	return 0;
}