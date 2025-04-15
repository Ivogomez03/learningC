#include <stdio.h>

char linea[100];

int total; 
int item; /* proximo item a añadir */

int main(){
	
	total = 0;

	while(1){
		printf("Ingresa # a añadir \n");
		printf(" o 0 para parar: ");

		fgets(linea,sizeof(linea),stdin);
		sscanf(linea,"%d",&item);

		if(item == 0)
			break;

		total += item;

		printf("Total: %d\n",total);


	}

	printf("Total final %d\n",total);

	return 0;
}