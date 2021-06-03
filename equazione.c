#include <stdio.h>
#include <math.h>

int main(void){

	printf("Inserisci tre coefficienti separati da uno spazio: ");
	float a, b, c;
	scanf(" %f %f %f",&a,&b,&c);
	float delta = (b*b)-(4*a*c);
	if(delta < 0){
		printf("delta negativo \n");
		return 0;
	}
	if(delta!=0){
		delta = sqrt(delta);
		float risultatoA = (-b+delta)/(2*a);
		float risultatoB = (-b-delta)/(2*a);
		printf("Le radici sono %f %f \n",risultatoA,risultatoB);
	}
		return 0;

}
