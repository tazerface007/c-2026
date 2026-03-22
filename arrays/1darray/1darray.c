#include<stdio.h>
#define LIMIT 10

int numbers[LIMIT];	
void main() {
	numbers[0] = 1;
	for(int i=0;i<LIMIT;i++) {
		printf("%d\n",numbers[i]);
	}
}
