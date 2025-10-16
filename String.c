//TO FIND LENGTH OF STRING
/*
#include <stdio.h>
#include <string.h>
int main() {
	char s[10]={'a','b','c','d','e'};
	
	int len=strlen(s);
	printf("%d",len);
}
*/

//TO COPY THE STRING INTO ANOTHER STRING
/*
#include <stdio.h>
#include <string.h>
int main() {
	char s1[20],s2[20];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%s",&s1[i]);

	strcpy(s2,s1);
	printf("%s",s2);
}
*/

//TO COMPARE THE STRINGS
/*
#include <stdio.h>
#include <string.h>
int main() {
	int n,i;
	scanf("%d",&n);
	char s1[20],s2[20];
	for(i=0;i<n;i++) {
		scanf("%s",&s1);
	}
	for(i=0;i<n;i++) {
		scanf("%s,&s2");
	}
	printf("%d",strcmp(s1,s2));
}
*/

//TO COMBINE TWO STRINGS
/*
#include <stdio.h>
#include <string.h>
int main() {
	int n,i;
	scanf("%d",&n);
	char s1[20],s2[20];
	for(i=0;i<n;i++) {
		scanf("%s",&s1[i]);
	}
	for(i=0;i<n;i++) {
		scanf("%s",&s2[i]);
	}
	strcat(s1,s2);  //combining function
	printf("%s",s1);
}
*/

//TO PRINT LOWERCASE CHARACTERS INTO UPPERCASE
/*
#include <stdio.h>
#include <string.h>
int main() {
	int n,i;
	scanf("%d",&n);
	char s[20];
	for(i=0;i<n;i++) {
		scanf("%s",&s[i]);
	}
	printf("%s",strupr(s));
}
*/

//TO PRINT REVERSE OF A STRING
/*
#include <stdio.h>
#include <string.h>
int main()  {
	int n,i;
	scanf("%d",&n);
	char s1[20];
    scanf("%s",&s1[i]);
	char rev[20];
	strrev(rev,s1);
	printf("%s",rev);
}
*/

//TO PRINT COUNT OF VOWELS AND CONSONANTS IN A STRING
/*
#include <stdio.h>
#include <string.h>
int main() {
	char s1[20]="gojosatoru";
	int j;
	int n=strlen(s1);
	int cv=0,cc=0;
	for(j=0;j<=n;j++) {
		if(s1[j]=='a' || s1[j]=='e' || s1[j]=='i' || s1[j]=='o' || s1[j]=='u') {
			cv++;
		}
		else
		cc++;
	}
	printf("vowel count=%d\n consonant count=%d",cv,cc);	
}
*/

//
