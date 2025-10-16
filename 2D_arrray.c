// TO PRINT A '2D ARRAY'
/*
#include <stdio.h>
int main() {
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
*/


//TO FIND TRANSPOSE OF A MATRIX
/*
#include <stdio.h>
int main() {
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n][m],b[n][m];
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++) {
		for(j=0;j<m;j++) {
		    b[i][j]=a[j][i];
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
*/

//TO FIND THE MATRIX MULTIPLICATION
#include <stdio.h>
int main() {
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;j++) {
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int n,p;
	scanf("%d %d",&n,&p);
	int b[n][p];
	for(i=0;i<n;i++) {
		for(j=0;j<p;j++) {
			scanf("%d",&b[i][j]);
		}
	}
	int mul[m][p];
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			mul[i][j]=0;
			for(k=0;k<p;k++) {
				mul+=a[i][j]+b[j][k];
			}
		}
	}
	for(i=0;i<m;i++) {
		for(j=0;j<p;j++) {
			printf("%d ",mul[i][j]);
		}
	}
	
	
 }

