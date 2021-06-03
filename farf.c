//programma che crea un alfabeto farfallino, e modifica con questo le parole immesse

#include <stdio.h>

typedef char *String; //creo un tipo String per indicare array di char

int main( int argc, char *argv[] ){
	int i;
	String corr;
	char act;
	for( i = 1; i < argc; i++ ){
		corr = argv[ i ]; //corr contiene la stringa che sto esaminando attualmente
		while( ( act = *corr++ ) ){ //act contiene il carattere che sto esaminando attualmente
			if( act == 'a' || act == 'e' || act == 'i' || act == 'o' || act == 'u' )
				printf("%cf%c", act, act);
			else printf("%c", act);
		}
		printf(" ");
	}
	printf("\n");
	return 0;
}
