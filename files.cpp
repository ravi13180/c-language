#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE*p;
	p=fopen("filecreate.cpp","w");
	fprintf(p,"this is to show the creation of a file");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char ch;
int n;
long len;
printf("Enter the value of n : ");
scanf("%d",&n);
fp=fopen("test.txt","r");
if(fp==NULL)
{
puts("cannot open this file");
exit(0);
}
fseek(fp,0,SEEK_END);
len = ftell(fp);
fseek(fp,(len-n),SEEK_SET);
while(ch!=EOF) 
{
ch = fgetc(fp);
putchar(ch);
}
fclose(fp);
}


