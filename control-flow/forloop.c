#include<stdio.h>

void main() {
	for(;;){
		static int interrupt = 0;

		if(interrupt>=10000){
			break;
		}
		printf("Interrupt running: %d\n",interrupt);
		interrupt++;
	}
}
