//ENUMERATION
/*
#include <stdio.h>
enum weekday{mon,tue,wed,thu,fri,sat,sun};
int main() {
	enum weekday day;
	int i;
	for(i=0;i<=sun;i++) {
		printf("%d",i);
	}
	day = wed;
	printf("\n%d",day);
}
*/

#include <stdio.h>
enum weekday{mon=1,tue,wed,thu,fri,sat,sun};
int main() {
	enum weekday day;
	int i;
	for(i=mon;i<=sun;i++) {
		printf("%d",i);
	}
	day = wed;
	printf("\n%d",day);
}
