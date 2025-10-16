//RADIX SORT

#include <stdio.h>
void read(int[], int);
void display(int[], int);
int largest(int[], int);
int ndigits(int);
void radixsort(int[], int);

void read(int a[], int n) {
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
}

void display(int a[], int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
		printf("\n");
	}
}

int largest(int a[], int n) {
	int i,max=a[0];
	for(i=1;i<n;i++) {
		if(max < a[i])
		max = a[i];
	}
	return max;
}

int ndigits(int x) {
	int d = 0;

	while(x != 0) {
		x/=10;
		d++;
	}
	return d;
}

void radixsort(int a[], int n) {
	int i,j,k, div = 1, b[10][n], count[10], max, d, s, pos;   //s = steps = no. of iterations
	max=largest(a,n);                                          // = no. of digits of max
	d=ndigits(max);
	for(s=1;s<=d;s++) {
		//initialize count array with 0
		for(i=0;i<10;i++) 
			count[i]=0;
			for(i=0;i<n;i++) {
				pos=(a[i]/div)%10;
				b[pos][count[pos]]=a[i];
				count[pos]++;
		    }
		
		//copy element from bucket to array a
		k=0;
		for(i=0;i<10;i++) {
			for(j=0;j<count[i];j++) {
				a[k]=b[i][j];
				k++;
			}
		}
		div=div*10;
	}
	
}

int main() {
	int n;
	printf("enter number of elments:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	read(a,n);
	printf("before sorting:");
	display(a,n);
	radixsort(a,n);
	printf("after sorting:\n");
	display(a,n);
	return 0;
}
