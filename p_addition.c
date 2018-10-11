#include<stdio.h>

void main(){

//	int a,res,p; test1
	
	int a, res, *p;
		
	a = 10;
	
	p = &a;

	//res = p + a; test1

	printf("performing first addition p + a \n");
	res = p + a;
		
	printf("p = %d + a = %d\n", p,a);	
	printf("res = %d\n", res);
	
	printf("performing second test *p + a \n");
	res = *p + a;
	printf("p = %d + a = %d\n", *p,a);       
        printf("res = %d\n", res);


	}
