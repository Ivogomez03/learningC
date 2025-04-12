#include <stdio.h>
#include <string.h>

char nombre[100]; /* Primer nombre de alguien */
char apellido[100]; /* Apellido de alguien */
char nombreCompleto[200]; /* nombre + apellido */


int main(){
	
	printf("Ingresa el primer nombre:\n");
	fgets(nombre,sizeof(nombre),stdin);
	
	/* reemplazar el ultimo caracter */
	nombre[strlen(nombre) - 1] = '\0';

	printf("Ingresa el apellido:\n");
	fgets(apellido,sizeof(apellido),stdin);

	/* reemplazar el ultimo caracter */
	apellido[strlen(apellido) - 1] = '\0';


	strcpy(nombreCompleto,nombre); /* nombreCompleto = "Ivo" */
	strcat(nombreCompleto, " ");  /* nombreCompleto = "Ivo " */
	strcat(nombreCompleto,apellido);  /* nombreCompleto = "Ivo Gómez" */

	printf("El nombre completo es %s\n",nombreCompleto);
	
	return 0;
}
/*-------------------------------
* Ingresa el primer nombre:
* Ivo
* Ingresa el apellido:
* Gomez
* El nombre completo es Ivo Gomez
--------------------------------*/