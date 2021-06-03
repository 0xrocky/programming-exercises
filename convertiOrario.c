//Programma che converte un orario in formato 24 ore nel corrispondente orario nel formato AM/PM e viceversa

#include <stdio.h>
#include <ctype.h>
#define L 3
int main(void){

	int ore, minuti, i = 0;
	printf("inserisci orario in formato 24ore o AM/PM, usando come separatore : ");
	scanf("%d:%d", &ore, &minuti);
	char ch, arr[L] = {};
	while( ( ch = getchar() ) != '\n' ){
		if( isspace(ch) ) continue;
		arr[i] = ch;
		i++;
	}	
	if( arr[0] == 'A' ){	//sono nel caso formato AM
		ore < 10 ? printf("0%hd:",ore) : printf("%hd:",ore); 
		minuti < 10 ? printf("0%hd\n",minuti) : printf("%hd\n",minuti); 
		return 0;
	}
	if( arr[0] == 'P' ){	//sono nel caso formato PM
		ore += 12; ore %= 24;
		ore < 10 ? printf("0%hd:",ore) : printf("%hd:",ore); 
		minuti < 10 ? printf("0%hd\n",minuti) : printf("%hd\n",minuti); 
		return 0;
	}
	if( ore > 12 ){
		ore -= 12;
		ore < 10 ? printf("0%hd:",ore) : printf("%hd:",ore); 
		printf("%d PM\n", minuti);
	}
	else{
		ore < 10 ? printf("0%hd:",ore) : printf("%hd:",ore); 
		printf("%d AM\n", minuti);
	}

	return 0;
}
