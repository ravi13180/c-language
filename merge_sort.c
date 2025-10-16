//MERGE SORT
/*
*** Divide: Divide the list or array recursively into two halves until
            it can no more be divided. 
*** Conquer: Each subarray is sorted individually using the merge sort algorithm. 
*** Merge: The sorted subarrays are merged back together in sorted order.
           The process continues until all elements from both subarrays have been merged. 
*/

#include <stdio.h>
int mergesort(int a[],int l,int h); //l=low,m=mid,h=high
int merge(int a[],int l,int m,int h);

int mergesort(int a[],int l,int h) {
	if(l<h) {
		int m=l+(h-l)/2;
	    mergesort(a,l,m);
	    mergesort(a,m+1,h);
	    merge(a,l,m,h); 
	}
	
}

int merge(int a[],int l,int m,int h) {
	int i,j,k,b[50];
	i=l;
	k=l;
	j=m+1;
	
	while(i<=m && j<=h) {
		if(a[i]<=a[j]) {
			b[k]=a[i];
			i++;
		}
		else {
			b[k]=a[j];
			j++;
		}
		k++;
	}
	
	while(i<=m) {
		b[k]=a[i];
		i++;
		k++;	
	}
	
	while(j<=h) {
	    b[k]=a[j];
		j++;
		k++;
	}
	for(i=0;i<k;i++) {
     	a[i]=b[i]; 
	}

}

int main() {
	int i,n;
	printf("enter no of elements:");
	scanf("%d",&n);
	int a[n];
	printf("give elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("elements after merge sorted:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	
}

