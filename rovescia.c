// Programma che stampa al contrario una sequenza di numeri terminata da 0
#include <stdio.h>
#define N 100

int main(void){
	int a[N], flag = -1, i = 0;
	printf("Inserisci una sequenza di numeri terminata da 0\n");
	while(1){
		scanf("%d",&flag);
		if(flag == 0) break;
		else{ a[i] = flag; i++; }
	}
	i--;
	while(i >= 0){
		printf("%d ",a[i]);
		i--;
	}
	printf("\n");
	return 0;
}

