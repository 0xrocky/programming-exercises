#include <stdio.h>

int main(void){
	int n, i, cont=0;
	scanf(" %d",&n);
	for( i=(n-1);i>1;i-- ){
		if( n%i==0 ){
			printf("%d ",i);
			cont++;
		}
	}
	if( cont!=0 ) printf("\ni divisori sono %d\n",cont);
	else printf("\n%d numero primo\n",n);
		
	printf("%d numero \n",ricorsivo(n));
	
	return 0;
}
