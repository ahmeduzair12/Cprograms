#include<stdio.h>
#include<stdlib.h>

int main(){


	typedef int* int_pointer;
	int_pointer p;
	int a = 10;
	p = &a;
	
	printf("%d\n", p);
	printf("%d\n", *p);

}


