//programma che disegna un fiocco di koch
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

void fiocco( int i, double x ){
	int j;
	for( j = 0; j < 3; j++ ){
		curva( i, x );
		turn(120);
	}
}

int main(void){
	double x = 100; int i = 10;
	start("fioccoDiNeve.ps");
	fiocco( i, x );
	end();
	return 0;
}
