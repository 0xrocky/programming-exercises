//programma che permette di inserire gli esiti di 5 esami per 5 studenti e calcolare la media di ciascuno studente e la media dei voti ottenuti in ogni esame
#include <stdio.h>
#define STUD 5
#define VOTI 5

void mediaStudente( int m[5][5] ){
	int c, r; float media = 0.0f;
	for( r = 0; r < STUD; r++ ){
		for( c = 0; c < VOTI; c++ ){
			media += m[ r ][ c ];
		}
		media /= STUD;
		printf("Studente %d ha media %f\n ", r+1, media);
		media = 0.;
	}
}

void mediaEsame( int m[5][5] ){
	int c, r; float media = 0.0f;
	for( c = 0; c < VOTI; c++ ){
		for( r = 0; r < STUD; r++ ){
			media += m[ r ][ c ];
		}
		media /= STUD;
		printf("Esame %d ha media %f\n ", c+1, media);
		media = 0.;
	}
}

int main(void){
	int i, j, tab[STUD][VOTI] = {};
	for( i = 0; i < STUD; i++ ){
		printf("Studente %d: ", i+1);
		for( j = 0; j < VOTI; j++ )
			scanf("%d",&tab[ i ][ j ]);
	}
	mediaStudente( tab );
	mediaEsame( tab );
	
	printf("\n");
	return 0;
}
