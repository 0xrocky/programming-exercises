//programma con funzione che trasforma da minuscolo a maiuscolo tutte le lettere di una stringa, e restituisce puntatore al primo carattere

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 20

typedef char String[ N + 1 ];

char *maiuscolo( char *stringa ){
	int i;
	for( i = 0; i < strlen( stringa ); i++ ){
		if( isalpha( stringa[ i ] ) ){
			stringa[ i ] = toupper( stringa[ i ] );
		}
	}
	return stringa;
}

int main(void){
	String str;
	scanf("%s", str);
	maiuscolo( str );
	printf("%s\n", str);
	return 0;
}
