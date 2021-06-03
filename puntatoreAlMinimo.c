//programma che individua la posizione dell’elemento minimo di un array

#include <stdio.h>
#define N 10

int *smallest( int a[], int n );

int main(void){
	int a[N] = { 3, 6, 9, 88, 75, 1560, 2, 22, 23, 99 };
	int *p = smallest( a, N );
	printf("Minimo elemento: %d \n", *p);
	return 0;
}

int *smallest( int a[], int n ){
	int i;
	int *p = a;
	for( i = 1; i < n; i++ ){
		if( *p > a[ i ] ){
			p = &a[ i ];
		}
	}	
	return p;
}
