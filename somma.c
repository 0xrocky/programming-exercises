#include <stdio.h>

int main(void){

	int corr = 0, somma = 0;
	do{
		scanf(" %d",&corr);
		somma += corr;
	}while(corr!=0);
	printf("la somma della sequenza e' %d \n",somma);
	return 0;

}
