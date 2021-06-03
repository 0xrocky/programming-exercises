// programma che legge una coppia di numeri interi b e S0...Sn, quindi converte la sequenza di cifre da base b a base 10
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define LIM 100

int main(void){
	printf("Inserisci un intero b e un numero in base b da convertire in base 10, e alla fine . :\n");
	int base, n = 0, i = 0, cont = 0, arr[LIM] = {};
	char ch;
	scanf("%d ",&base);
	
	while( ( ch = getchar() ) != '.' ){
		arr[ i ] = (int)ch-'0';
		i++;
	}
	i--;
	while( i >= 0 ){
		n +=  (int)pow( base, i )*arr[ cont ];
		cont++;
		i--;
	}
	
	printf("Il numero originario in base %d equivale al numero %d in base 10. \n",base,n);
	return 0;
}
