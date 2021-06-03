//programma che stampa un quadrato magico di dimensione n × n, con n dispari inserito dall'utente
#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main(void){
	int r = DIM-1, c = DIM/2+1, i, j, val = 1;
	int m[ DIM ][ DIM ] = {};
	
	m[0][DIM/2] = val;
	for( val = 2; val <= DIM*DIM ; val++ ){
			if( r < 0 ) r = DIM-1;
			if( c > DIM-1 ) c = 0;
			if( m[r][c] == 0 )m[r][c] = val;
			else { 
				r = r+2; c = c-1;
				if( r == DIM ) r = 0; 
				if( r == DIM+1 ) r = 1;
				if( c < 0 ) c = DIM-1;
				m[r][c] = val;
			}
			r--; c++;
	}
	
	for( i = 0; i < DIM ; i++){
		for( j = 0; j < DIM; j++ ){
			printf("%3d",m[i][j]);
		}printf("\n");
	}

	printf("\n");
	return 0;
}
