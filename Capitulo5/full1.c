#include <stdio.h>
#include <string.h>

char nombre[100]; /* Primer nombre de alguien */
char apellido[100]; /* Apellido de alguien */
char nombreCompleto[200]; /* nombre + apellido */


int main(){
	printf("Ingresa el primer nombre:\n");
	fgets(nombre,sizeof(nombre),stdin);

	printf("Ingresa el apellido:\n");
	fgets(apellido,sizeof(apellido),stdin);


	strcpy(nombreCompleto,nombre); /* nombreCompleto = "Ivo" */
	strcat(nombreCompleto, " ");  /* nombreCompleto = "Ivo " */
	strcat(nombreCompleto,apellido);  /* nombreCompleto = "Ivo Gómez" */

	printf("El nombre completo es %s\n",nombreCompleto);
	
	return 0;
}

/*----------------------------------------------------------------------
* Si ingresas Ivo en el primer input y Gomez en el segundo la salida es:
*	El nombre completo es Ivo
*	 Gomez
*
* fgets toma el salto de linea tambien...
*
* si hacemos: 
* 	nombre[strlen(nombre)-1] = '\0'; 
* funcionara correctamente, mirar full2.c
-----------------------------------------------------------------------*/ 