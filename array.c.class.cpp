//SUM AND AVG OF ARRAY
/*
#include <stdio.h>
int main() {
	int n, i;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<=n-1;i++) {
		scanf("%d ",&a[i]);
	}
	
	int sum=0;
	for(i=0;i<=n-1;i++) {
		sum=sum+a[i];
	}
	printf("sum: %d\n",sum);
	int avg=sum/i;
	printf("avg: %d",avg);
}
*/


/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i++) {
		scanf("%d ",&a[i]);
	}
	int max=a[0];
	for(int i=0;i<=n-1;i++) {
		if(max<a[i])
		max=a[i];
	}
	printf("%d",max);
}
*/


// TO SEARCH AN ELEMENT AN ELEMENT USING LINEAR SEARCH
/*
#include <stdio.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		scanf("%d ",&a[i]);
	}
	int key,index;
	printf("give the key\n");
	scanf("\n%d",&key);
	for(i=0;i<n;i++) {
		if(a[i]==key)
		index=i;
	}
	if(index==0)
	printf("\n%d is not found",key);
	else
	printf("\n%d is found at %d index",key,index);
}
*/


//TO DEMONSTRATE BINARY SEARCH 
/*#include <stdio.h>
int main() {
	int n,i,index=0;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++) {
		scanf("%d ",&a[i]);
	}
	int key;
	scanf("\n%d",&key);
	int l=0,h=n-1;
	
	while(l<=h) {
		int m=(l+h)/2;
		if(key==a[m]) {
			index=m;
			break;
		}
		else if(key<a[m]) {
			h=m-1;
		}
		else {
			l=m+1;
		}
	}
	if(index==0)
	printf("\n%d is not found",key);
	else
	printf("\n%d is found at %d index",key,index);	
}
*/


//TO PRINT FREQUENCY COUNT OF A GIVEN NUMBER
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d ",&a[i]);
	}
	int key,count=0;
	scanf("%d",&key);
	for(int i=0;i<n;i++) {
		if(a[i]==key)
		count++;
	}
		printf("%d frequency count is %d",key,count);	
}
*/


//TO PRINT ARRAY OF ALTERNATE ELEMENTS
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d ",&a[i]);
	}
	for(int i=0;i<n;i=i+2) {
		printf("%d ",a[i]);
	}
}
*/


//TO PRINT EVEN AND ODD COUNT OF ELEMENTS
/*#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int oc=0,ec=0;
	for(int i=0;i<n;i++) {
		if(a[i]%2==0)
		ec++;
		else
		oc++;
	}
	printf("even count is %d and odd count is %d",ec,oc);	
}
*/


//TO PRINT THE ELEMENTS IN REVERSE ARRAY
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--) {
		printf("%d ",a[i]);
	}
}
*/


//TO PRINT SUM OF EVEN AND PRODUCT OF ODD
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int sum=0,prod=1;
	for(int i=0;i<n;i++) {
		if(a[i]%2==0)
		sum+=a[i];
		else
		prod*=a[i];
	}
	printf("sum of even is %d and product of odd is %d",sum,prod);	
}
*/

//TO SORT THE ARRAY IN DESCENDING ORDER
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int temp;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }
		}
		
	}
		for(int i=0;i<n;i++) {
			printf("%d ",a[i]);
		}	
}
*/


//TO MERGE TWO ARRAYS INTO NEW ARRAY
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n+n];
	printf("give array a elements");
	for(int i=0;i<n;++i) {
		scanf("%d",&a[i]);
	}
	printf("give array b elements");
	for(int i=0;i<n;++i) {
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;++i) {
		c[i]=a[i];
		c[i+n]=b[i];
	}
		printf("the combined array is===");
	for(int i=0;i<(n+n);i++) {
			printf("%d ",c[i]);
	}
}
*/

//TO INSERT AN ELEMENT IN AN ARRAY
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10];
	printf("enter array a elements");
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int pos;
	printf("enter insert position=");
	scanf("%d",&pos);
	int val;
	printf("enter value to insert=");
	scanf("%d",&val);
	for(int i=n-1;i>=pos-1;i--) {
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	printf("updated array after insertion=");
	for(int i=0;i<=n;i++) {
		printf("%d ",a[i]);
	}	
}
*/

//TO DELETE AN ELEMENT IN AN ARRAY 
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10];
	printf("enter array a elements");
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("enter the position");
	int pos;
	scanf("%d",&pos);
	printf("enter the key to delete");
	int key;
	scanf("%d",&key);
	a[pos-1]=0;
	for(int i=pos-1;i<n-1;i++) {
		a[i]=a[i+1];
	}
	for(int i=0;i<n-1;i++) {
		printf("%d ",a[i]);
	}	
}

