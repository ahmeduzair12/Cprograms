#include<stdio.h>
void swap(int x, int y);

void swap(int x, int y){

	int temp = x;
	x = y;
	y = temp;
}

void main(){

	int a[30],n,i,j,pos,temp;
	
	pos = 0;
	i = 0;
	j = 0;
	
	printf("Enter the No. of Elements for the array\n");
	
	scanf("%d",&n);

	printf("Enter the Elements of the Array\n");
	
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}

	printf("The sorted list is\n");
	
	for(i=0;i<n;i++){
		
		pos = i;

		for(j=i+1;j<n;j++){

		if(a[j]<a[pos]) 
		
		pos = j;

		}
		
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;	

       		 printf("%d\n", a[i]);
	}

	

}


	
	
