//programma che disegna una curva di koch
#include "libpsgraph.h"
#include <stdio.h>

void curva( int i, double x ){
	if( i == 0 ) draw(x);
	else{
			curva( i-1, x/3 );
			turn(-60);
			curva( i-1, x/3 );
			turn(120);
			curva( i-1, x/3 );
			turn(-60);
			curva( i-1, x/3 );
			
	}
}

int main(void){
	double x; int i = 5;
	scanf("%lf", &x);
	start("prova.ps");
	curva( i, x );
	end();
	return 0;
}
