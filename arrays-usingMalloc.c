#include<stdio.h>
#include<stdlib.h>

int Malloc(int n){
	int *x;
	x = (int*)malloc(n*sizeof(int));
	if(x==NULL) printf("Insufficient Memory\n");
	return x;
}

void main(){

	int *a;
	int n,i;
	printf("Enter the Size of Array\n");
	scanf("%d", &n);
	a = Malloc(n);
	printf("Enter the Elements inside the Array\n");
	for(i=0;i<n;i++){
		scanf("%d", &*(a + i));
	}
	printf("The Elements inside the Array are\n");
	for(i=0;i<n;i++){
	printf("%d\n", *(a+i));
	}


	}


