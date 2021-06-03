/*Programma che legge una sequenza di interi e la stampa al contrario, allocando la memoria necessaria
in modo dinamico. L’input è data da un intero n e da una sequenza di n numeri */

#include <stdio.h>
#include <stdlib.h>

void *my_malloc( size_t size ){
	void *p;
	p = malloc( size * sizeof( size ) );
	if( !p ){
		printf("malloc_failure");
		exit( EXIT_FAILURE );
	}
	else return p;
}
void *my_realloc( void *p, size_t size ){
	void *temp;
	temp = realloc( p, size * sizeof( size ) );
	if( temp == NULL ){
		printf("realloc_failure");
		exit( EXIT_FAILURE );
	}
	else return temp;
}
int main(void){
	int *p, *temp, n = 2, flag;
	p = my_malloc( n );
	temp = p;
	printf("Inserisci gli interi\n");
	while(1){
		scanf("%d",&flag);
		if( flag == 0 ) break;
		else *temp = flag;
		temp++;
		if( temp == p+n ){
			n *= 2;
			p = my_realloc( p, n );
		}
	}
	while( --temp >= p ){
		printf("%d ", (*temp) );
	}
	free( p );
	printf("\n");
	return 0;
}
