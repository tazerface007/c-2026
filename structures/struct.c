#include<stdio.h>

typedef struct {
	char *name;
	char sec;
	short rollno:8;
}name;


void print(name * obj) {
	printf("Name: %s\n", obj->name);
	printf("Sec: %c\n", obj->sec);
	printf("Roll No: %hd \n", obj->rollno);
}

void main(void) {
	name n1;
	n1.name = "Deepak Suryawanshi";
	n1.sec = 'A';
	n1.rollno = 21;
	print(&n1);
}
