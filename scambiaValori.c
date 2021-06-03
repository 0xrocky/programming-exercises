//programma che ha una funzione void scambia( int *p, int *q ) che scambi i valori delle due variabili puntate da p e q

#include <stdio.h>

void scambia( int *p, int *q ){
	int j = *q;
	*q = *p;
	*p = j;
}

int main(void){
	int x = 10, y = 0;
	scanf("%d %d", &x, &y);
	scambia(&x,&y);
	printf("%d - %d\n", x, y );
	return 0;
}

