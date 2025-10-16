/*#include <stdio.h>
int main() {
	int i=1;
	int n;
	scanf("%d",&n);
	do{
		printf("%d",i);
		i++;
		
	}
	while(i<=n);
} */

/* #include <stdio.h> 
int main() {
	int n;
	scanf("%d",&n);
	int prod=1;
	do{
		
		printf("%d ",n);
		if(n%2!=0) {
		prod=prod*n; }
		n--;
	}
	while(1<=n);
	printf("\nproduct of odd is %d",prod);
		
} */


#include <stdio.h>
int main() {
	int i=1;
	do{
		printf("\n");
		i++;
		int j=1;
		do{
			printf("%d ",j*i);
			j++;
		}
		while(j<=3);
	}
	while(i<5);
	
}


