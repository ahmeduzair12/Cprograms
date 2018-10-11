#include<stdio.h>

void main(){

	int a[20];
	int pos,i,j,n;

	pos = 0;

	printf("Enter the number of elements\n");
	scanf("%d",&n);

	printf("Enter the Elements inside the array\n");
	for(i=0;i<n;i++){

	scanf("%d",&a[i]);

			}

	printf("The Least item and its position is\n ");
	for(j=1;j<n;j++){
	
		if(a[j]<a[pos]){

			pos = j;
				}	

			}
	printf("Smallest = %d, Position = %d\n",a[pos],pos+1); 
}		
