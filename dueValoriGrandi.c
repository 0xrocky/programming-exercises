//programma che individua la posizione dell’elemento più grande e del secondo elemento per grandezza

#include <stdio.h>
#define N 10

void max_secondmax( int a[], int n, int *max, int *second_max ){
	int i;
	for( i = 0; i < n; i++ ){
		if( a[ *second_max ] < a[ i ] ){
			if( a[ *max ] < a[ i ] ){
				*second_max = *max;
				*max = i;
			}
			else *second_max = i;
		}
	}
	
}

int main(void){
	int a[N] = { 3, 6, 9, 88, 75, 1560, 1, 22, 23, 99 };
	int max = 0, secondMax = 0;
	max_secondmax( a, N, &max, &secondMax );
	printf("Massimo: %d in posizione: %d\n", a[ max ], max+1 );
	printf("Secondo Massimo: %d in posizione: %d\n", a[ secondMax ], secondMax+1 );
	return 0;
}
