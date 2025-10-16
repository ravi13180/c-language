//-----QUEUE USING ARRAY

/*
#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue() {
	int val;
	printf("\nenter value:");
	scanf("%d",&val);
	if(rear == max-1) {
		printf("\nqueue overflow");
	}
	else if(front == -1 && rear == -1) {
		front = rear = 0;
		queue[rear] = val;
	}
	else {
		rear++;
		queue[rear] = val;
	}
}

void dequeue() {
	if(front == -1 && rear == -1) {
		printf("\nqueue underflow");
	}
	else if(front == rear) {
		front = rear = -1;
	}
	else {
		printf("\n%d is deleted\n.",queue[front]);
		front++;
	}
}

void peek() {
	if(front == -1 && rear == -1) {
		printf("\nqueue underflow");
	}
	else {
		printf("%d is front",queue[front]);
	}
}

void display() {
	if(front == -1 && rear == -1) {
		printf("\nqueue underflow");
	}
	int i;
	for(i = front; i < rear; i++) {
		printf("%d	",queue[i]);
	}
}

int main() {
	int ch;
	while(1) {
		printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\nenter your choice:");
	    scanf("%d",&ch);
	    switch(ch) {
		    case 1: {
				enqueue();
				break;
		}
	    	case 2: {
				dequeue();
				break;
		}
		    case 3: {
				peek();
				break;
		}
		    case 4: {
				display();
				break;
		}
		    default : {
			    printf("wrong choice.");
			    break;
		}
	}
	}
	
}
*/



//-----QUEUE USING LINKED LIST
/*
#include <stdio.h>
#include <stdlib.h>
#define max 5
struct node {
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue() {
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(front == NULL && rear == NULL) {
		front = rear = temp;
	}
	else {
		rear->next = temp;
		rear = temp;
	}
	
}

void dequeue() {
	if(front == NULL) {
		printf("\nqueue underflow");
	}
	else {
		struct node*ptr;
		if(front == rear) {
			ptr = front;
			front = rear = NULL;
		}
		else {
			ptr= front;
			front = ptr->next;
		}
		printf("%removed element: %d",ptr->data);
		free(ptr);
	}
}

void peek() {
	if(front == NULL && rear == NULL) {
		printf("\nqueue is empty.");
	}
	else {
		printf("%d is in front",front->data);
	}
}

void display() {
	if(front == NULL && rear == NULL) {
		printf("\nqueue is empty.");
	}
	
	struct node *ptr = front;
	while(ptr != NULL) {
		printf("%d	",ptr->data);
		ptr = ptr->next;
	}
}

int main() {
	int ch;
	while(1) {
		printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\nenter your choice:");
	    scanf("%d",&ch);
	    switch(ch) {
		    case 1: {
				enqueue();
				break;
		}
	    	case 2: {
				dequeue();
				break;
		}
		    case 3: {
				peek();
				break;
		}
		    case 4: {
				display();
				break;
		}
		    default : {
			    printf("wrong choice.");
			    break;
		}
	}
	}
	
}
*/

//CIRCULAR QUEUE USING ARRAY
/*
#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue() {
	int val;
	printf("\nenter value:");
	scanf("%d",&val);
	if(rear == max-1 || front == (rear+1)%max) {
		printf("\nqueue overflow");
	}
	else if(front == -1 && rear == -1) {
		front = rear = 0;
		queue[rear] = val;
	}
	else {
		rear = (rear+1)%max;
		queue[rear] = val;
	}
}

void dequeue() {
	if(front == -1 && rear == -1) {
		printf("\nqueue underflow");
	}
	else if(front == rear) {
		front = rear = -1;
	}
	else {
		printf("\n%d is deleted\n.",queue[front]);
		front = (front+1)%max;
	}
}

void display() {
	if(front == -1 && rear == -1) {
		printf("\nqueue is empty.");
	}
	int i = front;
	while(1) {
		printf(" %d",queue[i]);
		i = (i+1)%max;
	}
}

int main() {
	int ch;
	while(1) {
		printf("\n1.enqueue\n2.dequeue\n3.display\nenter your choice:");
	    scanf("%d",&ch);
	    switch(ch) {
		    case 1: {
				enqueue();
				break;
		}
	    	case 2: {
				dequeue();
				break;
		}
		    case 3: {
				display();
				break;
		}
		    default : {
			    printf("wrong choice.");
			    break;
		}
	}
	}
	
}

*/

//CIRCULAR QUEUE USING DOUBLE LINKED LIST

#include <stdio.h>
#include <stdlib.h>
#define max 5
struct node {
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue() {
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(front == NULL && rear == NULL) {
		front = rear = temp;
	}
	else {
		rear->next = temp;
		rear = temp;
		temp->next = front;
	}
	
}

void dequeue() {
	if(front == NULL) {
		printf("\nqueue underflow");
	}
	else {
		struct node*ptr;
		if(front == rear) {
			ptr = front;
			front = rear = NULL;
		}
		else {
			ptr= front;
			front = ptr->next;
		}
		printf("%removed element: %d",ptr->data);
		free(ptr);
	}
}

void peek() {
	if(front == NULL && rear == NULL) {
		printf("\nqueue is empty.");
	}
	else {
		printf("%d is in front",front->data);
	}
}

void display() {
	if(front == NULL && rear == NULL) {
		printf("\nqueue is empty.");
	}
	
	struct node *ptr = front;
	while(ptr != NULL) {
		printf("%d	",ptr->data);
		ptr = ptr->next;
	}
}

int main() {
	int ch;
	while(1) {
		printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\nenter your choice:");
	    scanf("%d",&ch);
	    switch(ch) {
		    case 1: {
				enqueue();
				break;
		}
	    	case 2: {
				dequeue();
				break;
		}
		    case 3: {
				peek();
				break;
		}
		    case 4: {
				display();
				break;
		}
		    default : {
			    printf("wrong choice.");
			    break;
		}
	}
	}
}

