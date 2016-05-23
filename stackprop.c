#include "calculator.h"

int stackposition =0;
double stack[STACKSIZE];

/* push value onto stack */
void push(double newValue) {
	if(stackposition  < STACKSIZE) {
		stack[stackposition++] = newValue;
	}
	
	else {
		printf("The stack is full.");
	}
}

double pop(void) {
	double value;
	
	if(stackposition > 0) {// If there is data on the stack.
		stackposition--;
		value = stack[stackposition];
		return value;
	}
	
	else {
		printf("Error : the stack is empty.");
		return 0.0;
	}
}
void printstack(void) {
	int i;
	
	for (i=0; i<50; i++) {
		printf("\n");
	}
	
	for (i=0; i<stackposition; i++) {
		printf("%d: %lf\n", i, stack[i]);
	}
}
