//partition algorithm ---> LOMUTO
/*
// --- user code ---
#include <stdio.h>
swap(int *a,int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

void partition(int a[],int n) {
	int pivot = a[n-1];
	// i acts as boundary between smaller
	// and larger element compared to pivot
	int i=-1;
	int j;
	for(j=0;j<n;j++) {
		if (a[j] < pivot) {
			i++;
	        swap(&a[i],&a[j]);
		}
	}
	// place the pivot at its correct position
	swap(&a[i+1],&pivot);
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
	
	partition(a,n);
	printf("elements after partition:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	
}

// --- computer code ---

#include <stdio.h>
void partition(int arr[], int n) {
    int pivot = arr[n - 1];
    
    // i acts as boundary between smaller and 
    // larger element compared to pivot
    int i = -1;
    for (int j = 0; j < n; j++) {
        
        // If smaller element is found expand the 
        // boundary and swapping it with boundary element.
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    // place the pivot at its correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[n - 1];
    arr[n - 1] = temp;
}

int main() {
	int i,n;
	printf("enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	
	partition(arr,n);
	printf("elements after partition:");
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}
*/


/*
// Partition Algorithm ---> Naive
#include <stdio.h>
#include <stdlib.h>

// function to partition the array according
// to pivot index element
void partition(int *a,int n) {
	int pivot=a[n-1];
	// create a temp array to store in order
	int *temp=(int *)malloc(n*sizeof(int));
	int idx=0;
	
	// first fill smaller elements into temp
	for(int i=0;i<n;i++) {
		if(a[i] <= pivot)
		temp[idx++] = a[i];
	}
	
	// now fill elements greater than pivot
	for(int i=0;i<n;i++) {
		if(a[i] > pivot)
		temp[idx++] = a[i];
	}
	// copy the elements from temp to a
	for(int i=0;i<n;i++) {
		a[i] = temp[i];
	}
	free(temp);
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
	partition(a, n);
	printf("array elements after partoition:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
}
*/


// Partition Algorithm ---> Hoare's
#include <stdio.h>
#include <stdlib.h>

void partition(int a[], int n) {
	int pivot = a[0];
	int i=-1, j=n;
	while(i<j) {
		// find next element larger than
		// pivot from left
		while(a[i] < pivot) {
			i++;
		}
		
		// find next element smaller than 
		// pivot from the right
		while(a[i] > pivot) {
			j--;
		}
		
		// if left and right cross each other
		// no swapping required
		if(i > j)
		break;
		
		//swap larger and smaller elements
		int temp=a[i];
		a[i]=a[j];
		p[j]=temp;
	}
}

in tmain() {
	
}
