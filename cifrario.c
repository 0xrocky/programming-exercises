#include <stdio.h>
#include <ctype.h>

int main(void){

	printf("inserisci la chiave e il testo da cifrare\n");
	int chiave;
	char ch;
	scanf(" %d ",&chiave);

	while( (ch = getchar()) != '.'){
		if( isalpha(ch) ){
			if( islower(ch) ) putchar( (ch-'a'+chiave)%26+'a');
			else putchar( (ch-'A'+chiave)%26+'A');
		}
		else putchar(ch);
	}
	printf("\n");
	return 0;
}
