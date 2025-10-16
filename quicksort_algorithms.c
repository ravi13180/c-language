//QUICK SORT
//---------->LOMUTO PARTITION ALGORITHM
/*
*** Choose the last element of the array as the pivot.
*** Initialise pointer i at the start of the array; this pointer will act 
    as the boundary of elements that are smaller than or equal to the pivot.
*** Traverse the array with pointer j, checking each element a[j]-->
    i.e.  if a[j]<=pivot, swap a[i] with a[j] to move the smaller element to
    the left and increment i to adjust the boundary.
*** After traversing, elements smaller than or equal to the pivot will be at
    the start of the array, with i marking the boundary.
*** Finally, swap a[i] with the pivot(last element) to place pivot int its
    correct position.
*/

#include <stdio.h> 
int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[], int low, int high) {
	int i = low-1;
	int j = low;
	int pivot = a[high];
	for(j=low;j<=high;j++) {
		if(a[j]<=pivot) {
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return i+1;
}
int quicksort(int a[], int low, int high) {
	if(low < high) {
		int pi = partition(a, low, high);
		//recursive function of quicksort
		quicksort(a, low, pi-1);
		quicksort(a, pi+1, high);
	}
}
int main() {
	int i,n;
	printf("enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	//calling of quicksort function
	quicksort(a, 0, n-1);
	printf("diplay sorted elements:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}



//---------->HOARSE'S PARTITION ALGORITHM
/*
*** Consider the first element as the pivot and initialise two pointers, i at the start
    and j at the end of the array.
*** Move i to the right until an element greater than or equal to the pivot is found,
    and move j to the left until an element less than or equal to the pivot is found.
*** If i points to an element greater than or equal to the pivot and j points to an element 
    less than or equal to the pivot, swap them.
*** Repeat the process, moving i and j toward each other until they meet or cross.
*** When the pointers cross, the partitioning is complete, with elements less than or equal
    to the pivot on the left and those greater than or equal to the pivot on the right.
*/

