/*Programma cond due funzioni:read_line legge una linea di caratteri da standard input, e la memorizza in una stringa allocata dimanicamente opportunamente*//* read_word legge invece una stringa alfanumerica*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef char *String;

void *my_malloc( size_t n ){
	void *p;
	p = malloc( n );
	if( !p ){
		printf("malloc_failure");
		exit( EXIT_FAILURE );
	}
	else return p;
}
void *my_realloc( void *p, size_t n ){
	void *temp = realloc( p, n );
	if( !temp ){
		printf("realloc_failure");
		exit( EXIT_FAILURE );
	}
	else return temp;
}
char *read_line( void ){  //linea terminata da \n
	char c, *p, *temp;
	int n = 2;
	p = my_malloc( n * sizeof( char ) );
	temp = p;
	while( ( c = getchar() ) != '\n' ){
		if( temp == p+n ){
			n *= 2;
			p = my_realloc( p, n * sizeof( char ) );
		}
		*temp = c;
		temp++;
	}
	*temp = '\0';
	return p;
}

char *read_word( void ){
	char c, *p, *temp;
	int n = 2;
	p = my_malloc( n * sizeof( char ) );
	temp = p;
	c = getchar();
	if( !( isalpha( c ) || ( isdigit( c ) ) ) ){
		*temp = '\0';
		return p;
	}
	else while( c != ' ' ){
		*temp = c;
		c = getchar();
		if( temp == p+n ){
			n *= 2;
			p = my_realloc( p, n * sizeof( char ) );
		}
		temp++;
	}
	*temp = '\0';
	return p;
}

int main(void){
	String str = read_line();
	printf("%s\n", str );
	str = read_word();
	printf("%s\n", str );
	free( str );
	return 0;
}
