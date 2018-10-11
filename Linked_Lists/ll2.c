#include<stdio.h>
#include<stdlib.h>


	struct node{

		int info;
		struct node *link;
	};
	
	typedef struct node* NODE; // Creating a Pointer Datatype for struct node which will hold the address of the structure.
	
	int Malloc(){
		NODE p;
		p = (NODE*)malloc(1*sizeof(struct node));
		if(p == NULL) printf("Insufficient Memory\n");
		return p;
	}


	NODE insert_front(int item,NODE argfirst){

		NODE temp;
		temp = Malloc();	
		if(argfirst->link == NULL && argfirst->info == 0) { argfirst->info = item; return argfirst;} 
		
		else{
			temp->info= item;
			temp->link = argfirst;
		
		}
		

		return temp;
	
	}


	void display(NODE first){

		NODE temp;
		if(first == NULL){ printf("The list is empty\n"); return;}
		temp = first;
		while(temp != NULL){
			printf("%d\n", temp->info);
			printf("The Address of Memory Block Structure of item '%d' (Current Block) is :%d\n\n", temp->info, temp);
			printf("Hence the Elements in the Structure Represented by %d are :\n\n", temp);
			printf("ITEM : %d\n", temp->info);
			printf("This NODE is Linked to : %d\n\n", temp->link); 
			temp = temp->link;
			printf("To Check if Temp pointer is now Pointing/Holding the address to the next Block/Node\n");
			printf("Temp must be equal to link of Current block\n");
			printf("Current Address of Temp that its Pointing to is : %d\n\n", temp);
		}
		printf("\n");


	}

	void main(){
		int choice,item;

		NODE first = NULL;
		first = Malloc();
		(*first).link = NULL;
		printf("Address in first : %d\n", first);
		for(;;){
			printf("Press 1 to Insert in the front\n");
			printf("Press 2 to Display the Nodes\n");
			printf("Press any other key to Quit\n");
			printf("Enter an Option\n");
			scanf("%d", &choice);
			switch(choice){
				case 1: 
					printf("Enter the Item to be inserted\n");
					scanf("%d", &item);
					first = insert_front(item, first);
					printf("Address of first after inserting item '%d' is: %d \n",item, first);
					break;
				case 2:
					printf("The items in the nodes are :\n\n");
					display(first);
					break;
				default: exit(0);
			}
	}
}
		
		
		
