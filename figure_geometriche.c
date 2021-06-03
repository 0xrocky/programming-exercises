//Programma che calcola l’area e il perimetro di rettangoli e cerchi, definendo tre tipi di strutture
#include <stdio.h>
#include <stdlib.h>
//typedef enum {FALSO,VERO} boolean;

typedef struct{
	float x, y;
} Punto;

typedef struct{
	Punto a, b;
} Rettangolo;


typedef struct{
	Punto o;
	float raggio;
} Cerchio;

void *my_malloc( size_t size ){
	void *p;
	p = malloc( size );
	if( !p ){
		printf("malloc_failure");
		exit( EXIT_FAILURE );
	}
	else return p;
}

void stampa_punto( Punto *pnt ){
	printf("Ascissa: %f Ordinata %f\n", (*pnt).x, (*pnt).y );
}

Rettangolo crea( Punto x, Punto y ){
	Rettangolo r;
	r.a = x;
	r.b = y;
	return r;
}

float base( Rettangolo *r ){
	return ( (*r).b.x - (*r).a.x );
}

float altezza( Rettangolo *r ){
	return ( (*r).b.y - (*r).a.y );
}

float area( Rettangolo *r ){
	return ( base( r ) * altezza( r ) );
}

float perimetro( Rettangolo *r ){
	return ( base( r ) + altezza( r ) )*2;
}

Punto intersezione( Rettangolo *r ){
		Punto o;
		o.x = base( r ) / 2 + (r->a.x);
		o.y = altezza( r ) / 2 + (r->a.y);
		return o;
}
void trasla( Rettangolo *r, int asc, int ord ){
		(r->a.x) = (r->a.x) + asc;
		(r->b.x) = (r->b.x) + asc;
		(*r).a.y = (*r).a.y + ord;
		(*r).b.y = (*r).b.y + ord;
}

void interno( Rettangolo *r, Punto *p ){
	if( (p->x > r->a.x && p->x < r->b.x) && (p->y > r->a.y && p->y < r->b.y) ) printf("VERO\n");
	else printf("FALSO\n");
}

void stampa( Rettangolo *r ){
	printf("dati rettangolo\n");
	stampa_punto( &(*r).a );
	stampa_punto( &(*r).b );
	printf("Base: %f\n", base( r ) );
	printf("Altezza: %f\n", altezza( r ) );
	printf("Perimetro: %f\n", perimetro( r ) );
	printf("Area: %f\n", area( r ) );
	Punto o = intersezione( r );
	printf("intersezione delle diagonali: ");
	stampa_punto( &o );
}

int main(void){
	Rettangolo *p = calloc( 1, sizeof( Rettangolo ) );
	printf("Inserisci due punti cartesiani per disegnare il rettangolo(ascissa e ordinata)\n");
	scanf("%f %f %f %f", &(p->a.x), &(p->a.y), &(p->b.x), &(p->b.y) );
	//Rettangolo r = crea( uno, due );
	stampa( p );
	trasla( p, 1, 1 );
	stampa( p );
	Punto aCaso;
	aCaso.x =5, aCaso.y = 6;
	interno( p, &aCaso );
	free( p );
	
	/*Cerchio c;
	printf("Inserisci il raggio del cerchio\n");
	scanf("%f", &c.raggio);
	printf("Area e perimetro di cerchio\n");
	printf("Perimetro: %f - ", (c.raggio*2.*3.14) );
	printf("Area: %f\n", (c.raggio*c.raggio*3.14) );*/
	
	return 0;
}
