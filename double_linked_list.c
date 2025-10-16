// ----> DOUBLE LINKED LIST

#include <stdio.h>
#include <stdlib.h>
struct node {
	struct node *prev, *next;
	int data;
}*head = NULL;

void create_dll() {
	struct node *temp, *ptr;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\n enter data in node:");
	scanf("%d",&temp->data);
	temp->prev = temp->next = NULL;
	if(head == NULL) {
		head = temp;
	}
	else {
		ptr = head;
		while(ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
		temp->next = NULL; 
	}
}

void display_dll() {
	struct node* ptr = head;
	printf("\nDouble Linked List is:");
	while(ptr != NULL) {
		printf("<-%d->",ptr->data);
		ptr = ptr->next;
	}
	printf("NULL");
}

void first_insertion() {
	struct node *ptr, *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nenter data value to be inserted:");
	scanf("%d",&temp->data);
	temp->prev = temp->next = NULL;
	ptr = head;
	temp->next = head;
	ptr->prev = temp;
	head = temp;	
}

void last_insertion() {
	struct node *ptr, *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nenter data to be inserted at last:");
	scanf("%d",&temp->data);
	temp->prev = temp->next = NULL;
	ptr = head;
	while(ptr->next != NULL) {
		ptr = ptr->next;
	}
	temp->prev = ptr;
	ptr->next = temp;
}

void any_pos_insertion() {
	int i, pos, length = 0;
	struct node *ptr, *temp;
	ptr = head;
	printf("\nenter position:");
	scanf("%d",&pos);
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nenter data to be inserted at position %d:",pos);
	scanf("%d",&temp->data);
	temp->prev = temp->next = NULL;
	while(ptr!=NULL) {
		length++;
		ptr = ptr->next;
	}
	if(pos < 1 || pos > length + 1) {
		printf("\n Invalid 	Position.");
	}
	else {
		if(pos == 1) {
			temp->next = head;
			ptr->prev = temp;
			head = temp;
		}
		else {
			ptr=head;
			for(i = 1; i < pos-1; i++) {
				ptr = ptr->next;
			}
			struct node *ptr1 = ptr->next;
			temp->next = ptr1;
			temp->prev = ptr;	
			ptr->next = temp;
			ptr1->prev = temp;
		}
		
	}	
}

void first_delete() {
	struct node *ptr, *temp;
	if(head == NULL) {
		printf("\n List Is Empty.");
	}
	ptr = head;
	temp = ptr->next;
	head = temp;
	temp->prev = NULL;
	free(ptr);
}

int main() {
	int ch;
	while(1) {
		printf("\n1.create \n2.display \n3.first_insertion \n4.last_insertion \n5.any_pos_insertion \n6.first_delete \n7.exit \nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: {
				create_dll();
				break;
			}
			case 2: {
				display_dll();
				break;
			}
			case 3: {
				first_insertion();
				break;
			}
			case 4: {
				last_insertion();
				break;
			}
			case 5: {
				any_pos_insertion();
				break;
			}
			case 6: {
				first_delete();
				break;
			}
			case 7: {
				break;
			}
			default:
				printf("wrong choice.");
		}
	}
}

