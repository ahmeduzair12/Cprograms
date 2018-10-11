#include<stdio.h>

void main(){

	int a[10];
	int i;
	int *p;
	for(i=0;i<10;i++){
		a[i]=i;
	}

//	p = &a[0];
//	printf("pointer address %d\n", p);
//	printf("array address %d\n", a);
	
//	printf("%d\n", a+4);

	printf("Address of Each Array Cell using & :\n");
	for(i=0;i<10;i++){
	printf("%d\n", &a[i]);
	}

	printf("Address of Each Array Cell using + operator :\n");
        for(i=0;i<10;i++){
        printf("%d\n", (a+i));
        }



}

