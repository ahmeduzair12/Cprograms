//Implementation of Stacks using Linked Lists.
// Stack are basically implemented in Last in First out format.
// Hence to implement this using Linked Lists ,
// We insert the element from rear and delete from the rear.
// Refer PadmaReddy for more info.
// Creating a Structure first


#include<stdio.h>
#include<stdlib.h> 

// Creating a Node
struct node{
	int info;
	struct node* link;
	};
// Creating a Pointer to Node Datatype
typedef struct node* NODE;


// Creating Malloc Allocation

NODE Malloc(){
	
	NODE *p = (NODE*)malloc(1*sizeof(struct node));
	if(p == NULL) printf("Insufficient Memory\n");
	return p;
}

//Insertion Function, Inserting from Rear

NODE insert_rear(int item, NODE arg){
	
		NODE temp, cur;
		temp = Malloc();
		
		if(arg->link == NULL && arg->info == 0) { arg->info = item; return arg;}
		
		temp->info = item;
		temp->link = NULL;
		
		cur = arg;
		
		if(cur->link != NULL){
			cur = cur->link;
		}

		if(cur->link == NULL){
			cur->link = temp;
		}
		
		return arg;
}


NODE delete_rear(NODE arg){
		
		NODE prev, cur;
		if(arg == NULL) {printf("Stack Empty\n"); return ;}
		cur = arg;

		while(cur->link != NULL){
			prev = cur;
			cur = cur->link;
		}
		
		if( cur->link == NULL){
			free(cur);
		}
		
		prev->link = NULL;
		return arg;
}

void display(NODE arg){
		NODE temp;
		int i;	
		if(arg == NULL) { printf("No elements in the stack\n"); return; }
		temp = arg;
		
		while(temp != NULL){
			i++;
			printf("Item: %d\n", i);
			printf("%d\n", temp->info);
			temp = temp->link;
		}

}



void main(){

	int choice, item;
	NODE first = NULL ;
	first = Malloc();
	first->link = NULL;


	for(;;){
	

	printf("Press 1 to Push item in the stack\n");
	printf("Press 2 to Pop item from the stack\n");
	printf("Press 3 to Display items in the stack\n");
	printf("Press 4 to Quit\n");
	printf("\n\n");
	printf("Select your Option\n");
	scanf("%d", &choice);
	printf("\n");
	
	switch(choice){
		
		case 1:
			printf("Enter the Element to Push\n\n");
			scanf("%d", &item);
			first = insert_rear(item, first);
			printf("\n");
			break;
		case 2:
			first = delete_rear(first);
			printf("Element Popped Successfully\n");
			printf("\n");
			break;
		case 3:
			printf("The elements present in the Stack are\n");
			display(first);
			printf("\n");
			break;

		default : exit(0);


		}
	}
}

		
