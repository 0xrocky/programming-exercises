//programma che calcola la potenza di una base sia iterativamente che ricorsivamente

#include <stdio.h>

void potenzaIterativa( int b, int e ){
	int j, potenza = b;
	for( j = 1; j < e; j++ )
		potenza *= b;
		
	printf("%d\n", potenza );
}

int potenzaRicorsiva( int b, int e ){
	if( e == 1 ) return b;
	else{ 
		e--;
		return b*( potenzaRicorsiva( b, e ) ); }
}

int main(void){
	
	printf("Inserisci due interi b ed e per calcolare b^e\n");
	int b, e;
	scanf("%d %d", &b, &e);
	potenzaIterativa( b, e );
	printf("%d\n", potenzaRicorsiva( b, e ) );
	return 0;
}

