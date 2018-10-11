#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node* link;
	};
typedef struct node* NODE;

NODE Malloc(){
	
	NODE *p = (NODE*)malloc(1*sizeof(NODE));
	if(p == NULL) printf("Insufficient Memory\n");
	return p;
}

// Implementing Queues using Linked Lists
// First In First Out
// In Terms of Linked Lists, the element must be entered from the rear, that is 1st node holding address of 2nd node, then 2nd node,then 3rd etc
// Therefore Insertion is Done from the Read End and Removal is Done from the Front End.
// We hence write a program that does that.

NODE insert_rear(int item, NODE arg){

		NODE temp, cur;
		temp = Malloc();
		
		if(arg->link == NULL && arg->info == 0) { arg->info = item; return arg;}

		temp->info = item; // Making sure the last block holds this item value, since we are inserting from the rear end.
		temp->link = NULL; // Making sure the last block is not pointing anywhere else.

		cur = arg; //Here address of first linked list block is passed to this pointer var cur.
		
		while(cur->link != NULL){
			cur = cur->link; // Using that intital address, we try to access the address of last linked Block.
		}
		
		
		if(cur->link == NULL){ //If the last block is not linked to any other block, make it link with this Temp Block.
			cur->link = temp;
		}
			return arg; // Now after attaching the temp block, return it.
		
 }

NODE delete_front(NODE arg){

		NODE temp;
		temp = arg;
		if( temp == NULL) printf("The Queue is Empty\n");	
		temp = temp->link; // By doing this temp now points its next corresponding block.
		free(arg); // This is used to free the memory of the current block.
		return temp;// Returning the address from the next corresponding block of the deleted block.
}


void display(NODE arg){

		NODE temp;
		int i;
		temp = arg;

		if(arg == NULL){ printf("Nothing to Display, Empty Queue\n"); return; }
		while(temp != NULL){
			i++;
			printf("%d :\n", i);
			printf("%d\n\n", temp->info);
			temp = temp->link;
		}
		printf("\n");
	}
			
			
void main(){
	NODE first;
	int choice, item;
	first = NULL;
	first = Malloc();
	first->link = NULL;
	
	for(;;){
		printf("Press 1 to Insert in the Queue\n");
		printf("Press 2 to Delete an item from the Queue\n");
		printf("Press 3 to Display the Elements in the Queue\n\n");
		printf("Press 4 to Quit\n");
		printf("Select your option :\n");
		scanf("%d", &choice);

		switch(choice){
		
			case 1: 
				printf("Enter the Item in the Queue\n");
				scanf("%d", &item);
				first = insert_rear(item,first);
				break;
			case 2: 
				first = delete_front(first);
				printf("Item deleted\n");
				break;

			case 3:
				printf("The Elements in the Queue are :\n");
				display(first);
				break;
			default :
				exit(0);
		}
	}	
}









	
