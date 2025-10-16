//-----> STACK USING ARRAY
/*
#include<stdio.h>
#define max 5
int stack[max],top=-1;
void push()
{
    if(top==max-1)
    {
        printf("stack Overflow");
    }
    else 
    {
        int value;
        printf("Enter value:");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        top=top-1;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nTop element is:%d\n",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1) {
    	printf("\nstack is empty\n");
	}
	for(i = top; i >= 0; --i) {
		printf("%d ",stack[i]);
	}
}
void isfull() {
	if(top == max-1) {
		printf("\nstack is full\n");
	}
	else {
		printf("\nstack is empty\n");
	}
}
void isempty() {
	if(top == -1) {
		printf("\nstack is empty\n");
	}
	else {
		printf("\nstack is not empty\n");
	}
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.push \n2.pop \n3.peek \n4.display \n5.isfull \n6.isempty \n7.exit \nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                isfull();
                break;
            }
            case 6:
            {
                isempty();
                break;
            }
            case 7:
            {
            	return;
			}
        }
    }
}
*/


//----- STACK USING LINKED LIST

#include <stdio.h>
#include <stdlib.h>
#define max 5
struct node {
	int data;
	struct node *next;
}*top = NULL;

int size = 0;

void push() {
	if(size == max) {
		printf("\nStack Overflow");
	}
	else {
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		printf("\nenter data:");
		scanf("%d",&temp->data);
		temp->next = top;
		top = temp;
		printf("\n%d is pushed using stack",temp->data);
		size++;
	}
}

void pop() {
	struct node *ptr = top;
	if(top == NULL) {
		printf("\nStack Underflow");
	}
	else {
		printf("%d is removed",ptr->data);
		top = ptr->next;
	    free(ptr);
	    size--;
	}
}

void peek() {
	if(top == NULL) {
		printf("\nstack is empty");
	}
	else {
		printf("%d is the top of stack",top->data);
	}
}
	
void display() {
	struct node *ptr = top;
	while(ptr != NULL) {
		printf(" %d",ptr->data);
		ptr = ptr->next;
	}
}

void isfull() {
	if(size == max) {
		printf("\nstack is full");
	}
	else {
		printf("\nstack is not full");
	}
}

void isempty() {
	if(top == NULL) {
		printf("\nstack is empty");
	}
	else {
		printf("\nstack is not empty");
	}
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1.push \n2.pop \n3.peek \n4.display \n5.isfull \n6.isempty \n7.exit \nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                isfull();
                break;
            }
            case 6:
            {
                isempty();
                break;
            }
            case 7:
            {
            	return;
			}
			default :
				printf("\nwrong choice\n");
        }
    }
}
