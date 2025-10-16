/*
#include <stdio.h>
void update(int *a,int *b) {
    // Complete this function  
    *a=*a+*b ;  *b=ab(*a-*b-*b);
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n %d", &a, &b);
    update(pa, pb);
    
    printf("%d \n%d", a,b);

    return 0;
}
*/


//TO ACCESS VARIABLES USING POINTERS
/*
#include <stdio.h>
int main() {
	int a=8;
	int *p;
	int **q;
	p=&a;
	q=&p;
	printf("address of a = %x\n",p);    //address of variable
	printf("value of a = %d\n",*p);     //pointing value of a
	printf("address of p = %x\n",&p);   //address of p
	printf("value of q = %x\n",q);      //address of p
	printf("value of p = %d\n",**q);    //value of p
	printf("address of q = %x\n",&q);   //address of q
}
*/


//TO CHECK WHETEHER A NUMBER IS EVEN OR ODD USING POINTERS
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int *p;
	p=&n;
	if((*p)%2==0)
	printf("even");
	else
	printf("odd");
}
*/


//TO PRINT ARITHMETIC OPERATIONS USING POINTERS
/*
#include <stdio.h>
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int *p,*q;
	p=&a,q=&b;
	printf("addition = %d\n",*p+*q);
	printf("product = %d",*p**q);
}
*/


//TO PASS POINTER TO FUNCTION TO PERFORM ADDITION
/*
#include <stdio.h>
int add(int*,int*);
int main() {
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;
	int result=add(p,q);
	printf("%d",result);	
}
int add(int*p,int*q) {
	int sum=*p+*q;
	return sum;
}
*/


//FUNCTION RETURNING POINTER TO CHECK LARGEST NUMBER
/*
#include <stdio.h>
int *large(int*,int*);
int main() {
	int a,b,*p,*q;
	printf("give any two numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	int result=*large(p,q);
	printf("\ngive maximum number:");
	printf("%d",result);
	
}
int *large(int*p,int*q) {
	if(*p>*q)
	return p;
	else
	return q;
}
*/


//PASSING ARRAY TO POINTER
/*
#include <stdio.h> 
int main() {
	int a[100],i,n,*p;
	printf("enter n value:");
	scanf("%d",&n);
	p=a;
	printf("\nenter array elements:");
	for(i=0;i<n;i++) {
		scanf("%d",(p+i));
	}
	printf("\narray elements using pointer: ");
	for(i=0;i<n;i++) {
		printf("%d ",*(p+i));
	}
	printf("\naddress of array elements: ");
	for(i=0;i<n;i++) {
		printf("%d ",(p+i));
	}	
}
*/


//PASSING STRING TO POINTER
/*
#include <stdio.h>
#include <string.h>
int main() {
	char s[]="sukuna";
	char *p;
	p=s;
	int i;
	printf("string is = ");
	for(i=0;s[i]!='\0';i++) {
		printf("%c",*p);
		p++;
	}
}
*/


//STRING POINTER
#include <stdio.h>
#include <string.h>
int main() {
	char *jjk[]={"sukuna","gojo","panda","yuji","maki"};
	int i;
	for(i=0;jjk[i]!='\0';i++) {
		printf("%s\n",jjk[i]);
	}
	
}
	
