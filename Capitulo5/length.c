#include <stdio.h>
#include <string.h>

char line[100]; 

int main(){
	
	printf("Ingresa una linea:\n");
	fgets(line,sizeof(line),stdin);

	printf("La longitud de la linea es: %d\n" , strlen(line));
	
	return 0;
}

/*----------------------------------
* Si ingresas prueba la salida es:
* 	La longitud de la linea es: 7
* Ya que incluye el salto de linea
*
----------------------------------*/ 
