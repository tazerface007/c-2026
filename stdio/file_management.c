#include<stdio.h>

void renaming(){
	if(rename("temp.txt","tempo.txt")==0)  {
		printf("File renamed successfully\n");
	} else {
		perror("Error renaming file\n");
	}
}
void main() {
	FILE *fp;
	fp = fopen("temp.txt", "w");
	fputs("Hello World", fp);
	FILE *tmp;
	tmp = tmpfile();
	renaming();
	fclose(fp);

}
