#include<stdio.h>
#include<stdlib.h>

int create_2d(int rows, int col){
	
	int **x;
	int i;

	x = (int**)malloc(rows*sizeof(int*));// creating a pointer array, which should hold the address of the corresponding col array
	
	for(i=0; i<col;i++){

		x[i] =  (int *)malloc(col*sizeof(int)); // allocating the memmory of 'col' number of cells for each pointer in the pointer array
	}
		
	return x;

}


int main(){

	int **p;
	int r,c,i,j;

	printf("Enter the Size of 2d Array Rows and Coloums\n");

	printf("Enter Rows\n");
	scanf("%d", &r);

	printf("Enter Coloums\n");
	scanf("%d", &c);

	p = create_2d(r,c);


	printf("Enter the values of the array\n");
	for(i=0;i<r;i++){

		for(j=0;j<c;j++) {
  			scanf("%d", &*(*(p+i)+j));// this is like acessing  p[0], the row block, which contains address of coloum array.
 							// refer padma reddy 
		}
		printf("\n");
	}

	printf("The Values of this array are\n");

	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){

			printf("%d\t", *(*(p+i)+j));
	}
	printf("\n");

	}

			
}	
