#include <stdio.h>
#include <ctype.h>

int main(void){

	char c;
	c = getchar();
	c = tolower(c);
	if(c<'a' || c >'z' || c == 'j' || c == 'k' || c == 'w' || c == 'x' || c == 'y'){
		printf("carattere non italiano\n");
		return 0;
	}
	if(c == 'a'|| c =='e'|| c== 'i' || c == 'o' || c == 'u'){
		printf("%c e una vocale\n",c);
	}
	else{
		printf("%c e una consonante\n",c);
	}
	return 0;

}
