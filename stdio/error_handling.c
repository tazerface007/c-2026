#include<stdio.h>


void main() {
	FILE *file=NULL;
	file = fopen("hello.txt","r");
	int ch;
	while((ch = fgetc(file))!= EOF){

		printf("text: %c""\n", ch);
			
	}
	if(feof(file)){
			printf("End of file is reached!""\n");
		}
	perror("Error Occured");
	clearerr(file);

}
