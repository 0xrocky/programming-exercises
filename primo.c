//funzione con parametro un intero n che stabilisca se n è un numero primo

#include <stdio.h>

int primo( int n ){
	int i;
	for( i = 2; i < n; i++ )
		if( ( n % i ) == 0 ) return 0;
	return 1;
}

int main(void){
	
	printf("Inserisci un intero per vedere se primo\n");
	int num;
	scanf("%d", &num ); 
	if( primo( num ) == 1 ) printf("%d primo\n", num );
	else printf("%d non primo\n", num );
	return 0;
}

