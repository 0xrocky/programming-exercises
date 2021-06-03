#include <stdio.h>
#include <stdlib.h>

void alternaRiga(n){
	int i, j;
	for(i=0;i<n;i++){
		if(i%2 == 0){
			for(j=0;j<n;j++)printf("+ ");
			printf("\n");
		}
		else{
			for(j=0;j<n;j++)printf("o ");
			printf("\n");
		}
	}
}

void alternaColonna(n){
	int i, j, pos = 0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(pos%2 == 0)printf("o ");
			else printf("+ ");
			pos++;
		}
	printf("\n");
	}
}

void triangolo(n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){ printf("| "); continue; }
			if(i<j) { printf("+ "); continue; }
			else printf("o ");
		}
	printf("\n");
	}
}

void rombo(n){
	int i, j;
	for(i=-n;i<=n;i++){
		for(j=-n;j<=n;j++){
			if(abs(i)+abs(j)<=n){ printf("o "); continue; }
			else printf("| ");
		}
	printf("\n");
	}
}

int main(void){
	int N;
	scanf(" %d",&N);
	alternaRiga(N);
	printf("\n");
	alternaColonna(N);
	printf("\n");
	triangolo(N);
	printf("\n");
	rombo(N/2);
	printf("\n");
	return 0;
	
}
