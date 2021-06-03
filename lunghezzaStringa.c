//Programma che utilizza una funzione che, data una stringa s, ne calcoli la lunghezza

#include <stdio.h>
#include <ctype.h>
#define N 20

typedef char String[ N + 1 ];

int lung_stringa( char *str ){
	char *i = str;
	while( *(str++) ){
	}
	return ( str - i - 1 );
}

int main(void){
	String str;
	scanf("%s", str);
	int lung = lung_stringa( str );
	printf("La stringa %s e' lunga %d\n", str, lung);
	return 0;
}
