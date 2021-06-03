// programma che riconosce la parola più piccola secondo l'ordine alfabetico

#include <stdio.h>
#include <string.h>
#define N 20

typedef char *String; //tipo String indica array di char!

int smallest_word_index( char *s[], int n ){
	int i, k = 1;
	String flag = s[ 0 ];
	
	for( i = 1; i < n; i++ ){
		if( strcmp( flag, s[ i ] ) > 0 ){
			flag = s[ i ];
			k = i+1;
		}
	}
	
	return k;
}

int main( int argc , char *argv[] ){
	String s[ N ]; //array lungo 20 parole
	int i;
	for( i = 1; i < argc; i++ ){
		s[ i-1 ] = argv[ i ];
	}
	i = smallest_word_index( s, i-1 );
	printf("La parola piu' corta e' in posizione %d\n", i);
	return 0;
}

