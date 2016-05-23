#include "calculator.h"

void freeStack(void);

int stackPosition =0;
int stackSize = 0;
double* stack;
int clear = 1;
int print = 1;

void allocateStack(int size) {
	
	double* memstack;
	
	if(stackSize == 0) {
	    memstack = malloc(size * sizeof(double));
	}
	
	else {
		memstack = realloc(stack, size * sizeof(double));
		
		if(stackPosition > size) {
			stackPosition = size;
		}
	}
	
	if (memstack == NULL) {
		if (stackSize != 0) {
			free(stack);
		}
		
		printf("Error: Could not allocate memory for stack of size %d", size);
		exit(1);
	}
	
	else {
		stack = memstack;
		stackSize = size;
	}
}

/* push value onto stack */
void push(double newValue) {
	
	if(stackPosition  < stackSize) {
		stack[stackPosition++] = newValue;
	}
	
	else {
		allocateStack(stackSize + 5);
		stack[stackPosition++] = newValue;
	}
}

double pop(void) {
	double value;

	if(stackPosition > 0) {// If there is data on the stack.
		stackPosition--;
		value = stack[stackPosition];
		freeStack();
		return value;
	}

	else {
		printf("Error : the stack is empty. ");
		return 0.0;
	}
}

void getPos(void) {

	if(stackPosition > 0) {// If there is data on the stack.
		push(stack[stackPosition - 1]);
	}
}
void clearStack(void) {
	stackPosition = 0;
	freeStack();
}

int getStackSize(void) {
	return stackSize;
}

void setClear(int newClear) {
	clear = newClear;
}

void setPrint(int newPrint) {
	print = newPrint;
}

void freeStack(void) {
	if((stackSize - stackPosition) > 15) {
		allocateStack(stackPosition + 5);
	}
}

void printStack(void) {
	int i, position = stackPosition + 1;
	
	if(print) {
		for (i=0; i<stackPosition; i++) {
			printf("%d: %lf\n", --position, stack[i]);
		}
	}
}

void deAllocateStack(void) {
	free(stack);
}
