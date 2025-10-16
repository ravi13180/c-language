/*#include <stdio.h>
int quicksort(int a[],int f,int l) {
	int i,j,pivot,temp;
    if(f<l) {
    	pivot=f;
    	i=f;
    	j=l;
    	while(i<j) {
    		while(a[i]<=a[pivot])
    		i++;
    		while(a[j]>a[pivot])
    		j--;
    		if(i<j) {
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		
		quicksort(a,f,j-1);
		quicksort(a,j+1,l);
	}
}

int main() {
	int n,i;
	int a[n];
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)  {
		scanf("%d",&a[i]); }
	quicksort(a,0,n-1);
	printf("after quick sorting elements are:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
}


*/
//
#include <stdio.h>
void swap(int* a,int*b) {
	int t=*a;
	*a=*b;
	*b=t;
}

//partition function(i.e choosing pivot and dividing array into subarrays)
int partition(int a[],int low,int high) {
	//choose the pivot
	int pivot=a[high];
	int i=low-1;
	int j=low;
	
	for(j=low;j<=high;j++) {
		if(a[j] < pivot) {
			i++;
			swap(&a[i],&a[j]);
		}
	}
	//swapping the pivot element with index i+1
	swap(&a[i+1],&a[high]);
	return i+1;   //returning index of pivot
}

//quicksort function
void quicksort(int a[],int low,int high) {
	if(low < high) {
		
		int pi = partition(a, low, high);
	
	    quicksort(a, low, pi-1);
	    quicksort(a, pi+1, high);
	}	
}

int main() {
	int i,n;
	printf("enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	//function calling
	quicksort(a, 0, n-1);
	
	printf("quick sorted elements:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
