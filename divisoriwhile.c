#include <stdio.h>

// numeroprimo ritorna 0 se N è un numero primo,altrimenti 0
int numeroprimo(N){
	int i, flag=0;
	for( i=2;i*i<=N;i++ )
		if( N%i==0 ) flag++; 
	return flag;
}

int main(void){
	int n, i, cont=0, copia;
	scanf(" %d",&n);
	int verificati=numeroprimo(n);
	printf("n =");
	
	if( verificati==0 ){
		printf(" %d^1\n",n);
		return 0;
	}
	int primo = 1;
	for( i=2;i<n/2+1;i++ ){
		copia=n;
		if( n%i==0 ){//se i è un fattore
			if( numeroprimo(i)==0 ){//controllo che sia primo
				do{
					cont++;
					copia=copia/i;
				}while( copia%i==0 );
			}
		}
		if( cont!=0 ){
			if( primo!=1 )printf(" + %d^%d",i,cont);
			else printf(" %d^%d",i,cont);
			primo=0;
			cont=0;
		}
	}
	printf("\n");
	return 0;
}
