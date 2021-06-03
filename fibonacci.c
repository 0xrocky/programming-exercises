//Fibonacci ricorsivo

#include <stdio.h>

int fibonacci( int n ){
	if( n <= 2 ) return 1;
	else return ( fibonacci( n-1 )+fibonacci( n-2 ) );

}

int main(void){
	
	printf("Inserisci n per calcolare il valore di Fibonacci in posizione n\n");
	int n;
	scanf("%d", &n );
	printf("%d\n", fibonacci( n ) );
	return 0;
}

