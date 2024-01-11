#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void insert(struct Node** top,int data) {


	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *top;
	*top = newNode;
	
}

void pop(struct Node** top) {
	if (*top == NULL) return;

	struct Node* toDelete = (struct Node*)malloc(sizeof(struct Node));
	toDelete = *top;
	*top = (*top)->next;
	free(toDelete);
}

void reverseList(struct Node** top) {
	if (*top == NULL) return;

	
}

void showTop(struct Node* top) {
	if (top == NULL) return;

	printf("top is: %d", top->data);
}

void printStack(struct Node* top) {
	struct Node* temp = top;

	while (temp) {
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}


int main() {
	struct Node* top = NULL;

	insert(&top,50);
	insert(&top,34);
	insert(&top,42);
	insert(&top,12);
	insert(&top,21);
	insert(&top,2);

	printStack(top);

	pop(&top);

	printStack(top);

	showTop(top);
	return 0;
}