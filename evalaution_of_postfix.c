#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int stack[10],top = -1;

void push(int n) {
	top++;
	stack[top] = n;
}
int pop() {
	int n = stack[top];
	top--;
	return n;
}
void evaluation_of_postfix(char *ex) {
	int i;
	for(i=0;ex[i] != '\0';i++) {
		if(isalnum(ex[i]) || ex[i]=='+' || ex[i] == "-" || ex[i] == '*' || ex[i] == '/' || ex[i] == '%') {
			if(isalpha(ex[i])) {
				int n;
				printf("enter value of %c: ",ex[i]);
				scanf("%d",&n);
				push(n);
			}
			else if(isdigit(ex[i])) {
				push(ex[i]-'0');
			}
			else {
				int x1 = pop();
				int x2 = pop();
				switch(ex[i]) {
					case '+': {
						push(x2+x1);
						break;
					} 
					case '-': {
						push(x2-x1);
						break;
					}
					case '*': {
						push(x2*x1);
						break;
					}
					case '/': {
						push(x2/x1);
						break;
					}
					case '%': {
						push(x2%x1);
						break;
					}
				}
		   }
		}
		else {
		printf("invalid expression");
		exit(0);
	   }
	}
	if(top != 0) {
		printf("invalid expression");
		exit(0);
	}
	else {
		printf("result is: %d",stack[top]);
	}
}

int main() {
	char exp[100];
	printf("enter a valid posfix expression:");
	gets(exp);
	evaluation_of_postfix(exp);
	return 0;
}

