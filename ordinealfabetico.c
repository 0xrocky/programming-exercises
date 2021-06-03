#include <stdio.h>
#include <stdlib.h>

int main(void){

	char prima, seconda;
	printf("inserisci due lettere in maiuscolo \n");
	scanf(" %c %c",&prima,&seconda);
	int distanza = abs(seconda-prima)+1;
	printf("la distanza tra %c e %c è %d \n",prima,seconda,distanza);
	return 0;
}
