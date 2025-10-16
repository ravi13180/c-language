//LINKED LISTS CLASS: ----> TO CREATE AND PRINT FUNCTIONS FOR NODE
//                    ----> TO INSERT NODES
//                    ----> TO DELETE NODES

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
} *head = NULL;

void create() {
	struct node *ptr;
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	printf("enter data in node:");
	scanf("%d",&temp->data);
	if(head == NULL) 
	{
		head = temp;
	}
	else
	{
		ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;  //increment of nodes
		}
		ptr->next= temp;
	}
}
void display()
{
	struct node* ptr;
	ptr = head;
	while(ptr != NULL) 
	{
		printf(" %d->",ptr->data);
		ptr = ptr->next;
	}
	printf("NULL");
}

// INSERTION  ----->
void first_insert() 
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	printf("\nEnter data in first node:");
	scanf("%d",&temp->data);
	temp->next = head;
	head = temp;
}
void last_insert()
{
	struct node* temp, *ptr;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	printf("\nEnter data for last node:");
	scanf("%d",&temp->data);
	ptr = head;
	while(ptr->next != NULL) 
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
}
void anypos_insert() {
	int pos, count = 0;
	struct node *temp,*ptr;
	ptr = head;
	while(ptr != NULL) {
		count++;
		ptr = ptr->next;
	}
	printf("Enter position to insert:");
	scanf("%d",&pos);
	if(pos < 1 || pos > count + 1) {
		printf("Invalid Position.");
	}
	
	else {
		ptr = head;
		temp = (struct node*)malloc(sizeof(struct node));
		temp->next = NULL;
		printf("Enter data at your position:");
		scanf("%d",&temp->data);
		if(pos == 1) {
			temp->next = head;
			head = temp;
		}
		else {
			int i;
			for(i = 0; i < pos - 1; i++) {
				ptr = ptr->next;
			}
			temp->next = ptr->next;
			ptr->next = temp;
		}
	}
}

// DELETION  ------>
void first_delete() {
	struct node *ptr;
	ptr = head;
	if(ptr = NULL) {
		printf("\n Linked List is empty.");
	}
	else {
		head = ptr->next;
	    printf("\n %d node data deleted successfully.",ptr->data);
        free(ptr);
	}	
}
void last_delete() {
	struct node *ptr, *temp;
	ptr = head;
	if(ptr = NULL) {
		printf("\n Linked List is empty.");
	}
	else {
		while(ptr->next->next != NULL) {
			ptr = ptr->next;
		}
		temp = ptr->next;
	    ptr->next = NULL;
	    printf("\n %d is successfully deleted.",temp->data);
	    free(temp);
	}
}
void anypos_delete() {
	struct node *ptr, *temp;
	ptr = head;
	int pos, i , count = 0;
	if(ptr != NULL) {
		count++;
		ptr = ptr->next;
	}
	printf("Enter the position to be deleted:");
	scanf("%d",&pos);
	if(pos < 1 || pos > count+1) {
		printf("\n Invalid Position.");
	}	
	else {
		ptr = head;
		if(pos == 1) {
			head = ptr->next;
			printf("\n %d is deleted successfully from position 1.",ptr->data);
			free(ptr);
		}
		else {
			ptr = head;
			for(i = 1; i < pos-1; i++) {
				ptr = ptr->next;
			}
			temp = ptr->next;
			ptr->next = temp->next;
			printf("\n %d is deleted successfully from position %d.",temp->data,pos);
			free(temp);
		}
	}
}

void sum_nodes() {
	struct node* ptr = head;
	int sum = 0;
	while(ptr != NULL) {
		sum += ptr->data;
		ptr = ptr->next;
	}
	printf("sum of linked list data: %d",sum);
}

void alternate_nodes() {
	struct node* ptr = head;
	while(ptr != NULL) {
		printf(" %d->",ptr->data);
		if(ptr->next == NULL) {
			ptr = ptr->next;
		}
		else
		ptr = ptr->next->next;
	}
	printf("NULL");
}

void reverse_list() {
	struct node *pn,*cn,*temp;
	pn = head;
	if(head == NULL) {
		printf("Linked List is empty.");
	}
	else {
		head = head->next;
		cn = head;
		pn->next = NULL;
		
		while(head != NULL) {
			head = head->next;
			cn->next = pn;
			pn = cn;
			cn = head;
		}
		head = pn;
		temp = head;
		while(temp != NULL) {
			printf(" %d->",temp->data);
			temp = temp->next;
		}
		printf("NULL");
    }
	
}
int main() 
{
	int ch;
	while(1)
	{
		printf("\n1.create \n2.display \n3.first_insert \n4.last_insert \n5.anyposition_insert \n6.first_delete \n7.last_delete \n8.anyposition_delete \n9.sum \n10.alternate_nodes \n11.reverse_list \n12.exit \nEnter your choice:");
		scanf("%d",&ch);
		if(ch == 1) 
		create();
		else if(ch == 2)
		display();
		else if(ch == 3)
		first_insert();
		else if(ch == 4)
		last_insert();
		else if(ch == 5)
		anypos_insert();
		else if(ch == 6)
		first_delete();
		else if(ch == 7)
		last_delete();
		else if(ch == 8)
		anypos_delete();
		else if(ch == 9)
		sum_nodes();
		else if(ch == 10)
		alternate_nodes();
		else if(ch == 11)
		reverse_list();
		else if(ch == 12)
		break;
		else
		printf("\n wrong choice");
	}
}
