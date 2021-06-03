//programma che trasforma un orario fornito in secondi in un orario normale
#include <stdio.h>

void split_time ( long int tot_sec, int *h, int *m, int *s );

int main(void){
	int h, m, s;
	long orario;
	scanf("%ld",&orario);
	split_time( orario, &h, &m, &s );
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}

void split_time ( long int tot_sec, int *h, int *m, int *s ){
	*h = tot_sec/3600; //ore
	tot_sec %= 3600;   //in tot_sec "tolgo" le ore, lascio solo minuti e secondi
	*m = tot_sec/60;
	*s = tot_sec % 60;
}
