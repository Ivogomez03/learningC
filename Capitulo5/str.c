#include <stdio.h>
#include <string.h>

char name[30]; /* Primer nombre de alguien */

int main(){
	
	strcpy(name,"Ivo"); /* inicializo el nombre */

	printf("El nombre es %s\n",name);
	
	return 0;
}

/*-----------------------------------------------------
* "X" ocupa 2 bytes ya que se trata como un string, 
* tiene el caracter nulo al final.
* 'Y' es un caracter, ocupa un byte

-----------------------------------------------------*/