//Programma che legge una stringa terminata da un punto e stabilisce main(void){} se è palindroma

#include <stdio.h>
#define L 100

int main(void){
	printf("Inserisci una stringa terminata dal . \n");
	int i = 0, j;
	char ch, arr[L] = {};
	while( ( ch = getchar() ) != '.' ){
		arr[i] = ch;
		i++;
	}
	i--; //decremento la i perchè viene ugualmente incrementata prima di uscire dal ciclo while
	printf("La stringa \"");
	for( j = 0; j <= i; j++ )
		printf("%c", arr[j] );

	j = 0; //resetto j
	while( j < i ){
		if( arr[j] != arr[i] ){
			printf("\" non è palindroma\n");
			return 0;
		}
		i--; j++;
	}
	printf("\" è  palindroma\n");
	return 0;
}
