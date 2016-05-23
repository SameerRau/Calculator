#define BUFSIZE 100

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAXOP 100
#define NUMBER '0'
#define FUNCTION '1'

int topstack(char[]);
void printStack(void);
void allocateStack(int);
void clear(void);
void setClear(int);
void setPrint(int);
void menulist(void);
void getPos(void);
int getStackSize(void);
void clearStack();
void push(double);
double pop(void);
int setchar(void);
void deAllocateStack(void);
void unsetchar(int);
