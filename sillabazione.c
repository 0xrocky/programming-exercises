//programma che sillaba in ordine alfabetico una parola
#include <string.h>
#include <stdio.h>

typedef char *String;

int main( int argc, char *argv[] ){
	int i;
	String word = argv[1];
	printf("%c",word[0]);
	for( i = 1; i < strlen( word ); i++ ){
		if( word[ i ] < word[ i-1 ] ) printf("-%c", word[ i ]);
		else printf("%c", word[ i ]);
	}
	
	printf("\n");
	return 0;
}
