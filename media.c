#include <stdio.h>

int main(void){

	int corr = -1, somma = 0;
	float cont = 0.f;
	while(corr!=0){
		scanf(" %d",&corr);
		somma += corr;
		if(corr!= 0)cont++;
	}
	printf("la media della sequenza e' %f \n",(somma/cont));
	return 0;

}
