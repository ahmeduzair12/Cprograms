// Program to create a Linked List and Display its contents Dynamically.


#include<stdio.h>
#include<stdlib.h>

struct node{

	int info;
	struct node *link;
};
typedef struct node* NODE;


int Malloc(int *p, int size){

	p = (int *)malloc(size*sizeof(struct node));
	if(p == NULL) printf("INSUFFICIENT MEMORY\n");
	return p;
}

NODE insert_front(int item,NODE first){

	NODE temp;
	temp = Malloc(temp,1); // Creating a Temporary Node, which has to inserted into the front side.
	temp->info = item; // Item that user wants to insert is stored in this Temp Node.
	temp->link = first;// Since this node is being inserted in the front end, 'first' now becomes the second node.
	first = temp;// Now making first to hold the address of temp node. Now first points to the first node address. 
	return temp;
}
	
void display(first){

	NODE temp;
	temp = first;
	if(temp == NULL) printf("The list is Empty\n");

	while(temp != NULL){

		printf("The items are %d\n", (*temp).info);
		temp = temp->link;
	}
	printf("\n");
}


void main(){
	int choice, item;

	NODE first = NULL;
	
	first = Malloc(first,1);
	
	printf("Address of First node %d\n", first);
	for(;;)
	{

		printf("Press 1 to Insert an Item in the front\n");
		printf("Press 2 to Display\n");
		printf("Press any key other than 1 and 2 to Quit\n");
		printf("Choose an Option\n");
		scanf("%d", &choice);

		switch(choice){
			case 1: 
				printf("Enter the item \n");
				scanf("%d", &item);
				if((*first).info== 0) first->info = item;
				else
				first = insert_front(item, first);
				break;
				
			case 2:
				display(first);
				break;

			default: 
				exit(0);
		}
	}

//	printf("Address of First node after inserting an item %d\n", first); 

}

		
				

