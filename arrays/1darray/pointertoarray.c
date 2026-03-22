#include<stdio.h>

void printArray(int (*ptr)[10]){
	int size = sizeof(*ptr)/sizeof(int);
	printf("\nSize of array recieved: %d\n", size);
	for(int i=0;i<size;i++) {
		printf("Array: %d\n",*ptr[i]);
	}
}

void initializeArray(int *arr, int size) {
	for(int i=0;i<size; i++){
		arr[i] = i;
	}
}

int main() {
	int num[10], (*ptr)[10];
	ptr = &num;
	initializeArray(num,10);
	printArray(ptr);
	

	return 0;
}
