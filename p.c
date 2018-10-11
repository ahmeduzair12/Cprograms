#include<stdio.h>

void main(){

	int a;
	int *p;
	
	a = 10;
	
	p = &a;
	
	printf("%d\n", p);
	printf("%d\n", *p);
	return;
}
