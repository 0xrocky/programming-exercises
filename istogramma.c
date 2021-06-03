/*programma che legge una sequenza di caratteri terminata da un punto e visualizza un istogramma con una barra per ogni carattere dell’alfabeto, lunga quanto il numero delle sue occorrenze*/

#include <stdio.h>
#include <ctype.h>
#define ALPH ( 'z'-'a'+1 ) 

void riproduci( int n ){
	while( n > 0){
		printf("*");
		n--;
	}
	printf("\n");
}

int main(void){
	char ch;
	int i, arr[ALPH] = {};
	while( ( ch = getchar() ) != '.' ){
		if( isalpha( ch ) ){
		ch = toupper( ch );
		arr[ ch -'A' ]++;
		}
	}
	for( ch = 'A'; ch <= 'Z'; ch++ ){
		i = arr[ ch -'A' ];
		if( i != 0 ){
			printf("%c ", ch);
			riproduci( i );
		}
	}
	return 0;
}



