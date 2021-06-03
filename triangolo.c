#include <stdio.h>

int main(void){

	printf("Inserisci tre lati separati da uno spazio: ");
	float a, b, c;
	scanf(" %f %f %f",&a,&b,&c);
	if(a>b+c || b>a+c || c>a+c){
		printf("Non e' un triangolo\n");
		return 0;
	}
	if( a == b && a == c ){
		printf("triangolo equilatero\n");
		return 0;
	}
	if( a == b || a == c ){
		printf("triangolo isoscele\n");
		return 0;
	}
	printf("triangolo scaleno\n");
	return 0;

}
