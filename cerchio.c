#include <stdio.h>
#include <math.h>

int main(void){

	float raggio;
	scanf(" %f", &raggio);
	printf("l'area del cerchio di raggio %f è %f \n",raggio,(raggio*raggio*M_PI));
	return 0;
}
