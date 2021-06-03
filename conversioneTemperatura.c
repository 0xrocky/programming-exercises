#include <stdio.h>
#define FATTORE_SCALA (5.0f/9.0f)
#define N 32.0f

int main(void){

	printf("Inserisci temperatura fahrenheit: ");
	float temperatura;
	scanf(" %f",&temperatura);
	float formula;
	formula = (temperatura-N)*FATTORE_SCALA;
	printf("%f celsius\n",formula);
	return 0;

}
