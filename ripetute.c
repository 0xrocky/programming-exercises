// Programma che stabilisca se n contiene cifre ripetute e in caso affermativo quali
#include <stdio.h>
#define N 10
int main(void){
	int n,i, resto, a[N] = {};
	scanf(" %d", &n); 
	do{
		resto = n % 10;
		a[resto]++;
		n /= 10;	
	}while( n > 0 );
	
	for(i = 0; i <= 9; i++){
		if(a[i] == 0)continue;
		else printf("%d %d volte\n",i,a[i]);
	}
	return 0;
}
