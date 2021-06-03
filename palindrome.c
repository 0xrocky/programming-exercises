//programma che, con due puntatori, stabilisce se n parole da linea di comando sono palindrome o meno

#include <string.h>
#include <stdio.h>

typedef char *String;

int palindroma( char *p, char *q ){
	while( p < q ){
		if( (*p) != (*q) ) return 0;
		p++; q--;
	}
	return 1;
}

int main( int argc, char *argv[] ){
	int i;
	char *p, *q;
	String corr;
	for( i = 1; i < argc; i++ ){
		corr = argv[ i ];
		p = corr;// = &corr[0]
		q = p + ( strlen(corr) - 1 );// = &corr[fine]
		if( palindroma( p, q ) == 0 ) printf("%s non palindroma", corr );
		else printf("%s palindroma", corr );
	}
	printf("\n");
	return 0;
}
