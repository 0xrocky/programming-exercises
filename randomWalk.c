//programma che generi una “passeggiata aleatoria” 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
#define LIM 4

//typedef enum { SU, GIU, SX, DX } Direzione;

int main(void){
	srand(time(NULL)); //genero un numero casuale
	char m[ N ][ N ] = {}, ch = 'A';
	int flag[ LIM ], i, j, direz, k, exit = 0; //exit indica le direzioni già provate, direz la direzione corrente
	for( k = 0; k < LIM ; k++ )
		flag[ k ] = 0;
	
	for( i = 0; i < N; i++)
		for( j = 0; j < N; j++)
			m[ i ][ j ] = '.';
			
	i = 0, j = 0;
	while( ch <= 'Z' ){
		m[ i ][ j ] = ch;
		ch++;
		direz = rand() % LIM;	// un numero casuale, compreso tra 0 e 3 inclusi, è in direz
		flag[ direz ] = 1;
		switch( direz ){	//determino la posizione successiva
			case 0: i++; break;
			case 1: i--; break;
			case 2: j--; break;
			default: j++; 
		}
		exit++;
		if( m[ i ][ j ] != '.' || i < 0 || j < 0 || i >= N || j >= N ){
			if( exit >= 4 ) break;
			for( k = 0; k < LIM ; k++ )
					if( flag[ k ] != 0 ) break;	//determino la posizione originaria
				switch( k ){
						case 0: i--; break;
						case 1: i++; break;
						case 2: j++; break;
						default: j--;
				}
			do{
				direz = rand() % LIM;
				if( flag[ direz ] != 1 ){ 
					exit++;
					switch( direz ){
						case 0: i++; break;
						case 1: i--; break;
						case 2: j--; break;
						default: j++; 
					}
					break;
				}
				else{	if( exit >= 4 ) break;
					continue;
				}
			}while( 1 );
		}
		exit = 0;
		for( k = 0; k < LIM ; k++ )
			flag[ k ] = 0;
	}
	
	
	for( i = 0; i < N; i++){
		for( j = 0; j < N; j++){
			printf("%3c",m[i][j] );
		}
		printf("\n");
	}
	return 0;
}
