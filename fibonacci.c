#include<stdio.h>

int fibo(int n){

if(n==0) return 0;
if(n==1) return 1;

return fibo(n-1) + fibo(n-2);

}

void main(){

	int x,res;
	printf("Enter Length of Series\n");
	scanf("%d", &x);

	res = fibo(x);
	printf("%d\n", fibo(x));
}
