//Programma che stampa un calendario mensile ben spaziato
#include <stdio.h>

void stampaMese(int nMese, int inizioMese){
	int i, limite, cont = 0;
	for( i = 1; i < inizioMese; i++){
		printf("    ");
		cont++;
	}
	if(nMese == 4 || nMese == 6 || nMese == 9 || nMese == 11)
		limite = 30;
	else if(nMese == 2) limite = 28;
	else limite = 31;
	
	for(i = 1; i <= limite; i++){
		if( i <= 9) printf("%d   ", i);
		else printf("%d  ", i);
		cont++;
		if(cont%7 == 0)	printf("\n");
	}
}

int main(void){
	int mese, giorno;
	printf("\n");
	printf("Inserisci il numero del mese (1 = gennaio, · · · , 12 = dicembre): \n");
	scanf(" %d", &mese);
	printf("Inserisci il giorno di inizio mese (1 = lunedi, · · · , 7 = domenica): \n");
	scanf(" %d", &giorno);
	printf("\n");
	printf("L   M   M   G   V   S   D   \n");
	stampaMese(mese, giorno);
	printf("\n");
	return 0;
}
