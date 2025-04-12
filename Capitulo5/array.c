#include <stdio.h>

float data[5]; /* datos para promediar y totalizar */
float total; /* total de data items */
float promedio; /* promedio de los items */

int main(){
	data[0] = 21.0;
	data[1] = 42.0;
	data[2] = 30.0;
	data[3] = 83.0;
	data[4] = 51.0;

	total = data[0] + data[1] + data[2] + data[3] + data[4];
	
	promedio = total /5.0;

	printf("Total: %f Promedio: %f\n",total,promedio);
	
	return 0;
}