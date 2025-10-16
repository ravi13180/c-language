//LINKED LISTS
/*
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
};
int count_nodes(struct node* head);

int main() {
	struct node* head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 50;
	head->next = NULL;
	
	
	struct node* box2 = (struct node*)malloc(sizeof(struct node));
	box2->data = 62;
	box2->next = NULL;
	
	//to link the data by linking the next of head to the head/data of box1
	head->next = box2;
	
	struct node* box3 = (struct node*)malloc(sizeof(struct node));
	box3->data = 400;
	box3->next = NULL;
	
	//to link the data by linking the next of box2 to the head/data of box3 
	box2->next = box3;
	//function calling of count
	count_nodes(head);
	display(head);
}
//function to count the number of the nodes
int count_nodes(struct node* head) {
	int count = 0;
	if(head == NULL) {
		printf("linked list is empty.");
	}
	struct node* ptr;
	ptr = head;
	while(ptr != NULL) {
		count++;
		ptr = ptr->next;
	}
	printf("count = %d",count);
}
//display function to print the data of the node
int display (struct node* head) {
	if(head == NULL) {
		printf("linked list is empty.");
	}
	struct node* ptr;
	ptr = head;
	while(ptr != NULL) {
		printf("\n %d",ptr->data);
		ptr = ptr->next;
	}
	printf("\n %d",ptr->data);
}
*/



//
/*
#include <stdio.h>
#include <stdlib.h>
    // link list node
struct node {
	int data;
	struct node* next;
};
    // function to create a new node
struct node* create(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = NULL;
	return new_node;
}
    // counts number of nodes in linked list
int count_nodes(struct node* head) {
	int count = 0;
	struct node* ptr = head;
	while(ptr != NULL) {
		count++;
		ptr = ptr->next;
	}
	return count;
}
int display(struct node* head) {
	struct node* ptr = head;
	while(ptr != NULL) {
		printf("\n %d",ptr->data);
		ptr = ptr->next;
	}
}
    // driver code(main function)
int main() {
	//create a hard-coded linked list 
	//10->2->41->9->56->7
	struct node* head = create(10);
	head->next = create(2);
	head->next->next = create(41);
	head->next->next->next = create(9);
	head->next->next->next->next = create(56);
	head->next->next->next->next->next = create(7); 
    
	//function call
	printf("count of nodes is %d",count_nodes(head));
	display(head);
	return 0;	
}
*/



//searching

