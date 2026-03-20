#include "tokenStack.h"
#define NULL (void*) 0
// <>

tokenStack*newStack(void) {
    tokenStack*r = malloc(sizeof(tokenStack));
    r->length = 0;
    r->top  = malloc(sizeof(stackNode));
    r->top->tk=NULL;
    r->top->next=NULL;
    return r;
}

void freeStack(tokenStack*s) {
    if (s->length==0) 
        free(s->top);
    else {
        freeToken(pop(s));
        freeStack(s);
    }
}

void push(tokenStack*s, token*tk) {
    s->length++;
    stackNode*new = malloc(sizeof(stackNode));
    new->next = s->top;
    new->tk = tk;
    s->top = new;
}

token* pop(tokenStack*s) {
    if (s->length==0) return NULL;
    s->length--;
    stackNode*sN = s->top;
    s->top = s->top->next;
    token*r = sN->tk;
    free(sN);
    return r;
}

token*check(tokenStack*s) {
    return s->top->tk;
}

token**getTop(tokenStack*s, int n) {
    token**r = malloc(n*sizeof(token*));
    stackNode*start = s->top;
    for (int i=0;n>i;i++) {
        r[i] = start->tk;
        start = start->next;
    }
    return r;
}




