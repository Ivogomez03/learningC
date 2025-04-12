#include <stdio.h>
#include <string.h>

char nombre[100]; /* Primer nombre de alguien */
char apellido[100]; /* Apellido de alguien */
char nombreCompleto[200]; /* nombre + apellido */


int main(){
	
	strcpy(nombre,"Ivo"); /* inicializo el nombre */
	strcpy(apellido,"Gómez"); /* inicializo apellido */

	strcpy(nombreCompleto,nombre); /* nombreCompleto = "Ivo" */


	strcat(nombreCompleto, " ");  /* nombreCompleto = "Ivo " */
	strcat(nombreCompleto,apellido);  /* nombreCompleto = "Ivo Gómez" */

	printf("El nombre completo es %s\n",nombreCompleto);
	
	return 0;
}
