//programma che generi a caso una matrice quadrata di interi e calcoli la somma dei suoi elementi
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 101
void generaArray( int arr[][N], int n ){
	int i, j;
	for( i = 0; i < n; i++ ){
		for( j = 0; j < n; j++ ){
			arr[ i ][ j ] = ( rand() % N ); //l'array sarà riempito di numeri compresi tra 0 a 100
		}
	}
}
void stampa( int arr[][N], int n ){
	int i, j;
	for( i = 0; i < n; i++ ){
		for( j = 0; j < n; j++ ){
			printf("%3d ", arr[ i ][ j ]);
		}
	printf("\n");
	}
}
void somma( int arr[][N], int n ){
	int i, j, somma = 0;
	for( i = 0; i < n; i++ ){
		for( j = 0; j < n; j++ ){
			somma += arr[ i ][ j ];
		}
	}
	printf("La somma e' %d\n", somma );
}

int main(void){
	int dim = 0;
	srand(time(NULL));
	do{
		dim = ( rand() % N ); //l'array sarà di dimensione compresa tra 0 a 100
	}while( dim == 0 );
	int arr[ dim ][ dim ];
	generaArray( arr, dim );
	stampa( arr, dim );
	somma( arr, dim );
	return 0;
}

