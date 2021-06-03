/*programma che legge un carattere, uno spazio e una sequenza di caratteri minuscoli terminati da . Stampa quanto ha letto dopo il primo spazio, ma sostituendo tutte le vocali con il primo carattere letto*/

#include <stdio.h>
#include <ctype.h>
#define N 100

//typedef char String[ N+1 ] ; //Stringhe di al max 100 caratteri

char scambia( char a, char b ){
	if( b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' )
		return a;
	else return b;
}

int main(void){
	char chiave, ch;
	//String frase;
	scanf("%c ", &chiave);
	while( ( ch = getchar() ) != '.' ){
		if( isalpha( ch ) ) ch = tolower( ch );
		printf("%c", scambia( chiave, ch ) );
	}
	printf("\n");
	return 0;
}
