//programma per la gestione di una semplice rubrica: attraverso un menu l’utente deve poter visualizzare la rubrica e inserire nuovi numeri

#include <stdio.h>
#define LUNG 20 //le stringhe non sono più lunghe di 20 caratteri
#define N 100 //numero massimo di voci della rubrica

typedef char String[LUNG+1];

typedef struct{
	String nominativo;
	String tel;
} Voce;

typedef struct{
	Voce a[N];
} Rubrica;

Rubrica rub;

void inserisci( int i ){
	scanf("%s %s", rub.a[ i ].nominativo, rub.a[ i ].tel);
}

void visualizza( int i ){
	int j;
	for( j = 0; j < i; j++ )
		printf("*%s* -> %s\n",rub.a[ j ].nominativo, rub.a[ j ].tel);		
}

int main(void){
	int flag, i = 0;
	printf("\nNominativi e numeri di telefono non possono superare i 20 caratteri\nLe voci della rubrica possono essere al max 100\n");
	do{
		printf("\n0 = visualizzare la rubrica\n1 = inserire nuova voce \n2 = esci\n");
		scanf("%d",&flag);
		switch( flag ){
			case 0: visualizza( i ); break;
			case 1: inserisci( i ); i++; break;
			case 2: return 0;
			default: printf("\nInput non valido!\n");
		}
	}while(1);
	return 0;
}
