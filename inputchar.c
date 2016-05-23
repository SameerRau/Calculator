#include "calculator.h"

#if defined(_WIN32)
   // Use VC++ input.
#define INPUT_FUNCTION getche()
#else #define INPUT_FUNCTION getchar()
#endif

static int buffer[BUFSIZE];
static int position;

int setchar(void) {
	if (position > 0) {
		return buffer[--position];
	}
	
	else {
		return INPUT_FUNCTION;
	}
}

void unsetchar(int input) {
	if (position < BUFSIZE) {
		if(input != 13 && input != 46) {
			buffer[position++] = input;
		}
	}
	
	else {
		printf("Overflow.");
	}
}
