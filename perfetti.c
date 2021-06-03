#include <stdio.h>
#define N 12

int main(void){
	int corr;
	for( corr = 2; corr < N; corr++ )
		printf("il quadrato perfetto di %d è %d \n",corr,(corr*corr) );
	return 0;
}
