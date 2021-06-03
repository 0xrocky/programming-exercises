//Programma che mostra la sequenza di Collatz del numero inserito

#include <stdio.h>
#define N 100

int collatz( int n ){
	if( ( n % 2 ) == 0 ) n /= 2;
	else n = ( n * 3 ) + 1;
	return n;
}

int main(void){
	
	printf("Inserisci n per calcolare la sequenza di Collatz di n\n");
	int n, i = 1;
	scanf("%d", &n );
	while( n!= 1 ){
		printf("%d ", n);
		n = collatz( n );
		i++;
	}
	printf("Lunghezza %d \n", i);
	return 0;
}

