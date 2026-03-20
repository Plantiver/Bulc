#ifndef TOKEN_STACK_H
#define TOKEN_STACK_H
#include "token.h"

typedef struct stackNode {
    token* tk;
    struct stackNode* next;
} stackNode;

typedef struct Stack {
    stackNode*top;
    int length;
} tokenStack;

tokenStack*newStack();
void freeStack(tokenStack*);
void push(tokenStack*, token*);
token*pop(tokenStack*);
token*check(tokenStack*);
token**getTop(tokenStack*, int);


#endif
