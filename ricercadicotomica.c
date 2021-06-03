#include <stdio.h>

int main(void){

	int a = 0, b = 1000, m;
	char c = ' ';
	while( c != '=' ){
		m = (a+b)/2;
		printf("il numero chiave è %d ? \n",m);
		scanf(" %c",&c);
		if( c == '<' ){ a = a; b = m-1; }
		if( c == '>' ){ a = m+1; b = b; }

	} 
	return 0;
}
