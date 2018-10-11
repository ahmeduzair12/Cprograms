#include<stdio.h>

void main(){

	int a[5][5];
	int i,j;
	
	for(i=0;i<5;i++){

	for(j=0;j<5;j++){
	
	a[i][j]= j;
	}
	}

	printf("%d\t%d\n", a[1][4], (a[1] + 4));
	printf("%d\n", *(a[1] + 4));
//	printf("%d\n", *(a+4));
//	printf("%d\n", a[4]);
//	printf("%d\n", *(a + 4)); // here we are derefrencing &a[4], since this array will contain address of other array it prints address
//	printf("%d\n", *(a[4]+0)); // this is like adding the address of a[4] with integer 0, so if we dereference this we get the value of 
					// a[4][0]	 

       /* for(i=0;i<5;i++){
	printf("\n");
        for(j=0;j<5;j++){

        printf("%d\t", a[i][j]);
        }
        printf("\n");
        }*/

}
	
