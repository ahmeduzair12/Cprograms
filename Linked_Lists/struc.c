#include<stdio.h>
#include<stdlib.h>
struct node
        {
                int info;
                struct node *link;
        };	typedef struct node* NODE;


int Malloc(int *p, int size){

	p = (int*)malloc(size*sizeof(struct node));

	if(p == NULL) printf("Insufficient Memory\n");

	return p;
}

int main(){

struct node* first = NULL;
printf("Creating the first Node\n");


first = Malloc(first,1);

(*first).info = 10;
(*first).link = NULL;

printf("Address of First Node :%d\n", first);
printf("Info: %d\n", (*first).info);
printf("Link: %d\n", (*first).link);

}

