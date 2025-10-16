//INSERTION ON LINKED LIST  ----> AT BEGINNING
/*
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;	
};
struct node* create(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = NULL;
	
	return new_node;
}
struct node* insert(struct node* head, int data) {
	struct node* new_node = create(data);
	new_node->next = head;
	
	return new_node;
}
int display(struct node* head) {
	struct node* ptr = head;
	while(ptr != NULL) {
		printf("\n %d",ptr->data);
		ptr = ptr->next;
	}
}
int main() {
	struct node* head = create(2);
	head->next = create(3);
	head->next->next = create(4);
	head->next->next->next = create(5);
	
	printf("original linked list:");
	display(head);
	
	printf("\nafter inserting new node at beginning:");
	int data = 1;
	head = insert(head, data);
	display(head);
}
*/




