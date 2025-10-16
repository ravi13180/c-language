//TO USE MALLOC IN DYNAMIC MEMEORY ALLOCATION
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,*p;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL) {
		printf("memory allocation is not possible.");
		exit(0);
	}
	else {
		printf("enter array elements");
		for(i=0;i<n;i++) {
			scanf("%d",(p+i));
	    }
	    int sum=0;
		for(i=0;i<n;i++) {
			sum+=(*(p+i));
		}
		printf("%d ",sum);
	}	
}
*/


//TO USE CALLOC IN DYNAMIC MEMORY ALLOCATION
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,*p;
	scanf("%d",&n);
	p=(int*)calloc(n*sizeof(int));
	if(p==NULL) {
		printf("memory allocation is not possible.");
		exit(0);
	}
	else {
		printf("enter array elements");
		for(i=0;i<n;i++) {
			scanf("%d",(p+i));
	    }
	    for(i=0;i<n;i++) {
	    	printf("%d ",*(p+i));
		}
}
*/


//REALLOC
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,*p;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL) {
		printf("memory allocation is not possible.");
		exit(0);
	}
	else {
		printf("enter array elements");
		for(i=0;i<n;i++) {
			scanf("%d",(p+i));
	    }
	    for(i=0;i<n;i++) {
	    	printf("%d ",*(p+i));
		}
    }
    printf("\nenter array updated size");
		scanf("%d",&m);
		printf("\nenter remaining array elements");
		for(i=n;i<m;i++)
		{
			scanf("%d",p+i);
		}
		printf("\nupdated array elements are:");
		for(i=0;i<m;i++)
		{
			printf("\n%d=%d",p+i,(*(p+i)));
		}		
	}
    

