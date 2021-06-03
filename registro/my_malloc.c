/*Versioni personali delle Funzioni malloc e realloc: prevedono come argomento solo il numero di elementi, e non il numero di byte. E controllano già l'autenticità del pointer ritornato*/

#include <stdio.h>
#include <stdlib.h>

typedef char *String;

void *my_malloc( size_t size ){
	void *p;
	p = malloc( size );
	if( !p ){
		printf("malloc_failure");
		exit( EXIT_FAILURE );
	}
	else return p;
}
void *my_realloc( void *p, size_t size ){
	void *temp;
	temp = realloc( p, size );
	if( temp == NULL ){
		printf("realloc_failure");
		exit( EXIT_FAILURE );
	}
	else return temp;
}

int main(void){
	String str;
	str = my_malloc( 11 * sizeof( int ) );
	scanf("%s",str);
	printf("%s",str);
	int n;
	printf("\nLe stringhe sono lunghe 10. Tu di quanto le vuoi lunghe?\n");
	scanf("%d",&n);
	str = my_realloc( str, * sizeof( n ) );
	free( str );
	return 0;
}
