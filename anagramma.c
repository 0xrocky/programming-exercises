//programma che legge due parole e verifica se sono anagrammi

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define ALPH ( 'z'-'a'+1 ) 

typedef char String[ALPH+1]; //le stringhe non sono più lunghe di 26 caratteri

int main(void){

	String prima, seconda;
	printf("le stringhe non possono essere più lunghe di 26 caratteri\n");
	scanf("%s %s", prima, seconda);
	char ch;
	int a[ALPH] = {}, i, lPrima = strlen( prima ), lSeconda = strlen( seconda );
	if( lPrima != lSeconda ){
		printf("Stringhe non palindrome\n");
		return 0;
	}
	for( i = 0; i < lPrima; i++ ){
		ch = toupper( prima[ i ] );
		a[ ch -'A' ]++;		//incremento l'occorrenza corrispondente alla lettera prelevata dalla prima stringa
		ch = toupper( seconda[ i ] );
		a[ ch -'A' ]--;		//decremento l'occorrenza corrispondente alla lettera prelevata dalla seconda stringa
	}
	for( i = 0; i < lPrima; i++ )
		if( a[ i ] != 0 ){
			printf("Stringhe non palindrome\n");
			return 0;
		}		
	printf("Stringhe palindrome\n");
	return 0;
}

