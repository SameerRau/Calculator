#include "calculator.h"

char bufferflow[BUFSIZE];
int buferror = 0;

int getcharval(void) {
	return (buferror >0) ? bufferflow[--buferror] : getchar();
}

void ungetcharval(int c) {
	if(buferror >= BUFSIZE) {
		printf("Overflow.");
	}
	else
		bufferflow[buferror++] = c;
}
