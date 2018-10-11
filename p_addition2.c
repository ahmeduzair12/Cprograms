#include<stdio.h>

void main(){

	int a = 10;

	int *b;

	b=&a;

	printf("%d\n", b);
	printf("%d\n". *b);

/*
	No matter if a general variable is holding the address of another variable 
	for ex, 
		int a,b;
		a = 10;
		b = &a;  here the address of variable a is stored in b.

		printf("%d", *b);
	Since, we are using *b here, we are trying to dereference a general variable holding the address of a.  
	This action cannot be performed because we cannot dereference a general variable.

	Only if the variable was a pointer then the above action could be performed. 
	for ex,

		int a, *b;
		a = 10;
		b = &a;

		printf("%d", *b);

	Only dereferencing of a pointer variable can be done. */


}
