//programma che dato un array s lungo n di stringhe, trovi gli elementi minimo e massimo nell’array (secondo l’ordine alfabetico).

#include <string.h>
#include <stdio.h>

typedef char *String;

void smallest_largest( char *s[], int n, char **smallest, char **largest ){
	int i;
	for( i = 1; i < n; i++ ){
		if( strcmp( *smallest, s[ i ] ) > 0 ) *smallest = s[ i ];
		if( strcmp( *largest, s[ i ] ) < 0 ) *largest = s[ i ];
	}
}

int main( int argc, char *argv[] ){
	int i, lun = argc-1;
	String dict[ lun ];
	for( i = 0; i < lun; i++ )
		dict[ i ] = argv[ i + 1 ];
	
	String min = dict[0], max = dict[0];
	smallest_largest( dict, lun, &min, &max );
	printf( "La parola minima e' _%s_ e la massima e' _%s_ .\n " , min , max ) ;
	return 0;
}
