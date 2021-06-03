#include <stdio.h>
#include <ctype.h>
#define N 10

int main(void){

	int i = 0, somma = 0, corr;
	while( i < N ){
		scanf(" %d", &corr);
		if(corr != 0)i++;
		somma += corr;		
	}
	printf("la somma è %d \n",somma);
	return 0;

}
