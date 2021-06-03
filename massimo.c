#include <stdio.h>
#define N 12

int main(void){
	int x,y;
	scanf(" %d %d",&x,&y);
	x>y ? printf("max = %d \n",x):printf("max = %d \n",y);
	return 0;
}
