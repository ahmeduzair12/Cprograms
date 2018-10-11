#include<stdio.h>
#include<stdlib.h>

int create_2d(int rows, int col){
	
	int **x;
	int i;

	x = (int**)malloc(rows*sizeof(int*));// creating a pointer array, which should hold the address of the corresponding col array
	if(x==NULL) printf("Insufficient Memory\n");

	for(i=0; i<col;i++){

		x[i] =  (int *)malloc(col*sizeof(int)); // allocating the memory of 'col' number of cells for each pointer in the pointer array
	}
		
	return x;

}


int main(){

	int **p;
	int **q;
	int **res;
	int m,n,r,c,i,j,k;
	// Taking Inputs from Arrays
	// From 1st Array
	printf("Enter the Size of 1st Matrix:\n");

	printf("Enter Rows\n");
	scanf("%d", &r);

	printf("Enter Coloums\n");
	scanf("%d", &c);

	// Creating First array dynamically

	p = create_2d(r,c);


	printf("Enter the Values for this Matrix:\n");
	for(i=0;i<r;i++){

		for(j=0;j<c;j++) {
  			scanf("%d", &*(*(p+i)+j));// this is like acessing  p[0], the row block, which contains address of coloum array.
 							// refer padma reddy 
		}
		printf("\n");
	}

        printf("Enter the Size of 2nd Matrix:\n");

        printf("Enter Rows\n");
        scanf("%d", &m);
        if(c!=m){

        printf("Matrix Multiplication cannot be performed\n");
        exit(0);
        }


        printf("Enter Coloums\n");
        scanf("%d", &n);


	// Creating Second Array dynamically

        q = create_2d(m,n);

	printf("Enter the Values for this Matrix:\n");
	
        for(i=0;i<m;i++){

              for(j=0;j<n;j++) {

                        scanf("%d", &*(*(q+i)+j));
                                                       
                }
                printf("\n");
         }

	//	Printing the first Matrix

	printf("The 1st Matrix is:\n");

	for(i=0;i<r;i++){
		
		for(j=0;j<c;j++){

			printf("%d\t", *(*(p+i)+j));
	}
		printf("\n");
	}
	
	printf("\n");

	// printing the second Matrix 
        printf("The 2nd Matrix is:\n");

        for(i=0;i<m;i++){

                for(j=0;j<n;j++){

                        printf("%d\t", *(q[i]+j));
        }
        	printf("\n");

	}

	printf("\n");

	// Creating Resultant Matrix 
	res = create_2d(r,n);

	// Matrix Multiplication
	for(i=0;i<r;i++){
		
		for(j=0;j<n;j++){
					
				for(k=0;k<m;k++){
					
					*((res[i]+j)) += (*(p[i] + k)) * (*(q[k] + j));
				}
	
			}
	}

	printf("The Resultant Matrix is:\n");
	
	for(i=0;i<r;i++){

		for(j=0;j<n;j++){

			printf("%d\t", *(*(res+i)+j));
		}
		printf("\n");
	}

	printf("\n");

	p = NULL;
	q = NULL;
	res = NULL;


}

