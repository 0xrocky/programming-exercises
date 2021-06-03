//programma che simula un registro di prenotazione
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 26
typedef char *String;
void *my_malloc( size_t size );

String *newBook( int *size ); /*Crea un nuovo registro che permetta la prenotazione di n posti, da 0 a n − 1. Se esiste già un registro di prenotazione, quest’ultimo deve essere cancellato.*/
  
void add_book( String *p, int *k, String name ); /*Se il posto k è libero, prenota il posto k per il cliente identificato da name. Altrimenti, stampa un messaggio di errore.*/

void cancel( String *p, int *k ); /*Se il posto k è occupato, cancella la prenotazione di k. Altrimenti, stampa un messaggio di errore.*/

void move( String *p, int *from, int *to ); /*Sposta il cliente dal posto from al posto to se ciò è possibile (ossia, from è occupato e to libero). Altrimenti, stampa un messaggio di errore.*/

void printBook( String *p, int *size ); /* Stampa il contenuto del registro (posti prenotati). */

int main(void){
	
	String *book, str;
	char c;
	int n, f, t, flag = 0;
	while( ( c = getchar() ) ){

  		switch( c ){
   			case 'b': // b n --> newBook(n)
   				if( flag != 0 ){			//flag tiene il conto di quanti registri sono stati creati
					for( t = 0; t < n; t++ )	//se flag != 0 
						free( *( book + t ) );	//allora libero lo spazio di memoria che ho creato per ogni stringa
					free( book );			//e poi libero il vettore di puntatori
				}
   				scanf("%d", &n );
   				book = newBook( &n );
   				flag++;
				break;
			case '+': // + k name --> book(k, name)
				scanf(" %d %s", &f, str);
				add_book( book, &f, str );
      				break;
			case '-': // - k --> cancel(k)
				scanf("%d", &f );
				cancel( book, &f );
      				break;
			case 'm': // m from to ---> move from to
				scanf("%d %d", &f, &t);
				move( book, &f, &t );
				break;
			case 'p': // p ---> printBook()
				printBook( book, &n );
				break;
			case 'f':
				for( t = 0; t < n; t++ )		//libero tutta la memoria allocata
					free( *( book + t ) );
				free( book );
				exit( EXIT_SUCCESS );			//esco
  		}
	}
	return 0;
}

void *my_malloc( size_t size ){
	void *p;
	p = malloc( size );
	if( !p ){
		printf("malloc_failure");
		exit( EXIT_FAILURE );
	}
	else return p;
}
String *newBook( int *size ){
	printf("REGISTER[0...%d]\n", (*size)-1);
	int i; String *p;
	p = my_malloc( (*size) * sizeof( char* ) );		// alloco lo spazio per un vettore di puntatori a char di n celle
	for( i = 0; i < (*size); i++ ){
		*( p + i ) = my_malloc( sizeof( char ) );	//per il momento, alloco per ogni p[k] lo spazio di memoria solo per il carattere nullo
		**( p + i ) = '\0'; 				//e ce lo metto 
	}
	return p;
}
void add_book( String *p, int *k, String name ){
	if( !p ){
		printf("add_failure\n");
		exit( EXIT_FAILURE );
	}
	if( **( p + (*k) ) != '\0' ){				//se la posizione non è vuota(quindi come primo carattere non c'è \0 )
		printf("posizione occupata\n");			//stampa un messaggio di errore
		return;						//e ritorna al ciclo
	}
	else{	free( *( p + (*k) ) );						//altrimenti libera lo spazio di memoria dedicato a \0
		*( p + (*k) ) = my_malloc( strlen(name)*sizeof( char ) );	//alloca in p[k] uno spazio di memoria di esattamente la lunghezza di "name"
		strcpy( *( p + (*k) ), name );					//e copia tale stringa nel registro alla posizione k corretta
	}
}
void cancel( String *p, int *k ){
	if( !p ){
		printf("cancel_failure\n");
		exit( EXIT_FAILURE );
	}
	if( **( p + (*k) ) != '\0' ){				//se la posizione non è vuota(quindi come primo carattere non c'è \0 )
		free(*( p + (*k) ) );				//libera lo spazio di memoria dedicato al nominativo che aveva prenotato la posizone k
		*( p + (*k) ) = my_malloc( sizeof( char ) );	//alloca in p[k] lo spazio di memoria solo per il carattere nullo
		**( p + (*k) ) = '\0';				//e ce lo metto 
	}
	else printf("cancel_failure\n");
}
void move( String *p, int *from, int *to ){
	if( !p ){
		printf("move_failure\n");
		exit( EXIT_FAILURE );
	}
	if( **( p + (*from) ) != '\0' && **( p + (*to) ) == '\0'){			       //se il registro in from è occupato, e in to è libero
		*( p + (*to) ) = my_malloc( strlen( *( p + (*from) ) )*sizeof( char ) );       //alloca in p[to] uno spazio di memoria necessario per 												       contenere esattamente il nominativo salvato in posizione from
		strcpy( *( p + (*to) ), *( p + (*from) ) );				       //sposto il nominativo da from a to
		cancel( p,from );							       //cancello il nominativo da from, libero lo spazio di memoria
	}										       //alloco lo spazio necessario per il carattere nullo,lo metto
	else printf("move_failure\n");
}
void printBook( String *p, int *size ){
	printf("REGISTER[0...%d]\n", (*size)-1);
	int i;
	for( i = 0; i < (*size); i++ )								//stampo la posizione e il nominativo corrispondente, se
		if( **(p + i) != '\0' ) printf(" %d --> %s\n", i, *(p + i) );			//la poszione non è vuota
}
