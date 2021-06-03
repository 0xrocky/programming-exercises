#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){

	int maxd = INT_MAX, mind = INT_MIN;
	char maxc = CHAR_MAX, minc = CHAR_MIN;
	long maxl = LONG_MAX, minl = LONG_MIN;
	short maxs = SHRT_MAX, mins = SHRT_MIN;
	float maxf = FLT_MAX, minf = FLT_MIN;
	double maxdbl = DBL_MAX, mindbl = DBL_MIN;
	unsigned char umaxc = UCHAR_MAX;
	unsigned short umaxs = USHRT_MAX;
	unsigned int umaxd = UINT_MAX;
	unsigned long umaxl = ULONG_MAX;
	
	printf("Massimo valore intero %d e sua dimensione %d \n",maxd,sizeof(maxd));
	printf("Minimo valore intero %d e sua dimensione %d \n",mind,sizeof(mind));
	printf("Massimo valore char %c e sua dimensione %d \n",maxc,sizeof(maxc));
	printf("Minimo valore char %c e sua dimensione %d \n",minc,sizeof(minc));
	printf("Massimo valore long %ld e sua dimensione %d \n",maxl,sizeof(maxl));
	printf("Minimo valore long %ld e sua dimensione %d \n",minl,sizeof(minl));
	printf("Massimo valore short %d e sua dimensione %d \n",maxs,sizeof(maxs));
	printf("Minimo valore short %d e sua dimensione %d \n",mins,sizeof(mins));
	printf("Massimo valore double %lf e sua dimensione %d \n",maxdbl,sizeof(maxdbl));
	printf("Minimo valore double %lf e sua dimensione %d \n",mindbl,sizeof(mindbl));
	printf("Massimo valore float %f e sua dimensione %d \n",maxf,sizeof(maxf));
	printf("Minimo valore float %f e sua dimensione %d \n",minf,sizeof(minf));
	
	printf(" \n Massimo valore unsigned char %c e sua dimensione %d \n",umaxc,sizeof(umaxc));
	printf("Massimo valore unsigned dhort %d e sua dimensione %d \n",umaxs,sizeof(umaxs));
	printf("Massimo valore unsigned intero %d e sua dimensione %d \n",umaxd,sizeof(umaxd));
	printf("Massimo valore unsigned long %ld e sua dimensione %d \n",umaxl,sizeof(umaxl));
	return 0;
}
