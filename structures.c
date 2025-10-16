/*
#include <stdio.h>
struct 	student {
	int rollno;
	char name[5];
	char gender;
};

int main() {
	struct student s[10];
	int i;
	printf("enter information of students:");
	printf("\n enter rollno:");
	for(i=0;i<3;i++) {
		scanf("%d",&s[i].rollno);
	}
	printf("\n enter names:");
	for(i=0;i<3;i++) {
		scanf("%s",&s[i].name);
	}
	printf("\n enter gender:");
	for(i=0;i<3;i++) {
		scanf(" %c",&s[i].gender);
	}
	
	printf("\n display students information:");
	for(i=0;i<3;i++) {
		printf("name=%s\t rollno=%d\t gender=%c\n",s[i].name,s[i].rollno,s[i].gender);
	}
}
*/


//WAP TO STORE STUDENT INFORMATION-NAME,ROLL And DOB USING SEPARATE STRUCTURE
/*
#include <stdio.h>
struct dob {
	int dd,mm,yy;
};
struct student {
	char name[10];
	int roll;
	struct dob d;
}s;

int main() {
	printf("enter name and roll:");
	scanf(" %s%d",&s.name,&s.roll);
	printf("\nenter dob of student:");
	scanf("%d %d %d",&s.d.dd,&s.d.mm,&s.d.yy);
	printf("\n Name is:%s\n Roll:%d\n Date Of Birth:%d/%d/%d",s.name,s.roll,s.d.dd,s.d.mm,s.d.yy);
}
*/

//EMBEDDED STRUCTURE
/*
#include <stdio.h>
struct employee {
	char name[10];
	int id;
	struct doj {
		int dd,mm,yy;
	}d;
}e;

int main() {
	printf("enter employee name and id:");
	scanf(" %s%d",&e.name,&e.id);
	printf("\nenter employee date of joining:");
	scanf("%d%d%d",&e.d.dd,&e.d.mm,&e.d.yy);
	printf("\n Name is:%s\n ID:%d\n Date Of Joining:%d/%d/%d",e.name,e.id,e.d.dd,e.d.mm,e.d.yy);
}
*/

//BOOK INFORMATION ARRAY OF STRUCTURES
/*
#include <stdio.h>
struct book {
	int pages;
	char name[50];
	float cost;
};

int main() {
	struct book b[3];
	int i;
	printf("enter book information:");
	printf("\nenter book name:");
	for(i=0;i<3;i++) {
		scanf(" %s",&b[i].name);
	}
	printf("\nenter no of pages of book:");
	for(i=0;i<3;i++) {
		scanf("%d",&b[i].pages);
	}
	printf("\nenter cost of book:");
	for(i=0;i<3;i++) {
		scanf("%f",&b[i].cost);
	}
	
	for(i=0;i<3;i++) {
	printf("\n Book Name:%s\n no of pages:%d\n cost:$%.2f",b[i].name,b[i].pages,b[i].cost); }
}
*/

//EMPLOYEE INFORMATION ARRAY OF STRUCTURES



//SELF-REFERENCE STRUCTURES
/*
#include <stdio.h>
#include <string.h>
struct student {
	int marks;
	char name[10];
	struct student*link;
};

int main() {
	struct student s1,s2;
	s1.marks=50;
	strcpy(s1.name,"chiru");
	s1.link=NULL;
	
	s2.marks=100;
	strcpy(s2.name,"amar");
	s2.link=NULL;
	
	s1.link=&s2;
	//using structure variable 1 accessing members of variable 2 
	printf("Nmae: %s\n marks:%d\n ",s1.link->name,s1.link->marks);
}
*/

//WAP TO PASS STRUCTURE TO POINTER ,READ THE DATA DYNAMICALLY
/*
#include <stdio.h>
struct car {
	char brand[10];
	char model[5];
	char color[8];
};
int main() {
	struct car c1;
	struct car *p;
	p=&c1;
	
	printf("Enter brand model and color:");
	scanf(" %s %s %s",&p->brand,&p->model,&p->color);
	
	printf("\nThe information of car is:");
	printf("\nCar brand: %s\n Model num: %s\n Color: %s",p->brand,p->model,p->color);
}
*/

//WAP TO PASS STRUCTURE TO FUNCTION DYNAMICALLY
/*
#include <stdio.h>
#include <string.h>
struct employee {
	char name[10];
	int id;
	float salary;
};
int display(struct employee e1) {
	printf("\n Name: %s\n ID:%d\n Salary:%.2f",e1.name,e1.id,e1.salary);
}


int main() {
	struct employee e1;
	printf("Enter employee information Name,id,salry:");
	scanf(" %s%d%f",&e1.name,&e1.id,&e1.salary);
	printf("Display employee information:");
	display(e1);
}
*/

//WAP TO READ BOOK IFORMATION USING UNIONS
/*
#include<stdio.h>
#include <string.h>
union book {
	char bname[20];
	int pages;
	int cost;
	char authname[10];
};

int main() {
	union book b1;
	strcpy(b1.bname,"The Alchemist");
	b1.pages=245;
	b1.cost=190;
	strcpy(b1.authname,"Paulo");
	
	printf("Enter book information:");
	printf("\nBook Name: %s\n pages:%d\n cost:%d\n author name: %s",b1.bname,b1.pages,b1.cost,b1.authname);
}
*/


//TYPDEF STRUCTURE
/*
#include <stdio.h>
#include <string.h>
typedef struct employee {
	char name[10];
	int id;

};
int main() {
	typedef employee emp;
	emp e1;
    strcpy(e1.name,"Chiru");
	e1.id=123;
	printf("EMPLOYEE INFORMATION:");
	printf("\nname is: %s\n ID:%d",e1.name,e1.id);
}
*/


//BITFIELD STRUCTURE
/*
#include <stdio.h>
#include <string.h>
struct date {
	int d:4;
	int m:5;
	int y;
};
int main() {
	struct date doj={6,3,2025};
	printf("date of joining:%d/%d/%d",doj.d,doj.m,doj.y);
	printf("\nsize of structure:",sizeof(doj));
}
*/

//STRUCTURES USING TWO POINTERS/TWO SELF-REFERENTIAL 
#include <stdio.h>
struct student {
	int marks;
	struct student *prev;
	struct student *nxt;
};

int main() {
	struct student s1,s2,s3;
	s1.marks=95;
	s1.prev=NULL;
	s1.nxt=NULL;
	
	s2.marks=85;
	s2.prev=NULL;
	s2.nxt=NULL;
	
	s3.marks=90;
	s3.prev=NULL;
	s3.nxt=NULL;
	
	s1.nxt=&s2;
	s2.prev=&s1;
	s2.nxt=&s3;
	s3.prev=&s2;
	
	printf("marks of s3 using s1:%d",s1.nxt->nxt->marks);
	printf("\nmarks of s1 using s3:%d",s3.prev->prev->marks);
}
