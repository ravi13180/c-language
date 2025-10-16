//VOLUME OF CUBE
/*#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int c=a*a*a;
	printf("%d",c);
}*/


//ARMSTRONG NUMBER
/*#include <stdio.h> 
int main(){
	int n,rem,sum=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(temp==sum){
		printf("A n");
	}
	else{
		printf("not A n");
	}	
} 
*/


//PRIME NUMBER
/*#include <stdio.h>
int main() {
	int n,count=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++) {
		if(n%i==0)
		count++;
	}
	if(count==1)
	printf("prime");
	else
	printf("not a prime");
} 
*/


//ALL PRIME NUMBERS BETWEEN 1 AND N
/*#include <stdio.h> 
int main() {
	int n,count;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		count=0;
	    for(int j=1;j<=i;j++) {
	    	if(i%j==0)
	    	count++;
		}
		if(count==2)
     	printf("%d ",i);
	}	
} */


//LEAP YEAR
/*#include <stdio.h>
int main() {
    int y;
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||(y%400==0))
    printf("Leap Year");
    else
    printf("Not Leap Year");
 }*/
 
 
//FACTORIAL VALUE OF A NUMBER
/* #include <stdio.h>
 int main() {
 	int n,i,fact=1;
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++) {
 		fact*=i;
	 }
	 printf("%d",fact);
 }*/
 
 
// FIBONNACI NUMBERS
/*#include <stdio.h>
int main() {
	int n,a=0,b=1,c;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(int i=3;i<=n;i++) {
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
	}   	
} */
