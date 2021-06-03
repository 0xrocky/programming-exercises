// programma che legge una coppia di numeri interi b e n. quindi converte n da base 10 a base b
#include <stdio.h>
#define LIM 100

int main(void){

	int base, n, i = 0, quoziente = -1, arr[LIM] = {};
	printf("Inserisci un intero b e un numero in base 10 da convertire in base b: \n");
	scanf("%d%d", &base, &n );
	int numero = n;

	while( quoziente != 0 ){
		quoziente = n / base;
		arr[ i ] = n % base;
		i++;
		n = quoziente;
	}
	printf("Il numero %d in base 10 equivale al numero ", numero);
	i--;//prima di uscire dal while(), i viene aumentata ancora una volta inutilmente	
	while( i >= 0 ){
		printf("%d",arr[ i ]);
		i--;
	}
	printf(" in base %d\n",base);
	return 0;
}
