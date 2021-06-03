//Programma che stampa un intervallo di tempo compreso tra due orari(determina da solo l'orario maggiore)
#include <stdio.h>

int main(void){
	short int hh1, mm1, ss1, hh2, mm2, ss2;
	printf("inserisci il primo orario, usando come separatore : ");
	scanf("%hd:%hd:%hd", &hh1, &mm1, &ss1);
	printf("inserisci il secondo orario usando come separatore : ");
	scanf("%hd:%hd:%hd", &hh2, &mm2, &ss2);
	
	//determino l'orario maggiore e minore
	int maggiore = 1, ore=0, minuti=0, secondi;
	if( hh1 < hh2 ) maggiore = 2;
	if( hh1 == hh2 ){ 
		if( mm1 < mm2 ) maggiore = 2;
		if( mm1 == mm2 ){
			if( ss1 <= ss2 ) maggiore = 2;
		}
	}
	
	if( maggiore == 2 ){
		secondi = ss2-ss1;
		if(secondi < 0){ secondi = secondi + 60; minuti--; }
		minuti += mm2 - mm1;
		if(minuti < 0){ minuti = minuti + 60; ore--; }
		ore += hh2 - hh1;
	}
	else{
		secondi = ss1 - ss2;
		if(secondi < 0){ secondi = secondi + 60; minuti--; }
		minuti += mm1 - mm2;
		if(minuti < 0){ minuti = minuti + 60; ore--; }
		ore += hh1 - hh2;
	}
	printf("Ad arrivare all'orario maggiore mancano ");
	ore < 10 ? printf("0%hd:",ore) : printf("%hd:",ore); 
	minuti < 10 ? printf("0%hd:",minuti) : printf("%hd:",minuti); 
	secondi < 10 ? printf("0%hd",secondi) : printf("%hd",secondi); 
	printf("\n");	
	return 0;
}
