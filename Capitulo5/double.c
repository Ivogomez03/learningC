#include <stdio.h>

char line[100];
int value;

int main(){
	
	printf("Ingresa un valor: ");
	fgets(line,sizeof(line),stdin);
	sscanf(line, "%d", &value);

	printf("2 veces %d es %d\n",value,value*2);


	return 0;
}