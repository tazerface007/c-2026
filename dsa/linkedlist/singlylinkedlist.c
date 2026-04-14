#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}node;

void insertAtBeginning(); //TODO
void insertAtEnd(); //TODO
void insertAtPosition(); //TODO

void printNode(node *ptr){
	printf("Node Data: %d""\n", ptr->data);
	printf("Node next ptr: %p""\n", ptr->next);
}

void main() {
	node *ptr, *ptr2, *head;
	ptr = (node *) malloc(sizeof(node *));
	ptr->data = 12;
	ptr->next = NULL;
	ptr2 = (node *) malloc(sizeof(node *));
	ptr->next = ptr2;
	ptr2->data = 13;
	ptr2->next = NULL;
	head = ptr;
	printNode(head);
	printNode(head->next);
}
