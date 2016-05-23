#include "calculator.h"

int main(void) {
	
	int choice;
	int operate;

	char input[MAXOP];

	allocateStack(10);

	printf("Type H and press enter for help.\n");

	while((choice = top(input))) {
	
		switch(choice) {
			
			case NUMBER:
				push(atof(input));
				printStack();
				break;
		
			case '+':
				push(pop() + pop());
			    printf("Adding...\n");
			    printf("Results:\n");
			 	printStack();
				break;
		
			case '*':
				push(pop() * pop());
				printf("Multiplying...\n");
			    printf("Results:\n");
				printStack();
				break;
		
			case '-':
				operate = pop();
				push(pop() - operate);
			    printf("Subtracting...\n");
			    printf("Results:\n");
				printStack();
				break;
				
			case 'N':
				push(0 - pop());
			    printf("Negating...\n");
			    printf("Results:\n");
				printStack();
				break;
				
			case 'D':
			    printf("Stack:\n");
				printStack();
				break;
			
			case 'X':
			    printf("Goodbye.\n");
				exit(0);
				break;
		
			case 'C':
				clearStack();
				printf("Stack Clear: Complete \n");
				break;
		
			case 'H':
				printHelp();
				break;
		

		}
	}
	return 0;
}
