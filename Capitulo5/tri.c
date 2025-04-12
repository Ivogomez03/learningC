#include <stdio.h>

char line[100];

int height; /* altura del triangulo */
int width; /* ancho del triangulo */
int area; /* area del triangulo */

int main(){
	printf("Ingresa ancho altura? ");

	fgets(line,sizeof(line),stdin);

	sscanf(line, "%d %d",&width,&height);
	
	area = (width * height) / 2;
	
	printf("El area es %d\n" , area);
	return 0;
}