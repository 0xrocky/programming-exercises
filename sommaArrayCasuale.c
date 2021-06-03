//programma che generi a caso un array di interi e calcoli la somma dei suoi elementi
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 101
void generaArray( int arr[], int n ){
	int i;
	srand(time(NULL));
	for( i = 0; i < n; i++ ){
		arr[ i ] = ( rand() % N ); //l'array sarà riempito di numeri compresi tra 0 a 100
	}
}
void stampa( int arr[], int n ){
	int i;
	for( i = 0; i < n; i++ ){
		printf("%d ",arr[ i ]);
	}
	printf("\n");
}
int somma( int arr[], int n ){
	int i, somma = 0;
	for( i = 0; i < n; i++ ){
		somma += arr[ i ];
	}
	return somma;
}

int main(void){
	int dim = 0;
	do{
		dim = ( rand() % N ); //l'array sarà di dimensione compresa tra 0 a 100
	}while( dim == 0 );
	int arr[ dim ];
	generaArray( arr, dim );
	stampa( arr, dim );
	printf("%d",somma( arr, dim ));
	return 0;
}

