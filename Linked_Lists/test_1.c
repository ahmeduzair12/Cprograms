#include<stdio.h>
#include<stdlib.h>

struct node{

	int info;
	struct node* link;
};

typedef struct node* NODE;


void main(){
	struct node S,S1;
	NODE first;

	S.info = 10;
	S.link = &S1;
	S1.info = 20;
//	S1.link = NULL;
	
	first = &S;

//	first->info = 10; if we use this directly without initializing the structure pointer we get a segmentation error.
//      Since first variable is holding the address of Structure variable 'S', the address of the structure is stored in 'first'.
// 	The pointer 'first' only holds the address of the Structure.
//	We dereference the value of pointer first by using * operator
// 	for ex :  first = &S;
//      first variable will now only hold the address of S;
// 	To access values we use *, like (*first).info = 10;
//	Understand it !!

	printf("The address of the Structure S : %d\n", &S);
	printf("The Value of Structure Pointer first : %d\n", first);
	printf("This is the information stored in S : %d\n", (*first).info);
	printf("This is the address of Structure S1 is : %d\n", &S1);
	printf("The value of S.link is %d\n", S.link);
	printf("The Value of S.link is using pointer is :%d\n", (*first).link); //Using pointer var 'first' to derefrence S.link
}
