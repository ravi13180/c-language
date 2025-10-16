//TO CHECK PALINDROME USING FUNCTIONS WITH ARGUMENT AND NO RETURN TYPE
/*
#include <stdio.h>
void palindrome(int); 
int main() {
	int n;
	scanf("%d",&n);	
	palindrome(n);
}
void palindrome(int a) {
	int rem,rev=0,temp=a;
	while(a!=0) {
	    rem=a%10;
	    rev=rev*10+rem1;
	    a/=10;
	}
	if(temp==rev)
	printf("is a palindrome");
	else
	printf("not a palindrome");
	
}
*/


//TO CHECK ARMSTRONG NUMBER USING FUNCTIONS WITHOUT ARGUMENT AND NO RETURN TYPE
/*
#include <stdio.h>
void armstrong();
int main() {	
	armstrong();	
}
void armstrong() {
	int n,rem,sum=0;
	scanf("%d",&n);
	int temp=n;
	while(n!=0) {
		rem=n%10;
		sum+=rem*rem*rem;
		n/=10;
	}
	if(temp==sum)
	printf("it is armstrong number");
	else
	printf("not a armstrong number");
}
*/


//TO CHECK THE NUMBER IS EVEN OR ODD WITH ARGUMENTS AND NO RETURN TYPE
/*
#include <stdio.h>
void even_odd(int);
int main() {
	int n;
	scanf("%d",&n);
	even_odd(n);
}
void even_odd(int n) {
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}
*/


//TO PRINT MULTIPLICATION TABLE WITHOUT ARGUMENTS AND NO RETURN TYPE
/*
#include <stdio.h>
void table() ;
int main() {
	table();     //calling of table function
}
void table() {
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=10;i++) {
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
*/


//TO PRINTF SUM OF ARRAY ELEMENTS WITHOUT ARGUMENTS AND WITH RETURN TYPE
/*
#include <stdio.h>
int array_sum();
int main()
 {  
 	array_sum();
 }
int array_sum() {
 	int i,n;
 	scanf("%d",&n);
 	int a[n];
 	for(i=0;i<n;i++) {
 		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++) {
		sum+=a[i];
	} 
	printf("%d",sum);
	return sum;
}
*/


//TO FIND FACTORIAL USING "RECURSION"
/*
#include <stdio.h>
int factorial (int);
int main() {
	int n;
	scanf("%d",&n);
	printf("factorial of %d is = %d",n,factorial(n));
}
int factorial(int n) {
	if(n<=1) 
	return 1;
	
	else
	return n*factorial(n-1);
}
*/


//TO PRINT FIBONACCI SERIES USING RECURSION
















//TO SWAP USING FUNCTION CALLING ---- CALL BY VALUE
/*
#include <stdio.h>
int swap(int, int);
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("before swapping a = %d and b = %d\n",a,b);
	swap(a,b);  // actual parmeters in functipon calling
	printf("after swapping a = %d and b = %d\n",a,b);

}
int swap(int a,int b)  // formal parameters
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a = %d and b = %d\n",a,b);
}
*/


//TO SWAP USNG FUNCTION CALLING ---- CALL BY ADDRESS
/*
#include <stdio.h>
int swap(int* , int*);
int main() {
	int a,b,*p,*q;
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	printf("before swapping a=%d and b=%d\n",a,b);
	swap(&a,&b); //actual parameters in function calling 
	printf("after swapping a=%d and b=%d\n",a,b);
	
}
int swap(int *p,int *q) //formal parameters
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
*/


//TO PASS AN ARRAY INDIVIDUAL ELEMENTS TO FUNCTION
/*
#include <stdio.h>
int display (int,int,int);
int main() {
	int n,i,a[100];
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("\nenter array elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	display (a[0],a[1],a[2]);
}
int display(int a1,int a2,int a3) {
	printf("first element = %d\n",a1);
	printf("second element = %d\n",a2);
	printf("third element = %d\n",a3);
}
*/


//TO PASS AN ARRAY TO FUNCTION AND FIND SUM
/*
#include <stdio.h>
int array(int[],int);
int main() {
	int n,i,a[100];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
    int result = array(a,n);
    printf("sum of array elements:%d",result);
}
int array(int a[],int n) {
	int i,sum=0;
	for(i=0;i<n;i++) {
		sum+=a[i];
	}
	return sum;
}
*/

//TO PRINT 2D ARRAY THROUGH FUNCTION
/*
#include <stdio.h>
int array2d (int[][3],int);
int main() {
	int n;
	scanf("%d",&n);
	int i,j,a[n][3];
	for(i=0;i<n;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	array2d(a,n);
}
int array2d (int a[][3],int n) {
	int i,j,sum=0;
	for(i=0;i<n;i++) {
		for(j=0;j<3;j++) {
			printf("%d ",a[i][j]);
			sum+=a[i][j];
		}
		printf("\n");
	}
	printf("%d",sum);
}
*/
