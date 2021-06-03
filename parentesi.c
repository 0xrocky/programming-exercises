#include <stdio.h>

int main( void ){
	printf( "stringa?\n" );
	int cont=0,pos=0;
	char ch;
	while( (ch=getchar())!='.' ){
		pos++;
		if( ch==')' )cont++;
		if( ch=='(' )cont--;
		if( cont>0 ){ printf("Parentesi chiusa di troppo in posizione %d\n",pos ); return 0;}
	}
	if( cont < 0 ) printf( "Ci sono parentesi aperte e non chiuse\n" );
	else printf( "Espressione ben parentesizzata\n" );
	return 0;
}
