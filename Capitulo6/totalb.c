#include <stdio.h>

char linea[100];

int total; /* total de todos los numeros */
int item; /* proximo item a añadir */
int minus_items; /* número de numeros negativos */


int main(){
	
	total = 0;
	minus_items = 0;


	while(1){

		printf("Ingresa # a añadir \n");
		printf(" o 0 para parar: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%d",&item);

		if(item == 0)
			break;

		if(item < 0){
			
			++minus_items;

			continue; /* en vez de romper el bucle reejecuta el loop desde el principio */
		}

		total += item;

		printf("Total: %d\n",total);


	}

	printf("Total final %d\n",total);

	printf("Con %d items negativos omitidos\n", minus_items);
	
	return 0;
}