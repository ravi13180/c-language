//CHARACTER ARRAY
#include <stdio.h> 
int main() {
	int n;
	scanf("%d",&n);
	char a[10];
	for(int i=0;i<2*n;i++) {
		scanf("%c",&a[i]);
	}
	for(int i=0;i<2*n;i++) {
		printf("%c",a[i]);
	}
}

