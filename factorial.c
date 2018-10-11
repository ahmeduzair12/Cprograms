#include<stdio.h>

int fact(int n){

	if(n == 0 || n == 1)
		return 1;
	return n*fact(n-1);
	}

void main(){

	int x,res;
	printf("Scan N :\n");
	scanf("%d", &x);
	res = fact(x);
	printf("%d\n",res);
	printf("GG");
}
